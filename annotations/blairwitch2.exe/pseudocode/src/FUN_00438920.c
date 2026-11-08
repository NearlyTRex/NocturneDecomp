// Name: FUN_00438920
// Address: 00438920
// Address Range: [[00438920, 00438984]]
// Convention: unknown
// Signature: int FUN_00438920(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00438920(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f4960);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00438a70(param_1 + 0x46c,0);
  iVar1 = FUN_00408930(iVar1 + -0x46c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
