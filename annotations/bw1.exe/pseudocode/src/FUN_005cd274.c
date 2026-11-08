// Name: FUN_005cd274
// Address: 005cd274
// Address Range: [[005cd274, 005cd2a8]]
// Convention: unknown
// Signature: bool FUN_005cd274(void)

#include "nocturne.h"

bool FUN_005cd274(void)

{
  BOOL BVar1;
  
  if (DAT_00626b4c != '\0') {
    BVar1 = SetConsoleCtrlHandler(FUN_005cd1b0,0);
    if (BVar1 != 0) {
      DAT_00626b4c = '\0';
    }
  }
  return DAT_00626b4c == '\0';
}
