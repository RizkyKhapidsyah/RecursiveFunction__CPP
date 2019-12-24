# RecursiveFunction__CPP
Bahan Ajar Fundamental Pemrograman C++. Pengenalan Fungsi Rekursif Pada Pemrograman C++.<br><br>
<img src="https://github.com/RizkyKhapidsyah/RecursiveFunction__CPP/blob/master/Result/001.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/RecursiveFunction__CPP/blob/master/Result/002.PNG"><br><br>
Salah satu konsep paling dasar dalam ilmu komputer dan pemrograman adalah pengunaan fungsi sebagai abstraksi untuk kode-kode yang digunakan berulang kali. Kedekatan ilmu komputer dengan matematika juga menyebabkan konsep-konsep fungsi pada matematika seringkali dijumpai. Salah satu konsep fungsi pada matematika yang ditemui pada ilmu komputer adalah fungsi rekursif: sebuah fungsi yang memanggil dirinya sendiri.<br>
Fungsi rekursif memiliki dua ciri khas:
<br>
1. Fungsi rekursif selalu memiliki kondisi yang menyatakan kapan fungsi tersebut berhenti. Kondisi ini harus dapat dibuktikan akan tercapai, karena jika tidak tercapai maka kita tidak dapat membuktikan bahwa fungsi akan berhenti, yang berarti algoritma kita tidak benar.
2. Fungsi rekursif selalu memanggil dirinya sendiri sambil mengurangi atau memecahkan data masukan setiap panggilannya. Hal ini penting diingat, karena tujuan utama dari rekursif ialah memecahkan masalah dengan mengurangi masalah tersebut menjadi masalah-masalah kecil.<br>

Setiap fungsi rekursif yang ada harus memenuhi kedua persyaratan di atas untuk memastikan fungsi rekursif dapat berhenti dan memberikan hasil. Kebenaran dari nilai yang dihasilkan tentu saja memerlukan pembuktian dengan cara tersendiri. Tetapi sebelum masuk ke analisa dan pembuktian fungsi rekursif, mari kita lihat kegunaan dan contoh-contoh fungsi rekursif lainnya lagi.<br>

# Analisis Algoritma Rekursif<br>
Melakukan analisis untuk algoritma rekursif pada dasarnya sama dengan melakukan analisis terhadap algoritma imparatif lain. Perbedaan utama pada algoritma rekursif ialah kita tidak dapat secara langsung melihat berapa kali bagian rekursif dari algoritma akan dijalankan. Pada algoritma yang menggunakan perulangan for misalnya, kita dapat langsung menghitung jumlah perulangan untuk menghitung total langkah yang dibutuhkan. Dalam algoritma rekursif, jumlah perulangan tidak secara eksplisit bisa didapatkan karena informasi yang kita miliki adalah kapan algoritma berhenti, bukan berapa kali kode dieksekusi.<br>
Intinya, fungsi rekursif merupakan fungsi yang memanggil dirinya sendiri. Terdapat dua komponen penting dalam fungsi rekursif, yaitu kondisi kapan berhentinya fungsi dan pengurangan atau pembagian data ketika fungsi memanggil dirinya sendiri. Optimasi fungsi rekursif dapat dilakukan dengan menggunakan teknik tail call, meskipun teknik ini tidak selalu diimplementasikan oleh semua bahasa pemrograman.<br><br>
Lihat <a href="https://github.com/RizkyKhapidsyah/RecursiveFunction__CPP/blob/master/Source.cpp">Source Code</a><br><br>
Referensi: <a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a>
