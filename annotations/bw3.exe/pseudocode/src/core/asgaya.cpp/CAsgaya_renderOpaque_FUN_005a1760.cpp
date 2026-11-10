// Name: core_asgaya.cpp_CAsgaya_renderOpaque_FUN_005a1760
// Address: 005a1760
// Address Range: [[005a1760, 005a17d2]]
// Convention: __cdecl
// Signature: int __cdecl core_asgaya_cpp_CAsgaya_renderOpaque_FUN_005a1760(CAsgaya *this_ptr)

#include "nocturne.h"

int __cdecl core_asgaya_cpp_CAsgaya_renderOpaque_FUN_005a1760(CAsgaya *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x24fc != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar2 = auStack_34;
  puVar3 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
  if (iVar1 != 0) {
    core_charactr_cpp_FUN_0042d8e0(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return iVar1;
}
