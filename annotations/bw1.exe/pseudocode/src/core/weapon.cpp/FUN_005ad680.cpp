// Name: core_weapon.cpp_FUN_005ad680
// Address: 005ad680
// Address Range: [[005ad680, 005ad720]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_FUN_005ad680(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_FUN_005ad680(CWeapon *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar3 = auStack_3c;
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_24);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  this_ptr_00 = DAT_00612560;
  *(uint *)&this_ptr->field_0x574 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(this_ptr_00);
  if ((iVar1 == 0) && (iVar2 != 0)) {
    *(uint *)&this_ptr->field_0x574 = 1;
    return iVar2;
  }
  return iVar2;
}
