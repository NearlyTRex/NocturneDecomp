// Name: core_doc.cpp_CDoc_renderOpaque_FUN_00471af0
// Address: 00471af0
// Address Range: [[00471af0, 0047221e]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_00471af0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_00471af0(CDoc *this_ptr)

{
  CWeapon *this_ptr_00;
  bool bVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1134 [888];
  CDemonRenderer *pCVar7;
  CVector3f *pCVar8;
  uint *puVar9;
  CVector3f *pCVar10;
  uint uVar11;
  CMatrix3x4f CStack_32c;
  float afStack_2fc [12];
  CMatrix3x4f CStack_2cc;
  CMatrix3x4f CStack_29c;
  float afStack_26c [12];
  CMatrix3x4f CStack_23c;
  CMatrix3x4f CStack_20c;
  CMatrix3x4f CStack_1dc;
  CMatrix3x4f CStack_1ac;
  CMatrix3x4f CStack_17c;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [11];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [5];
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_28;
  CMatrix3x4f *pCStack_24;
  CMatrix3x4f *pCStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005da2a4 < fStack_14) {
    pCVar3 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCStack_18 = (CVector3f *)0x0;
    if (pCVar3 != (CDemonActor *)0x0) {
      pCStack_18 = &(pCVar3->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCStack_18 = &(this_ptr->weapon->base).location.position;
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      core_doc_cpp_FUN_004742a0(this_ptr);
      puVar9 = &uStack_f8;
      uStack_f8 = afStack_f4[8];
      afStack_f4[(uint)bVar6 * -2] = afStack_f4[(uint)bVar6 * -2 + 9];
      afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_actor_cpp_FUN_00408ac0(this_ptr,puVar9);
      pCVar8 = pCStack_18;
      pCVar10 = &CStack_11c;
      CStack_11c.x = fStack_140;
      *(float *)((int)&CStack_11c + (uint)bVar6 * -8 + 4) = afStack_13c[(uint)bVar6 * -2];
      *(float *)((int)&CStack_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_14 = (float)core_setcolid_cpp_FUN_00557630(g_CDemonSetPtr,pCVar8,pCVar10);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140
                (0x01C57074,pCStack_18,&CStack_11c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    }
  }
  this_ptr_00 = this_ptr->weapon;
  if ((((this_ptr_00 == (CWeapon *)0x0) ||
       (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b6886c] == 0))
  goto LAB_00471d62;
  (*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00471ce6_caseD_3:
    iVar2 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar2 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar2 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar2 = 5;
      break;
    default:
      goto switchD_00471ce6_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar2 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar2 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar2 = 0xe;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,iVar2);
  bVar1 = (float)_DAT_005da2ac < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     ((this_ptr->base).base.layer_action_index == 8)) {
    bVar1 = true;
  }
  if ((this_ptr->weapon->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) || (bVar1)) {
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  core_doc_cpp_FUN_0046f610(this_ptr,0);
LAB_00471d62:
  if (((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b6886c] != 0)) {
    uVar11 = g_CGasMaskClassInfo.name_hash;
    pCVar3 = (CDemonActor *)
             core_inv_cpp_FUN_004f8c90(&(this_ptr->base).inventory,"CGasMask");
    pCStack_28 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,uVar11);
    if (pCStack_28 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE) {
        uStack_c8 = 0xbe0fd3f6;
        uStack_c0 = 0;
        uStack_c4 = 0xc04507c8;
        CStack_bc.x = 0.00604827;
        pCVar10 = &CStack_98;
        CStack_98.x = -0.140457;
        *(float *)((int)&CStack_98 + (uint)bVar6 * -8 + 4) = afStack_f4[(uint)bVar6 * -2 + 0xc];
        *(float *)((int)&CStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        CStack_bc.y = 0.283614;
        CStack_bc.z = 0.537644;
        core_xform_cpp_FUN_005b5760(&CStack_20c,&CStack_bc,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_20c,pCStack_20 + _DAT_01b68814,&CStack_29c);
        pCVar4 = &CStack_29c;
      }
      else {
        pCVar10 = &CStack_a4;
        afStack_f4[5] = 1.16195;
        afStack_f4[7] = 0.0489636;
        afStack_f4[6] = 0.368073;
        CStack_128.y = -0.0202601;
        CStack_a4.x = 1.16195;
        *(float *)((int)&CStack_a4 + (uint)bVar6 * -8 + 4) = afStack_f4[(uint)bVar6 * -2 + 6];
        *(float *)((int)&CStack_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        CStack_128.z = 0.130713;
        CStack_128.x = 0.512623;
        core_xform_cpp_FUN_005b5760(&CStack_1dc,&CStack_128,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_1dc,pCStack_20 + _DAT_01b6884c,&CStack_32c);
        pCVar4 = &CStack_32c;
      }
      pfVar5 = afStack_2fc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(afStack_2fc);
      CStack_8c.x = afStack_7c[2];
      *(float *)((int)&CStack_8c + (uint)bVar6 * -8 + 4) = afStack_7c[(uint)bVar6 * -2 + 3];
      *(float *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_xform_cpp_FUN_005b6270(afStack_2fc);
      pCVar10 = &CStack_50;
      pCVar8 = &CStack_8c;
      CStack_50.x = fStack_80;
      *(float *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) = afStack_7c[(uint)bVar6 * -2];
      pCVar7 = DAT_00612560;
      *(float *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar7,pCVar8,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(pCStack_28 + 1),0.0,-1);
      engine_drender_cpp_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    }
  }
  if (((this_ptr->base).is_wearing_goggles != 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b6886c] != 0)) {
    uVar11 = g_CGogglesClassInfo.name_hash;
    pCVar3 = (CDemonActor *)
             core_inv_cpp_FUN_004f8c90(&(this_ptr->base).inventory,"CGoggles");
    pCStack_2c = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,uVar11);
    if (pCStack_2c != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_goggles == 2) {
        afStack_13c[2] = 0.082612;
        afStack_13c[4] = 0.0127901;
        afStack_13c[3] = 3.14091;
        CStack_68.x = 0.00927716;
        pCVar10 = &CStack_14c;
        CStack_14c.x = 0.082612;
        *(float *)((int)&CStack_14c + (uint)bVar6 * -8 + 4) = afStack_13c[(uint)bVar6 * -2 + 3];
        *(float *)((int)&CStack_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        CStack_68.y = 0.336623;
        CStack_68.z = 0.211929;
        core_xform_cpp_FUN_005b5760(&CStack_23c,&CStack_68,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_23c,pCStack_24 + _DAT_01b68814,&CStack_2cc);
        pCVar4 = &CStack_2cc;
      }
      else {
        pCVar10 = &CStack_38;
        afStack_f4[2] = -0.212778;
        afStack_f4[4] = -1.03518;
        afStack_f4[3] = 0.458564;
        CStack_5c.y = -0.299625;
        CStack_38.x = -0.212778;
        *(float *)((int)&CStack_38 + (uint)bVar6 * -8 + 4) = afStack_f4[(uint)bVar6 * -2 + 3];
        *(float *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        CStack_5c.z = -0.0281333;
        CStack_5c.x = 0.26492;
        core_xform_cpp_FUN_005b5760(&CStack_1ac,&CStack_5c,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_1ac,pCStack_24 + _DAT_01b6884c,&CStack_17c);
        pCVar4 = &CStack_17c;
      }
      pfVar5 = afStack_26c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(afStack_26c);
      CStack_110.x = fStack_b0;
      *(float *)((int)&CStack_110 + (uint)bVar6 * -8 + 4) = afStack_ac[(uint)bVar6 * -2];
      *(float *)((int)&CStack_110 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_xform_cpp_FUN_005b6270(afStack_26c);
      pCVar10 = &CStack_104;
      pCVar8 = &CStack_110;
      CStack_104.x = fStack_44;
      *(float *)((int)&CStack_104 + (uint)bVar6 * -8 + 4) = afStack_40[(uint)bVar6 * -2];
      pCVar7 = DAT_00612560;
      *(float *)((int)&CStack_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar7,pCVar8,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(pCStack_2c + 1),0.0,-1);
      engine_drender_cpp_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    }
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01b6886c] == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_00441d70(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
