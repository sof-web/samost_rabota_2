# Создание словаря (хэш-таблицы)
student = {"name": "Alice", "age": 20, "grade": "A"}

# Добавление элемента
student["city"] = "Moscow"

# Получение значения
print(student["name"])  # Alice

# Проверка наличия ключа
if "age" in student:
    print(student["age"])  # 20

# Итерация по элементам
for key, value in student.items():
    print(f"{key}: {value}")
