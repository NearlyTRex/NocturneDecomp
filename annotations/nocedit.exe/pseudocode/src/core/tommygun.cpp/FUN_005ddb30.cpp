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
  CDemonActor *in_stack_00000004;
  SCollisionInfo *collision_info;
  double dVar8;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int iStack_114;
  CVector3f CStack_110;
  byte auStack_100 [32];
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  byte auStack_d4 [12];
  CVector3f CStack_c8;
  CVector3f aCStack_bc [2];
  CVector3f CStack_a4;
  float fStack_98;
  CVector3f CStack_94;
  float fStack_88;
  byte auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  CVector3f aCStack_74 [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  CVector3f CStack_24;
  CGlass *pCStack_18;
  CDemonActor *pCStack_14;
  
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
            (in_stack_00000004,(CVector3f *)(auStack_84 + 4),pCVar2);
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
  aCStack_bc[0].z = in_stack_00000004[2].orient.heading;
  aCStack_bc[0].x = 0.0;
  aCStack_bc[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_c8,aCStack_bc);
  auStack_d4._0_4_ = (float)auStack_84._4_4_ + CStack_c8.x;
  auStack_d4._4_4_ = fStack_7c + CStack_c8.y;
  auStack_d4._8_4_ = fStack_78 + CStack_c8.z;
  fStack_28 = (float)2.5 / in_stack_00000004[2].orient.heading;
  fStack_44 = CStack_c8.x * fStack_28;
  fStack_40 = CStack_c8.y * fStack_28;
  fStack_3c = CStack_c8.z * fStack_28;
  aCStack_74[0].x = (float)auStack_84._4_4_ - fStack_44;
  aCStack_74[0].y = fStack_7c - fStack_40;
  aCStack_74[0].z = fStack_78 - fStack_3c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar5 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  CStack_24.z = 0.0;
  do {
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,aCStack_74,(CVector3f *)auStack_d4);
    dVar8 = (double)fVar4;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_005ddd4e;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    collision_info = SUB84 /* extract 2-byte value */(dVar8,0);
    if ((pCVar5 != (CDemonActor *)0x0) &&
       (iVar3 = (*pCVar5->vtable[1].hasCollision)(pCVar5,collision_info), 0 < iVar3)) {
      pCVar5 = (CDemonActor *)0x0;
    }
    pCStack_14 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    CStack_24.x = (float)pCVar6;
    CStack_24.z = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (CStack_24.y == 0.0) {
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
            (*in_stack_00000004->vtable[1].getBoundingBox)
                      (in_stack_00000004,(CBoundingBox3D *)collision_info);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_24.x)
          ;
        }
      }
      else {
        core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (extraout_EAX == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_18,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (*pCVar5->vtable[1].renderOpaque)(pCVar5);
      if ((iVar3 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if ((CDemonActor *)CStack_24.z == (CDemonActor *)0x0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffebc);
      (*in_stack_00000004->vtable[1].getBoundingBox)
                (in_stack_00000004,(CBoundingBox3D *)collision_info);
      fStack_3c = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_38 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_34 = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      pCStack_18 = (CGlass *)
                   ((float)10 /
                   SQRT(fStack_34 * fStack_34 + fStack_3c * fStack_3c + fStack_38 * fStack_38));
      fStack_54 = fStack_3c * (float)pCStack_18;
      fStack_50 = fStack_38 * (float)pCStack_18;
      fStack_4c = fStack_34 * (float)pCStack_18;
      if (&fStack_124 != &fStack_54) {
        fStack_124 = fStack_54;
        fStack_120 = fStack_50;
        fStack_11c = fStack_4c;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar5,&CStack_24,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_110 != pCVar2) {
        fStack_124 = pCVar2->y;
        fStack_120 = pCVar2->z;
      }
      fStack_11c = *(float *)(in_stack_00000004[4].actor_name + 0xc);
      iStack_114 = 0x65;
      fStack_118 = 0.15;
      CStack_110.x = (float)in_stack_00000004;
      CStack_110.y = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,&stack0xfffffebc,(float)collision_info)
      ;
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_24.z = (float)((char *)CStack_24.z + 1);
    if (3 < (int)CStack_24.z) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        fStack_98 = (float)auStack_84._4_4_;
        CStack_94.y = fStack_78;
        CStack_94.x = fStack_7c + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        fStack_e0 = 5.0;
        uStack_dc = 0x40c00000;
        uStack_d8 = 0xc0c00000;
        fStack_88 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        auStack_84._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_7c = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)auStack_100,(CVector3f *)auStack_84);
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)(auStack_100 + 4),&CStack_a4,(CVector3f *)auStack_d4);
        pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (in_stack_00000004,&CStack_94,pCVar2);
        if ((CVector3f *)(auStack_d4 + 8) != pCVar2) {
          auStack_d4._8_4_ = pCVar2->x;
          CStack_c8.x = pCVar2->y;
          CStack_c8.y = pCVar2->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
