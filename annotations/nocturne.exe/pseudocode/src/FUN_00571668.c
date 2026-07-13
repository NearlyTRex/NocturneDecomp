// Name: FUN_00571668
// Address: 00571668
// Address Range: [[00571668, 00571691]]
// Convention: unknown
// Signature: char FUN_00571668(void)

#include "nocturne.h"

char FUN_00571668(void)

{
  BOOL BVar1;
  
  if (DAT_005c2140 == '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005715d0,1);
    if (BVar1 != 0) {
      DAT_005c2140 = '\x01';
    }
  }
  return DAT_005c2140;
}
