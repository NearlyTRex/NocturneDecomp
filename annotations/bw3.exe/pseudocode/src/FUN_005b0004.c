// Name: FUN_005b0004
// Address: 005b0004
// Address Range: [[005b0004, 005b0038]]
// Convention: unknown
// Signature: bool FUN_005b0004(void)

#include "nocturne.h"

bool FUN_005b0004(void)

{
  BOOL BVar1;
  
  if (DAT_00607ef0 != '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005aff40,0);
    if (BVar1 != 0) {
      DAT_00607ef0 = '\0';
    }
  }
  return DAT_00607ef0 == '\0';
}
