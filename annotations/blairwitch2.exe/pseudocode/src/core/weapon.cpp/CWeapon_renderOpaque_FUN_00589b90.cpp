// Name: core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90
// Address: 00589b90
// Address Range: [[00589b90, 00589c30]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
  puVar3 = auStack_3c;
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(auStack_24);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  this_ptr_00 = DAT_0060b280;
  *(uint *)&this_ptr->field_0x6d0 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(this_ptr_00);
  if ((iVar1 == 0) && (iVar2 != 0)) {
    *(uint *)&this_ptr->field_0x6d0 = 1;
    return iVar2;
  }
  return iVar2;
}
