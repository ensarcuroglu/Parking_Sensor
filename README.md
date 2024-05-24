# Parking_Sensor

Malzemeler
•	Arduino Uno
•	Breadboard
•	Buzzer
•	Ultrasonik Sensör(HC-SR04)
•	4 Adet Direnç
•	3 Adet Led (kırmızı,yeşil,sarı)
•	10 Adet Kablo
•	USB Bağlantı Kablosu

# Projenin Amacı
Bu proje, ultrasonik sensör kullanarak mesafeyi ölçer ve bu mesafeye göre LED'leri yakarak ve bir buzzer ile ses çıkararak kullanıcıya görsel ve işitsel uyarı sağlar.

# Kodun Çalışma Mantığı
•	setup() fonksiyonu, pin modlarını ayarlar: Trig pinini çıkış, Echo pinini giriş, buzzer ve LED pinlerini çıkış olarak belirler.
•	loop() fonksiyonu, sürekli olarak mesafe ölçümü yapar ve bu mesafeye göre buzzer ve LED'leri kontrol eder.
•	mesafe() fonksiyonu, ultrasonik sensör ile mesafe ölçümü yapar ve ölçülen mesafeyi döndürür.
•	melodi() fonksiyonu, buzzer'ı belirli bir frekansta çaldırır ve ardından durdurur.
•	Mesafe ölçüm sonucuna göre:
    o	Mesafe 10 cm'den küçükse kırmızı LED yanar.
    o	Mesafe 10-20 cm arasındaysa sarı LED yanar.
    o	Mesafe 20-30 cm arasındaysa yeşil LED yanar.
    o	Mesafe belirtilen aralıklarda değilse tüm LED'ler söner.

