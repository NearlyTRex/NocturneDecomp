// Name: crt_unknown.c_FUN_005affd8
// Address: 005affd8
// Address Range: [[005affd8, 005b0001]]
// Convention: unknown
// Signature: char crt_unknown_c_FUN_005affd8(void)

#include "nocturne.h"

char FUN_005affd8(void)

{
  BOOL BVar1;
  
  if (DAT_00607ef0 == '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005aff40,1);
    if (BVar1 != 0) {
      DAT_00607ef0 = '\x01';
    }
  }
  return DAT_00607ef0;
}
