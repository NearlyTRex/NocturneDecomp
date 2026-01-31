// Name: core_gun.cpp_CGun_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_FUN_004f0350(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_FUN_004f0350(CGun *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr_01;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  int extraout_EAX;
  ulonglong uStack_150;
  SDamageInfo SStack_148;
  CMatrix3x3f CStack_10c;
  CVector3f CStack_e4;
  CVector3f aCStack_d8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  byte auStack_a8 [28];
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f aCStack_78 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_28;
  int iStack_24;
  CGlass *pCStack_1c;
  float fStack_18;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_c0,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_c0);
    return 0;
  }
  auStack_a8._8_4_ = (this_ptr->base).bolt_velocity;
  auStack_a8._0_4_ = 0.0;
  auStack_a8._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_3c,(CVector3f *)auStack_a8);
  CStack_b4.x = CStack_c0.x + CStack_3c.x;
  CStack_b4.y = CStack_c0.y + CStack_3c.y;
  CStack_b4.z = CStack_c0.z + CStack_3c.z;
  fStack_30 = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_48 = CStack_3c.x * fStack_30;
  fStack_44 = CStack_3c.y * fStack_30;
  fStack_40 = CStack_3c.z * fStack_30;
  CStack_e4.x = CStack_c0.x - fStack_48;
  CStack_e4.y = CStack_c0.y - fStack_44;
  CStack_e4.z = CStack_c0.z - fStack_40;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar3 = *(CDemonActor **)&(this_ptr->base).carried_by_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
  }
  iStack_24 = 0;
  do {
    fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_e4,&CStack_b4);
    uStack_150 = (double)fStack_18;
    if ((uStack_150 < 0.0) || (1.0 < uStack_150)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).isDamageable)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = pCVar3;
    pCStack_28 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_28 == (CDemonActor *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              break;
            }
            core_flamecan_cpp_FUN_004cb340();
          }
          else {
            core_crate_cpp_FUN_00448a70();
          }
        }
        else {
          core_trigger_cpp_FUN_005e0aa0();
          iVar2 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar2 != 0) {
            fStack_18 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc6)();
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_2c);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).cfunc3)();
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_24 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_148);
      SStack_148.unknown = g_CDemonSetPtr->unk1;
      iStack_24 = (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc6)();
      uStack_150 = (double)CONCAT44(0x3ecccccd,iStack_24);
      aCStack_d8[0].x =
           (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x;
      aCStack_d8[0].y =
           (g_CDemonSetPtr->collision_result_vec2).y - (g_CDemonSetPtr->collision_result_vec1).y;
      aCStack_d8[0].z =
           (g_CDemonSetPtr->collision_result_vec2).z - (g_CDemonSetPtr->collision_result_vec1).z;
      pCStack_2c = (CDemonActor *)
                   ((float)10 /
                   SQRT(aCStack_d8[0].z * aCStack_d8[0].z +
                        aCStack_d8[0].x * aCStack_d8[0].x + aCStack_d8[0].y * aCStack_d8[0].y));
      auStack_a8._0_4_ = aCStack_d8[0].x * (float)pCStack_2c;
      auStack_a8._4_4_ = aCStack_d8[0].y * (float)pCStack_2c;
      auStack_a8._8_4_ = aCStack_d8[0].z * (float)pCStack_2c;
      if (&SStack_148 != (SDamageInfo *)auStack_a8) {
        SStack_148.unknown = auStack_a8._0_4_;
        SStack_148.damage_amount = (float)auStack_a8._4_4_;
        SStack_148.damage_flags = auStack_a8._8_4_;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,aCStack_78,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&SStack_148.impact_point.y != pCVar1) {
        SStack_148.impact_point.y = pCVar1->x;
        SStack_148.impact_point.z = pCVar1->y;
        SStack_148.impact_force = pCVar1->z;
      }
      SStack_148.impact_direction.x = (float)(this_ptr->base).ammo_type;
      SStack_148.impact_direction.y = 0.15;
      SStack_148.ammo_type = (int)this_ptr;
      SStack_148.impact_direction.z = 1.41531e-43;
      SStack_148.damage_type =
           (int)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)&uStack_150);
      if (*(int *)((this_ptr->base).unk1 + 0xc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_54 = CStack_c0.x;
  fStack_4c = CStack_c0.z;
  fStack_50 = CStack_c0.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"45.wav",&CStack_c0);
  (this_ptr->base).unk2[0xc] = -6;
  (this_ptr->base).unk2[0xd] = '~';
  (this_ptr->base).unk2[0xe] = -0x56;
  (this_ptr->base).unk2[0xf] = '>';
  auStack_a8._24_4_ = 3.0;
  fStack_8c = 3.0;
  fStack_88 = -4.0;
  aCStack_d8[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_18 = aCStack_d8[0].x;
  aCStack_d8[0].y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  aCStack_d8[0].z = 0.0;
  fStack_18 = aCStack_d8[0].y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,aCStack_d8);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_10c,&CStack_84,(CVector3f *)(auStack_a8 + 0x18));
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,aCStack_78,pCVar1);
  if ((CVector3f *)(auStack_a8 + 0x18) != pCVar1) {
    auStack_a8._24_4_ = pCVar1->x;
    fStack_8c = pCVar1->y;
    fStack_88 = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
