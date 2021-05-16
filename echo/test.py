import os

cmd = "./main"  # имя программы - команда
args = ["hello", "asdf", "fooooo", "0-asfsdfsd"]  # аргументы для вывода

command = " ".join([cmd] + args)  # команда строка

os.system(command)  # run
