// Name: FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045061c]]
// Convention: unknown
// Signature: int FUN_00450580(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00450580(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f52f0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005f5174;
  FUN_005a8100(param_1 + 0x154,0);
  FUN_005a8220(param_1 + 0x154);
  iVar1 = FUN_005b1c70(param_1 + 0x25ea4,0);
  iVar1 = FUN_00408930(iVar1 + -0x4f0,1);
  iVar1 = FUN_004ce3d0(iVar1 + -0x259b4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
