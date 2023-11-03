# LABA-3
Предметная область: Строительная компания

Описание предметной области: Предметная область представляет собой систему частью которой являются Заказчик, Руководитель проекта(стройки), Работник, Ресурсы компании, Объект строительства и Отчет о завершенности проекта.

Анализ сущностей:

Заказчик(Customer).Он имеет следующие поля данных: Юридический индентификатор(jr_id:string), Спецификация заказа(specific:string). Методы для "Заказчика": Заказ на строительство(Specific:string), Проверка отчета(report:Report).

Руководитель проекта(стройки)(Director). Он имеет следующие поля данных :ФИО(Full_Name:string), Список работников(list_of_workers:vector), Список заказчиков(list_of_customers:vector), Методы для "Руководитель проекта": Наем работника(worker:Worker), Увольнение работника(worker:Worker,report:Report), Получение проекта(customer:Customer), Написание отчета().

Работник(Worker). Он имеет следующие поля данных: ФИО(Full_Name:string), Тип специализации(type_spec:int), График работы(shedule:String) Методы для "Работник": Получение спецификации работы(type_spec:int,director:Director), Работа на объекте(), Написание отчета(object:Object).

Ресурсы компании(Sourse). Они имеет следующие поля данных: Износ(в процентах)(Wear:int), Тип ресурса(Type:int)  Методы для "Ресурсы компании": Закупка ресурсов().

Объект строительства(Object). Он имеет следующие поля данных: Тип стройки(Type:string), Стадия завершенности(в процентах) (Stage:int).  Методы для "Объект строительства": Сдача проекта(Stage:string,Report:Report).

Отчет о завершенности проекта(Report). Он имеет следующие поля данных: Данные от заказчика(data_from_customer:string), Данные от руководителя(data_from_director:string), Данные от работников(data_from_workers:vector of string).   Методы для "Отчет": 
Генерация отчета(data_from_customer:string, data_from_director:string, data_from_workers:vector of string)
