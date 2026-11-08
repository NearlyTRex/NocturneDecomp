// Name: FUN_00411bb0
// Address: 00411bb0
// Address Range: [[00411bb0, 00411c22]]
// Convention: unknown
// Signature: undefined4 * FUN_00411bb0(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00411bb0(uint *param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_2 & 4) != 0) {
    uVar3 = FUN_005a308f(param_1,&DAT_005dbf40);
    FUN_005a30b6(uVar3);
    return param_1;
  }
  *param_1 = &PTR_FUN_005dbe84;
  iVar1 = FUN_004144c0(param_1 + 0x15,0);
  iVar1 = FUN_0040d300(iVar1 + -0x50,0);
  puVar2 = (uint *)FUN_00411980(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return puVar2;
  }
  FUN_005a30c4(puVar2);
  return puVar2;
}
