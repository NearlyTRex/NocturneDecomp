// Name: FUN_00544720
// Address: 00544720
// Address Range: [[00544720, 0054475a]]
// Convention: unknown
// Signature: undefined4 FUN_00544720(int param_1)

#include "nocturne.h"

uint FUN_00544720(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004e1660(param_1 + 0x150,&DAT_005965f0);
  iVar2 = FUN_00564520(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_0040d830(param_1);
  return uVar1;
}
