/*
    Author : Yash Vasani
    Title : Digital Restaurants Menu

*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int choice,choice1;

//--------------variable to store Total Bill--------------

  int Total_Bill=0;

//--------------variables to store Quantity--------------

  int qua_POPCORN,qua_APPLE,qua_WATERMELON,qua_MANGOES;

int qua_SAMOSA_CHAAT,qua_PAPDI_CHAAT,qua_MATHURA_CHAAT,qua_ALOO_CHAAT;

int qua_MARGHERITA,qua_DOUBLE_CHEESE,qua_CHEESE_N_CORN,qua_FRESH_VEGGIE;

int qua_TOMATO,qua_SWEET_CORN,qua_HOT_N_SOUR,qua_MANCHOW;

int qua_TOMATO_SALAD,qua_WATERMELON_SALAD,qua_MIX_SALAD,qua_CARROT_SALAD;

int qua_PLAIN_CURD,qua_ZEERA_CURD,qua_MIX_VEG_CURD,qua_SWEET_CURD;

int qua_PURI,qua_HALWA,qua_BHAJI,qua_SOUP;

int qua_COLA,qua_7UP,qua_SPRITE,qua_PEPSI;

int qua_CHOCOLATE,qua_KAMAL_BHOG,qua_RASBHARI,qua_KAJU_KARI;

int qua_BHAVNAGARI_GATHIYA,qua_VANELA_GATHIYA,qua_DHOKDA,qua_JALEBI;

int qua_MIX_VEG,qua_Paneer_Capsicum,qua_Palak_Paneer,qua_KAJU_CORN;

int qua_ALOO,qua_SEV_TAMETA,qua_BHINDA,qua_UNDHIYU;

int qua_APPLE_FRUIT,qua_MANGO,qua_BANANA,qua_CHERRY;

int qua_DOSA,qua_IDLI,qua_VADA,qua_UTTAPPAM;

int qua_MANCHURIAN,qua_NOODLES,qua_SCHEZWAN_RICE,qua_SCHEZWAN_NOODLES;

int qua_ZEERA_RICE,qua_PLAIN_RICE,qua_PULAO,qua_FRIED_RICE;

int qua_DAL_FRY,qua_PLAIN_DAL,qua_GARLIC_DAL,qua_MUNG_DAL;

int qua_PLAIN_NAAN,qua_BUTTER_NAAN,qua_GARLIC_NAAN,qua_CHEESE_NAAN;

int qua_PLAIN_ROTI,qua_BUTTER_ROTI,qua_TAVA_ROTI,qua_ALOO_ROTI;

int qua_FULL_THALI,qua_HALF_THALI,qua_HALF_THALI_ROTI_EXTRA,qua_FULL_THALI_WITHOUT_RICE;

int qua_MIXEX_ROLLS,qua_VAGETABLE_ROLLS,qua_CHINESE_ROLLS,qua_CHEESE_ROLLS;

int qua_PLAIN_PAPAD,qua_ZEERA_PAPAD,qua_RICE_PAPAD,qua_MASALA_PAPAD;

int qua_PANI_PURI,qua_SEV_PURI,qua_MASALA_PURI,qua_PLAIN_PURI;

int qua_BOONDI_RAITA,qua_ALOO_RAITA,qua_VAGETABLE_RAITA,qua_PLAIN_RAITA;

int qua_CHOCOLATE_ICE_CREAM,qua_VANILLA,qua_ORANGE_ICE_CREAM,qua_RAJBHOG;



//--------------variables to store Total Price From Quantity--------------

int total_POPCORN,total_APPLE,total_WATERMELON,total_MANGOES;

int total_SAMOSA_CHAAT,total_PAPDI_CHAAT,total_MATHURA_CHAAT,total_ALOO_CHAAT;

int total_MARGHERITA,total_DOUBLE_CHEESE,total_CHEESE_N_CORN,total_FRESH_VEGGIE;

int total_TOMATO,total_SWEET_CORN,total_HOT_N_SOUR,total_MANCHOW;

int total_TOMATO_SALAD,total_WATERMELON_SALAD,total_MIX_SALAD,total_CARROT_SALAD;

int total_PLAIN_CURD,total_ZEERA_CURD,total_MIX_VEG_CURD,total_SWEET_CURD;

int total_PURI,total_HALWA,total_BHAJI,total_SOUP;

int total_COLA,total_7UP,total_SPRITE,total_PEPSI;

int total_CHOCOLATE,total_KAMAL_BHOG,total_RASBHARI,total_KAJU_KARI;

int total_BHAVNAGARI_GATHIYA,total_VANELA_GATHIYA,total_DHOKDA,total_JALEBI;

int total_MIX_VEG,total_Paneer_Capsicum,total_Palak_Paneer,total_KAJU_CORN;

int total_ALOO,total_SEV_TAMETA,total_BHINDA,total_UNDHIYU;

int total_APPLE_FRUIT,total_MANGO,total_BANANA,total_CHERRY;

int total_DOSA,total_IDLI,total_VADA,total_UTTAPPAM;

int total_MANCHURIAN,total_NOODLES,total_SCHEZWAN_RICE,total_SCHEZWAN_NOODLES;

int total_ZEERA_RICE,total_PLAIN_RICE,total_PULAO,total_FRIED_RICE;

int total_DAL_FRY,total_PLAIN_DAL,total_GARLIC_DAL,total_MUNG_DAL;

int total_PLAIN_NAAN,total_BUTTER_NAAN,total_GARLIC_NAAN,total_CHEESE_NAAN;

int total_PLAIN_ROTI,total_BUTTER_ROTI,total_TAVA_ROTI,total_ALOO_ROTI;

int total_FULL_THALI,total_HALF_THALI,total_HALF_THALI_ROTI_EXTRA,total_FULL_THALI_WITHOUT_RICE;

int total_MIXEX_ROLLS,total_VAGETABLE_ROLLS,total_CHINESE_ROLLS,total_CHEESE_ROLLS;

int total_PLAIN_PAPAD,total_ZEERA_PAPAD,total_RICE_PAPAD,total_MASALA_PAPAD;

int total_PANI_PURI,total_SEV_PURI,total_MASALA_PURI,total_PLAIN_PURI;

int total_BOONDI_RAITA,total_ALOO_RAITA,total_VAGETABLE_RAITA,total_PLAIN_RAITA;

int total_CHOCOLATE_ICE_CREAM,total_VANILLA,total_ORANGE_ICE_CREAM,total_RAJBHOG;


  printf("\n\t\tWelcome to Royal");
  printf("\n\nHere is your menu sir !");

start:

  printf("\n\n 1 - Snacks");
  printf("\n 2 - Chat");
  printf("\n 3 - Pizza");
  printf("\n 4 - Soup");
  printf("\n 5 - Salad");
  printf("\n 6 - Curd");
  printf("\n 7 - Starter");
  printf("\n 8 - Cold drinks");
  printf("\n 9 - Sweets");
  printf("\n10 - Farsan or salty snacks");
  printf("\n11 - punjabi");
  printf("\n12 - Gujarati");
  printf("\n13 - Fruits");
  printf("\n14 - South indian");
  printf("\n15 - chinese");
  printf("\n16 - Rice");
  printf("\n17 - Dal");
  printf("\n18 - Naan");
  printf("\n19 - Roti");
  printf("\n20 - Thali");
  printf("\n21 - Spring Rolls");
  printf("\n22 - Papad");
  printf("\n23 - Puri");
  printf("\n24 - Raita");
  printf("\n25 - Ice cream");
  printf("\n26 - Exit");

  printf("\n\nEnter your choice : ");

  scanf("%d",&choice);

  switch (choice) {
    case 1:printf("\n\tYou have selected Snacks");
           printf("\n\nHere is your sub menu of Snacks");
           printf("\n\t1 - POPCORN____(10)");
           printf("\n\t2 - APPLE____(20)");
           printf("\n\t3 - WATERMELON____(50)");
           printf("\n\t4 - MANGOES____(10)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected POPCORN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_POPCORN);
                 total_POPCORN=10*qua_POPCORN;
                 printf("\nTotal cost of POPCORN is : %d",total_POPCORN);
                 Total_Bill=Total_Bill+total_POPCORN;
            break;

          case 2:printf("\n\tYou have selected APPLE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_APPLE);
                 total_APPLE=20*qua_APPLE;
                 printf("\nTotal cost of APPLE is : %d",total_APPLE);
                 Total_Bill=Total_Bill+total_APPLE;
            break;

          case 3:printf("\n\tYou have selected WATERMELON");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_WATERMELON);
                 total_WATERMELON=50*qua_WATERMELON;
                 printf("\nTotal cost of WATERMELON is : %d",total_WATERMELON);
                 Total_Bill=Total_Bill+total_WATERMELON;
            break;

          case 4:printf("\n\tYou have selected MANGOES");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MANGOES);
                 total_MANGOES=10*qua_MANGOES;
                 printf("\nTotal cost of MANGOES is : %d",total_MANGOES);
                 Total_Bill=Total_Bill+total_MANGOES;
            break;

          }


           break;

    case 2:printf("\n\tYou have selected Chaat");
           printf("\n\nHere is your sub menu of Chaat");
           printf("\n\t1 - SAMOSA_CHAAT____(10)");
           printf("\n\t2 - PAPDI_CHAAT____(10)");
           printf("\n\t3 - MATHURA_CHAAT____(20)");
           printf("\n\t4 - ALOO_CHAAT____(10)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected SAMOSA_CHAAT");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SAMOSA_CHAAT);
                 total_SAMOSA_CHAAT=10*qua_SAMOSA_CHAAT;
                 printf("\nTotal cost of SAMOSA_CHAAT is : %d",total_SAMOSA_CHAAT);
                 Total_Bill=Total_Bill+total_SAMOSA_CHAAT;

            break;

          case 2:printf("\n\tYou have selected PAPDI_CHAAT");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PAPDI_CHAAT);
                 total_PAPDI_CHAAT=10*qua_PAPDI_CHAAT;
                 printf("\nTotal cost of PAPDI_CHAAT is : %d",total_PAPDI_CHAAT);
                 Total_Bill=Total_Bill+total_PAPDI_CHAAT;
            break;

          case 3:printf("\n\tYou have selected MATHURA_CHAAT");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MATHURA_CHAAT);
                 total_MATHURA_CHAAT=20*qua_MATHURA_CHAAT;
                 printf("\nTotal cost of MATHURA_CHAAT is : %d",total_MATHURA_CHAAT);
                 Total_Bill=Total_Bill+total_MATHURA_CHAAT;
            break;

          case 4:printf("\n\tYou have selected ALOO_CHAAT");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ALOO_CHAAT);
                 total_ALOO_CHAAT=10*qua_ALOO_CHAAT;
                 printf("\nTotal cost of ALOO_CHAAT iS : %d",total_ALOO_CHAAT);
                 Total_Bill=Total_Bill+total_ALOO_CHAAT;
            break;

          }


           break;

    case 3:printf("\n\tYou have selected Pizza");
           printf("\n\nHere is your sub menu of Pizza");
           printf("\n\t1 - MARGHERITA____(100)");
           printf("\n\t2 - DOUBLE_CHEESE____(200)");
           printf("\n\t3 - CHEESE_N_CORN____(250)");
           printf("\n\t4 - FRESH_VEGGIE____(150)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected MARGHERITA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MARGHERITA);
                 total_MARGHERITA=100*qua_MARGHERITA;
                 printf("\nTotal cost of MARGHERITA is : %d",total_MARGHERITA);
                 Total_Bill=Total_Bill+total_MARGHERITA;

            break;

          case 2:printf("\n\tYou have selected DOUBLE_CHEESE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_DOUBLE_CHEESE);
                 total_DOUBLE_CHEESE=200*qua_DOUBLE_CHEESE;
                 printf("\nTotal cost of DOUBLE_CHEESE is : %d",total_DOUBLE_CHEESE);
                 Total_Bill=Total_Bill+total_DOUBLE_CHEESE;
            break;

          case 3:printf("\n\tYou have selected CHEESE_N_CORN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHEESE_N_CORN);
                 total_CHEESE_N_CORN=250*qua_CHEESE_N_CORN;
                 printf("\nTotal cost of CHEESE_N_CORN is : %d",total_CHEESE_N_CORN);
                 Total_Bill=Total_Bill+total_CHEESE_N_CORN;
            break;

          case 4:printf("\n\tYou have selected FRESH_VEGGIE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_FRESH_VEGGIE);
                 total_FRESH_VEGGIE=150*qua_FRESH_VEGGIE;
                 printf("\nTotal cost of FRESH_VEGGIE is : %d",total_FRESH_VEGGIE);
                 Total_Bill=Total_Bill+total_FRESH_VEGGIE;
            break;

          }


           break;
    case 4:printf("\n\tYou have selected Soup");
           printf("\n\nHere is your sub menu of Soup");
           printf("\n\t1 - TOMATO____(150)");
           printf("\n\t2 - SWEET_CORN____(150)");
           printf("\n\t3 - HOT_N_SOUR____(200)");
           printf("\n\t4 - MANCHOW____(150)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected TOMATO");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_TOMATO);
                 total_TOMATO=150*qua_TOMATO;
                 printf("\nTotal cost of TOMATO is : %d",total_TOMATO);
                 Total_Bill=Total_Bill+total_TOMATO;

            break;

          case 2:printf("\n\tYou have selected SWEET_CORN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SWEET_CORN);
                 total_SWEET_CORN=150*qua_SWEET_CORN;
                 printf("\nTotal cost of SWEET_CORN is : %d",total_SWEET_CORN);
                 Total_Bill=Total_Bill+total_SWEET_CORN;
            break;

          case 3:printf("\n\tYou have selected HOT_N_SOUR");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_HOT_N_SOUR);
                 total_HOT_N_SOUR=200*qua_HOT_N_SOUR;
                 printf("\nTotal cost of HOT_N_SOUR is : %d",total_HOT_N_SOUR);
                 Total_Bill=Total_Bill+total_HOT_N_SOUR;
            break;

          case 4:printf("\n\tYou have selected MANCHOW");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MANCHOW);
                 total_MANCHOW=150*qua_MANCHOW;
                 printf("\nTotal cost of MANCHOW is : %d",total_MANCHOW);
                 Total_Bill=Total_Bill+total_MANCHOW;
            break;

          }


           break;
    case 5:printf("\n\tYou have selected Salad");
           printf("\n\nHere is your sub menu of Salad");
           printf("\n\t1 - TOMATO_SALAD____(20)");
           printf("\n\t2 - WATERMELON_SALAD____(25)");
           printf("\n\t3 - MIX_SALAD____(30)");
           printf("\n\t4 - CARROT_SALAD____(10)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected TOMATO_SALAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_TOMATO_SALAD);
                 total_TOMATO_SALAD=20*qua_TOMATO_SALAD;
                 printf("\nTotal cost of TOMATO_SALAD is : %d",total_TOMATO_SALAD);
                 Total_Bill=Total_Bill+total_TOMATO_SALAD;

            break;

          case 2:printf("\n\tYou have selected WATERMELON_SALAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_WATERMELON_SALAD);
                 total_WATERMELON_SALAD=25*qua_WATERMELON_SALAD;
                 printf("\nTotal cost of WATERMELON_SALAD is : %d",total_WATERMELON_SALAD);
                 Total_Bill=Total_Bill+total_WATERMELON_SALAD;
            break;

          case 3:printf("\n\tYou have selected MIX_SALAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MIX_SALAD);
                 total_MIX_SALAD=30*qua_MIX_SALAD;
                 printf("\nTotal cost of MIX_SALAD is : %d",total_MIX_SALAD);
                 Total_Bill=Total_Bill+total_MIX_SALAD;
            break;

          case 4:printf("\n\tYou have selected CARROT_SALAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CARROT_SALAD);
                 total_CARROT_SALAD=10*qua_CARROT_SALAD;
                 printf("\nTotal cost of CARROT_SALAD is : %d",total_CARROT_SALAD);
                 Total_Bill=Total_Bill+total_CARROT_SALAD;
            break;

          }


           break;
    case 6:printf("\n\tYou have selected Curd");
           printf("\n\nHere is your sub menu of Curd");
           printf("\n\t1 - PLAIN_CURD____(10)");
           printf("\n\t2 - ZEERA_CURD____(20)");
           printf("\n\t3 - MIX-VEG_CURD____(20)");
           printf("\n\t4 - SWEET_CURD____(15)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PLAIN_CURD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_CURD);
                 total_PLAIN_CURD=10*qua_PLAIN_CURD;
                 printf("\nTotal cost of PLAIN_CURD is : %d",total_PLAIN_CURD);
                 Total_Bill=Total_Bill+total_PLAIN_CURD;

            break;

          case 2:printf("\n\tYou have selected ZEERA_CURD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ZEERA_CURD);
                 total_ZEERA_CURD=20*qua_ZEERA_CURD;
                 printf("\nTotal cost of ZEERA_CURD is : %d",total_ZEERA_CURD);
                 Total_Bill=Total_Bill+total_ZEERA_CURD;
            break;

          case 3:printf("\n\tYou have selected MIX-VEG_CURD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MIX_VEG_CURD);
                 total_MIX_VEG_CURD=20*qua_MIX_VEG_CURD;
                 printf("\nTotal cost of MIX-VEG_CURD is : %d",total_MIX_VEG_CURD);
                 Total_Bill=Total_Bill+total_MIX_VEG_CURD;
            break;

          case 4:printf("\n\tYou have selected SWEET_CURD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SWEET_CURD);
                 total_SWEET_CURD=15*qua_SWEET_CURD;
                 printf("\nTotal cost of SWEET_CURD is : %d",total_SWEET_CURD);
                 Total_Bill=Total_Bill+total_SWEET_CURD;
            break;

          }


           break;
    case 7:printf("\n\tYou have selected Starter");
           printf("\n\nHere is your sub menu of Starter");
           printf("\n\t1 - PURI____(10)");
           printf("\n\t2 - HALWA____(50)");
           printf("\n\t3 - BHAJI____(70)");
           printf("\n\t4 - SOUP____(150)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PURI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PURI);
                 total_PURI=10*qua_PURI;
                 printf("\nTotal cost of PURI is : %d",total_PURI);
                 Total_Bill=Total_Bill+total_PURI;
            break;

          case 2:printf("\n\tYou have selected HALWA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_HALWA);
                 total_HALWA=50*qua_HALWA;
                 printf("\nTotal cost of HALWA is : %d",total_HALWA);
                 Total_Bill=Total_Bill+total_HALWA;
            break;

          case 3:printf("\n\tYou have selected BHAJI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BHAJI);
                 total_BHAJI=70*qua_BHAJI;
                 printf("\nTotal cost of BHAJI is : %d",total_BHAJI);
                 Total_Bill=Total_Bill+total_BHAJI;
            break;

          case 4:printf("\n\tYou have selected SOUP");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SOUP);
                 total_SOUP=150*qua_SOUP;
                 printf("\nTotal cost of SOUP is : %d",total_SOUP);
                 Total_Bill=Total_Bill+total_SOUP;
            break;

          }


           break;
    case 8:printf("\n\tYou have selected Cold Drinks");
           printf("\n\nHere is your sub menu of Drinks");
           printf("\n\t1 - COLA____(20)");
           printf("\n\t2 - 7UP____(20)");
           printf("\n\t3 - SPRITE____(20)");
           printf("\n\t4 - PEPSI____(20)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected COLA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_COLA);
                 total_COLA=20*qua_COLA;
                 printf("\nTotal cost of COLA is : %d",total_COLA);
                 Total_Bill=Total_Bill+total_COLA;
            break;

          case 2:printf("\n\tYou have selected 7UP");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_7UP);
                 total_7UP=20*qua_7UP;
                 printf("\nTotal cost of 7UP is : %d",total_7UP);
                 Total_Bill=Total_Bill+total_7UP;
            break;

          case 3:printf("\n\tYou have selected SPRITE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SPRITE);
                 total_SPRITE=20*qua_SPRITE;
                 printf("\nTotal cost of SPRITE is : %d",total_SPRITE);
                 Total_Bill=Total_Bill+total_SPRITE;
            break;

          case 4:printf("\n\tYou have selected PEPSI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PEPSI);
                 qua_PEPSI=20*qua_PEPSI;
                 printf("\nTotal cost of PEPSI is : %d",qua_PEPSI);
                 Total_Bill=Total_Bill+qua_PEPSI;
            break;

          }


           break;
    case 9:printf("\n\tYou have selected Sweets");
           printf("\n\nHere is your sub menu of Sweets");
           printf("\n\t1 - CHOCOLATE____(50)");
           printf("\n\t2 - KAMAL_BHOG____(50)");
           printf("\n\t3 - RASBHARI____(50)");
           printf("\n\t4 - KAJU_KARI____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected CHOCOLATE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHOCOLATE);
                 total_CHOCOLATE=50*qua_CHOCOLATE;
                 printf("\nTotal cost of CHOCOLATE is : %d",total_CHOCOLATE);
                 Total_Bill=Total_Bill+total_CHOCOLATE;
            break;

          case 2:printf("\n\tYou have selected KAMAL_BHOG");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_KAMAL_BHOG);
                 total_KAMAL_BHOG=50*qua_KAMAL_BHOG;
                 printf("\nTotal cost of KAMAL_BHOG is : %d",total_KAMAL_BHOG);
                 Total_Bill=Total_Bill+total_KAMAL_BHOG;
            break;

          case 3:printf("\n\tYou have selected RASBHARI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_RASBHARI);
                 total_RASBHARI=50*qua_RASBHARI;
                 printf("\nTotal cost of RASBHARI is : %d",total_RASBHARI);
                 Total_Bill=Total_Bill+total_RASBHARI;
            break;

          case 4:printf("\n\tYou have selected KAJU_KARI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_KAJU_KARI);
                 total_KAJU_KARI=50*qua_KAJU_KARI;
                 printf("\nTotal cost of KAJU_KARI is : %d",total_KAJU_KARI);
                 Total_Bill=Total_Bill+total_KAJU_KARI;
            break;

          }


           break;
   case 10:printf("\n\tYou have selected Farsan or salty snacks");
           printf("\n\nHere is your sub menu of Farsan or salty snacks");
           printf("\n\t1 - BHAVNAGARI_GATHIYA____(70)");
           printf("\n\t2 - VANELA_GATHIYA____(70)");
           printf("\n\t3 - DHOKDA____(90)");
           printf("\n\t4 - JALEBI____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected BHAVNAGARI_GATHIYA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BHAVNAGARI_GATHIYA);
                 total_BHAVNAGARI_GATHIYA=70*qua_BHAVNAGARI_GATHIYA;
                 printf("\nTotal cost of BHAVNAGARI_GATHIYA is : %d",total_BHAVNAGARI_GATHIYA);
                Total_Bill=Total_Bill+total_BHAVNAGARI_GATHIYA;
            break;

          case 2:printf("\n\tYou have selected VANELA_GATHIYA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_VANELA_GATHIYA);
                 total_VANELA_GATHIYA=70*qua_VANELA_GATHIYA;
                 printf("\nTotal cost of VANELA_GATHIYA is : %d",total_VANELA_GATHIYA);
                 Total_Bill=Total_Bill+total_VANELA_GATHIYA;
            break;

          case 3:printf("\n\tYou have selected DHOKDA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_DHOKDA);
                 total_DHOKDA=90*qua_DHOKDA;
                 printf("\nTotal cost of DHOKDA is : %d",total_DHOKDA);
                 Total_Bill=Total_Bill+total_DHOKDA;
            break;

          case 4:printf("\n\tYou have selected JALEBI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_JALEBI);
                 total_JALEBI=50*qua_JALEBI;
                 printf("\nTotal cost of JALEBI is : %d",total_JALEBI);
                 Total_Bill=Total_Bill+total_JALEBI;
            break;

          }


           break;
   case 11:printf("\n\tYou have selected Punjabi");
           printf("\n\nHere is your sub menu of Punjabi");
           printf("\n\t1 - MIX_VEG____(200)");
           printf("\n\t2 - Paneer_Capsicum____(200)");
           printf("\n\t3 - Palak_Paneer____(200)");
           printf("\n\t4 - KAJU_CORN____(300)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected MIX_VEG");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MIX_VEG);
                 total_MIX_VEG=200*qua_MIX_VEG;
                 printf("\nTotal cost of MIX_VEG is : %d",total_MIX_VEG);
                 Total_Bill=Total_Bill+total_MIX_VEG;
            break;

          case 2:printf("\n\tYou have selected Paneer_Capsicum");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_Paneer_Capsicum);
                 total_Paneer_Capsicum=200*qua_Paneer_Capsicum;
                 printf("\nTotal cost of Paneer_Capsicum is : %d",total_Paneer_Capsicum);
                 Total_Bill=Total_Bill+total_Paneer_Capsicum;
            break;

          case 3:printf("\n\tYou have selected Palak_Paneer");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_Palak_Paneer);
                 total_Palak_Paneer=200*qua_Palak_Paneer;
                 printf("\nTotal cost of Palak_Paneer is : %d",total_Palak_Paneer);
                 Total_Bill=Total_Bill+total_Palak_Paneer;
            break;

          case 4:printf("\n\tYou have selected KAJU_CORN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_KAJU_CORN);
                 total_KAJU_CORN=300*qua_KAJU_CORN;
                 printf("\nTotal cost of KAJU_CORN is : %d",total_KAJU_CORN);
                 Total_Bill=Total_Bill+total_KAJU_CORN;
            break;

          }


           break;
    case 12:printf("\n\tYou have selected Gujarati");
           printf("\n\nHere is your sub menu of Gujarati");
           printf("\n\t1 - ALOO____(50)");
           printf("\n\t2 - SEV_TAMETA____(50)");
           printf("\n\t3 - BHINDA____(60)");
           printf("\n\t4 - UNDHIYU____(100)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected ALOO");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ALOO);
                 total_ALOO=50*qua_ALOO;
                 printf("\nTotal cost of ALOO is : %d",total_ALOO);
                 Total_Bill=Total_Bill+total_ALOO;

            break;

          case 2:printf("\n\tYou have selected SEV_TAMETA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SEV_TAMETA);
                 total_SEV_TAMETA=50*qua_SEV_TAMETA;
                 printf("\nTotal cost of SEV_TAMETA is : %d",total_SEV_TAMETA);
                 Total_Bill=Total_Bill+total_SEV_TAMETA;
            break;

          case 3:printf("\n\tYou have selected BHINDA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BHINDA);
                 total_BHINDA=60*qua_BHINDA;
                 printf("\nTotal cost of BHINDA is : %d",total_BHINDA);
                 Total_Bill=Total_Bill+total_BHINDA;
            break;

          case 4:printf("\n\tYou have selected UNDHIYU");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_UNDHIYU);
                 total_UNDHIYU=100*qua_UNDHIYU;
                 printf("\nTotal cost of UNDHIYU is : %d",total_UNDHIYU);
                 Total_Bill=Total_Bill+total_UNDHIYU;
            break;

          }


           break;
    case 13:printf("\n\tYou have selected Fruits");
           printf("\n\nHere is your sub menu of Fruits");
           printf("\n\t1 - APPLE_FRUIT____(100)");
           printf("\n\t2 - MANGO____(50)");
           printf("\n\t3 - BANANA____(20)");
           printf("\n\t4 - CHERRY____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected APPLE_FRUIT");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_APPLE_FRUIT);
                 total_APPLE_FRUIT=100*qua_APPLE_FRUIT;
                 printf("\nTotal cost of APPLE_FRUIT is : %d",total_APPLE_FRUIT);
                 Total_Bill=Total_Bill+total_APPLE_FRUIT;
            break;

          case 2:printf("\n\tYou have selected MANGO");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MANGO);
                 total_MANGO=50*qua_MANGO;
                 printf("\nTotal cost of MANGO is : %d",total_MANGO);
                 Total_Bill=Total_Bill+total_MANGO;
            break;

          case 3:printf("\n\tYou have selected BANANA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BANANA);
                 total_BANANA=20*qua_BANANA;
                 printf("\nTotal cost of BANANA is : %d",total_BANANA);
                 Total_Bill=Total_Bill+total_BANANA;
            break;

          case 4:printf("\n\tYou have selected CHERRY");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHERRY);
                 total_CHERRY=50*qua_CHERRY;
                 printf("\nTotal cost of CHERRY is : %d",total_CHERRY);
                 Total_Bill=Total_Bill+total_CHERRY;
            break;

          }


           break;
    case 14:printf("\n\tYou have selected South indian");
           printf("\n\nHere is your sub menu of South indian");
           printf("\n\t1 - DOSA____(100)");
           printf("\n\t2 - IDLI____(90)");
           printf("\n\t3 - VADA____(50)");
           printf("\n\t4 - UTTAPPAM____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected DOSA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_DOSA);
                 total_DOSA=100*qua_DOSA;
                 printf("\nTotal cost of DOSA is : %d",total_DOSA);
                 Total_Bill=Total_Bill+total_DOSA;

            break;

          case 2:printf("\n\tYou have selected IDLI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_IDLI);
                 total_IDLI=90*qua_IDLI;
                 printf("\nTotal cost of IDLI is : %d",total_IDLI);
                 Total_Bill=Total_Bill+total_IDLI;
            break;

          case 3:printf("\n\tYou have selected VADA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_VADA);
                 total_VADA=50*qua_VADA;
                 printf("\nTotal cost of VADA is : %d",total_VADA);
                 Total_Bill=Total_Bill+total_VADA;
            break;

          case 4:printf("\n\tYou have selected UTTAPPAM");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_UTTAPPAM);
                 total_UTTAPPAM=50*qua_UTTAPPAM;
                 printf("\nTotal cost of UTTAPPAM is : %d",total_UTTAPPAM);
                 Total_Bill=Total_Bill+total_UTTAPPAM;
            break;

          }


           break;
    case 15:printf("\n\tYou have selected Chinese");
           printf("\n\nHere is your sub menu of Chinese");
           printf("\n\t1 - MANCHURIAN____(100)");
           printf("\n\t2 - NOODLES____(190)");
           printf("\n\t3 - SCHEZWAN_RICE____(70)");
           printf("\n\t4 - SCHEZWAN_NOODLES____(220)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected MANCHURIAN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MANCHURIAN);
                 total_MANCHURIAN=100*qua_MANCHURIAN;
                 printf("\nTotal cost of MANCHURIAN is : %d",total_MANCHURIAN);
                 Total_Bill=Total_Bill+total_MANCHURIAN;
            break;

          case 2:printf("\n\tYou have selected NOODLES");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_NOODLES);
                 total_NOODLES=190*qua_NOODLES;
                 printf("\nTotal cost of NOODLES is : %d",total_NOODLES);
                 Total_Bill=Total_Bill+total_NOODLES;
            break;

          case 3:printf("\n\tYou have selected SCHEZWAN_RICE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SCHEZWAN_RICE);
                 total_SCHEZWAN_RICE=70*qua_SCHEZWAN_RICE;
                 printf("\nTotal cost of SCHEZWAN_RICE is : %d",total_SCHEZWAN_RICE);
                 Total_Bill=Total_Bill+total_SCHEZWAN_RICE;
            break;

          case 4:printf("\n\tYou have selected SCHEZWAN_NOODLES");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SCHEZWAN_NOODLES);
                 total_SCHEZWAN_NOODLES=220*qua_SCHEZWAN_NOODLES;
                 printf("\nTotal cost of SCHEZWAN_NOODLES is : %d",total_SCHEZWAN_NOODLES);
                 Total_Bill=Total_Bill+total_SCHEZWAN_NOODLES;
            break;

          }


           break;
    case 16:printf("\n\tYou have selected Rice");
           printf("\n\nHere is your sub menu of Rice");
           printf("\n\t1 - ZEERA_RICE____(90)");
           printf("\n\t2 - PLAIN_RICE____(70)");
           printf("\n\t3 - PULAO____(100)");
           printf("\n\t4 - FRIED_RICE____(120)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected ZEERA_RICE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ZEERA_RICE);
                 total_ZEERA_RICE=90*qua_ZEERA_RICE;
                 printf("\nTotal cost of ZEERA_RICE is : %d",total_ZEERA_RICE);
                 Total_Bill=Total_Bill+total_ZEERA_RICE;
            break;

          case 2:printf("\n\tYou have selected PLAIN_RICE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_RICE);
                 total_PLAIN_RICE=70*qua_PLAIN_RICE;
                 printf("\nTotal cost of PLAIN_RICE is : %d",total_PLAIN_RICE);
                 Total_Bill=Total_Bill+total_PLAIN_RICE;
            break;

          case 3:printf("\n\tYou have selected PULAO");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PULAO);
                 total_PULAO=100*qua_PULAO;
                 printf("\nTotal cost of PULAO is : %d",total_PULAO);
                 Total_Bill=Total_Bill+total_PULAO;
            break;

          case 4:printf("\n\tYou have selected FRIED_RICE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_FRIED_RICE);
                 total_FRIED_RICE=120*qua_FRIED_RICE;
                 printf("\nTotal cost of FRIED_RICE is : %d",total_FRIED_RICE);
                 Total_Bill=Total_Bill+total_FRIED_RICE;
            break;

          }


           break;
    case 17:printf("\n\tYou have selected Dal");
           printf("\n\nHere is your sub menu of Dal");
           printf("\n\t1 - DAL_FRY____(70)");
           printf("\n\t2 - PLAIN_DAL____(50)");
           printf("\n\t3 - GARLIC_DAL____(60)");
           printf("\n\t4 - MUNG_DAL____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected DAL_FRY");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_DAL_FRY);
                 total_DAL_FRY=70*qua_DAL_FRY;
                 printf("\nTotal cost of DAL_FRY is : %d",total_DAL_FRY);
                 Total_Bill=Total_Bill+total_DAL_FRY;
            break;

          case 2:printf("\n\tYou have selected PLAIN_DAL");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_DAL);
                 total_PLAIN_DAL=50*qua_PLAIN_DAL;
                 printf("\nTotal cost of PLAIN_DAL is : %d",total_PLAIN_DAL);
                 Total_Bill=Total_Bill+total_PLAIN_DAL;
            break;

          case 3:printf("\n\tYou have selected GARLIC_DAL");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_GARLIC_DAL);
                 total_GARLIC_DAL=60*qua_GARLIC_DAL;
                 printf("\nTotal cost of GARLIC_DAL is : %d",total_GARLIC_DAL);
                 Total_Bill=Total_Bill+total_GARLIC_DAL;
            break;

          case 4:printf("\n\tYou have selected MUNG_DAL");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MUNG_DAL);
                 total_MUNG_DAL=50*qua_MUNG_DAL;
                 printf("\nTotal cost of MUNG_DAL is : %d",total_MUNG_DAL);
                 Total_Bill=Total_Bill+total_MUNG_DAL;
            break;

          }


           break;
    case 18:printf("\n\tYou have selected Naan");
           printf("\n\nHere is your sub menu of Naan");
           printf("\n\t1 - PLAIN_NAAN____(50)");
           printf("\n\t2 - BUTTER_NAAN____(70)");
           printf("\n\t3 - GARLIC_NAAN____(60)");
           printf("\n\t4 - CHEESE_NAAN____(90)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PLAIN_NAAN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_NAAN);
                 total_PLAIN_NAAN=50*qua_PLAIN_NAAN;
                 printf("\nTotal cost of PLAIN_NAAN is : %d",total_PLAIN_NAAN);
                 Total_Bill=Total_Bill+total_PLAIN_NAAN;
            break;

          case 2:printf("\n\tYou have selected BUTTER_NAAN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BUTTER_NAAN);
                 total_BUTTER_NAAN=70*qua_BUTTER_NAAN;
                 printf("\nTotal cost of BUTTER_NAAN is : %d",total_BUTTER_NAAN);
                 Total_Bill=Total_Bill+total_BUTTER_NAAN;
            break;

          case 3:printf("\n\tYou have selected GARLIC_NAAN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_GARLIC_NAAN);
                 total_GARLIC_NAAN=60*qua_GARLIC_NAAN;
                 printf("\nTotal cost of GARLIC_NAAN is : %d",total_GARLIC_NAAN);
                 Total_Bill=Total_Bill+total_GARLIC_NAAN;
            break;

          case 4:printf("\n\tYou have selected CHEESE_NAAN");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHEESE_NAAN);
                 total_CHEESE_NAAN=90*qua_CHEESE_NAAN;
                 printf("\nTotal cost of CHEESE_NAAN is : %d",total_CHEESE_NAAN);
                 Total_Bill=Total_Bill+total_CHEESE_NAAN;
            break;

          }


           break;
    case 19:printf("\n\tYou have selected Roti");
           printf("\n\nHere is your sub menu of Roti");
           printf("\n\t1 - PLAIN_ROTI____(50)");
           printf("\n\t2 - BUTTER_ROTI____(55)");
           printf("\n\t3 - TAVA_ROTI____(30)");
           printf("\n\t4 - ALOO_ROTI____(35)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PLAIN_ROTI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_ROTI);
                 total_PLAIN_ROTI=50*qua_PLAIN_ROTI;
                 printf("\nTotal cost of PLAIN_ROTI is : %d",total_PLAIN_ROTI);
                 Total_Bill=Total_Bill+total_PLAIN_ROTI;
            break;

          case 2:printf("\n\tYou have selected BUTTER_ROTI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BUTTER_ROTI);
                 total_BUTTER_ROTI=55*qua_BUTTER_ROTI;
                 printf("\nTotal cost of BUTTER_ROTI is : %d",total_BUTTER_ROTI);
                 Total_Bill=Total_Bill+total_BUTTER_ROTI;
            break;

          case 3:printf("\n\tYou have selected TAVA_ROTI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_TAVA_ROTI);
                 total_TAVA_ROTI=30*qua_TAVA_ROTI;
                 printf("\nTotal cost of TAVA_ROTI is : %d",total_TAVA_ROTI);
                 Total_Bill=Total_Bill+total_TAVA_ROTI;
            break;

          case 4:printf("\n\tYou have selected ALOO_ROTI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ALOO_ROTI);
                 total_ALOO_ROTI=35*qua_ALOO_ROTI;
                 printf("\nTotal cost of ALOO_ROTI is : %d",total_ALOO_ROTI);
                 Total_Bill=Total_Bill+total_ALOO_ROTI;
            break;

          }


           break;
    case 20:printf("\n\tYou have selected Thali");
           printf("\n\nHere is your sub menu of Thali");
           printf("\n\t1 - FULL_THALI____(120)");
           printf("\n\t2 - HALF_THALI____(60)");
           printf("\n\t3 - HALF_THALI_ROTI_EXTRA____(80)");
           printf("\n\t4 - FULL_THALI_WITHOUT_RICE____(90)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected FULL_THALI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_FULL_THALI);
                 total_FULL_THALI=120*qua_FULL_THALI;
                 printf("\nTotal cost of FULL_THALI is : %d",total_FULL_THALI);
                 Total_Bill=Total_Bill+total_FULL_THALI;
            break;

          case 2:printf("\n\tYou have selected HALF_THALI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_HALF_THALI);
                 total_HALF_THALI=60*qua_HALF_THALI;
                 printf("\nTotal cost of HALF_THALI is : %d",total_HALF_THALI);
                 Total_Bill=Total_Bill+total_HALF_THALI;
            break;

          case 3:printf("\n\tYou have selected HALF_THALI_ROTI_EXTRA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_HALF_THALI_ROTI_EXTRA);
                 total_HALF_THALI_ROTI_EXTRA=80*qua_HALF_THALI_ROTI_EXTRA;
                 printf("\nTotal cost of HALF_THALI_ROTI_EXTRA is : %d",total_HALF_THALI_ROTI_EXTRA);
                 Total_Bill=Total_Bill+total_HALF_THALI_ROTI_EXTRA;
            break;

          case 4:printf("\n\tYou have selected FULL_THALI_WITHOUT_RICE");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_FULL_THALI_WITHOUT_RICE);
                 total_FULL_THALI_WITHOUT_RICE=90*qua_FULL_THALI_WITHOUT_RICE;
                 printf("\nTotal cost of FULL_THALI_WITHOUT_RICE is : %d",total_FULL_THALI_WITHOUT_RICE);
                 Total_Bill=Total_Bill+total_FULL_THALI_WITHOUT_RICE;
            break;

          }


           break;
    case 21:printf("\n\tYou have selected Spring Rolls");
           printf("\n\nHere is your sub menu of Spring Rolls");
           printf("\n\t1 - MIXEX_ROLLS____(50)");
           printf("\n\t2 - VAGETABLE_ROLLS____(50)");
           printf("\n\t3 - CHINESE_ROLLS____(60)");
           printf("\n\t4 - CHEESE_ROLLS____(70)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected MIXEX_ROLLS");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MIXEX_ROLLS);
                 total_MIXEX_ROLLS=50*qua_MIXEX_ROLLS;
                 printf("\nTotal cost of MIXEX_ROLLS is : %d",total_MIXEX_ROLLS);
                 Total_Bill=Total_Bill+total_MIXEX_ROLLS;
            break;

          case 2:printf("\n\tYou have selected VAGETABLE_ROLLS");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_VAGETABLE_ROLLS);
                 total_VAGETABLE_ROLLS=50*qua_VAGETABLE_ROLLS;
                printf("\nTotal cost of VAGETABLE_ROLLS is : %d",total_VAGETABLE_ROLLS);
                Total_Bill=Total_Bill+total_VAGETABLE_ROLLS;
            break;

          case 3:printf("\n\tYou have selected CHINESE_ROLLS");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHINESE_ROLLS);
                 total_CHINESE_ROLLS=60*qua_CHINESE_ROLLS;
                 printf("\nTotal cost of CHINESE_ROLLS is : %d",total_CHINESE_ROLLS);
                 Total_Bill=Total_Bill+total_CHINESE_ROLLS;
            break;

          case 4:printf("\n\tYou have selected CHEESE_ROLLS");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHEESE_ROLLS);
                 total_CHEESE_ROLLS=70*qua_CHEESE_ROLLS;
                 printf("\nTotal cost of CHEESE_ROLLS is : %d",total_CHEESE_ROLLS);
                 Total_Bill=Total_Bill+total_CHEESE_ROLLS;
            break;

          }


           break;
    case 22:printf("\n\tYou have selected Papad");
           printf("\n\nHere is your sub menu of Papad");
           printf("\n\t1 - PLAIN_PAPAD____(20)");
           printf("\n\t2 - ZEERA_PAPAD____(20)");
           printf("\n\t3 - RICE_PAPAD____(25)");
           printf("\n\t4 - MASALA_PAPAD____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PLAIN_PAPAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_PAPAD);
                 total_PLAIN_PAPAD=20*qua_PLAIN_PAPAD;
                 printf("\nTotal cost of PLAIN_PAPAD is : %d",total_PLAIN_PAPAD);
                 Total_Bill=Total_Bill+total_PLAIN_PAPAD;
            break;

          case 2:printf("\n\tYou have selected ZEERA_PAPAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ZEERA_PAPAD);
                 total_ZEERA_PAPAD=20*qua_ZEERA_PAPAD;
                 printf("\nTotal cost of ZEERA_PAPAD is : %d",total_ZEERA_PAPAD);
                 Total_Bill=Total_Bill+total_ZEERA_PAPAD;
            break;

          case 3:printf("\n\tYou have selected RICE_PAPAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_RICE_PAPAD);
                 total_RICE_PAPAD=25*qua_RICE_PAPAD;
                 printf("\nTotal cost of RICE_PAPAD is : %d",total_RICE_PAPAD);
                 Total_Bill=Total_Bill+total_RICE_PAPAD;
            break;

          case 4:printf("\n\tYou have selected MASALA_PAPAD");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MASALA_PAPAD);
                 total_MASALA_PAPAD=50*qua_MASALA_PAPAD;
                 printf("\nTotal cost of MASALA_PAPAD is : %d",total_MASALA_PAPAD);
                 Total_Bill=Total_Bill+total_MASALA_PAPAD;
            break;

          }


           break;
    case 23:printf("\n\tYou have selected Puri");
           printf("\n\nHere is your sub menu of Puri");
           printf("\n\t1 - PANI_PURI____(20)");
           printf("\n\t2 - SEV_PURI____(30)");
           printf("\n\t3 - MASALA_PURI____(50)");
           printf("\n\t4 - PLAIN_PURI____(10)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected PANI_PURI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PANI_PURI);
                 total_PANI_PURI=20*qua_PANI_PURI;
                 printf("\nTotal cost of PANI_PURI is : %d",total_PANI_PURI);
                 Total_Bill=Total_Bill+total_PANI_PURI;

            break;

          case 2:printf("\n\tYou have selected SEV_PURI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_SEV_PURI);
                 total_SEV_PURI=30*qua_SEV_PURI;
                 printf("\nTotal cost of SEV_PURI is : %d",total_SEV_PURI);
                 Total_Bill=Total_Bill+total_SEV_PURI;
            break;

          case 3:printf("\n\tYou have selected MASALA_PURI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_MASALA_PURI);
                 total_MASALA_PURI=50*qua_MASALA_PURI;
                 printf("\nTotal cost of MASALA_PURI is : %d",total_MASALA_PURI);
                 Total_Bill=Total_Bill+total_MASALA_PURI;
            break;

          case 4:printf("\n\tYou have selected PLAIN_PURI");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_PURI);
                 total_PLAIN_PURI=10*qua_PLAIN_PURI;
                 printf("\nTotal cost of PLAIN_PURI is : %d",total_PLAIN_PURI);
                 Total_Bill=Total_Bill+total_PLAIN_PURI;
            break;

          }


           break;
    case 24:printf("\n\tYou have selected Butter Raita");
           printf("\n\nHere is your sub menu of Raita");
           printf("\n\t1 - BOONDI_RAITA____(50)");
           printf("\n\t2 - ALOO_RAITA____(50)");
           printf("\n\t3 - VAGETABLE_RAITA____(50)");
           printf("\n\t4 - PLAIN_RAITA____(50)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected BOONDI_RAITA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_BOONDI_RAITA);
                 total_BOONDI_RAITA=50*qua_BOONDI_RAITA;
                 printf("\nTotal cost of BOONDI_RAITA is : %d",total_BOONDI_RAITA);
                 Total_Bill=Total_Bill+total_BOONDI_RAITA;

            break;

          case 2:printf("\n\tYou have selected ALOO_RAITA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ALOO_RAITA);
                 total_ALOO_RAITA=50*qua_ALOO_RAITA;
                 printf("\nTotal cost of ALOO_RAITA is : %d",total_ALOO_RAITA);
                 Total_Bill=Total_Bill+total_ALOO_RAITA;
            break;

          case 3:printf("\n\tYou have selected VAGETABLE_RAITA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_VAGETABLE_RAITA);
                 total_VAGETABLE_RAITA=50*qua_VAGETABLE_RAITA;
                 printf("\nTotal cost of VAGETABLE_RAITA is : %d",total_VAGETABLE_RAITA);
                 Total_Bill=Total_Bill+total_VAGETABLE_RAITA;
              break;

          case 4:printf("\n\tYou have selected PLAIN_RAITA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_PLAIN_RAITA);
                 total_PLAIN_RAITA=50*qua_PLAIN_RAITA;
                 printf("\nTotal cost of PLAIN_RAITA is : %d",total_PLAIN_RAITA);
                 Total_Bill=Total_Bill+total_PLAIN_RAITA;
            break;

          }


           break;
    case 25:printf("\n\tYou have selected Ice cream");
           printf("\n\nHere is your sub menu of Ice cream");
           printf("\n\t1 - CHOCOLATE_ICE_CREAM____(50)");
           printf("\n\t2 - VANILLA____(50)");
           printf("\n\t3 - ORANGE_ICE_CREAM____(50)");
           printf("\n\t4 - RAJBHOG____(90)\n");


          scanf("%d",&choice1);

          switch (choice1)
          {
          case 1:printf("\n\tYou have selected CHOCOLATE_ICE_CREAM");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_CHOCOLATE_ICE_CREAM);
                 total_CHOCOLATE_ICE_CREAM=50*qua_CHOCOLATE_ICE_CREAM;
                 printf("\nTotal cost of CHOCOLATE_ICE_CREAM is : %d",total_CHOCOLATE_ICE_CREAM);
                 Total_Bill=Total_Bill+total_CHOCOLATE_ICE_CREAM;
            break;

          case 2:printf("\n\tYou have selected VANILLA");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_VANILLA);
                 total_VANILLA=50*qua_VANILLA;
                 printf("\nTotal cost of VANILLA is : %d",total_VANILLA);
                 Total_Bill=Total_Bill+total_VANILLA;
            break;

          case 3:printf("\n\tYou have selected ORANGE_ICE_CREAM");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_ORANGE_ICE_CREAM);
                 total_ORANGE_ICE_CREAM=50*qua_ORANGE_ICE_CREAM;
                 printf("\nTotal cost of ORANGE_ICE_CREAM is : %d",total_ORANGE_ICE_CREAM);
                 Total_Bill=Total_Bill+total_ORANGE_ICE_CREAM;
            break;

          case 4:printf("\n\tYou have selected RAJBHOG");
                 printf("\n    Plesae tell me the quantity : ");
                 scanf("%d",&qua_RAJBHOG);
                 total_RAJBHOG=90*qua_RAJBHOG;
                 printf("\nTotal cost of Rajbhog is : %d",total_RAJBHOG);
                 Total_Bill=Total_Bill+total_RAJBHOG;
            break;


          }


           break;
    case 26:exit(0);
    default:printf("\nInvalid choice");

  }
  printf("\n\t-----------------Your total bill is : %d  -----------------", Total_Bill);
  goto start;
}
