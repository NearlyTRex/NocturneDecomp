// Name: core_gun.cpp_CGun_fire_FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  float fVar3;
  byte bVar4;
  float afStackY_1148 [986];
  float *pfVar5;
  CWeapon *this_ptr_04;
  CMatrix3x3f *rotation_matrix;
  double dVar6;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  CDemonActor *pCStack_190;
  CDemonActor *pCStack_18c;
  CMatrix3x3f CStack_188;
  uint uStack_160;
  float afStack_15c [5];
  CVector3f aCStack_148 [2];
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  float afStack_118 [6];
  float fStack_100;
  float afStack_fc [5];
  float fStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f aCStack_88 [2];
  float fStack_70;
  float afStack_6c [5];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_34;
  float afStack_30 [2];
  CTrigger *pCStack_28;
  float fStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_118;
  CStack_124.z = fStack_94;
  afStack_118[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
  CStack_124.x = afStack_15c[2];
  afStack_118[(uint)bVar4 * -2 + -2] = afStack_15c[(uint)bVar4 * -2 + 3];
  this_ptr_04 = &this_ptr->base;
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_04);
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_124);
    return 0;
  }
  afStack_fc[1] = (this_ptr->base).bolt_velocity;
  fStack_100 = 0.0;
  afStack_fc[0] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,&fStack_100);
  fVar3 = CStack_124.y;
  fVar2 = CStack_124.x;
  afStack_b4[2] = fStack_70;
  afStack_b4[(uint)bVar4 * -2 + 3] = afStack_6c[(uint)bVar4 * -2];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_d0 = fVar2 + afStack_b4[2];
  fStack_cc = fVar3 + afStack_b4[3];
  fStack_c8 = CStack_124.z + fStack_a4;
  fStack_dc = fVar2 + afStack_b4[2];
  afStack_fc[(uint)bVar4 * -2 + 9] = afStack_fc[(uint)bVar4 * -2 + 0xc];
  afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fVar2 = CStack_124.x;
  fStack_24 = (float)_DAT_005d97e6 / (this_ptr->base).bolt_velocity;
  afStack_54[2] = afStack_b4[2] * fStack_24;
  afStack_54[3] = afStack_b4[3] * fStack_24;
  fStack_44 = fStack_a4 * fStack_24;
  fStack_b8 = afStack_b4[2] * fStack_24;
  afStack_b4[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 3];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_34 = fVar2 - fStack_b8;
  afStack_30[0] = CStack_124.y - afStack_b4[0];
  afStack_30[1] = CStack_124.z - afStack_b4[1];
  fStack_130 = fVar2 - fStack_b8;
  afStack_12c[(uint)bVar4 * -2] = afStack_30[(uint)bVar4 * -2];
  afStack_12c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,actor);
  }
  iStack_1c = 0;
  do {
    fVar2 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&fStack_130,afStack_fc + 8);
    dVar6 = (double)fVar2;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_14 != 0) &&
       (iVar1 = (**(code **)(*(int *)(iStack_14 + 0x2b0) + 0x114))(iStack_14), 0 < iVar1)) {
      iStack_14 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (iStack_14 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50
                        (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_0043a350(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
          iVar1 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar1 != 0) {
            fVar2 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                      (int)((ulonglong)dVar6 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,fVar2);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_28->base);
        }
      }
      else {
        iVar1 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar1 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)(iStack_14 + 0x2b0) + 0xe8))(iStack_14);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar1 != 0) {
        if (iStack_1c == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe3c);
      fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                               ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                (int)((ulonglong)dVar6 >> 0x20));
      fStack_1b0 = 0.4;
      fStack_1b4 = fVar3;
      fStack_130 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_12c[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_12c[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_e8 = fStack_130;
      afStack_fc[(uint)bVar4 * -2 + 6] = afStack_12c[(uint)bVar4 * -2];
      afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_12c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar2 = (float)_DAT_005d97f6 /
              SQRT(fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8);
      fStack_58 = fStack_dc * fVar2;
      afStack_54[0] = fStack_d8 * fVar2;
      afStack_54[1] = fStack_d4 * fVar2;
      fStack_100 = fStack_dc * fVar2;
      afStack_fc[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2];
      afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&stack0xfffffe54 != &fStack_100) {
        fStack_1ac = fStack_100;
        fStack_1a8 = afStack_fc[0];
        fStack_1a4 = afStack_fc[1];
      }
      core_actor_cpp_FUN_00408de0();
      fStack_34 = fStack_70;
      afStack_30[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2];
      afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&stack0xfffffe64 != &fStack_34) {
        fStack_19c = fStack_34;
        fStack_198 = afStack_30[0];
        fStack_194 = afStack_30[1];
      }
      pCStack_190 = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_188.m[0].x = 1.41531e-43;
      CStack_188.m[0].y = (float)this_ptr;
      pCStack_18c = (CDemonActor *)0x0;
      CStack_188.m[1].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0x110))();
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_c4.x = CStack_124.x;
  *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + 4) = afStack_118[(uint)bVar4 * -2 + -2];
  *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  CStack_c4.y = CStack_c4.y + _DAT_005d97ee;
  core_fire_cpp_FUN_0049d120(0x01C3DEB4,&CStack_c4,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"45.wav",&CStack_124);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  aCStack_88[0].x = 3.0;
  aCStack_88[0].y = 3.0;
  aCStack_88[0].z = -4.0;
  CStack_a0.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_a0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_a0.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_188,&CStack_a0);
  core_dirmat_cpp_FUN_00449530(&CStack_188,aCStack_88);
  pfVar5 = afStack_fc + 2;
  afStack_fc[2] = (float)uStack_160;
  afStack_fc[(uint)bVar4 * -2 + 3] = afStack_15c[(uint)bVar4 * -2];
  afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(this_ptr,pfVar5);
  aCStack_148[0].x = fStack_58;
  afStack_15c[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2];
  afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (aCStack_88 != (CVector3f *)(afStack_15c + 5)) {
    aCStack_88[0].x = aCStack_148[0].x;
    aCStack_88[0].y = aCStack_148[0].y;
    aCStack_88[0].z = aCStack_148[0].z;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0049e970
            (0x01C3DEB4,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient.vec
             ,aCStack_88,model_ptr);
  return 1;
}
