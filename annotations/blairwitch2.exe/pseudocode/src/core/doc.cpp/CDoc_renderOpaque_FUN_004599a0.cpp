// Name: core_doc.cpp_CDoc_renderOpaque_FUN_004599a0
// Address: 004599a0
// Address Range: [[004599a0, 00459d36]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_1058 [1006];
  CDemonSet *pCVar6;
  CBoxActor *this_ptr_00;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  uint uVar10;
  float fStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float afStack_1c [3];
  float fStack_10;
  float fStack_c;
  
  bVar5 = 0;
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  core_charactr_cpp_FUN_0042b620(this_ptr);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  fStack_c = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,4);
  if ((float)_DAT_005d0507 < fStack_c) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCVar4 = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCVar4 = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCVar4 = &(this_ptr->weapon->base).location.position;
    }
    if (pCVar4 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      core_doc_cpp_FUN_0045bba0(this_ptr);
      pfVar9 = afStack_3c + 8;
      afStack_1c[0] = (float)uStack_40;
      afStack_3c[(uint)bVar5 * -2 + 9] = afStack_3c[(uint)bVar5 * -2];
      afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408cf0(this_ptr,pfVar9);
      pCVar8 = &CStack_64;
      CStack_64.x = fStack_70;
      *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + 4) =
           *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8);
      pCVar6 = g_CDemonSetPtr;
      pCVar7 = pCVar4;
      *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_c = (float)core_setcolid_cpp_FUN_00536210(pCVar6,pCVar7,pCVar8);
      fStack_10 = fStack_c;
      if (fStack_c < 0.0) {
        fStack_10 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840
                (0x01C3DEB4,pCVar4,&CStack_64,1.0,1.0,&g_CDemonSetPtr->collision_normal,fStack_10,
                 0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b4d2b0] != 0) {
    pCVar2 = this_ptr->weapon;
    if (pCVar2 != (CWeapon *)0x0) {
      if ((pCVar2->weapon_type == WEAPON_TYPE_GUN) &&
         (pCVar2 != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) {
        uVar10 = 1;
      }
      else {
        if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon)
        goto LAB_00459b81;
        uVar10 = 0;
      }
      core_doc_cpp_FUN_004567c0(this_ptr,uVar10);
      (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    }
LAB_00459b81:
    if (0.0 < this_ptr->lantern_tween_pct) {
      core_xform_cpp_FUN_00592720(&this_ptr->lantern_transform);
      CStack_58.x = afStack_3c[2];
      *(float *)((int)&CStack_58 + (uint)bVar5 * -8 + 4) = afStack_3c[(uint)bVar5 * -2 + 3];
      *(float *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&this_ptr->lantern_transform);
      pCVar4 = &CStack_4c;
      pCVar8 = &CStack_58;
      CStack_4c.x = fStack_28;
      *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + 4) = afStack_3c[(uint)bVar5 * -2 + 6];
      this_ptr_00 = &this_ptr->lantern_box;
      *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90(this_ptr_00,pCVar8,pCVar4);
      core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041c580(&this_ptr->lantern_box);
    }
  }
  pCVar2 = this_ptr->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     (((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b4d2b0] == 0 ||
      (iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar2->base,&DAT_005d0502), iVar3 == 0))))
  goto LAB_00459c91;
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00459c4e_caseD_3:
    iVar3 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar3 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar3 = 0xb;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar3 = 9;
      break;
    default:
      goto switchD_00459c4e_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 10;
      break;
    case WEAPON_TYPE_UNUSED:
    case WEAPON_TYPE_MELEE:
    case WEAPON_TYPE_BARON:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
      iVar3 = 6;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_DYNAMITE:
      iVar3 = 0xe;
    }
  }
  fStack_c = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,iVar3);
  if ((float)_DAT_005d050f < fStack_c) {
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
LAB_00459c91:
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b4d2b0] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_005b1550(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
