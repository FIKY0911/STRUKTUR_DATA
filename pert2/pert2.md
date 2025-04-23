## TIPE DATA


>>Tipe data dalam C++ digunakan untuk mendeklarasikan variabel atau fungsi dengan menentukan jenis data yang dapat disimpan atau dikembalikan. 

>>Berikut adalah beberapa tipe data utama dalam C++:
1. **Tipe Data Dasar (Primitive Types)**
   >>Tipe data primitif adalah  tipe data yang dibangun ke dalam bahasa pemrograman, atau yang dapat dikarakterisasi sebagai struktur dasar untuk membangun tipe data yang lebih canggih. data primitif biasanya digunakan untuk menyimpan nilai yang sederhana dan tidak kompleks seperti bilangan bulat, bilangan pecahan, karakter, dan nilai boolean.
    - `int`: Digunakan untuk menyimpan bilangan bulat.
      - Contoh: `int angka = 10;`
    - `float`: Digunakan untuk menyimpan bilangan desimal dengan presisi tunggal.
      - Contoh: `float pi = 3.14;`
    - `double`: Digunakan untuk menyimpan bilangan desimal dengan presisi ganda.
      - Contoh: `double phi = 3.14159;`
    - `char`: Digunakan untuk menyimpan satu karakter.
      - Contoh: `char huruf = 'A';`
    - `bool`: Digunakan untuk menyimpan nilai logika `true` atau `false`.
      - Contoh: `bool isActive = true;`

2. **Tipe Data Non-Primitive (Non-Primitive Types)**
  >>Tipe data non-primitif dalam C++ adalah tipe data yang lebih kompleks dibandingkan tipe data primitif. Tipe data ini tidak langsung disediakan oleh bahasa pemrograman sebagai tipe dasar, melainkan dibangun dari tipe data primitif atau didefinisikan oleh pengguna. 
- `string`: Digunakan untuk menyimpan kumpulan karakter atau teks.
    - Contoh: `string nama = "John";`
- `array`: Digunakan untuk menyimpan sekumpulan elemen dengan tipe data yang sama.
    - Contoh: `int angka[5] = {1, 2, 3, 4, 5};`
- `struct`: Digunakan untuk mendefinisikan tipe data kustom yang dapat mengelompokkan beberapa variabel.
    - Contoh:
        ```cpp
        struct Mahasiswa {
            string nama;
            int umur;
        };
        Mahasiswa mhs = {"Alice", 20};
        ```
- `class`: Digunakan untuk mendefinisikan objek dengan properti dan metode.
    - Contoh:
        ```cpp
        class Mobil {
        public:
            string merk;
            void jalan() {
                cout << "Mobil berjalan" << endl;
            }
        };
        Mobil m;
        m.merk = "Toyota";
        m.jalan();
        ```
- `pointer`: Digunakan untuk menyimpan alamat memori dari variabel lain.
    - Contoh:
        ```cpp
        int a = 10;
        int* ptr = &a;
        ```
- `enum`: Digunakan untuk mendefinisikan sekumpulan nilai konstan.
    - Contoh:
        ```cpp
        enum Hari {Senin, Selasa, Rabu};
        Hari hariIni = Senin;
        ```
- `vector`: Digunakan untuk menyimpan elemen dinamis yang dapat bertambah atau berkurang ukurannya.
    - Contoh:
        ```cpp
        #include <vector>
        vector<int> angka = {1, 2, 3};
        angka.push_back(4);
        ```
- `map`: Digunakan untuk menyimpan pasangan kunci-nilai.
    - Contoh:
        ```cpp
        #include <map>
        map<string, int> nilai;
        nilai["Alice"] = 90;
        nilai["Bob"] = 85;
        ```
- `queue`: Digunakan untuk struktur data antrian (FIFO).
    - Contoh:
        ```cpp
        #include <queue>
        queue<int> antrian;
        antrian.push(1);
        antrian.push(2);
        antrian.pop();
        ```
- `stack`: Digunakan untuk struktur data tumpukan (LIFO).
    - Contoh:
        ```cpp
        #include <stack>
        stack<int> tumpukan;
        tumpukan.push(1);
        tumpukan.push(2);
        tumpukan.pop();
        ```
