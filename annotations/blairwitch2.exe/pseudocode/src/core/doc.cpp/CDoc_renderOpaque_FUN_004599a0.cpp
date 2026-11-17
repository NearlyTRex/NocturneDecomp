// Name: core_doc.cpp_CDoc_renderOpaque_FUN_004599a0
// Address: 004599a0
// Address Range: [[004599a0, 00459d36]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f *unaff_ESI;
  byte bVar5;
  float afStackY_1058 [1006];
  CDemonSet *this_ptr_00;
  CBoxActor *this_ptr_01;
  CVector3f *start_pos;
  CVector3f *pCVar6;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  
  bVar5 = 0;
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  core_charactr_cpp_CCharacter_renderPhantomEyes_FUN_0042b620((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  fStack_c = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,4);
  if ((float)0.98999999999999999 < fStack_c) {
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
      core_doc_cpp_CDoc_getThrowDirection_FUN_0045bba0(this_ptr,&CStack_40);
      pCVar6 = &CStack_1c;
      CStack_1c.x = CStack_40.x;
      *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,pCVar6,&CStack_70);
      pCVar6 = &CStack_64;
      CStack_64.x = CStack_70.x;
      *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + 4);
      this_ptr_00 = g_CDemonSetPtr;
      start_pos = pCVar4;
      *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      fStack_c = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00536210
                           (this_ptr_00,start_pos,pCVar6);
      fStack_10 = fStack_c;
      if (fStack_c < 0.0) {
        fStack_10 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840
                (g_CFireEffect_PTR_00614d30,pCVar4,&CStack_64,1.0,1.0,
                 &g_CDemonSetPtr->collision_normal,fStack_10,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[g_INT_01b4d2b0] != 0) {
    pCVar2 = this_ptr->weapon;
    if (pCVar2 != (CWeapon *)0x0) {
      if ((pCVar2->weapon_type == WEAPON_TYPE_GUN) &&
         (pCVar2 != (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) {
        iVar3 = 1;
      }
      else {
        if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon)
        goto LAB_00459b81;
        iVar3 = 0;
      }
      core_doc_cpp_CDoc_updateWeaponPosition_FUN_004567c0(this_ptr,iVar3);
      (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    }
LAB_00459b81:
    if (0.0 < this_ptr->lantern_tween_pct) {
      core_xform_cpp_getTranslation_FUN_00592720(&this_ptr->lantern_transform,&CStack_34);
      CStack_58.x = CStack_34.x;
      *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&this_ptr->lantern_transform,unaff_ESI);
      pCVar4 = &CStack_4c;
      pCVar6 = &CStack_58;
      CStack_4c.x = fStack_28;
      *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + 4) = afStack_24[(uint)bVar5 * -2];
      this_ptr_01 = &this_ptr->lantern_box;
      *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90(this_ptr_01,pCVar6,pCVar4);
      core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041c580(&this_ptr->lantern_box);
    }
  }
  pCVar2 = this_ptr->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     (((this_ptr->base).base.model.part_data.visibility_flags[g_INT_01b4d2b0] == 0 ||
      (iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(&pCVar2->base,"CGun"), iVar3 == 0))))
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
  if ((float)0.94999999999999996 < fStack_c) {
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
LAB_00459c91:
  if ((((this_ptr->base).base.model.part_data.visibility_flags[g_INT_01b4d2b0] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                         (g_CDemonRenderer_PTR_0060b280), iVar3 == 0)) &&
     (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_005b1550(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
