// Name: FUN_0047cf20
// Address: 0047cf20
// Address Range: [[0047cf20, 0047cfb9]]
// Convention: unknown
// Signature: void FUN_0047cf20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0047cf20(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x24a8) != '\0') && (*(int *)(param_1 + 0x2298 + param_2 * 4) != 0)) {
    iVar1 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                         *(uint *)(param_1 + 0x27a0));
    FUN_00431210(param_1,iVar1,param_2,param_4);
    FUN_00419b90(iVar1);
    *(int *)(param_1 + 0xc318 + *(int *)(param_1 + 0xc314) * 4) = iVar1;
    *(int *)(param_1 + 0xc314) = *(int *)(param_1 + 0xc314) + 1;
    *(uint *)(iVar1 + 0xfc) = 1;
    *(uint *)(iVar1 + 0xcb4) = 1;
    *(uint *)(iVar1 + 0xcc0) = 0xffff;
    return;
  }
  return;
}
