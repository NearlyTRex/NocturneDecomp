// Name: core_haystack.cpp_FUN_004cd7a0
// Address: 004cd7a0
// Address Range: [[004cd7a0, 004cd856]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cd7a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_haystack_cpp_FUN_004cd7a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1028 [999];
  uint *puVar5;
  SDamageInfo aSStack_7c [4];
  uint local_78;
  int local_48;
  int local_44;
  uint local_40;
  uint auStack_3c [5];
  uint local_28;
  uint local_1c [3];
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,param_2);
  puVar5 = auStack_3c + 2;
  auStack_3c[2] = local_28;
  auStack_3c[(uint)bVar4 * -2 + 3] = auStack_3c[(uint)bVar4 * -2 + 6];
  auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408d70(param_1,puVar5);
  local_1c[0] = local_40;
  auStack_3c[(uint)bVar4 * -2 + 9] = auStack_3c[(uint)bVar4 * -2];
  auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       auStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iVar3) break;
    iVar1 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iVar2);
    if (iVar1 != param_1) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_7c);
      local_78 = 0x41200000;
      local_48 = param_1;
      local_44 = param_1;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x108))(iVar1,auStack_3c + 8,0x3f000000,aSStack_7c);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  }
  return;
}
