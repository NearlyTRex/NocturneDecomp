// Name: unkafter_asgaya.cpp_FUN_005affd8
// Address: 005affd8
// Address Range: [[005affd8, 005b0001]]
// Convention: unknown
// Signature: char unkafter_asgaya_cpp_FUN_005affd8(void)

#include "nocturne.h"

char unkafter_asgaya_cpp_FUN_005affd8(void)

{
  BOOL BVar1;
  
  if (DAT_00607ef0 == '\0') {
    BVar1 = SetConsoleCtrlHandler(unkafter_asgaya_cpp_FUN_005aff40,1);
    if (BVar1 != 0) {
      DAT_00607ef0 = '\x01';
    }
  }
  return DAT_00607ef0;
}
