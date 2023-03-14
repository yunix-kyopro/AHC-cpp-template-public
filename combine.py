import glob


def read_source_file(file_name: str) -> str:
    with open(file_name, "r") as f:
        return f.read()


def extract_content(file_path: str) -> str:
    print(file_path)
    with open(file_path, "r") as f:
        txt = f.read()

    return txt.split("/*start*/")[1].split("#endif")[0]


# main.cppを読み込む
source_file = read_source_file("main.cpp")

# main.cppの'include "modules/*.cpp"'の箇所を抽出して、読み込んでいるcppファイルを検出する
l = glob.glob("modules/*.cpp")
for file_path in l:
    source_file = source_file.replace(f'#include "{file_path}"', extract_content(file_path))

# modules/libフォルダを作りたい場合にはこのような記述を追加すればいい。他のフォルダでも同様
l = glob.glob("modules/lib/*.cpp")
for file_path in l:
    source_file = source_file.replace(f'#include "{file_path}"', extract_content(file_path))


with open("combined.cpp", "w") as f:
    f.write(source_file)
