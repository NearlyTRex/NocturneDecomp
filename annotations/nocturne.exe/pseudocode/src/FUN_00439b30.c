// Name: FUN_00439b30
// Address: 00439b30
// Address Range: [[00439b30, 00439bef]]
// Convention: unknown
// Signature: undefined4 FUN_00439b30(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,int param_6 )

#include "nocturne.h"

uint FUN_00439b30(int *param_1,uint param_2,uint param_3,int param_4,int *param_5,int param_6 )

{
  uint uVar1;
  int iVar2;
  uint local_18;
  int local_14;
  
  local_14 = param_4;
  local_18 = param_2;
  if (param_1[0xb] < 0) goto LAB_00439b93;
  do {
    uVar1 = FUN_004397d0(param_1 + 1,param_1[0xb],&local_14);
    if (-1 < param_1[10]) {
      iVar2 = FUN_004394f0(param_1 + 1,uVar1,param_1[10]);
      if (iVar2 != 0) {
        param_1[0xb] = -1;
      }
    }
    iVar2 = param_1[0xb];
    param_1[0xb] = -1;
    param_1[10] = iVar2;
LAB_00439b93:
    iVar2 = FUN_00439630(param_1 + 1,param_1 + 6,&local_18,param_3);
    param_1[0xb] = iVar2;
  } while (-1 < iVar2);
  *param_5 = *param_5 - (local_14 - param_4);
  if (param_6 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_14,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}
