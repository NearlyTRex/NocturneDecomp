// Name: FUN_005698b0
// Address: 005698b0
// Address Range: [[005698b0, 00569925]]
// Convention: unknown
// Signature: void FUN_005698b0(undefined2 *param_1,undefined4 param_2,int param_3,code *param_4)

#include "nocturne.h"

void FUN_005698b0(ushort *param_1,uint param_2,int param_3,code *param_4)

{
  ushort uVar1;
  int iVar2;
  byte *puVar3;
  byte local_18 [4];
  
  iVar2 = *(int *)(param_3 + 0x28);
  do {
    if (iVar2 < 1) {
      return;
    }
    puVar3 = local_18;
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = FUN_0056f3a0(local_18,uVar1);
    if (iVar2 != -1) {
      if (*(int *)(param_3 + 0x28) < iVar2) {
        *(uint *)(param_3 + 0x28) = 0;
        return;
      }
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        (*param_4)(param_3,*puVar3);
        puVar3 = puVar3 + 1;
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + -1;
      }
    }
    iVar2 = *(int *)(param_3 + 0x28);
  } while( true );
}
