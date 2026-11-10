// Name: core_gun.cpp_CGun_fire_FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

{
  CDemonSet *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  byte bVar4;
  float afStackY_114c [986];
  uint *puVar5;
  CWeapon *this_ptr_04;
  CMatrix3x3f *rotation_matrix;
  int iStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  CGun *pCStack_194;
  uint uStack_190;
  CMatrix3x3f CStack_18c;
  uint uStack_164;
  float afStack_160 [5];
  CVector3f CStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_134 [3];
  CVector3f CStack_128;
  uint uStack_11c;
  float afStack_118 [4];
  uint uStack_108;
  float afStack_104 [3];
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [5];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  float fStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xe8))(this_ptr);
  puVar5 = &uStack_11c;
  uStack_11c = uStack_98;
  afStack_118[(uint)bVar4 * -2] = afStack_94[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr,puVar5);
  CStack_128.x = afStack_160[2];
  *(float *)((int)&CStack_128 + (uint)bVar4 * -8 + 4) = afStack_160[(uint)bVar4 * -2 + 3];
  this_ptr_04 = (CWeapon *)this_ptr;
  *(float *)((int)&CStack_128 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_04);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_128);
    return 0;
  }
  afStack_104[2] = *(float *)&this_ptr->field_0x444;
  afStack_104[0] = 0.0;
  afStack_104[1] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_118 + 5);
  fVar2 = CStack_128.y;
  fVar1 = CStack_128.x;
  afStack_b8[2] = afStack_7c[2];
  afStack_b8[(uint)bVar4 * -2 + 3] = afStack_7c[(uint)bVar4 * -2 + 3];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_d4 = fVar1 + afStack_b8[2];
  fStack_d0 = fVar2 + afStack_b8[3];
  fStack_cc = CStack_128.z + fStack_a8;
  afStack_e0[0] = fVar1 + afStack_b8[2];
  afStack_f4[(uint)bVar4 * -2 + 6] = afStack_f4[(uint)bVar4 * -2 + 9];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  fVar1 = CStack_128.x;
  fStack_28 = (float)_DAT_005d97e6 / *(float *)&this_ptr->field_0x444;
  fStack_50 = afStack_b8[2] * fStack_28;
  fStack_4c = afStack_b8[3] * fStack_28;
  fStack_48 = fStack_a8 * fStack_28;
  fStack_bc = afStack_b8[2] * fStack_28;
  afStack_b8[(uint)bVar4 * -2] = afStack_7c[(uint)bVar4 * -2 + 0xc];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_38 = fVar1 - fStack_bc;
  fStack_34 = CStack_128.y - afStack_b8[0];
  fStack_30 = CStack_128.z - afStack_b8[1];
  afStack_134[0] = fVar1 - fStack_bc;
  afStack_160[(uint)bVar4 * -2 + 0xc] = afStack_7c[(uint)bVar4 * -2 + 0x12];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if (*(CDemonActor **)&this_ptr->field_0x460 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x460);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0
                                 (g_CDemonSetPtr,afStack_160 + 0xb,afStack_f4 + 5);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_02;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (iStack_18 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
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
            core_crate_cpp_FUN_0043a350(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xf4))(this_ptr);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,fStack_14);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_2c->base);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar3 != 0) {
        if (iStack_20 == 0) {
          *(int *)&this_ptr->field_0x6c4 = *(int *)&this_ptr->field_0x6c4 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&iStack_1c8);
      iStack_1c8 = g_CDemonSetPtr->collision_part_index;
      fStack_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xf4))(this_ptr);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_140 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_13c = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_138 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_f4[2] = fStack_140;
      afStack_f4[(uint)bVar4 * -2 + 3] = afStack_160[(uint)bVar4 * -2 + 9];
      afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fStack_1c = (float)_DAT_005d97f6 /
                  SQRT(fStack_e4 * fStack_e4 +
                       afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]);
      fStack_68 = afStack_f4[2] * fStack_1c;
      fStack_64 = afStack_f4[3] * fStack_1c;
      fStack_60 = fStack_e4 * fStack_1c;
      afStack_118[2] = afStack_f4[2] * fStack_1c;
      afStack_118[(uint)bVar4 * -2 + 3] = afStack_7c[(uint)bVar4 * -2 + 6];
      afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&fStack_1bc != afStack_118 + 2) {
        fStack_1bc = afStack_118[2];
        uStack_1b8 = afStack_118[3];
        uStack_1b4 = uStack_108;
      }
      core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->collision_impact_position);
      fStack_44 = fStack_80;
      afStack_7c[(uint)bVar4 * -2 + 0xf] = afStack_7c[(uint)bVar4 * -2];
      afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_1ac != afStack_7c + 0xe) {
        fStack_1ac = fStack_44;
        uStack_1a8 = uStack_40;
        uStack_1a4 = uStack_3c;
      }
      uStack_1a0 = *(uint *)&this_ptr->field_0x6c8;
      uStack_198 = 0x65;
      pCStack_194 = this_ptr;
      uStack_19c = 0;
      uStack_190 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x9c))(this_ptr);
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&iStack_1c8);
      if (*(int *)&this_ptr->field_0x440 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = (CMatrix3x3f *)&this_ptr->field_0x3c;
  CStack_c8.x = CStack_128.x;
  *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_128 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_128 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  CStack_c8.y = CStack_c8.y + _DAT_005d97ee;
  core_fire_cpp_FUN_0049d120(0x01C3DEB4,&CStack_c8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"45.wav",&CStack_128);
  *(uint *)&this_ptr->field_0x45c = 0x3eaa7efa;
  CStack_8c.x = 3.0;
  CStack_8c.y = 3.0;
  CStack_8c.z = -4.0;
  CStack_a4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  fStack_14 = CStack_a4.x;
  CStack_a4.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_a4.z = 0.0;
  fStack_14 = CStack_a4.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_18c,&CStack_a4);
  core_dirmat_cpp_FUN_00449530(&CStack_18c,&CStack_8c);
  puVar5 = &uStack_f8;
  uStack_f8 = uStack_164;
  afStack_f4[(uint)bVar4 * -2] = afStack_160[(uint)bVar4 * -2];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(this_ptr,puVar5);
  CStack_14c.x = fStack_5c;
  afStack_160[(uint)bVar4 * -2 + 6] = afStack_7c[(uint)bVar4 * -2 + 9];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  if (&CStack_8c != (CVector3f *)(afStack_160 + 5)) {
    CStack_8c.x = CStack_14c.x;
    CStack_8c.y = CStack_14c.y;
    CStack_8c.z = CStack_14c.z;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0049e970
            (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30,
             &CStack_8c,model_ptr);
  return 1;
}
