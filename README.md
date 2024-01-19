# Dota2Cheat 7.35b: теперь с декодированием VPK! 

![v4 image](https://github.com/ExistedGit/Dota2Cheat/assets/66470490/88dbfa94-0ba3-4d53-b355-8cb18de98d71)

В Dota было не так много читов с открытым исходным кодом. И я решил это исправить. Написано на C++20 с любовью.

Некоторые части SDK были полностью или частично взяты из [McDota](https://github.com/LWSS/McDota) от LWSS, которой вдохновлена D2C.

Для интерфейса используется [ImGui](https://github.com/ocornut/imgui) с DirectX 11

также использую [Minhook](https://github.com/TsudaKageyu/minhook) для батутов

также использую [Protocol Buffers](https://github.com/protocolbuffers/protobuf) от Google для обработки сетевых сообщений.

Выпьем за их замечательных создателей!

# Особенности
Чтобы открыть чит-меню, нажмите Insert

ВНИМАНИЕ! Перед вами легальные функции, никаких скриптов, которые играют в игру за вас!

* Автоматизация:
  * Автоприем:
    * Настраиваемая задержка
  * AutoHeal с настраиваемыми порогами здоровья
  * AutoMidas с настраиваемой минимальной наградой XP
  * Bounty rune & Aegis snatcher
  * CastRedirection™ (всегда кастуется на реального героя)
  * Злоупотребление маной и HP
  * AutoDodge для снарядов
  * ~~Покупка Тома Знаний~~ Умер 21.04.2023. Прощай, милый принц.
  
* Информация:
  * Maphack:
    * Teleport Tracker - рисует вражеские ТП на карте.
    * Particle MapHack - показывает частицы в FoW и определяет их источник()
  * AbilityESP™ (способности и предметы)
  * Бары:
    * Манабары
    * Количество HP, отображаемое на панели здоровья
  * Индикаторы
    * Индикатор скорости - показывает, быстрее или медленнее вы врага.
    * Индикатор убийств - показывает, можете ли вы убить врага нюком (если он есть у вашего героя). Если нет, показывает, насколько больше здоровья осталось до порога.
  * Нарисовать круги заданного радиуса вокруг героя (например, чтобы увидеть дальность получения XP)
  * Показывает точечные заклинания (Sunstrike, Torrent, Light Strike Array)
  * Modifier Revealer:
    * Показывает заклинания с целевым действием (Assassinate, Charge of Darkness)
    * Показывает Сферу Линкена на всех.
    * Показывает True Sight на союзниках и подопечных
  * Настраиваемая раскраска вражеских иллюзий
  * Показывает траектории вражеских снарядов, таких как стрела Мираны, и непроекционных способностей, таких как "Мясной крюк
  * ~~Visible by Enemy~~ RIP 21.02.2023, ты не будешь забыт
  
* Конвары:
  * Использование подмены ConVar для борьбы с механизмами обнаружения на стороне сервера 
  * настраиваемое `dota_camera_distance` с правильным `r_farz` и `fog_enable` (без обрезания или синего тумана)
  * ~~`dota_use_particle_fow`~~ RIP тоже

* Утилиты:
  * Perfect Blink
  * BadCastPrevention™ (предотвращает плохие BHs, RPs и хроносферы)

* Changer:
  * Изменение погоды (пепел, весна и т.д.)
  * Рисование реки
  * Разблокировка смайликов
  * Dota Plus Unlocker
  * TreeChanger™
  * Позволяет играть с модами VPK
  
* Работа в процессе:
  * Roshan timer

## Сборка
Для работы необходимо установить библиотеку protobuf. Установите [vcpkg](https://vcpkg.io/en/getting-started.html). Перейдите в папку с файлом vcpkg.exe. Откройте консоль в папке и введите следующую команду:

`.\vcpkg.exe install protobuf:x64-windows-static`.

Это приведет к установке более тяжелой статической версии библиотеки. 

Как только процесс завершится, перейдите в папку `installed/x64-windows-static`. Скопируйте файлы libprotobuf.lib и libprotobuf-lite.lib из /lib в Dota2Cheat/lib. Вы также можете скопировать либы с суффиксом `d` из debug/lib, если хотите компилировать в Debug.

Вам также необходимо установить [June 2010 DirectX SDK](https://www.microsoft.com/en-us/download/details.aspx?id=6812).

Откройте проект в Visual Studio и соберите Dota2Cheat как **Release x64**.

## Инжектирование
Этот чит можно безопасно инжектировать в любой момент игры

Создайте и запустите D2CUpdater, чтобы переместить/обновить все необходимые ресурсы в место назначения в C:\Users\%user%\Documents\Dota2Cheat, затем используйте любой инжектор для выполнения работы.

**Используйте на свой страх и риск** (также не используйте нелегитимные функции, за которые вы можете получить сообщение/флаг)

## Устранение неполадок

Если вы столкнулись с ошибкой и хотите связно сообщить о ней:

### Отладка

Этот метод предназначен для ошибок, которые легко воспроизвести. Вы должны играть либо в демо-режиме, либо в лобби (не на VAC-защищенном сервере!).
Создайте чит и загрузчик в режиме отладки. Запустите dota 2, затем в Visual Studio нажмите Ctrl + Alt + P и выберите dota2.exe.
Теперь, когда вы отлаживаете процесс, внедрите чит и вызовите ошибку. VS покажет вам, где возникает исключение.

### Что делать при появлении ошибки

При возникновении исключения изучите файл и строки, на которых оно произошло. На вкладке Call Stack вы сможете проследить вызов функции (в случае, если место исключения не дает достаточной информации). Сфотографируйте все это, а затем можете создать здесь выпуск с полученными данными.

# Для разработчиков

Загляните в Wiki репозитория, я добавляю туда полезную информацию о специфических для dota читерских штуках.

Также там есть руководство по обновлению.

И я также рассматриваю возможность перевода моих руководств по YouGame на человеческий язык ради сохранения
