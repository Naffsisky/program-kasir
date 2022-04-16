#include<stdio.h>
#include<string.h>
char account [30]; 
char pw [30];
int produk [10];

// lanjutin void pembayaran sama bukti transaksi
// pembayaran pake menu kalo uangnya lebih berarti kembalian
// bukti transaksinya terserah mau kaya gimana

// note : scan variable harus pake &*variable

void lanjutan(){ // ini harga produk
    printf("\nHai %s \n",account);
    printf("Masukan kode produk : ");
    scanf("%d", &*produk);
    switch (*produk)
    {
        case 1:
            printf("\nAnda membeli produk Minyak Goreng \n");
            printf("Dengan harga Rp. 30.000 \n");
            break;
        case 2:
            printf("\nAnda membeli produk Garam \n");
            printf("Dengan harga Rp. 3.000 \n");
            break;
        case 3:
            printf("\nAnda membeli produk Kecap 3 \n");
            printf("Dengan harga Rp. 5.000 \n");
            break;
        case 4:
            printf("\nAnda membeli produk Masaco \n");
            printf("Dengan harga Rp. 500 \n");
            break;
        case 5:
            printf("\nAnda membeli produk : Royco \n");
            printf("Dengan harga Rp. 1.000 \n");
            break;
        default:
            printf("\nMaaf produk tidak tersedia \n");
            break;
    }
}

void pembayaran(){ // disini pembayaran
    printf("Masukan jumlah pembayaran : ");

}

void transaksi(){ // disini bukti transaksi

}

int main(){
    printf("Selamat Datang! \n \n");
    printf("Masukan user account : ");
    scanf("%s",&*account);
    printf("Masukan password : ");
    scanf("%s",&*pw);

    if(strcmp(account,"admin")==0 && strcmp(pw,"admin")==0){
        printf("\nLogin Berhasil! \n");
        lanjutan();
    }
    else{
        printf("\nLogin Gagal! \n");
    }

    pembayaran();
    transaksi();
    return 0;
}
