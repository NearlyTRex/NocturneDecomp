// Name: core_tommygun.cpp_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005ddb30()

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005ddb30(uint param_1) */

uint core_tommygun_cpp_FUN_005ddb30(void)

{
  float fVar1;
  CDemonActor_vtable *pCVar2;
  CDemonSet *this_ptr;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  double dVar8;
  CBoundingBox3D *pCVar9;
  float in_stack_fffffec4;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_11c;
  int iStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f aCStack_74 [2];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_2c;
  CDemonActor *pCStack_20;
  int iStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  fVar1 = in_stack_00000004[2].orient_matrix.m[1].z;
  in_stack_00000004[4].actor_name[0x18] = '\x02';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = in_stack_00000004->vtable;
  in_stack_00000004[2].orient_matrix.m[1].z =
       in_stack_00000004[2].orient_matrix.m[1].z + 0.1f;
  pCVar3 = (CVector3f *)(*pCVar2[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_80,pCVar3);
  iVar4 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar4 == 0) {
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
  CStack_bc.z = in_stack_00000004[2].orient.heading;
  CStack_bc.x = 0.0;
  CStack_bc.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_c8,&CStack_bc);
  CStack_d4.x = CStack_80.x + CStack_c8.x;
  CStack_d4.y = CStack_80.y + CStack_c8.y;
  CStack_d4.z = CStack_80.z + CStack_c8.z;
  CStack_2c.y = (float)2.5 / in_stack_00000004[2].orient.heading;
  fStack_44 = CStack_c8.x * CStack_2c.y;
  fStack_40 = CStack_c8.y * CStack_2c.y;
  fStack_3c = CStack_c8.z * CStack_2c.y;
  aCStack_74[0].x = CStack_80.x - fStack_44;
  aCStack_74[0].y = CStack_80.y - fStack_40;
  aCStack_74[0].z = CStack_80.z - fStack_3c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  pCVar5 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar5);
  }
  iStack_1c = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,aCStack_74,&CStack_d4);
    dVar8 = (double)fStack_14;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_005ddd4e;
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCVar5 != (CDemonActor *)0x0) &&
       (iVar4 = (*pCVar5->vtable[1].hasCollision)(pCVar5,SUB84 /* extract 2-byte value */(dVar8,0)), 0 < iVar4)) {
      pCVar5 = (CDemonActor *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    CStack_2c.z = (float)pCVar6;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (pCStack_20 == (CDemonActor *)0x0) {
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
          pCVar9 = SUB84 /* extract 2-byte value */(dVar8,0);
          iVar4 = core_trigger_cpp_FUN_005e0ac0();
          if (iVar4 != 0) {
            (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,pCVar9);
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_2c.z)
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
      iVar4 = (*pCVar5->vtable[1].renderOpaque)(pCVar5);
      pCVar9 = (CBoundingBox3D *)((ulonglong)dVar8 >> 0x20);
      if ((iVar4 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x,
                              g_CHeroClassInfo.name_hash), this_ptr = g_CDemonSetPtr,
         pCVar6 != (CDemonActor *)0x0)) {
        if (pCStack_18 == (CGlass *)0x0) {
          *(int *)(in_stack_00000004[4].actor_name + 8) =
               *(int *)(in_stack_00000004[4].actor_name + 8) + 1;
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec0);
      (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,pCVar9);
      fStack_44 = (g_CDemonSetPtr->collision_result_vec2).x -
                  (g_CDemonSetPtr->collision_result_vec1).x;
      fStack_40 = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
      fStack_3c = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
      pCStack_20 = (CDemonActor *)
                   ((float)10 /
                   SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40));
      fStack_5c = fStack_44 * (float)pCStack_20;
      fStack_58 = fStack_40 * (float)pCStack_20;
      fStack_54 = fStack_3c * (float)pCStack_20;
      if (&fStack_12c != &fStack_5c) {
        fStack_12c = fStack_5c;
        fStack_128 = fStack_58;
        fStack_124 = fStack_54;
      }
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (pCVar5,&CStack_2c,&g_CDemonSetPtr->collision_impact_position);
      if (&CStack_11c != pCVar3) {
        CStack_11c.x = pCVar3->x;
        CStack_11c.y = pCVar3->y;
        CStack_11c.z = pCVar3->z;
      }
      iStack_110 = *(int *)(in_stack_00000004[4].actor_name + 0xc);
      CStack_108.m[0].x = 1.41531e-43;
      pCStack_10c = (CDemonActor *)0x3e19999a;
      CStack_108.m[0].y = (float)in_stack_00000004;
      CStack_108.m[1].x = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
      (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,&stack0xfffffecc,in_stack_fffffec4);
      if (in_stack_00000004[2].orient.bank == 0.0) goto LAB_005ddd4e;
      in_stack_fffffec4 = 8.62187e-39;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if (*(int *)(in_stack_00000004[4].actor_name + 0x14) != 0) {
        fStack_98 = CStack_80.x;
        fStack_90 = CStack_80.z;
        fStack_94 = CStack_80.y + -0.125f;
        core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
        CStack_e0.x = 5.0;
        CStack_e0.y = 6.0;
        CStack_e0.z = -6.0;
        CStack_8c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_14 = CStack_8c.x;
        CStack_8c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_8c.z = 0.0;
        fStack_14 = CStack_8c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,&CStack_8c);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_108,&CStack_b0,&CStack_e0);
        pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           (in_stack_00000004,&CStack_a4,pCVar3);
        if (&CStack_e0 != pCVar3) {
          CStack_e0.x = pCVar3->x;
          CStack_e0.y = pCVar3->y;
          CStack_e0.z = pCVar3->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
