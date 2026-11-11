// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210
// Address: 004b0210
// Address Range: [[004b0210, 004b05a6]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

{
  CInventory *pCVar1;
  CWeapon *pCVar2;
  int iVar3;
  UOrientationVector *pUVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1068 [799];
  CVector3f *in_stack_fffffc20;
  float in_stack_fffffc24;
  byte local_380 [48];
  uint local_350 [12];
  uint local_320 [12];
  uint local_2f0 [12];
  uint local_2c0 [12];
  uint local_290 [12];
  uint local_260 [12];
  uint local_230 [24];
  uint local_1d0 [12];
  uint local_1a0 [24];
  uint local_140 [12];
  uint local_110 [12];
  uint local_e0 [12];
  uint local_b0 [12];
  uint local_80;
  float afStack_7c [5];
  float local_68;
  uint local_5c;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c;
  float local_28;
  float local_24;
  CInventory *local_18;
  CInventory *local_14;
  
  bVar7 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_FUN_00591c10
            (local_380,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
  local_14 = (this_ptr->base).inventories;
  if (this_ptr->draw_blend < _DAT_005f7334) {
    (*(((((CCharacter *)local_14->selected_weapons[(this_ptr->base).inventories[0].current_group])->
        base).vtable._uc)->_uc).kill)
              ((CCharacter *)
               local_14->selected_weapons[(this_ptr->base).inventories[0].current_group],1,
               in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_00591c10();
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = local_230;
    puVar6 = local_1d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = local_e0;
  }
  else {
    (*(((((CCharacter *)local_14->selected_weapons[(this_ptr->base).inventories[0].current_group])->
        base).vtable._uc)->_uc).kill)
              ((CCharacter *)
               local_14->selected_weapons[(this_ptr->base).inventories[0].current_group],2,
               in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_00591c10();
    core_xform_cpp_buildRotationX_FUN_00593240();
    puVar5 = local_140;
    puVar6 = local_2c0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_005932c0();
    puVar5 = local_b0;
    puVar6 = local_2f0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = local_1a0;
    puVar6 = local_290;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = (uint *)&stack0xfffffc20;
    puVar6 = local_260;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    pCVar1 = local_14;
    puVar5 = (uint *)&stack0xfffffc50;
    puVar6 = local_320;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                      (&local_14->selected_weapons[pCVar1->current_group]->base,
                       "?CCrossbow" + 1);
    if (iVar3 != 0) {
      core_xform_cpp_FUN_00592720();
      local_38 = afStack_7c[2];
      afStack_7c[(uint)bVar7 * -2 + 0x12] = afStack_7c[(uint)bVar7 * -2 + 3];
      afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      local_80 = local_5c;
      afStack_7c[(uint)bVar7 * -2] = afStack_7c[(uint)bVar7 * -2 + 9];
      afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      afStack_7c[1] = (1.0 - this_ptr->aim_weight) * afStack_7c[1];
      core_xform_cpp_FUN_00591c10();
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = local_110;
  }
  puVar6 = local_350;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00592720();
  pCVar1 = (this_ptr->base).inventories;
  local_2c = local_50;
  afStack_7c[(uint)bVar7 * -2 + 0x15] = afStack_7c[(uint)bVar7 * -2 + 0xc];
  afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  pCVar2 = pCVar1->selected_weapons[(this_ptr->base).inventories[0].current_group];
  (pCVar2->base).location.position.x = local_2c;
  (pCVar2->base).location.position.y = local_28;
  (pCVar2->base).location.position.z = local_24;
  local_18 = pCVar1;
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
  pCVar1 = local_18;
  local_44 = local_68;
  afStack_7c[(uint)bVar7 * -2 + 0xf] = afStack_7c[(uint)bVar7 * -2 + 6];
  afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  pCVar2 = local_18->selected_weapons[pCVar1->current_group];
  pUVar4 = &(pCVar2->base).orient;
  if (pUVar4 != (UOrientationVector *)(afStack_7c + 0xe)) {
    (pUVar4->vec).x = local_44;
    (pCVar2->base).orient.vec.y = local_40;
    (pCVar2->base).orient.vec.z = local_3c;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
            (&(this_ptr->base).inventories[0].selected_weapons
              [(this_ptr->base).inventories[0].current_group]->base);
  return;
}
