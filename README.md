# Struktur Data

## Pendahuluan
Struktur data adalah cara penyimpanan dan pengorganisasian data dalam komputer sehingga data tersebut dapat digunakan secara efisien. Dalam pengembangan perangkat lunak, pemahaman tentang struktur data sangat penting untuk menyelesaikan berbagai masalah secara optimal.

## Sejarah Singkat
Struktur data telah menjadi bagian penting dari ilmu komputer sejak awal perkembangannya. Konsep ini mulai berkembang pada tahun 1950-an dengan munculnya bahasa pemrograman awal seperti Fortran dan Lisp. Seiring waktu, berbagai jenis struktur data seperti array, linked list, stack, queue, tree, dan graph diperkenalkan untuk memenuhi kebutuhan yang berbeda dalam pengolahan data.

## Tujuan
Dokumen ini bertujuan untuk memberikan penjelasan mendalam tentang berbagai jenis struktur data, penggunaannya, serta implementasinya dalam bahasa pemrograman seperti C++.

## Jenis-Jenis Struktur Data
1. **Array**: Struktur data yang menyimpan elemen dalam urutan linear dengan ukuran tetap.
2. **Linked List**: Koleksi elemen yang disebut node, di mana setiap node menunjuk ke node berikutnya.
3. **Stack**: Struktur data LIFO (Last In, First Out).
4. **Queue**: Struktur data FIFO (First In, First Out).
5. **Tree**: Struktur hierarkis dengan node yang memiliki hubungan parent-child.
6. **Graph**: Kumpulan node yang saling terhubung melalui edge.

## Implementasi dalam C++
Berikut adalah contoh sederhana implementasi struktur data stack dalam C++:

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
```

## Kesimpulan
Pemahaman tentang struktur data sangat penting untuk meningkatkan efisiensi dan performa program. Dengan mempelajari berbagai jenis struktur data, pengembang dapat memilih solusi terbaik untuk setiap masalah yang dihadapi.

## Referensi
- Buku "Introduction to Algorithms" oleh Cormen, Leiserson, Rivest, dan Stein.
- Dokumentasi resmi C++: [cplusplus.com](http://www.cplusplus.com)
- Artikel dan tutorial online tentang struktur data.
