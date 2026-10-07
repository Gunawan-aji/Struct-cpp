#include <iostream>
#include <string>

using namespace std;

// ======================================================
// STRUCT VIDEOINFO
// ======================================================
// Struct digunakan untuk menggabungkan beberapa data
// yang memiliki tipe berbeda ke dalam satu kesatuan.
//
// Pada struct VideoInfo terdapat 2 anggota:
// 1. video : menyimpan nama file video
// 2. next  : pointer yang menyimpan alamat objek
//            VideoInfo lainnya
// ======================================================

struct VideoInfo
{
    // Variabel string untuk menyimpan nama file video
    string video;

    // Pointer ke objek VideoInfo lainnya
    VideoInfo* next;
};


// ======================================================
// FUNGSI UTAMA
// ======================================================

int main()
{
    // --------------------------------------------------
    // MEMBUAT OBJEK STRUCT
    // --------------------------------------------------
    // Membuat sebuah objek bernama v1
    // berdasarkan struct VideoInfo.
    
    VideoInfo v1;


    // --------------------------------------------------
    // MENGISI DATA VIDEO
    // --------------------------------------------------
    // Mengisi anggota video dengan nama file
    // "tutorial.mp4".
    
    v1.video = "tutorial.mp4";


    // --------------------------------------------------
    // MENGATUR POINTER NEXT
    // --------------------------------------------------
    // Pointer next belum menunjuk ke objek VideoInfo
    // lainnya, sehingga diberikan nilai nullptr.
    
    v1.next = NULL;


    // --------------------------------------------------
    // MENAMPILKAN DATA VIDEO
    // --------------------------------------------------
    cout << "=== DATA VIDEO ===" << endl;

    // Menampilkan nama file video
    cout << "Video : " << v1.video << endl;

    // Menampilkan alamat yang ditunjuk oleh pointer next
    cout << "Next  : " << v1.next << endl;


    // --------------------------------------------------
    // PROGRAM SELESAI
    // --------------------------------------------------
    return 0;
}
