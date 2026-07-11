// Name: FUN_00571694
// Address: 00571694
// Address Range: [[00571694, 005716c8]]
// Convention: unknown
// Signature: bool FUN_00571694(void)

#include "nocturne.h"

bool FUN_00571694(void)

{
  BOOL BVar1;
  
  if (DAT_005c2140 != '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005715d0,0);
    if (BVar1 != 0) {
      DAT_005c2140 = '\0';
    }
  }
  return DAT_005c2140 == '\0';
}
