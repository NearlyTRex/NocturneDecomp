// Name: FUN_005c4f48
// Address: 005c4f48
// Address Range: [[005c4f48, 005c4f71]]
// Convention: unknown
// Signature: char FUN_005c4f48(void)

#include "nocturne.h"

char FUN_005c4f48(void)

{
  BOOL BVar1;
  
  if (DAT_0061f7cc == '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005c4eb0,1);
    if (BVar1 != 0) {
      DAT_0061f7cc = '\x01';
    }
  }
  return DAT_0061f7cc;
}
