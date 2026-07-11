// Name: FUN_0045a1a0
// Address: 0045a1a0
// Address Range: [[0045a1a0, 0045a239]]
// Convention: unknown
// Signature: void FUN_0045a1a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0045a1a0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x23b0) != '\0') && (*(int *)(param_1 + 0x2290 + param_2 * 4) != 0)) {
    iVar1 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                         *(uint *)(param_1 + 0x2608));
    FUN_00427eb0(param_1,iVar1,param_2,param_4);
    FUN_00416d40(iVar1);
    *(int *)(param_1 + 0xbdd4 + *(int *)(param_1 + 0xbdd0) * 4) = iVar1;
    *(int *)(param_1 + 0xbdd0) = *(int *)(param_1 + 0xbdd0) + 1;
    *(uint *)(iVar1 + 0xfc) = 1;
    *(uint *)(iVar1 + 0xc9c) = 1;
    *(uint *)(iVar1 + 0xca8) = 0xffff;
    return;
  }
  return;
}
