// Name: core_gun.cpp_CGun_fire_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  float fVar3;
  CCharacter *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  double dVar4;
  byte auStack_130 [12];
  float fStack_124;
  float fStack_120;
  CVector3f CStack_118;
  float fStack_10c;
  EAmmoType EStack_108;
  CMatrix3x3f CStack_104;
  CVector3f CStack_dc;
  CVector3f aCStack_d0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f aCStack_a0 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  byte local_60 [20];
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  CGlass *pCStack_14;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)
                     (&this_ptr->base,(CVector3f *)local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_b8,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_b8);
    return 0;
  }
  aCStack_a0[0].z = (this_ptr->base).bolt_velocity;
  aCStack_a0[0].x = 0.0;
  aCStack_a0[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_34,aCStack_a0);
  CStack_ac.x = CStack_b8.x + CStack_34.x;
  CStack_ac.y = CStack_b8.y + CStack_34.y;
  CStack_ac.z = CStack_b8.z + CStack_34.z;
  fStack_28 = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_40 = CStack_34.x * fStack_28;
  fStack_3c = CStack_34.y * fStack_28;
  fStack_38 = CStack_34.z * fStack_28;
  CStack_dc.x = CStack_b8.x - fStack_40;
  CStack_dc.y = CStack_b8.y - fStack_3c;
  CStack_dc.z = CStack_b8.z - fStack_38;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  iStack_1c = 0;
  do {
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_dc,&CStack_ac);
    dVar4 = (double)fVar3;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    pCVar1 = SUB84(__BITCAST_UINT64(dVar4),0);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                        (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_00448a70(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_02,(char *)this_ptr);
          if (iVar2 != 0) {
            fVar3 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fVar3);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_14);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_14,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      pCVar1 = (*(((this_ptr_01->base).vtable._uw)->_uw).getMuzzlePoint)
                         ((CWeapon *)this_ptr_01,pCVar1);
      this_ptr_00 = g_CDemonSetPtr;
      if (pCVar1 != (CVector3f *)0x0) {
        if (pCStack_14 == (CGlass *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec8);
      auStack_130._0_4_ = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      auStack_130._4_4_ = 0.4;
      CStack_b8.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_b8.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_b8.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      CStack_88.z = (float)10 /
                    SQRT(CStack_b8.z * CStack_b8.z +
                         CStack_b8.x * CStack_b8.x + CStack_b8.y * CStack_b8.y);
      CStack_88.x = CStack_b8.x * CStack_88.z;
      CStack_88.y = CStack_b8.y * CStack_88.z;
      CStack_88.z = CStack_b8.z * CStack_88.z;
      if ((CVector3f *)(auStack_130 + 8) != &CStack_88) {
        auStack_130._8_4_ = CStack_88.x;
        fStack_124 = CStack_88.y;
        fStack_120 = CStack_88.z;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,(CVector3f *)(local_60 + 8),
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_130 + 0x18) != pCVar1) {
        CStack_118.x = pCVar1->x;
        CStack_118.y = pCVar1->y;
        CStack_118.z = pCVar1->z;
      }
      fStack_10c = (float)(this_ptr->base).ammo_type;
      EStack_108 = 0x3e19999a;
      CStack_104.m[0].y = (float)this_ptr;
      CStack_104.m[0].x = 1.41531e-43;
      CStack_104.m[1].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_130);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  CStack_4c.x = CStack_b8.x;
  CStack_4c.z = CStack_b8.z;
  CStack_4c.y = CStack_b8.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_4c,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"45.wav",&CStack_b8);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  CStack_88.x = 3.0;
  CStack_88.y = 3.0;
  CStack_88.z = -4.0;
  aCStack_d0[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  aCStack_d0[0].y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  aCStack_d0[0].z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_104,aCStack_d0);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_104,&CStack_7c,&CStack_88);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&CStack_70,pCVar1);
  if (&CStack_88 != pCVar1) {
    CStack_88.x = pCVar1->x;
    CStack_88.y = pCVar1->y;
    CStack_88.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
