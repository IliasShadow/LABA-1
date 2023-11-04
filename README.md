# LABA-3
Предметная область: Строительная компания

Описание предметной области: Предметная область представляет собой систему частью которой являются Заказчик, Руководитель проекта(стройки), Работник, Ресурсы компании, Объект строительства и Отчет о завершенности проекта.

Анализ сущностей:

Заказчик(Customer).Он имеет следующие поля данных: Юридический индентификатор(jr_id:string), Спецификация заказа(specific:string), Сданность обьекта (Result:bool). Методы для "Заказчика": Заказ на строительство Order(Specific:string,report:Report).

Руководитель проекта(стройки)(Director). Он имеет следующие поля данных: ФИО(Full_Name:string), Список работников(list_of_workers:vector), Список заказчиков(list_of_customers:vector), Спецификация работ(Spec_of_Work:string) Методы для "Руководитель проекта": Наем работника AddWorker(worker:Worker,list_of_workers:vector), Увольнение работника RemoveWorker(worker:Worker,report:Report,list_of_workers:vector), Получение проекта GetOrder(customer:Customer,report:Report), Написание отчета WriteReport(report:Report).

Работник(Worker). Он имеет данные поля данных: ФИО(Full_Name:string), Тип специализации(type_spec:int), График работы(shedule:String) Методы для "Работник": Получение спецификации работы GetSpec(type_spec:int,director:Director), Работа на объекте Work(sourse:Sourse,object:Object), Написание отчета WriteReport(object:Object,report:Report).

Ресурсы компании(Sourse). Они имеет следующие поля данных: Износ(в процентах)(Wear:int), Тип ресурса(Type:int)  Методы для "Ресурсы компании": Закупка ресурсов BuyResourse(sourse:Sourse).

Объект строительства(Object). Он имеет следующие поля данных: Тип стройки(Type:string), Стадия завершенности(в процентах) (Stage:int).  Методы для "Объект строительства": Сдача проекта TakeAwayOrder(Stage:string,Report:Report,customer:Customer).

Отчет о завершенности проекта(Report). Он имеет следующие поля данных: Данные от заказчика(data_from_customer:string), Данные от руководителя(data_from_director:string), Данные от работников(data_from_workers:vector of string), Сам отчет(FullReport:String).   Методы для "Отчет": 
Генерация отчета GenerateReport(data_from_customer:string, data_from_director:string, data_from_workers:vector of string,FullReport:string)

