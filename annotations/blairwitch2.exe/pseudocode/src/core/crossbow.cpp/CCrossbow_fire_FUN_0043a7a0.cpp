// Name: core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0
// Address: 0043a7a0
// Address Range: [[0043a7a0, 0043ae0d]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043a7a0(CCrossbow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043a7a0(CCrossbow *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  byte bVar4;
  float afStackY_10f4 [995];
  float *pfVar5;
  CCrossbow *this_ptr_03;
  double dVar6;
  int *apiStack_148 [4];
  int aiStack_138 [2];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  EAmmoType EStack_114;
  uint uStack_110;
  CVector3f CStack_10c;
  CDemonActor *pCStack_100;
  float afStack_fc [5];
  float fStack_e8;
  float afStack_e4 [5];
  float fStack_d0;
  float afStack_cc [5];
  uint uStack_b8;
  uint uStack_b0;
  float afStack_ac [6];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [5];
  float afStack_70 [6];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CDemonActor *pCStack_40;
  float afStack_3c [4];
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CTrigger *pCStack_20;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_ac;
  uStack_b0 = uStack_b8;
  afStack_ac[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 6];
  afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
  CStack_10c.x = afStack_84[2];
  *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + 4) = afStack_84[(uint)bVar4 * -2 + 3];
  this_ptr_03 = this_ptr;
  *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr_03->base);
  if (iVar2 == 0) {
    return 0;
  }
  afStack_cc[4] = (this_ptr->base).bolt_velocity;
  afStack_cc[2] = 0.0;
  afStack_cc[3] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_cc + 2);
  fVar1 = CStack_10c.y;
  fVar3 = CStack_10c.x;
  fStack_58 = fStack_88;
  afStack_54[(uint)bVar4 * -2] = afStack_84[(uint)bVar4 * -2];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_3c[2] = fVar3 + fStack_58;
  afStack_3c[3] = fVar1 + afStack_54[0];
  fStack_2c = CStack_10c.z + afStack_54[1];
  afStack_70[0] = fVar3 + fStack_58;
  afStack_84[(uint)bVar4 * -2 + 6] = afStack_3c[(uint)bVar4 * -2 + 3];
  afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fVar1 = CStack_10c.y;
  fVar3 = CStack_10c.x;
  fStack_24 = (float)_DAT_005ce22e / (this_ptr->base).bolt_velocity;
  fStack_e8 = fStack_58 * fStack_24;
  afStack_e4[0] = afStack_54[0] * fStack_24;
  afStack_e4[1] = afStack_54[1] * fStack_24;
  afStack_54[2] = fStack_58 * fStack_24;
  afStack_54[(uint)bVar4 * -2 + 3] = afStack_e4[(uint)bVar4 * -2];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pCStack_100 = (CDemonActor *)(fVar3 - afStack_54[2]);
  afStack_fc[0] = fVar1 - afStack_54[3];
  afStack_fc[1] = CStack_10c.z - fStack_44;
  pCStack_40 = (CDemonActor *)(fVar3 - afStack_54[2]);
  afStack_3c[(uint)bVar4 * -2] = afStack_fc[(uint)bVar4 * -2];
  afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,actor);
  }
  iStack_28 = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&pCStack_40,afStack_84 + 5);
    dVar6 = (double)fVar3;
    fStack_14 = fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash,dVar6,
                           fVar3);
    if ((iStack_18 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar2)) {
      iStack_18 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash,dVar6,fVar3
                            );
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_02;
    if (iStack_18 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_0049d2c0
                    (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
        iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar2 != 0) {
          fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                    (int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,fVar3);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_20->base);
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_28 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)apiStack_148);
      apiStack_148[0] = (int *)g_CDemonSetPtr->collision_part_index;
      iVar2 = (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                        ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),(int)((ulonglong)dVar6 >> 0x20));
      aiStack_138[1] = 0x3ecccccd;
      aiStack_138[0] = iVar2;
      fStack_88 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_84[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_84[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_ac[3] = fStack_88;
      afStack_ac[(uint)bVar4 * -2 + 4] = afStack_84[(uint)bVar4 * -2];
      afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
           afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar3 = (float)_DAT_005ce236 /
              SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
      fStack_d0 = fStack_94 * fVar3;
      afStack_cc[0] = fStack_90 * fVar3;
      afStack_cc[1] = fStack_8c * fVar3;
      fStack_58 = fStack_94 * fVar3;
      afStack_54[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2];
      afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_130 != &fStack_58) {
        fStack_130 = fStack_58;
        fStack_12c = afStack_54[0];
        fStack_128 = afStack_54[1];
      }
      core_actor_cpp_FUN_00408de0();
      fStack_e8 = afStack_cc[2];
      afStack_e4[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 3];
      afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&fStack_120 != &fStack_e8) {
        fStack_120 = fStack_e8;
        fStack_11c = afStack_e4[0];
        fStack_118 = afStack_e4[1];
      }
      EStack_114 = (this_ptr->base).ammo_type;
      CStack_10c.x = 1.45735e-43;
      CStack_10c.y = (float)this_ptr;
      uStack_110 = 0x3e19999a;
      pCStack_100 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      apiStack_148[0] = aiStack_138;
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x110))(iVar2);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_10c);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
