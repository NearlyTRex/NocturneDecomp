// Name: core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770
// Address: 0056b770
// Address Range: [[0056b770, 0056bc71]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0056b770(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0056b770(CStranger *this_ptr)

{
  CWeapon *this_ptr_00;
  bool bVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10b4 [948];
  byte *puVar7;
  float *pfVar8;
  CVector3f *pCVar9;
  byte auStack_18c [48];
  uint auStack_15c [12];
  uint auStack_12c [12];
  byte auStack_fc [48];
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [5];
  float afStack_9c [4];
  float afStack_8c [5];
  CVector3f CStack_78;
  CVector3f CStack_6c;
  uint uStack_60;
  float afStack_5c [5];
  float afStack_48 [9];
  int iStack_24;
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005ebc45 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&this_ptr->field_0x2698 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&this_ptr->field_0x2698 + 0x20);
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCStack_18 = (CVector3f *)&(this_ptr->weapon->base).field_0x20;
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2698);
      core_stranger_cpp_FUN_0056da90(this_ptr);
      pfVar8 = afStack_b0 + 8;
      afStack_9c[3] = (float)uStack_b4;
      afStack_8c[(uint)bVar6 * -2] = afStack_b0[(uint)bVar6 * -2];
      afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408cf0(this_ptr,pfVar8);
      pCVar2 = pCStack_18;
      pCVar9 = &CStack_6c;
      CStack_6c.x = fStack_cc;
      *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) = afStack_c8[(uint)bVar6 * -2];
      *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_14 = (float)core_setcolid_cpp_FUN_00536210(g_CDemonSetPtr,pCVar2,pCVar9);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840
                (0x01C3DEB4,pCStack_18,&CStack_6c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  this_ptr_00 = this_ptr->weapon;
  if ((((this_ptr_00 == (CWeapon *)0x0) || (this_ptr_00 == *(CWeapon **)&this_ptr->field_0x2620)) ||
      (this_ptr_00 == *(CWeapon **)&this_ptr->field_0x2698)) ||
     (*(int *)(&this_ptr->field_0x23f4 + _DAT_0264be88 * 4) == 0)) goto LAB_0056ba07;
  (*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0056b94f_caseD_3:
    iVar3 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar3 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar3 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar3 = 5;
      break;
    default:
      goto switchD_0056b94f_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar3 = 8;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,iVar3);
  bVar1 = (float)_DAT_005ebc4d < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     (*(int *)&this_ptr->field_0x2d04 == 8)) {
    bVar1 = true;
LAB_0056b99f:
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  else if (bVar1) goto LAB_0056b99f;
  if (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,1);
    (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    if (bVar1) {
      (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->weapon);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
LAB_0056ba07:
  if (((*(int *)&this_ptr->field_0x255e8 != 0) &&
      (*(int *)(&this_ptr->field_0x23f4 + _DAT_0264be88 * 4) != 0)) &&
     (iStack_24 = *(int *)&this_ptr->field_0x247d4, iStack_24 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    puStack_20 = &this_ptr->field_0x1134;
    if (*(int *)&this_ptr->field_0x255e8 == 2) {
      puVar4 = &uStack_60;
      afStack_48[6] = -0.140457;
      afStack_48[8] = 0.0;
      afStack_48[7] = -3.0786;
      afStack_48[1] = 0.283614;
      afStack_48[0] = 0.00604827;
      pfVar8 = afStack_5c + 5;
      puVar7 = auStack_18c;
      afStack_48[2] = 0.537644;
      uStack_60 = 0xbe0fd3f6;
      afStack_5c[(uint)bVar6 * -2] = afStack_5c[(uint)bVar6 * -2 + 0xc];
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      core_xform_cpp_FUN_00591c10(puVar7,pfVar8,puVar4);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_18c,puStack_20 + _DAT_0264be30 * 0x30);
      puVar4 = (uint *)&stack0xfffffe44;
    }
    else {
      afStack_48[3] = 1.16195;
      afStack_48[5] = 0.0489636;
      pfVar8 = afStack_8c + 2;
      afStack_48[4] = 0.368073;
      afStack_8c[2] = 1.16195;
      afStack_8c[(uint)bVar6 * -2 + 3] = afStack_5c[(uint)bVar6 * -2 + 9];
      afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      afStack_9c[2] = 0.130713;
      afStack_9c[0] = 0.512623;
      afStack_9c[1] = -0.0202601;
      core_xform_cpp_FUN_00591c10(auStack_fc,afStack_b0 + 5,pfVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_fc,puStack_20 + _DAT_0264be68 * 0x30);
      puVar4 = auStack_12c;
    }
    puVar5 = auStack_15c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_15c);
    CStack_c0.x = afStack_5c[2];
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) = afStack_5c[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_xform_cpp_FUN_00592720(auStack_15c);
    pCVar9 = &CStack_78;
    CStack_78.x = afStack_b0[2];
    *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + 4) = afStack_b0[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&CStack_c0,pCVar9);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(iStack_24 + 0x2b4),0.0,-1);
    engine_matrix_c_pop_FUN_0046b4a0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  }
  if (((*(int *)(&this_ptr->field_0x23f4 + _DAT_0264be88 * 4) == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0
      )) && (0 < *(int *)&this_ptr->field_0x2d0c)) {
    core_cloth_cpp_CClothList_reset_FUN_005b1550((CClothList *)&this_ptr->field_0x2d0c);
  }
  return 1;
}
