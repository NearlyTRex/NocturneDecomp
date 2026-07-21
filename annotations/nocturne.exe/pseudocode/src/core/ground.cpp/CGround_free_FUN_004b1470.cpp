// Name: core_ground.cpp_CGround_free_FUN_004b1470
// Address: 004b1470
// Address Range: [[004b1470, 004b14c8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(int param_1)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  else {
    FUN_005638d0(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  uVar2 = core_texlist_cpp_CTextureList_dtor_FUN_00544940(iVar1,0);
  FUN_00564494(uVar2);
  *(uint *)(param_1 + 0x28) = 0;
  return;
}
