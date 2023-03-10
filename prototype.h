
#include<stdio.h>
#define BUFFER_SIZE 1000

typedef struct seller_Details
{
        int id;
        char name[30];
        char emailId[50];
        long int phoneNo;
        char panNo[10];
        int product_id;
        char product_name[20];
        char product_details[30];
        char category[20];
        char password[20];
        int base_price;
        int sold_price ;
        int product_status ;
        int choice;
        int code;
        int buyer_id_request[10];
        int buyer_request_amount[10];
        char buyer_name[30];
        int count;
        int buyer_id_sell ;
        int status;

	
	struct product_details *link;
        struct seller_Details *next;
}seller_Details;

typedef struct product_details
{
	int product_id ;
	char product_name[20];
	char product_details[30];
	int product_price;
	int end_date[3];
	int seller_id ;
	
	struct product_details *next;
}product_details;

typedef struct bidding_details
{
	int bidding_data[16];
	int result[5];
	struct bidding_details *next ;
}bidding_details;




seller_Details *  price_check(product_details * ,seller_Details *);
seller_Details *create_lisr_of_seller(seller_Details *,seller_Details);
seller_Details *file_to_list(seller_Details *);
seller_Details question_extraction_from_file(char * , seller_Details );


void design() ;

seller_Details *seller(seller_Details * , product_details *);

seller_Details *login_seller(seller_Details *,char * , char *);

void check_the_buyer_request(seller_Details *);

seller_Details * login(seller_Details *);
int new_registration_to_file();

product_details *product_registration(product_details *);

product_details data_extraction_from_buffer(char * , product_details , int *);

product_details *create_list_for_product(product_details * , product_details);

product_details *delete_product(product_details * ,int);

product_details * modify_product_details(product_details * ,int,seller_Details *);
void display_product(product_details *);

void adding_produt_into_file();

void save_product_info_file(product_details *);
void adding_the_product_into_file(int);

int alpha_validator(char *);
int password_validation(char *);

void history_display();

seller_Details *get_the_seller_dwtails_for_product(product_details * ,int , seller_Details *);



bidding_details *biding_histroy_extraction_from_file(bidding_details *);


int finding_the_largest_bidding_price(bidding_details);

bidding_details *create_bidding_list(bidding_details * , bidding_details);

bidding_details *check_for_best_price_by_buyer(bidding_details *  , bidding_details );

void display_bidding_price(bidding_details *);

void saving_tranction_into_file(bidding_details *);
