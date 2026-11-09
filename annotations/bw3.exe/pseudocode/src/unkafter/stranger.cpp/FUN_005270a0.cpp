// Name: unkafter_stranger.cpp_FUN_005270a0
// Address: 005270a0
// Address Range: [[005270a0, 0052710e]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_005270a0(int param_1)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_005270a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = g_CGogglesClassInfo.name_hash;
  iVar1 = core_inv_cpp_FUN_004db9e0((CInventory *)(param_1 + 0x206e8),"CGoggles");
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,uVar2);
  if (iVar1 == 0) {
    if (*(int *)&g_CGamePtr->field_0x264 == 0) {
      return;
    }
  }
  else {
    *(uint *)(iVar1 + 0x2d4) = (uint)(*(int *)(iVar1 + 0x2d4) == 0);
    if (*(int *)&g_CGamePtr->field_0x264 == 0) {
      return;
    }
  }
  (*(code *)**(uint **)&g_CGamePtr->field_0xb8c)(g_CGamePtr,0);
  return;
}
