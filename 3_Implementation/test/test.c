
#include "fun.h"
#include "unity.h"
#include "struct.h"

void test_deleterecords(void);
void test_searchrecords(void);
void test_addrecord(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_deleterecords);
  RUN_TEST(test_searchrecords);
  RUN_TEST(test_addrecord);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_deleterecords(void)
{
    char product[20]="KHY123456";
    TEST_ASSERT_EQUAL("KHY123456", product);
   
}

void test_searchrecords(void)
{
    char product[20]="KHY123456";
    TEST_ASSERT_EQUAL("KHY123456", product);
   
}

void test_addrecords(void)
{
    char name[20]="KHYIOP";

    char company[20]="SASI";

    char price [20]="1000";

 TEST_ASSERT_EQUAL("KHYIOP", name);
 TEST_ASSERT_EQUAL("SASI", company);
 TEST_ASSERT_EQUAL("1000", price);
   
}

