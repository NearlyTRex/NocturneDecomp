// Name: FUN_0041f940
// Address: 0041f940
// Address Range: [[0041f940, 0041fa16]]
// Convention: unknown
// Signature: void FUN_0041f940(int param_1,int param_2,undefined2 *param_3)

#include "nocturne.h"

void FUN_0041f940(int param_1,int param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0x17770) = 0;
  iVar3 = 0;
  FUN_005b77c0(param_1 + 0x17774,0,28000);
  if (0 < param_2) {
    do {
      FUN_0041fa20(param_1,*param_3,param_3[1],iVar3);
      FUN_0041fa20(param_1,param_3[1],param_3[2],iVar3);
      FUN_0041fa20(param_1,param_3[2],*param_3,iVar3);
      FUN_0041fa20(param_1,param_3[1],*param_3,iVar3);
      FUN_0041fa20(param_1,param_3[2],param_3[1],iVar3);
      puVar1 = param_3 + 2;
      uVar2 = *param_3;
      param_3 = param_3 + 9;
      iVar4 = iVar3 + 1;
      FUN_0041fa20(param_1,uVar2,*puVar1,iVar3);
      iVar3 = iVar4;
    } while (iVar4 < param_2);
  }
  return;
}
