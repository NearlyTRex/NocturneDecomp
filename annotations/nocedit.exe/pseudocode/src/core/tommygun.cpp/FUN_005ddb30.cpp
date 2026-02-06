// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_FUN_005ddb30(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005ddb30(uint param_1) */

int __cdecl core_tommygun_cpp_FUN_005ddb30(void)

{
  float fVar1;
  CCharacter_full_vtable *pCVar2;
  CWeapon *pCVar3;
  CDemonSet *this_ptr;
  CVector3f *pCVar4;
  int iVar5;
  CCharacter *this_ptr_00;
  CDemonActor *pCVar6;
  CFlameCan *this_ptr_01;
  int extraout_EAX;
  CWeapon *in_stack_00000004;
  CCrate *pCStack_150;
  SDamageInfo SStack_148;
  CMatrix3x3f CStack_10c;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  byte auStack_78 [52];
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  float fStack_3c;
  float fStack_2c;
  CDemonActor *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_18;
  
  fVar1 = *(float *)(in_stack_00000004->unk2 + 0xc);
  in_stack_00000004[1].base.actor_name[0] = '\x02';
  in_stack_00000004[1].base.actor_name[1] = '\0';
  in_stack_00000004[1].base.actor_name[2] = '\0';
  in_stack_00000004[1].base.actor_name[3] = '\0';
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = (in_stack_00000004->base).vtable._uc;
  *(float *)(in_stack_00000004->unk2 + 0xc) =
       *(float *)(in_stack_00000004->unk2 + 0xc) + 0.1f;
  pCVar4 = (CVector3f *)(*(pCVar2->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base,&CStack_84,pCVar4);
  iVar5 = core_weapon_cpp_CWeapon_FUN_005ee6e0(in_stack_00000004);
  if (iVar5 == 0) {
    in_stack_00000004[1].base.actor_name[0] = '\0';
    in_stack_00000004[1].base.actor_name[1] = '\0';
    in_stack_00000004[1].base.actor_name[2] = '\0';
    in_stack_00000004[1].base.actor_name[3] = '\0';
    (*((in_stack_00000004->base).vtable._ub)->playSound)
              (&in_stack_00000004->base,"45-dry-!.wav @2.0");
    fVar1 = *(float *)(in_stack_00000004[1].base.actor_name + 4);
    stack0xfffffeb4 = fVar1;
    pCStack_150 = (CCrate *)0x5ddeef;
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)fVar1);
    pCVar3 = in_stack_00000004 + 1;
    (pCVar3->base).actor_name[4] = '\0';
    (pCVar3->base).actor_name[5] = '\0';
    (pCVar3->base).actor_name[6] = '\0';
    (pCVar3->base).actor_name[7] = '\0';
    return 0;
  }
  CStack_c0.z = in_stack_00000004->bolt_velocity;
  CStack_c0.x = 0.0;
  CStack_c0.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&in_stack_00000004->base,&CStack_cc,&CStack_c0);
  CStack_d8.x = CStack_84.x + CStack_cc.x;
  CStack_d8.y = CStack_84.y + CStack_cc.y;
  CStack_d8.z = CStack_84.z + CStack_cc.z;
  fStack_2c = (float)2.5 / in_stack_00000004->bolt_velocity;
  auStack_78._48_4_ = CStack_cc.x * fStack_2c;
  pCStack_44 = (CDemonActor *)(CStack_cc.y * fStack_2c);
  pCStack_40 = (CDemonActor *)(CStack_cc.z * fStack_2c);
  auStack_78._0_4_ = CStack_84.x - (float)auStack_78._48_4_;
  auStack_78._4_4_ = CStack_84.y - (float)pCStack_44;
  auStack_78._8_4_ = CStack_84.z - (float)pCStack_40;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&in_stack_00000004->base);
  if (*(CDemonActor **)&in_stack_00000004->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,*(CDemonActor **)&in_stack_00000004->carried_by_actor);
  }
  iStack_20 = 0;
  do {
    fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,(CVector3f *)auStack_78,&CStack_d8);
    _pCStack_150 = (double)fStack_18;
    if ((_pCStack_150 < 0.0) || (1.0 < _pCStack_150)) goto LAB_005ddd4e;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).isDamageable)(this_ptr_00), 0 < iVar5)) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = pCVar6;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_01 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_01 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              goto LAB_005ddd4e;
            }
            core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_01);
          }
          else {
            core_crate_cpp_CCrate_FUN_00448a70(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_FUN_005e0aa0();
          iVar5 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar5 != 0) {
            fStack_18 = (float)(*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc6)();
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_28);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (extraout_EAX == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).cfunc3)();
      if ((iVar5 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)&in_stack_00000004->carried_by_actor,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if (iStack_20 == 0) {
          in_stack_00000004->ammo_count = in_stack_00000004->ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_148);
      SStack_148.unknown = g_CDemonSetPtr->unk1;
      pCStack_24 = (CCrate *)(*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc6)();
      _pCStack_150 = (double)CONCAT44(0x3ecccccd,pCStack_24);
      auStack_78._24_4_ =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      auStack_78._28_4_ =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      auStack_78._32_4_ =
           (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
      fStack_3c = (float)10 /
                  SQRT((float)auStack_78._32_4_ * (float)auStack_78._32_4_ +
                       (float)auStack_78._24_4_ * (float)auStack_78._24_4_ +
                       (float)auStack_78._28_4_ * (float)auStack_78._28_4_);
      auStack_78._0_4_ = (float)auStack_78._24_4_ * fStack_3c;
      auStack_78._4_4_ = (float)auStack_78._28_4_ * fStack_3c;
      auStack_78._8_4_ = (float)auStack_78._32_4_ * fStack_3c;
      if (&SStack_148 != (SDamageInfo *)auStack_78) {
        SStack_148.unknown = auStack_78._0_4_;
        SStack_148.damage_amount = (float)auStack_78._4_4_;
        SStack_148.damage_flags = auStack_78._8_4_;
      }
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_00->base,(CVector3f *)(auStack_78 + 0x30),
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_148.impact_point.y != pCVar4) {
        SStack_148.impact_point.y = pCVar4->x;
        SStack_148.impact_point.z = pCVar4->y;
        SStack_148.impact_force = pCVar4->z;
      }
      SStack_148.impact_direction.x = (float)in_stack_00000004->ammo_type;
      SStack_148.impact_direction.z = 1.41531e-43;
      SStack_148.impact_direction.y = 0.15;
      SStack_148.damage_type =
           (int)(*((in_stack_00000004->base).vtable._ub)->getCarrier)(&in_stack_00000004->base);
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                (this_ptr_00,(SDamageInfo *)&pCStack_150);
      if (*(int *)(in_stack_00000004->unk1 + 0xc) == 0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (in_stack_00000004->unk4 != 0) {
        fStack_9c = CStack_84.x;
        fStack_94 = CStack_84.z;
        fStack_98 = CStack_84.y + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        CStack_e4.x = 5.0;
        CStack_e4.y = 6.0;
        CStack_e4.z = -6.0;
        CStack_90.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_18 = CStack_90.x;
        CStack_90.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_90.z = 0.0;
        fStack_18 = CStack_90.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_90);
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_10c,&CStack_b4,&CStack_e4);
        pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (&in_stack_00000004->base,&CStack_a8,pCVar4);
        if (&CStack_e4 != pCVar4) {
          CStack_e4.x = pCVar4->x;
          CStack_e4.y = pCVar4->y;
          CStack_e4.z = pCVar4->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
