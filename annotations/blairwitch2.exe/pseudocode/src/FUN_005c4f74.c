// Name: FUN_005c4f74
// Address: 005c4f74
// Address Range: [[005c4f74, 005c4fa8]]
// Convention: unknown
// Signature: bool FUN_005c4f74(void)

#include "nocturne.h"

bool FUN_005c4f74(void)

{
  BOOL BVar1;
  
  if (DAT_0061f7cc != '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005c4eb0,0);
    if (BVar1 != 0) {
      DAT_0061f7cc = '\0';
    }
  }
  return DAT_0061f7cc == '\0';
}
