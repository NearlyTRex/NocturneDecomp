// Name: core_gun.cpp_CGun_fire_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  int extraout_EAX;
  double dVar3;
  CDemonActor *pCVar4;
  int in_stack_fffffebc;
  byte auStack_130 [28];
  float fStack_114;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f aCStack_d4 [2];
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f aCStack_a4 [2];
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f aCStack_74 [2];
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  int iStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_bc,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_bc);
    return 0;
  }
  aCStack_a4[0].z = (this_ptr->base).bolt_velocity;
  aCStack_a4[0].x = 0.0;
  aCStack_a4[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_38,aCStack_a4);
  CStack_b0.x = CStack_bc.x + CStack_38.x;
  CStack_b0.y = CStack_bc.y + CStack_38.y;
  CStack_b0.z = CStack_bc.z + CStack_38.z;
  fStack_2c = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_44 = CStack_38.x * fStack_2c;
  fStack_40 = CStack_38.y * fStack_2c;
  fStack_3c = CStack_38.z * fStack_2c;
  CStack_e0.x = CStack_bc.x - fStack_44;
  CStack_e0.y = CStack_bc.y - fStack_40;
  CStack_e0.z = CStack_bc.z - fStack_3c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar4 = (this_ptr->base).carried_by_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_e0,&CStack_b0);
    dVar3 = (double)fStack_14;
    if ((dVar3 < 0.0) || (1.0 < dVar3)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              break;
            }
            core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_FUN_00448a70(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_02);
          if (iVar2 != 0) {
            in_stack_fffffebc =
                 (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
            core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_02);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_28->base);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (extraout_EAX == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_18,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar4 = (CDemonActor *)((ulonglong)dVar3 >> 0x20);
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec0);
      auStack_130._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar4,in_stack_fffffebc);
      auStack_130._4_4_ = 0.4;
      CStack_bc.y = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_bc.z = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_b0.x = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_80.x = (float)10 /
                    SQRT(CStack_b0.x * CStack_b0.x +
                         CStack_bc.y * CStack_bc.y + CStack_bc.z * CStack_bc.z);
      CStack_8c.y = CStack_bc.y * CStack_80.x;
      CStack_8c.z = CStack_bc.z * CStack_80.x;
      CStack_80.x = CStack_b0.x * CStack_80.x;
      if ((float *)(auStack_130 + 8) != &CStack_8c.y) {
        auStack_130._8_4_ = CStack_8c.y;
        auStack_130._12_4_ = CStack_8c.z;
        auStack_130._16_4_ = CStack_80.x;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_58,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_130 + 0x18) != pCVar1) {
        auStack_130._24_4_ = pCVar1->x;
        fStack_114 = pCVar1->y;
        fStack_110 = pCVar1->z;
      }
      pCStack_10c = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_108.m[0].x = 0.15;
      CStack_108.m[0].z = (float)this_ptr;
      CStack_108.m[0].y = 1.41531e-43;
      CStack_108.m[1].y =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffebc = 0x4f0a08;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_130);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  CStack_58.z = CStack_bc.x;
  fStack_48 = CStack_bc.z;
  fStack_4c = CStack_bc.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"45.wav",&CStack_bc);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  CStack_8c.x = 3.0;
  CStack_8c.y = 3.0;
  CStack_8c.z = -4.0;
  aCStack_d4[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_14 = aCStack_d4[0].x;
  aCStack_d4[0].y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  aCStack_d4[0].z = 0.0;
  fStack_14 = aCStack_d4[0].y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,aCStack_d4);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_108,&CStack_80,&CStack_8c);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,aCStack_74,pCVar1);
  if (&CStack_8c != pCVar1) {
    CStack_8c.x = pCVar1->x;
    CStack_8c.y = pCVar1->y;
    CStack_8c.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
