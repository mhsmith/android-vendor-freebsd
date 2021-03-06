/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
void resetTest(void);
extern void test_msnprintf(void);
extern void test_msnprintfLiteralPercentm(void);
extern void test_msnprintfBackslashLiteralPercentm(void);
extern void test_msnprintfBackslashPercent(void);
extern void test_msnprintfHangingPercent(void);
extern void test_format_errmsgHangingPercent(void);
extern void test_msnprintfNullTarget(void);
extern void test_msnprintfTruncate(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}

char *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  Unity.TestFile = "msyslog.c";
  UnityBegin("msyslog.c");
  RUN_TEST(test_msnprintf, 14);
  RUN_TEST(test_msnprintfLiteralPercentm, 30);
  RUN_TEST(test_msnprintfBackslashLiteralPercentm, 45);
  RUN_TEST(test_msnprintfBackslashPercent, 59);
  RUN_TEST(test_msnprintfHangingPercent, 74);
  RUN_TEST(test_format_errmsgHangingPercent, 91);
  RUN_TEST(test_msnprintfNullTarget, 106);
  RUN_TEST(test_msnprintfTruncate, 117);

  return (UnityEnd());
}
