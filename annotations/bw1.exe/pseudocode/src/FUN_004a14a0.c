// Name: FUN_004a14a0
// Address: 004a14a0
// Address Range: [[004a14a0, 004a15b3]]
// Convention: unknown
// Signature: undefined4 FUN_004a14a0(int param_1,int *param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_004a14a0(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte local_78 [100];
  int local_14;
  
  local_14 = -1;
  FUN_005c2cac(param_1 + *param_2," { %f, %f, %f }%n",param_3,param_3 + 1,param_3 + 2,&local_14);
  if (6 < local_14) {
    *param_2 = *param_2 + local_14;
    return 1;
  }
  FUN_005c2cac(param_1 + *param_2," %[^ ,(){}]%n",local_78,&local_14);
  if (local_14 < 0) {
    FUN_005bfb40(&DAT_01c56ed0,"Error parsing vector location");
    return 0xffffffff;
  }
  iVar1 = FUN_004a1370(local_78,DAT_007c3030,&DAT_007c2ff8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *param_2 = *param_2 + local_14;
  if (iVar1 != 0x0FFFFFFF) {
    if (param_3 != (uint *)(iVar1 + 0x20)) {
      *param_3 = *(uint *)(iVar1 + 0x20);
      param_3[1] = *(uint *)(iVar1 + 0x24);
      param_3[2] = *(uint *)(iVar1 + 0x28);
    }
    return 1;
  }
  return 0;
}
