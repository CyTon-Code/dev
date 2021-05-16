import os

cmd = "./main"  # имя программы - команда
args = ["/home/cyton_code/Документы/apps/check_file/text.txt", "text.txt"]  # аргументы для вывода

command = " ".join([cmd] + args)  # команда строка

os.system(command)  # run
