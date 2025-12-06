// Name: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
// Address: 0040a210
// Address Range: [[0040a210, 0040abb6]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor *this_ptr,int hit_type)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  CDemonActor *pCVar9;
  CGlass *pCVar10;
  int extraout_EAX;
  float fVar11;
  CDemonActor *pCVar12;
  int extraout_EAX_00;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar13;
  float10 fVar14;
  int iStack0000000c;
  CDemonActor *in_stack_00000010;
  CDemonActor *in_stack_00000014;
  CDemonActor *in_stack_00000018;
  int in_stack_00000030;
  CDemonActor *in_stack_00000048;
  CDemonActor *in_stack_0000004c;
  CDemonActor *in_stack_00000050;
  CGlass *in_stack_00000054;
  int in_stack_0000006c;
  float in_stack_00000078;
  CDemonActor *in_stack_00000084;
  double dVar15;
  CDemonActor *in_stack_fffffdac;
  float in_stack_fffffdb0;
  float in_stack_fffffe08;
  CDemonActor *pCStack_1c4;
  byte auStack_19c [44];
  byte auStack_170 [8];
  CDemonActor *pCStack_168;
  CDemonActor *pCStack_164;
  CDemonActor *pCStack_160;
  byte auStack_15c [8];
  byte auStack_154 [56];
  CDemonActor *pCStack_11c;
  byte auStack_118 [36];
  byte auStack_f4 [12];
  CBoundingBox3D CStack_e8;
  float local_d0;
  int iStack_cc;
  byte auStack_c4 [12];
  CBoundingBox3D CStack_b8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  byte auStack_90 [8];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  char acStack_5c [20];
  byte auStack_48 [8];
  float fStack_40;
  CVector3f CStack_38;
  int iStack_28;
  CVector3f CStack_20;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ea);
  fStack_40 = 0.0;
  if (hit_type == 1) {
    fStack_40 = (float)hit_type;
  }
  local_d0 = 0.0;
  iStack_cc = 0;
  pCVar3 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_118 + 0xc));
  CStack_b8.min.y = (pCVar3->max).z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&CStack_b8.min.z,(CVector3f *)(auStack_c4 + 8));
  if (iStack_28 == 1) {
    auStack_c4._8_4_ = (CDemonActor *)0xc0400000;
    auStack_c4._0_4_ = 0.0;
    auStack_c4._4_4_ = (CDemonActor *)0x0;
    pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,&CStack_88,(CVector3f *)auStack_c4);
    CStack_7c.y = CStack_b8.max.y + pCVar4->x;
    CStack_7c.z = CStack_b8.max.z + pCVar4->y;
    fStack_70 = fStack_a0 + pCVar4->z;
    if (&fStack_9c != &CStack_7c.y) {
      fStack_9c = CStack_7c.y;
      fStack_98 = CStack_7c.z;
      fStack_94 = fStack_70;
    }
  }
  auStack_90._0_4_ = (CDemonActor *)0x0;
  auStack_90._4_4_ = (CDemonActor *)0x0;
  CStack_88.x = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (this_ptr,(CVector3f *)auStack_48,(CVector3f *)auStack_90);
  pCVar5 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (iStack_14 == 0) {
    iVar13 = 0;
    for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
      pCVar9 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar13);
      if ((this_ptr != pCVar9) && (pCVar9 != pCVar5)) {
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar9,g_CCharacterClassInfo.name_hash)
        ;
        if (pCVar7 == (CDemonActor *)0x0) {
          pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (in_stack_00000010,g_CTriggerClassInfo.name_hash);
          if (pCVar9 == (CDemonActor *)0x0) {
            pCVar10 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (in_stack_00000014,g_CGlassClassInfo.name_hash);
            if (pCVar10 != (CGlass *)0x0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)pCVar10,(CVector3f *)(auStack_48 + 4),
                         (CVector3f *)(auStack_90 + 4));
              pCVar3 = (*((pCVar10->base).vtable)->getBoundingBox)
                                 ((CDemonActor *)pCVar10,&CStack_b8);
              iVar8 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar3,(CVector3f *)in_stack_fffffdac,in_stack_fffffdb0);
              if (iVar8 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe04);
                in_stack_fffffdac = this_ptr;
                in_stack_fffffdb0 = (float)hit_type;
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffe08,(CDemonActor *)pCVar10)
                ;
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffe2c,(CDemonActor *)pCVar10)
                ;
                core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar10);
                if (extraout_EAX != 0) {
                  core_glass_cpp_CGlass_shatter_FUN_004eaef0(pCVar10,&CStack_20);
                }
              }
            }
          }
          else {
            iVar8 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar8 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar9,&CStack_38,(CVector3f *)(auStack_90 + 4));
              pCVar3 = (*pCVar9->vtable->getBoundingBox)(pCVar9,&CStack_e8);
              iVar8 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
                                (pCVar3,(CVector3f *)in_stack_fffffdac,in_stack_fffffdb0);
              if (iVar8 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffdc8);
                in_stack_fffffdac = this_ptr;
                in_stack_fffffdb0 = (float)hit_type;
                (*this_ptr->vtable->fillAttackDamageInfo)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffdcc,pCVar9);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
                (*this_ptr->vtable->playAttackHitEffects)
                          (this_ptr,hit_type,(SDamageInfo *)&stack0xfffffdf8,pCVar9);
              }
            }
          }
        }
        else if (((pCVar9 == (CDemonActor *)0x0) ||
                 (iVar8 = (*pCVar7->vtable[1].renderOpaque)(pCVar7), iVar8 == 0)) ||
                (iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000018,"CHero"),
                iVar8 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_15c);
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_15c + 4),pCVar7);
          (*pCVar7->vtable[1].playAmbientSound)(pCVar7,acStack_5c);
          if (0.0 < (float)pCStack_11c) {
            fVar14 = (float10)1 + (float10)(float)pCStack_11c * (float10)0.5;
            crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar7[0x1c].was_created));
            in_stack_0000006c = (int)ROUND(fVar14);
            core_gore_cpp_FUN_004edbb0();
            (*this_ptr->vtable->playAttackHitEffects)
                      (this_ptr,hit_type,(SDamageInfo *)auStack_118,pCVar7);
          }
        }
      }
      iVar13 = iVar13 + 4;
    }
  }
  if (iStack_14 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
    if (in_stack_00000014 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000014);
    }
    iStack0000000c = 0;
    while( true ) {
      fVar11 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,&CStack_7c,&CStack_88);
      dVar15 = (double)fVar11;
      if ((dVar15 < 0.0) || (1.0 < dVar15)) break;
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) &&
         (iVar13 = (*pCVar5->vtable[1].hasCollision)
                             (pCVar5,(SCollisionInfo *)((ulonglong)dVar15 >> 0x20)), 0 < iVar13)) {
        pCVar5 = (CDemonActor *)0x0;
      }
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      core_actor_cpp_castToClassHash_FUN_0040c790
                (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
      pCVar9 = in_stack_0000004c;
      if (pCVar5 == (CDemonActor *)0x0) {
        if (in_stack_00000050 == (CDemonActor *)0x0) {
          if (in_stack_0000004c == (CDemonActor *)0x0) {
            if (in_stack_00000030 == 0) {
              if (pCVar12 == (CDemonActor *)0x0) {
                return 0;
              }
              core_flamecan_cpp_FUN_004cb340();
            }
            else {
              core_crate_cpp_FUN_00448a70();
            }
          }
          else {
            iVar13 = core_trigger_cpp_FUN_005e0ac0();
            if (iVar13 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_f4);
              (*this_ptr->vtable->fillAttackDamageInfo)
                        (this_ptr,hit_type,(SDamageInfo *)(auStack_f4 + 4),pCVar9);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n");
              core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              (*this_ptr->vtable->playAttackHitEffects)
                        (this_ptr,hit_type,(SDamageInfo *)auStack_c4,in_stack_00000084);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000084);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_170);
          pCVar10 = in_stack_00000054;
          (*this_ptr->vtable->fillAttackDamageInfo)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_170 + 4),&in_stack_00000054->base);
          (*this_ptr->vtable->playAttackHitEffects)
                    (this_ptr,hit_type,(SDamageInfo *)(auStack_154 + 0xc),&pCVar10->base);
          core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCVar10);
          if (extraout_EAX_00 == 0) {
            return 0;
          }
          core_glass_cpp_CGlass_shatter_FUN_004eaef0
                    (pCVar10,&g_CDemonSetPtr->collision_impact_position);
        }
      }
      else if (((pCVar7 == (CDemonActor *)0x0) ||
               (iVar13 = (*pCVar5->vtable[1].renderOpaque)(pCVar5), iVar13 == 0)) ||
              (iVar13 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000050,"CHero"),
              iVar13 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_19c);
        auStack_19c._4_4_ = g_CDemonSetPtr->field11_0x14d148;
        (*this_ptr->vtable->fillAttackDamageInfo)
                  (this_ptr,hit_type,(SDamageInfo *)(auStack_19c + 4),pCVar5);
        fVar11 = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
        fVar1 = (g_CDemonSetPtr->collision_result_vec2).y -
                (g_CDemonSetPtr->collision_result_vec1).y;
        fVar2 = (g_CDemonSetPtr->collision_result_vec2).z -
                (g_CDemonSetPtr->collision_result_vec1).z;
        in_stack_00000078 =
             (float)10 / SQRT(fVar2 * fVar2 + fVar11 * fVar11 + fVar1 * fVar1);
        in_stack_00000048 = (CDemonActor *)(fVar11 * in_stack_00000078);
        in_stack_0000004c = (CDemonActor *)(fVar1 * in_stack_00000078);
        in_stack_00000050 = (CDemonActor *)(fVar2 * in_stack_00000078);
        if (&pCStack_168 != &stack0x00000048) {
          pCStack_168 = in_stack_00000048;
          pCStack_164 = in_stack_0000004c;
          pCStack_160 = in_stack_00000050;
        }
        pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (pCVar5,(CVector3f *)&stack0x00000054,
                            &g_CDemonSetPtr->collision_impact_position);
        if ((CVector3f *)auStack_154 != pCVar4) {
          auStack_154._0_4_ = pCVar4->x;
          auStack_154._4_4_ = pCVar4->y;
          auStack_154._8_4_ = pCVar4->z;
        }
        (*pCVar5->vtable[1].playAmbientSoundWithVolume)(pCVar5,auStack_170,in_stack_fffffe08);
        (*this_ptr->vtable->playAttackHitEffects)
                  (this_ptr,hit_type,(SDamageInfo *)auStack_154,pCVar5);
        pCStack_1c4 = (CDemonActor *)0x40aa52;
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      }
      iStack0000000c = iStack0000000c + 1;
      if (3 < iStack0000000c) {
        return 0;
      }
    }
  }
  return 0;
}
