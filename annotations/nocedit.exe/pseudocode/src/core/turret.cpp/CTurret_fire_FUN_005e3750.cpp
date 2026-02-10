// Name: core_turret.cpp_CTurret_fire_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CCharacter *this_ptr_00;
  int iVar3;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  int extraout_EAX;
  CTrigger *actor;
  double dVar4;
  byte auStack_cc [28];
  float fStack_b0;
  float fStack_ac;
  CDemonActor *pCStack_a8;
  CDemonActor *pCStack_a4;
  CVector3f CStack_a0;
  CVector3f aCStack_94 [2];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f aCStack_64 [3];
  float fStack_40;
  float fStack_3c;
  CDemonActor *pCStack_38;
  CVector3f CStack_34;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_14;
  
  pCVar2 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_a0,pCVar2);
  aCStack_64[0].z = (this_ptr->base).bolt_velocity;
  aCStack_64[0].x = 0.0;
  aCStack_64[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_34,aCStack_64);
  aCStack_94[0].x = CStack_a0.x + CStack_34.x;
  aCStack_94[0].y = CStack_a0.y + CStack_34.y;
  aCStack_94[0].z = CStack_a0.z + CStack_34.z;
  CStack_70.x = CStack_a0.x;
  CStack_70.y = CStack_a0.y;
  CStack_70.z = CStack_a0.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_70,aCStack_94);
    dVar4 = (double)fStack_14;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), 0 < iVar3)) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_01;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_01 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_01);
          iVar3 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_01);
          actor = pCStack_28;
          if (iVar3 != 0) {
            (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                      ((CCharacter *)this_ptr,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
            core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_01);
            actor = pCStack_28;
          }
          goto LAB_005e3ae2;
        }
        if (pCStack_24 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
            break;
          }
          core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_02);
        }
        else {
          core_crate_cpp_CCrate_FUN_00448a70(pCStack_24);
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
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
      auStack_cc._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
      auStack_cc._4_4_ = 0.4;
      fStack_7c = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_78 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_74 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      fVar1 = (float)10 /
              SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
      fStack_40 = fStack_7c * fVar1;
      fStack_3c = fStack_78 * fVar1;
      pCStack_38 = (CDemonActor *)(fStack_74 * fVar1);
      if ((float *)(auStack_cc + 8) != &fStack_40) {
        auStack_cc._8_4_ = fStack_40;
        auStack_cc._12_4_ = fStack_3c;
        auStack_cc._16_4_ = pCStack_38;
      }
      actor = (CTrigger *)0x5e3a62;
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_00->base,&CStack_70,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_cc + 0x18) != pCVar2) {
        auStack_cc._24_4_ = pCVar2->x;
        fStack_b0 = pCVar2->y;
        fStack_ac = pCVar2->z;
      }
      pCStack_a8 = (CDemonActor *)(this_ptr->base).ammo_type;
      pCStack_a4 = (CDemonActor *)0x3f800000;
      CStack_a0.y = (float)this_ptr;
      CStack_a0.x = 1.41531e-43;
      aCStack_94[0].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                (this_ptr_00,(SDamageInfo *)auStack_cc);
      if (*(int *)((this_ptr->base).unk1 + 0xc) == 0) break;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&actor->base);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  fStack_40 = CStack_a0.x;
  pCStack_38 = (CDemonActor *)CStack_a0.z;
  fStack_3c = CStack_a0.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  fVar1 = this_ptr->fire_delay_time;
  this_ptr->unk5[0x50] = '\x02';
  this_ptr->unk5[0x51] = '\0';
  this_ptr->unk5[0x52] = '\0';
  this_ptr->unk5[0x53] = '\0';
  *(float *)((this_ptr->base).unk2 + 0xc) = fVar1;
  return 1;
}
