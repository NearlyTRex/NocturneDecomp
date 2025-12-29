// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005ddb30()

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005ddb30(uint param_1) */

uint core_tommygun_cpp_FUN_005ddb30(void)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CDemonActor *in_stack_00000004;
  int iStack00000008;
  int in_stack_00000030;
  CGlass *in_stack_00000038;
  CGlass *in_stack_0000003c;
  CDemonActor *in_stack_0000004c;
  CBoundingBox3D *out_box;
  double dVar8;
  CBoundingBox3D *in_stack_ffffff0c;
  byte auStack_b8 [12];
  byte auStack_ac [12];
  CMatrix3x3f CStack_a0;
  uint uStack_7c;
  byte auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  byte auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_14;
  
  fVar4 = in_stack_00000004[2].orient_matrix.m[1].z;
  in_stack_00000004[4].actor_name[0x18] = '\x02';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  if (0.0 < fVar4) {
    return 0;
  }
  pCVar1 = in_stack_00000004->vtable;
  in_stack_00000004[2].orient_matrix.m[1].z =
       in_stack_00000004[2].orient_matrix.m[1].z + 0.1f;
  pCVar2 = (CVector3f *)(*pCVar1[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_78,pCVar2);
  iVar3 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar3 == 0) {
    in_stack_00000004[4].actor_name[0x18] = '\0';
    in_stack_00000004[4].actor_name[0x19] = '\0';
    in_stack_00000004[4].actor_name[0x1a] = '\0';
    in_stack_00000004[4].actor_name[0x1b] = '\0';
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[4].actor_name + 0x1c));
    in_stack_00000004[4].actor_name[0x1c] = '\0';
    in_stack_00000004[4].actor_name[0x1d] = '\0';
    in_stack_00000004[4].actor_name[0x1e] = '\0';
    in_stack_00000004[4].actor_name[0x1f] = '\0';
    return 0;
  }
  auStack_ac._8_4_ = in_stack_00000004[2].orient.heading;
  auStack_ac._0_4_ = 0.0;
  auStack_ac._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_b8,(CVector3f *)auStack_ac);
  auStack_b8._0_4_ = fStack_64 + (float)auStack_ac._0_4_;
  fStack_14 = (float)2.5 / in_stack_00000004[2].orient.heading;
  CStack_38.z = (float)auStack_b8._4_4_ * fStack_14;
  fStack_2c = (float)auStack_b8._8_4_ * fStack_14;
  CStack_28.x = (float)auStack_ac._0_4_ * fStack_14;
  local_60 = fStack_6c - CStack_38.z;
  fStack_5c = fStack_68 - fStack_2c;
  fStack_58 = fStack_64 - CStack_28.x;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar5 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  iStack00000008 = 0;
  do {
    out_box = (CBoundingBox3D *)0x5ddd2a;
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_50,(CVector3f *)(auStack_b8 + 8));
    dVar8 = (double)fVar4;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_005ddd4e;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar5 != (CDemonActor *)0x0) &&
       (iVar3 = (*pCVar5->vtable[1].hasCollision)
                          (pCVar5,(SCollisionInfo *)((ulonglong)dVar8 >> 0x20)), 0 < iVar3)) {
      pCVar5 = (CDemonActor *)0x0;
    }
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c790
              (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (in_stack_00000038 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (in_stack_00000030 == 0) {
            if (pCVar7 == (CDemonActor *)0x0) {
              core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
              goto LAB_005ddd4e;
            }
            core_flamecan_cpp_FUN_004cb340();
          }
          else {
            core_crate_cpp_FUN_00448a70();
          }
        }
        else {
          core_trigger_cpp_FUN_005e0aa0();
          iVar3 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar3 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_ffffff0c);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_0000004c);
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(in_stack_00000038);
        if (extraout_EAX == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (in_stack_0000003c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (*pCVar5->vtable[1].renderOpaque)(pCVar5);
      if ((iVar3 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if (unaff_ESI == 0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,out_box);
      fVar4 = 0.4;
      CStack_28.x = (g_CDemonSetPtr->collision_result_vec2).x -
                    (g_CDemonSetPtr->collision_result_vec1).x;
      CStack_28.y = (g_CDemonSetPtr->collision_result_vec2).y -
                    (g_CDemonSetPtr->collision_result_vec1).y;
      CStack_28.z = (g_CDemonSetPtr->collision_result_vec2).z -
                    (g_CDemonSetPtr->collision_result_vec1).z;
      CStack_38.x = (float)10 /
                    SQRT(CStack_28.z * CStack_28.z +
                         CStack_28.x * CStack_28.x + CStack_28.y * CStack_28.y);
      fStack_40 = CStack_28.x * CStack_38.x;
      fStack_3c = CStack_28.y * CStack_38.x;
      CStack_38.x = CStack_28.z * CStack_38.x;
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar5,(CVector3f *)&stack0xfffffff0,
                          &g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)&stack0xffffff04 != pCVar2) {
        in_stack_ffffff0c = (CBoundingBox3D *)pCVar2->z;
      }
      (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,&stack0xfffffef4,fVar4);
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack00000008 = iStack00000008 + 1;
    if (3 < iStack00000008) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        fStack_40 = CStack_28.x;
        CStack_38.x = CStack_28.z;
        fStack_3c = CStack_28.y + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        CStack_a0.m[2].y = 5.0;
        CStack_a0.m[2].z = 6.0;
        uStack_7c = 0xc0c00000;
        fStack_2c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_28.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_28.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)(auStack_ac + 8),&CStack_28);
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_a0,(CVector3f *)(auStack_50 + 8),(CVector3f *)auStack_78);
        pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (in_stack_00000004,&CStack_38,pCVar2);
        if ((CVector3f *)(auStack_78 + 8) != pCVar2) {
          auStack_78._8_4_ = pCVar2->x;
          fStack_6c = pCVar2->y;
          fStack_68 = pCVar2->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
