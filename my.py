# Использование встроенного словаря
student = {}  # создание хеш-таблицы

# Добавление элементов
student["name"] = "Alice"
student["age"] = 20
student["grade"] = "A"

# Получение значений
print(student["name"])    # Alice
print(student.get("age")) # 20

# Проверка наличия ключа
if "grade" in student:
    print("Есть оценка")

# Удаление
del student["grade"]

# Перебор всех элементов
for key, value in student.items():
    print(f"{key}: {value}")
