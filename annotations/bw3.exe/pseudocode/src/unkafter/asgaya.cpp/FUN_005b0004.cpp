// Name: unkafter_asgaya.cpp_FUN_005b0004
// Address: 005b0004
// Address Range: [[005b0004, 005b0038]]
// Convention: unknown
// Signature: bool unkafter_asgaya_cpp_FUN_005b0004(void)

#include "nocturne.h"

bool unkafter_asgaya_cpp_FUN_005b0004(void)

{
  BOOL BVar1;
  
  if (DAT_00607ef0 != '\0') {
    BVar1 = SetConsoleCtrlHandler(unkafter_asgaya_cpp_FUN_005aff40,0);
    if (BVar1 != 0) {
      DAT_00607ef0 = '\0';
    }
  }
  return DAT_00607ef0 == '\0';
}
