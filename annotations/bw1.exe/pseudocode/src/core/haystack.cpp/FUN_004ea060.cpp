// Name: core_haystack.cpp_FUN_004ea060
// Address: 004ea060
// Address Range: [[004ea060, 004ea116]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_FUN_004ea060(CHaystack *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_haystack_cpp_FUN_004ea060(CHaystack *this_ptr,int bone_index)

{
  CHaystack *pCVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1028 [999];
  uint *puVar5;
  SDamageInfo aSStack_7c [4];
  uint local_78;
  CHaystack *local_48;
  CHaystack *local_44;
  uint local_40;
  uint auStack_3c [5];
  uint local_28;
  uint local_1c [3];
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,bone_index);
  puVar5 = auStack_3c + 2;
  auStack_3c[2] = local_28;
  auStack_3c[(uint)bVar4 * -2 + 3] = auStack_3c[(uint)bVar4 * -2 + 6];
  auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408b40(this_ptr,puVar5);
  local_1c[0] = local_40;
  auStack_3c[(uint)bVar4 * -2 + 9] = auStack_3c[(uint)bVar4 * -2];
  auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iVar3) break;
    pCVar1 = *(CHaystack **)(&g_CDemonSetPtr->field_0x14f0ac + iVar2);
    if (pCVar1 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_7c);
      local_78 = 0x41200000;
      local_48 = this_ptr;
      local_44 = this_ptr;
      (**(code **)(*(int *)&pCVar1->field_0x154 + 0x100))
                (pCVar1,auStack_3c + 8,0x3f000000,aSStack_7c);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  }
  return;
}
