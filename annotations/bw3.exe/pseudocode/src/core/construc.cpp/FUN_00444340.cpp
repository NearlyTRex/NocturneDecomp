// Name: core_construc.cpp_FUN_00444340
// Address: 00444340
// Address Range: [[00444340, 004443c6]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00444340(int param_1)

#include "nocturne.h"

void core_construc_cpp_FUN_00444340(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_ESI;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(param_1 + 0xd844) != 0) {
    iVar3 = *(int *)(param_1 + 0xd1c8 + *(int *)(param_1 + 0xd848) * 0x48);
    uStack_1c = *(uint *)(param_1 + 0x20);
    uStack_18 = *(uint *)(param_1 + 0x24);
    uStack_14 = *(uint *)(param_1 + 0x28);
    if ((iVar3 != 0) && (&uStack_1c != (uint *)(iVar3 + 0x20))) {
      uStack_1c = *(uint *)(iVar3 + 0x20);
      uStack_18 = *(uint *)(iVar3 + 0x24);
      uStack_14 = *(uint *)(iVar3 + 0x28);
    }
    *unaff_ESI = uStack_1c;
    unaff_ESI[1] = uStack_18;
    unaff_ESI[2] = uStack_14;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x28);
  *unaff_ESI = *(uint *)(param_1 + 0x20);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
