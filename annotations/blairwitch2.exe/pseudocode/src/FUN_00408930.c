// Name: FUN_00408930
// Address: 00408930
// Address Range: [[00408930, 004089a8]]
// Convention: unknown
// Signature: undefined8 FUN_00408930(int param_1,byte param_2)

#include "nocturne.h"

ulonglong FUN_00408930(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  ulonglong uVar3;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f2290);
    FUN_005b7fce(uVar2);
    return CONCAT44(extraout_EDX,param_1);
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005f2184;
  *(uint *)(param_1 + 0x68) = 0x495fd67;
  uVar3 = FUN_0040d400(param_1 + 0x154,0);
  iVar1 = (int)uVar3 + -0x154;
  if ((param_2 & 2) == 0) {
    return CONCAT44(CONCAT31((int3)((ulonglong)uVar3 >> 0x28),param_2),iVar1);
  }
  FUN_005b7fdc(iVar1);
  return CONCAT44(extraout_EDX_00,iVar1);
}
