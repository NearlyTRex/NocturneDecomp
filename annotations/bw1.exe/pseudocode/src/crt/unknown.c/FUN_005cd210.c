// Name: crt_unknown.c_FUN_005cd210
// Address: 005cd210
// Address Range: [[005cd210, 005cd245]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cd210(void)

#include "nocturne.h"

uint FUN_005cd210(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005cd144(4);
  iVar2 = FUN_005cd144(7);
  if (((iVar1 == 2) || (iVar1 == 3)) && ((iVar2 == 2 || (iVar2 == 3)))) {
    return 0;
  }
  return 1;
}
