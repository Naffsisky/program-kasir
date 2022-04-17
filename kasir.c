#include<stdio.h>
#include<string.h>

char account [30]; 
char pw [30];
int produk [10];
int bayar, total, jumlah;

void lanjutan(){ 
    printf("\nHai %s Selamat Datang!\n",account);
    printf("Masukan kode produk : ");
    scanf("%d",&*produk);
    switch (*produk)
    {
        case 1:
            printf("\nAnda membeli produk Minyak Goreng \n");
            printf("Dengan harga Rp. 30.000 \n");
            total = 30000;
            break;
        case 2:
            printf("\nAnda membeli produk Garam \n");
            printf("Dengan harga Rp. 3.000 \n");
            total = 3000;
            break;
        case 3:
            printf("\nAnda membeli produk Kecap \n");
            printf("Dengan harga Rp. 5.000 \n");
            total = 5000;
            break;
        case 4:
            printf("\nAnda membeli produk Masaco \n");
            printf("Dengan harga Rp. 500 \n");
            total = 500;
            break;
        case 5:
            printf("\nAnda membeli produk : Royco \n");
            printf("Dengan harga Rp. 1.000 \n");
            total = 1000;   
            break;
        default:
            printf("\nMaaf produk tidak tersedia \n");
            lanjutan();
            break;
    }
}

void pembayaran(){ 
    printf("Masukan jumlah pembayaran : ");
    scanf("%d",&bayar);
    if (bayar >= total){
        jumlah = (bayar - total);
        printf("Kembalian anda : %d \n",jumlah);
    }
    else{
        printf("Uang anda kurang! \n \n");
        pembayaran();
    }
}

void transaksi(){ 
    printf("\n###\n");
    printf("Transaction Receipt \n");
    printf("Harga barang : %d \n", total);
    printf("Uang anda : %d \n", bayar);
    printf("Kembalian : %d", jumlah);
    printf("\n###\n");
}

int main(){
    printf("Selamat Datang! \n \n");
    printf("Masukan user account : ");
    scanf("%s",&*account);
    printf("Masukan password : ");
    scanf("%s",&*pw);

    if(strcmp(account,"admin")==0 && strcmp(pw,"admin")==0){  // Username dan Password
        printf("\nLogin Berhasil! \n");
        lanjutan();
    }
    else{
        printf("\nLogin Gagal! \n");
        return 0;
    }
    total = total;
    pembayaran();
    transaksi();
    return 0;
}
