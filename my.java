import java.util.HashMap;

public class SimpleHashTable {
    public static void main(String[] args) {
        // Создание хеш-таблицы
        HashMap<String, String> student = new HashMap<>();
        
        // Добавление элементов
        student.put("name", "Alice");
        student.put("age", "20");
        student.put("grade", "A");
        
        // Получение значений
        System.out.println(student.get("name"));  // Alice
        
        // Проверка наличия ключа
        if (student.containsKey("age")) {
            System.out.println("Возраст есть");
        }
        
        // Удаление
        student.remove("grade");
        
        // Перебор всех элементов
        for (String key : student.keySet()) {
            System.out.println(key + ": " + student.get(key));
        }
    }
}
