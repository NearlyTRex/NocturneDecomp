// Name: core_weapon.cpp_CWeapon_renderTransparent_FUN_0057b040
// Address: 0057b040
// Address Range: [[0057b040, 0057b117]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_renderTransparent_FUN_0057b040(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_renderTransparent_FUN_0057b040(CWeapon *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar5 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = auStack_40;
  puVar4 = auStack_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_28);
  if (*(int *)&this_ptr->field_0x588 == 0x10000) {
    core_actor_cpp_FUN_004087d0(&this_ptr->base);
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (DAT_005f2afc,*(int *)&this_ptr->field_0x588);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                (&this_ptr->model,0.0,0x267);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    this_ptr_00 = DAT_005f2afc;
    this_ptr->is_rendered = 0;
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr_00);
    if ((iVar1 == 0) && (iVar2 != 0)) {
      this_ptr->is_rendered = 1;
      return iVar2;
    }
  }
  return iVar2;
}
