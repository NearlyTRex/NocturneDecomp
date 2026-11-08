// Name: FUN_00562b00
// Address: 00562b00
// Address Range: [[00562b00, 00562b64]]
// Convention: unknown
// Signature: int FUN_00562b00(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00562b00(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00605840);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_0041dab0(param_1 + 0x358,0);
  iVar1 = FUN_00408730(iVar1 + -0x358,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
