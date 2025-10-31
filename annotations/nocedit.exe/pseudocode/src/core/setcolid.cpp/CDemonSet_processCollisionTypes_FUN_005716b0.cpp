// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
// Address: 005716b0
// Address Range: [[005716b0, 0057233f]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408e0f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0 (0040c8f0) at 0040c981 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 (0040c830) at 0040c8ab [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4200 (004c4200) at 004c4255 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed0d0 (004ed0d0) at 004ed0fb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0 (0053c8d0) at 0053c8fe [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2e86 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_006461b6
//   TerminatedCString s_info_keyFramedModelInsta_006461cb
//   TerminatedCString s_core_setcolid_cpp_00646217
//   TerminatedCString s_Invalid_collision_type_0064622c
//   float FLOAT_00646246 = 2
//   float FLOAT_0064624a = -10
//   WatcomTypeInfo g_CVectorTypeInfo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 g_CSpikeClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_CDemonActor_FUN_00409270
//   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
//   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
          (CDemonSet *this_ptr,CVector3f *position,float radius)

{
  float *pfVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint uVar7;
  CBoundingBox3D *other;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  CVector3f *pCVar20;
  CKeyFramedModel *this_ptr_00;
  float *pfVar21;
  BADSPACEBASE *in_ESP;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  CVector3f *in_stack_0000001c;
  float in_stack_00000024;
  CDemonSet *in_stack_00000028;
  CVector3f *in_stack_0000002c;
  float in_stack_00000030;
  CDemonSet *in_stack_00000034;
  CVector3f *in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000044;
  float in_stack_00000048;
  CVector3f *in_stack_0000004c;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_00000060;
  float in_stack_00000068;
  float in_stack_00000070;
  float in_stack_00000078;
  float in_stack_00000080;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000098;
  float in_stack_000000a0;
  float in_stack_000000a8;
  int in_stack_000000ac;
  float in_stack_000000b0;
  undefined1 auStack_264 [16];
  CVector3f CStack_254;
  undefined1 auStack_248 [12];
  undefined1 auStack_23c [8];
  CVector3f CStack_234;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [36];
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_154 [24];
  float fStack_13c;
  float local_138;
  float local_134;
  CDemonActor *pCStack_12c;
  CDemonActor *pCStack_128;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [12];
  undefined1 auStack_104 [24];
  float local_ec;
  float local_e8;
  undefined1 local_e4 [44];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_9c;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  float fStack_54;
  CDemonSet *pCStack_50;
  CVector3f *pCStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  CVector3f *local_14;
  
  pCVar4 = position;
  if (0.0 < radius) {
    fStack_24 = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
                          (&g_CDemonRaytraceInstance,position,radius,&this_ptr->ground_type,
                           &this_ptr->collision_normal);
  }
  else {
    fStack_24 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                          (&g_CDemonRaytraceInstance,position,&this_ptr->ground_type,
                           &this_ptr->collision_normal);
  }
  if (position[0x1bc19].z == 0.0) {
    position[0x1bc19].z = position[0x1d48a].y;
  }
  if ((CVector3f *)local_e4 != pCVar4) {
    local_e4._0_4_ = pCVar4->x;
    local_e4._4_4_ = pCVar4->y;
    local_e4._8_4_ = pCVar4->z;
  }
  local_e4._4_4_ = (float)local_e4._4_4_ + FLOAT_00646246;
  position[0x1bc1b].x = 0.0;
  position[0x1bc1b].y = -NAN;
  fVar2 = position[0x1d48c].y;
  position[0x1bc1b].z = -NAN;
  if (-1 < (int)fVar2) {
    if (auStack_104 + 0x14 != local_e4) {
      auStack_104._20_4_ = local_e4._0_4_;
      local_e8 = (float)local_e4._8_4_;
      local_ec = (float)local_e4._4_4_;
    }
    auStack_104._20_4_ = (float)auStack_104._20_4_ + in_stack_00000010;
    local_e8 = local_e8 + in_stack_00000010;
    auStack_104._8_4_ = (float)auStack_104._8_4_ - in_stack_00000010;
    auStack_104._16_4_ = (float)auStack_104._16_4_ - in_stack_00000010;
    if (auStack_104 + 8 != auStack_104 + 0x14) {
      auStack_104._12_4_ = local_ec;
      auStack_104._8_4_ = auStack_104._20_4_;
      auStack_104._16_4_ = local_e8;
    }
    auStack_104._12_4_ = (float)auStack_104._12_4_ + FLOAT_0064624a;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_154);
    pCVar4 = position;
    auStack_154._0_4_ = 0.0;
    local_18 = 0.0;
    if (0 < (int)position[0x1c923].y) {
      pfVar1 = &position[0x1bc18].z;
      local_14 = position;
      do {
        pCVar20 = position;
        pCVar3 = (CDemonActor *)local_14[0x1c923].z;
        iVar5 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20
                          ((CDemonSet *)position,pCVar3);
        if (((iVar5 == 0) &&
            (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar3,g_CSpikeClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0))
           && (pCStack_12c = pCVar6, pCStack_128 = pCVar6,
              uVar7 = (*((pCVar3->metadata).vtable)->hasCollision)
                                (pCVar3,(SCollisionInfo *)(auStack_154 + 8)), uVar7 != 0)) {
          other = core_actor_cpp_CDemonActor_FUN_00409270(pCVar3);
          iVar5 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                            ((CBoundingBox3D *)(local_e4 + 8),other);
          if (iVar5 != 0) {
            if ((pCVar20[0x1d492].y == 0.0) &&
               ((CKeyFramedModelInstance *)auStack_110._4_4_ != (CKeyFramedModelInstance *)0x0)) {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      ((CKeyFramedModelInstance *)auStack_110._4_4_);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0xcb;
                core_main_c_displayErrorAndQuit_FUN_00506f10("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              CStack_30.z = fStack_b8 - (pCVar3->location).position.x;
              fStack_24 = fStack_b4 - (pCVar3->location).position.y;
              fStack_20 = fStack_b0 - (pCVar3->location).position.z;
              radius = (float)position - (pCVar3->location).position.y;
              iVar5 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
                                (this_ptr_00,0,(float)&CStack_30.z,in_stack_0000003c,&radius,
                                 (CVector3f *)&pCVar3->orient);
              if (iVar5 != 0) {
                in_stack_00000038[0x1bc1b].x = (float)pCVar3;
                radius = in_stack_00000010 + (pCVar3->location).position.y;
                CStack_9c.x = 0.0;
                CStack_9c.y = 1.0;
                CStack_9c.z = 0.0;
                if ((CVector3f *)pfVar1 != &CStack_9c) {
                  *pfVar1 = 0.0;
                  pCVar4[0x1bc19].x = 1.0;
                  pCVar4[0x1bc19].y = 0.0;
                }
              }
            }
            else if (uVar7 < 2) {
              if (uVar7 == 1) {
                crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                          (&stack0xfffffd20,8,&g_CVectorTypeInfo);
                pfVar21 = (float *)&stack0xfffffd24;
                uVar7 = 0;
                (*((pCVar3->metadata).vtable)->getBoundingBox)(pCVar3,(CBoundingBox3D *)auStack_104)
                ;
                do {
                  core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                            ((CBoundingBox3D *)(auStack_104 + 0x14),&CStack_30,uVar7);
                  pfVar8 = core_actor_cpp_CDemonActor_FUN_00408ec0(pCVar3);
                  if (pfVar21 != pfVar8) {
                    *pfVar21 = *pfVar8;
                    pfVar21[1] = pfVar8[1];
                    pfVar21[2] = pfVar8[2];
                  }
                  uVar7 = uVar7 + 1;
                  pfVar21 = pfVar21 + 3;
                } while ((int)uVar7 < 8);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_228,(CVector3f *)&stack0xfffffd40,
                           (CVector3f *)&stack0xfffffd70,(CVector3f *)&stack0xfffffd88);
                iVar5 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                  ((CDemonTriangle *)(auStack_228 + 4),(float)&CStack_9c,
                                   in_stack_00000058,&stack0x00000024);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_220,(CVector3f *)&stack0xfffffd48,
                           (CVector3f *)&stack0xfffffd90,(CVector3f *)&stack0xfffffd60);
                iVar9 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                  ((CDemonTriangle *)(auStack_220 + 4),(float)&CStack_9c.z,
                                   in_stack_00000060,(float *)&stack0x0000002c);
                if (iVar5 != 0 || iVar9 != 0) {
                  fStack_48 = -fStack_1f4;
                  fStack_44 = -fStack_1f0;
                  fStack_40 = -fStack_1ec;
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_170,(CVector3f *)&stack0xfffffd5c,
                           (CVector3f *)&stack0xfffffd74,(CVector3f *)(auStack_264 + 8));
                iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_170 + 4),(float)auStack_8c,
                                    in_stack_00000068,(float *)&stack0x00000034);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_168,(CVector3f *)&stack0xfffffd64,&CStack_254,
                           (CVector3f *)&stack0xfffffd94);
                iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_168 + 4),(float)auStack_84,
                                    in_stack_00000070,&stack0x0000003c);
                if (iVar10 != 0 || iVar11 != 0) {
                  in_stack_00000028 = (CDemonSet *)-fStack_13c;
                  in_stack_0000002c = (CVector3f *)-local_138;
                  in_stack_00000030 = -local_134;
                  if (&this_ptr != &stack0x00000028) {
                    this_ptr = in_stack_00000028;
                    position = in_stack_0000002c;
                    radius = in_stack_00000030;
                  }
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_198,(CVector3f *)&stack0xfffffd60,
                           (CVector3f *)&stack0xfffffd6c,(CVector3f *)auStack_264);
                iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_198 + 4),(float)auStack_7c,
                                    in_stack_00000078,&stack0x00000044);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_190,(CVector3f *)&stack0xfffffd68,
                           (CVector3f *)(auStack_264 + 8),(CVector3f *)&stack0xfffffd98);
                iVar13 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_190 + 4),(float)auStack_74,
                                    in_stack_00000080,(float *)&stack0x0000004c);
                if (iVar12 != 0 || iVar13 != 0) {
                  in_stack_00000044 = -(float)auStack_168._4_4_;
                  in_stack_00000048 = -fStack_160;
                  in_stack_0000004c = (CVector3f *)-fStack_15c;
                  if (&stack0x00000014 != &stack0x00000044) {
                    in_stack_00000014 = in_stack_00000044;
                    in_stack_00000018 = in_stack_00000048;
                    in_stack_0000001c = in_stack_0000004c;
                  }
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_118,(CVector3f *)&stack0xfffffd88,
                           (CVector3f *)auStack_248,(CVector3f *)auStack_23c);
                iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_118 + 4),(float)auStack_6c,
                                    in_stack_00000088,&stack0x00000054);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_110,(CVector3f *)&stack0xfffffd90,&CStack_234,
                           (CVector3f *)auStack_264);
                iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_110 + 4),(float)auStack_64,
                                    in_stack_00000090,(float *)&stack0x0000005c);
                if (iVar14 != 0 || iVar15 != 0) {
                  fStack_54 = -(float)local_e4._0_4_;
                  pCStack_50 = (CDemonSet *)-(float)local_e4._4_4_;
                  pCStack_4c = (CVector3f *)-(float)local_e4._8_4_;
                  if (&stack0x00000024 != &fStack_54) {
                    in_stack_00000024 = fStack_54;
                    in_stack_00000028 = pCStack_50;
                    in_stack_0000002c = pCStack_4c;
                  }
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_220,(CVector3f *)&stack0xfffffd80,
                           (CVector3f *)&stack0xfffffd98,(CVector3f *)(auStack_264 + 8));
                iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_220 + 4),(float)auStack_5c,
                                    in_stack_00000098,(float *)&stack0x00000064);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_218,(CVector3f *)&stack0xfffffd88,&CStack_254,
                           (CVector3f *)&stack0xfffffd94);
                iVar17 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_218 + 4),(float)&fStack_54,
                                    in_stack_000000a0,(float *)&stack0x0000006c);
                if (iVar16 != 0 || iVar17 != 0) {
                  this_ptr = (CDemonSet *)-fStack_1ec;
                  position = (CVector3f *)-fStack_1e8;
                  radius = -fStack_1e4;
                  if (&stack0x00000034 != &this_ptr) {
                    in_stack_00000034 = this_ptr;
                    in_stack_00000038 = position;
                    in_stack_0000003c = radius;
                  }
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_1a0,(CVector3f *)(auStack_248 + 8),&CStack_234,
                           (CVector3f *)(auStack_220 + 4));
                iVar18 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_1a0 + 4),(float)&pCStack_4c,
                                    in_stack_000000a8,(float *)&stack0x00000074);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_198,(CVector3f *)(auStack_23c + 4),
                           (CVector3f *)(auStack_218 + 4),(CVector3f *)auStack_220);
                iVar19 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_198 + 4),(float)&fStack_44,
                                    in_stack_000000b0,(float *)&stack0x0000007c);
                if (iVar18 != 0 || iVar19 != 0) {
                  local_1c = -(float)auStack_170._4_4_;
                  local_18 = -(float)auStack_168._0_4_;
                  local_14 = (CVector3f *)-(float)auStack_168._4_4_;
                  if (&stack0x00000044 != &local_1c) {
                    in_stack_00000044 = local_1c;
                    in_stack_00000048 = local_18;
                    in_stack_0000004c = local_14;
                  }
                }
                if ((((((iVar5 != 0 || iVar9 != 0) || (iVar10 != 0 || iVar11 != 0)) ||
                      (iVar12 != 0 || iVar13 != 0)) || (iVar14 != 0 || iVar15 != 0)) ||
                    (iVar16 != 0 || iVar17 != 0)) || (iVar18 != 0 || iVar19 != 0)) {
                  *(CDemonActor **)(in_stack_000000ac + 0x14d144) = pCVar3;
                  auStack_264._0_4_ = &stack0x00000044;
                  pCVar20 = core_actor_cpp_CDemonActor_FUN_00408e80(pCVar3);
                  if ((CVector3f *)pfVar1 != pCVar20) {
                    *pfVar1 = pCVar20->x;
                    pCVar4[0x1bc19].x = pCVar20->y;
                    pCVar4[0x1bc19].y = pCVar20->z;
                  }
                }
              }
              else {
LAB_005722ec:
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 299;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid collision type!");
              }
            }
            else if (2 < uVar7) {
              if (uVar7 != 3) goto LAB_005722ec;
              core_actor_cpp_CDemonActor_FUN_00408f10(pCVar3);
              radius = (float)this_ptr - (pCVar3->location).position.y;
              iVar5 = (*((pCVar3->metadata).vtable)->customGetFloorHeight)
                                (pCVar3,(float)&fStack_20,(float)in_stack_00000038,&radius);
              if (iVar5 != 0) {
                *(CDemonActor **)((int)in_stack_00000054 + 0x14d144) = pCVar3;
                in_stack_00000028 = (CDemonSet *)(in_stack_00000030 + (pCVar3->location).position.y)
                ;
                uStack_34 = 0x3f800000;
                uStack_38 = 0;
                CStack_30.x = 0.0;
                if (pfVar1 != (float *)&uStack_38) {
                  *pfVar1 = 0.0;
                  pCVar4[0x1bc19].x = 1.0;
                  pCVar4[0x1bc19].y = 0.0;
                }
              }
            }
          }
        }
        local_14 = (CVector3f *)&local_14->y;
        local_18 = (float)((int)local_18 + 1);
      } while ((int)local_18 < (int)position[0x1c923].y);
    }
    pCVar3 = (CDemonActor *)position[0x1bc1b].x;
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar5 = (*((pCVar3->metadata).vtable)->getGroundType)(pCVar3);
      *(int *)((int)in_stack_00000014 + 0x14d134) = iVar5;
      return local_18;
    }
  }
  return fStack_24;
}


// Assembly code:
// 005716b0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
// 005716b1: PUSH ESI
// 005716b2: PUSH EDI
// 005716b3: PUSH EBP
// 005716b4: SUB ESP,0x2f8
// 005716ba: MOV EBX,dword ptr [ESP + 0x310]
//   XREF to: Stack[0x8] (READ)
// 005716c1: FLD float ptr [ESP + 0x314]
//   XREF to: Stack[0xc] (READ)
// 005716c8: MOV ESI,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 005716cf: MOV EDX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 005716d6: FLDZ
// 005716d8: ADD ESI,0x14d134
// 005716de: ADD EDX,0x14d128
// 005716e4: FCOMPP
// 005716e6: FNSTSW AX
// 005716e8: SAHF
// 005716e9: JC 0x00571945
//   XREF to: 00571945 (CONDITIONAL_JUMP)
// 005716ef: PUSH EDX
// 005716f0: PUSH ESI
// 005716f1: PUSH EBX
// 005716f2: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005716f7: CALL core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
//   XREF to: 004966f0 (UNCONDITIONAL_CALL)
// 005716fc: MOV dword ptr [ESP + 0x304],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00571703: FLD float ptr [ESP + 0x304]
//   XREF to: Stack[-0x14] (READ)
// 0057170a: ADD ESP,0x10
// 0057170d: FSTP float ptr [ESP + 0x2e0]
//   Label: LAB_0057170d
//   XREF to: Stack[-0x28] (WRITE)
// 00571714: MOV EAX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 0057171b: CMP dword ptr [EAX + 0x14d134],0x0
// 00571722: JNZ 0x00571737
//   XREF to: 00571737 (CONDITIONAL_JUMP)
// 00571724: MOV EDX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 0057172b: MOV EAX,dword ptr [EAX + 0x15f67c]
// 00571731: MOV dword ptr [EDX + 0x14d134],EAX
// 00571737: LEA EAX,[ESP + 0x220]
//   Label: LAB_00571737
//   XREF to: Stack[-0xe8] (DATA)
// 0057173e: CMP EAX,EBX
// 00571740: JZ 0x0057175f
//   XREF to: 0057175f (CONDITIONAL_JUMP)
// 00571742: MOV EAX,dword ptr [EBX]
// 00571744: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 0057174b: MOV EAX,dword ptr [EBX + 0x4]
// 0057174e: MOV dword ptr [ESP + 0x224],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 00571755: MOV EAX,dword ptr [EBX + 0x8]
// 00571758: MOV dword ptr [ESP + 0x228],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 0057175f: FLD float ptr [ESP + 0x224]
//   Label: LAB_0057175f
//   XREF to: Stack[-0xe4] (READ)
// 00571766: FADD float ptr [0x00646246]
//   XREF to: 00646246 (READ)
// 0057176c: MOV EAX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 00571773: FSTP float ptr [ESP + 0x224]
//   XREF to: Stack[-0xe4] (WRITE)
// 0057177a: MOV dword ptr [EAX + 0x14d144],0x0
// 00571784: MOV dword ptr [EAX + 0x14d148],0xffffffff
// 0057178e: MOV ECX,dword ptr [EAX + 0x15f694]
// 00571794: MOV dword ptr [EAX + 0x14d14c],0xffffffff
// 0057179e: TEST ECX,ECX
// 005717a0: JL 0x00571933
//   XREF to: 00571933 (CONDITIONAL_JUMP)
// 005717a6: LEA EDX,[ESP + 0x214]
//   XREF to: Stack[-0xf4] (DATA)
// 005717ad: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0xe8] (DATA)
// 005717b4: CMP EDX,EAX
// 005717b6: JZ 0x005717e2
//   XREF to: 005717e2 (CONDITIONAL_JUMP)
// 005717b8: MOV EAX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0xe8] (DATA)
// 005717bf: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005717c6: MOV EAX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0xe4] (READ)
// 005717cd: MOV dword ptr [ESP + 0x218],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005717d4: MOV EAX,dword ptr [ESP + 0x228]
//   XREF to: Stack[-0xe0] (READ)
// 005717db: MOV dword ptr [ESP + 0x21c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005717e2: FLD float ptr [ESP + 0x208]
//   Label: LAB_005717e2
//   XREF to: Stack[-0x100] (READ)
// 005717e9: FLD float ptr [ESP + 0x210]
//   XREF to: Stack[-0xf8] (READ)
// 005717f0: FLD float ptr [ESP + 0x214]
//   XREF to: Stack[-0xf4] (READ)
// 005717f7: FLD float ptr [ESP + 0x21c]
//   XREF to: Stack[-0xec] (READ)
// 005717fe: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0xf4] (DATA)
// 00571805: LEA EDX,[ESP + 0x208]
//   XREF to: Stack[-0x100] (DATA)
// 0057180c: FXCH ST3
// 0057180e: FLD float ptr [ESP + 0x314]
//   XREF to: Stack[0xc] (READ)
// 00571815: FXCH
// 00571817: FSUB ST0,ST1
// 00571819: FXCH ST3
// 0057181b: FSUB ST0,ST1
// 0057181d: FXCH ST2
// 0057181f: FADD ST0,ST1
// 00571821: FXCH ST4
// 00571823: FADDP
// 00571825: FXCH
// 00571827: FSTP float ptr [ESP + 0x210]
//   XREF to: Stack[-0xf8] (WRITE)
// 0057182e: FXCH ST2
// 00571830: FSTP float ptr [ESP + 0x214]
//   XREF to: Stack[-0xf4] (WRITE)
// 00571837: FXCH
// 00571839: FSTP float ptr [ESP + 0x21c]
//   XREF to: Stack[-0xec] (WRITE)
// 00571840: FSTP float ptr [ESP + 0x208]
//   XREF to: Stack[-0x100] (WRITE)
// 00571847: CMP EDX,EAX
// 00571849: JZ 0x00571875
//   XREF to: 00571875 (CONDITIONAL_JUMP)
// 0057184b: MOV EAX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0xf4] (DATA)
// 00571852: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00571859: MOV EAX,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0xf0] (READ)
// 00571860: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 00571867: MOV EAX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0xec] (READ)
// 0057186e: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 00571875: FLD float ptr [ESP + 0x20c]
//   Label: LAB_00571875
//   XREF to: Stack[-0xfc] (READ)
// 0057187c: LEA EAX,[ESP + 0x1b0]
//   XREF to: Stack[-0x158] (DATA)
// 00571883: FADD float ptr [0x0064624a]
//   XREF to: 0064624a (READ)
// 00571889: PUSH EAX
// 0057188a: FSTP float ptr [ESP + 0x210]
//   XREF to: Stack[-0xfc] (WRITE)
// 00571891: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 00571896: ADD ESP,0x4
// 00571899: XOR EBX,EBX
// 0057189b: MOV EAX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 005718a2: MOV dword ptr [ESP + 0x1b0],EBX
//   XREF to: Stack[-0x158] (WRITE)
// 005718a9: MOV EDI,dword ptr [EAX + 0x156da8]
// 005718af: MOV dword ptr [ESP + 0x2ec],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005718b6: TEST EDI,EDI
// 005718b8: JLE 0x0057191e
//   XREF to: 0057191e (CONDITIONAL_JUMP)
// 005718ba: LEA EBP,[EAX + 0x14d128]
// 005718c0: MOV dword ptr [ESP + 0x2f0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005718c7: MOV EDI,dword ptr [ESP + 0x2f0]
//   Label: LAB_005718c7
//   XREF to: Stack[-0x18] (READ)
// 005718ce: MOV EDI,dword ptr [EDI + 0x156dac]
// 005718d4: PUSH EDI
// 005718d5: MOV ESI,dword ptr [ESP + 0x310]
//   XREF to: Stack[0x4] (READ)
// 005718dc: PUSH ESI
// 005718dd: CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   XREF to: 00572e20 (UNCONDITIONAL_CALL)
// 005718e2: ADD ESP,0x8
// 005718e5: TEST EAX,EAX
// 005718e7: JZ 0x0057196f
//   XREF to: 0057196f (CONDITIONAL_JUMP)
// 005718ed: MOV EAX,dword ptr [ESP + 0x2f0]
//   Label: LAB_005718ed
//   XREF to: Stack[-0x18] (READ)
// 005718f4: MOV EDX,dword ptr [ESP + 0x2ec]
//   XREF to: Stack[-0x1c] (READ)
// 005718fb: ADD EAX,0x4
// 005718fe: INC EDX
// 005718ff: MOV dword ptr [ESP + 0x2f0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00571906: MOV dword ptr [ESP + 0x2ec],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057190d: MOV EAX,EDX
// 0057190f: MOV EDX,dword ptr [ESP + 0x30c]
//   XREF to: Stack[0x4] (READ)
// 00571916: CMP EAX,dword ptr [EDX + 0x156da8]
// 0057191c: JL 0x005718c7
//   XREF to: 005718c7 (CONDITIONAL_JUMP)
// 0057191e: MOV EAX,dword ptr [ESP + 0x30c]
//   Label: LAB_0057191e
//   XREF to: Stack[0x4] (READ)
// 00571925: MOV EBX,dword ptr [EAX + 0x14d144]
// 0057192b: TEST EBX,EBX
// 0057192d: JNZ 0x00572314
//   XREF to: 00572314 (CONDITIONAL_JUMP)
// 00571933: MOV EAX,dword ptr [ESP + 0x2e0]
//   Label: LAB_00571933
//   XREF to: Stack[-0x28] (READ)
// 0057193a: ADD ESP,0x2f8
// 00571940: POP EBP
// 00571941: POP EDI
// 00571942: POP ESI
// 00571943: POP EBX
// 00571944: RET
// 00571945: PUSH EDX
//   Label: LAB_00571945
// 00571946: PUSH ESI
// 00571947: PUSH dword ptr [ESP + 0x31c]
//   XREF to: Stack[0xc] (READ)
// 0057194e: PUSH EBX
// 0057194f: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00571954: CALL core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
//   XREF to: 00496950 (UNCONDITIONAL_CALL)
// 00571959: MOV dword ptr [ESP + 0x308],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00571960: FLD float ptr [ESP + 0x308]
//   XREF to: Stack[-0x14] (READ)
// 00571967: ADD ESP,0x14
// 0057196a: JMP 0x0057170d
//   XREF to: 0057170d (UNCONDITIONAL_JUMP)
// 0057196f: MOV EAX,[0x03f6b9dc]
//   Label: LAB_0057196f
//   XREF to: 03f6b9dc (READ)
// 00571974: PUSH EAX
// 00571975: PUSH EDI
// 00571976: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0057197b: ADD ESP,0x8
// 0057197e: TEST EAX,EAX
// 00571980: JNZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 00571986: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 0057198d: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 00571994: LEA EAX,[ESP + 0x1b0]
//   XREF to: Stack[-0x158] (DATA)
// 0057199b: PUSH EAX
// 0057199c: MOV EDX,dword ptr [EDI + 0x154]
// 005719a2: PUSH EDI
// 005719a3: CALL dword ptr [EDX + 0x34]
// 005719a6: ADD ESP,0x8
// 005719a9: MOV EBX,EAX
// 005719ab: TEST EAX,EAX
// 005719ad: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005719b3: PUSH EAX
// 005719b4: LEA EAX,[ESP + 0x1b4]
// 005719bb: PUSH EAX
// 005719bc: LEA EAX,[ESP + 0x1f8]
// 005719c3: PUSH EAX
// 005719c4: PUSH EDI
// 005719c5: CALL core_actor.cpp_CDemonActor_FUN_00409270
//   XREF to: 00409270 (UNCONDITIONAL_CALL)
// 005719ca: ADD ESP,0x10
// 005719cd: PUSH EAX
// 005719ce: LEA EAX,[ESP + 0x20c]
// 005719d5: PUSH EAX
// 005719d6: CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   XREF to: 00421010 (UNCONDITIONAL_CALL)
// 005719db: ADD ESP,0x8
// 005719de: TEST EAX,EAX
// 005719e0: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005719e6: CMP dword ptr [ESI + 0x15f6dc],0x0
// 005719ed: JZ 0x005720f8
//   XREF to: 005720f8 (CONDITIONAL_JUMP)
// 005719f3: CMP EBX,0x2
//   Label: LAB_005719f3
// 005719f6: JNC 0x005722dd
//   XREF to: 005722dd (CONDITIONAL_JUMP)
// 005719fc: CMP EBX,0x1
// 005719ff: JNZ 0x005722ec
//   XREF to: 005722ec (CONDITIONAL_JUMP)
// 00571a05: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00571a0a: PUSH 0x8
// 00571a0c: LEA EAX,[ESP + 0x8]
// 00571a10: PUSH EAX
// 00571a11: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00571a16: ADD ESP,0xc
// 00571a19: LEA EDX,[ESP + 0x1d8]
// 00571a20: PUSH EDX
// 00571a21: MOV EAX,dword ptr [EDI + 0x154]
// 00571a27: PUSH EDI
// 00571a28: LEA EBX,[ESP + 0x8]
// 00571a2c: XOR ESI,ESI
// 00571a2e: CALL dword ptr [EAX + 0x14]
// 00571a31: ADD ESP,0x8
// 00571a34: PUSH ESI
//   Label: LAB_00571a34
// 00571a35: LEA EAX,[ESP + 0x29c]
// 00571a3c: PUSH EAX
// 00571a3d: LEA EAX,[ESP + 0x1e0]
// 00571a44: PUSH EAX
// 00571a45: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 00571a4a: ADD ESP,0xc
// 00571a4d: PUSH EAX
// 00571a4e: LEA EAX,[ESP + 0x290]
// 00571a55: PUSH EAX
// 00571a56: PUSH EDI
// 00571a57: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00571a5c: ADD ESP,0xc
// 00571a5f: CMP EBX,EAX
// 00571a61: JZ 0x00571a73
//   XREF to: 00571a73 (CONDITIONAL_JUMP)
// 00571a63: MOV EDX,dword ptr [EAX]
// 00571a65: MOV dword ptr [EBX],EDX
// 00571a67: MOV EDX,dword ptr [EAX + 0x4]
// 00571a6a: MOV dword ptr [EBX + 0x4],EDX
// 00571a6d: MOV EDX,dword ptr [EAX + 0x8]
// 00571a70: MOV dword ptr [EBX + 0x8],EDX
// 00571a73: INC ESI
//   Label: LAB_00571a73
// 00571a74: ADD EBX,0xc
// 00571a77: CMP ESI,0x8
// 00571a7a: JL 0x00571a34
//   XREF to: 00571a34 (CONDITIONAL_JUMP)
// 00571a7c: LEA EAX,[ESP + 0x48]
// 00571a80: PUSH EAX
// 00571a81: LEA EAX,[ESP + 0x34]
// 00571a85: PUSH EAX
// 00571a86: LEA EAX,[ESP + 0x8]
// 00571a8a: PUSH EAX
// 00571a8b: LEA EAX,[ESP + 0xa4]
// 00571a92: PUSH EAX
// 00571a93: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571a98: ADD ESP,0x10
// 00571a9b: LEA EAX,[ESP + 0x2e0]
// 00571aa2: PUSH EAX
// 00571aa3: LEA EAX,[ESP + 0x224]
// 00571aaa: PUSH dword ptr [ESP + 0x318]
// 00571ab1: PUSH EAX
// 00571ab2: LEA EAX,[ESP + 0xa4]
// 00571ab9: PUSH EAX
// 00571aba: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571abf: ADD ESP,0x10
// 00571ac2: MOV ESI,EAX
// 00571ac4: LEA EAX,[ESP + 0x18]
// 00571ac8: PUSH EAX
// 00571ac9: LEA EAX,[ESP + 0x4c]
// 00571acd: PUSH EAX
// 00571ace: LEA EAX,[ESP + 0x8]
// 00571ad2: PUSH EAX
// 00571ad3: LEA EAX,[ESP + 0xa4]
// 00571ada: PUSH EAX
// 00571adb: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571ae0: ADD ESP,0x10
// 00571ae3: LEA EAX,[ESP + 0x2e0]
// 00571aea: PUSH EAX
// 00571aeb: LEA EAX,[ESP + 0x224]
// 00571af2: PUSH dword ptr [ESP + 0x318]
// 00571af9: PUSH EAX
// 00571afa: LEA EAX,[ESP + 0xa4]
// 00571b01: PUSH EAX
// 00571b02: XOR EBX,EBX
// 00571b04: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571b09: ADD ESP,0x10
// 00571b0c: OR ESI,EAX
// 00571b0e: JZ 0x00571b86
//   XREF to: 00571b86 (CONDITIONAL_JUMP)
// 00571b10: FLD float ptr [ESP + 0xbc]
// 00571b17: FLD float ptr [ESP + 0xc0]
// 00571b1e: FLD float ptr [ESP + 0xc4]
// 00571b25: LEA EAX,[ESP + 0x268]
// 00571b2c: LEA EDX,[ESP + 0x2a4]
// 00571b33: FXCH ST2
// 00571b35: FCHS
// 00571b37: FXCH
// 00571b39: FCHS
// 00571b3b: FXCH ST2
// 00571b3d: FCHS
// 00571b3f: FXCH ST2
// 00571b41: FSTP float ptr [ESP + 0x26c]
// 00571b48: FXCH
// 00571b4a: FSTP float ptr [ESP + 0x270]
// 00571b51: FSTP float ptr [ESP + 0x268]
// 00571b58: CMP EDX,EAX
// 00571b5a: JZ 0x00571b86
//   XREF to: 00571b86 (CONDITIONAL_JUMP)
// 00571b5c: MOV EAX,dword ptr [ESP + 0x268]
// 00571b63: MOV dword ptr [ESP + 0x2a4],EAX
// 00571b6a: MOV EAX,dword ptr [ESP + 0x26c]
// 00571b71: MOV dword ptr [ESP + 0x2a8],EAX
// 00571b78: MOV EAX,dword ptr [ESP + 0x270]
// 00571b7f: MOV dword ptr [ESP + 0x2ac],EAX
// 00571b86: LEA EAX,[ESP + 0x54]
//   Label: LAB_00571b86
// 00571b8a: PUSH EAX
// 00571b8b: LEA EAX,[ESP + 0x28]
// 00571b8f: PUSH EAX
// 00571b90: LEA EAX,[ESP + 0x14]
// 00571b94: PUSH EAX
// 00571b95: LEA EAX,[ESP + 0x14c]
// 00571b9c: PUSH EAX
// 00571b9d: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571ba2: ADD ESP,0x10
// 00571ba5: LEA EAX,[ESP + 0x2e0]
// 00571bac: PUSH EAX
// 00571bad: LEA EAX,[ESP + 0x224]
// 00571bb4: PUSH dword ptr [ESP + 0x318]
// 00571bbb: PUSH EAX
// 00571bbc: LEA EAX,[ESP + 0x14c]
// 00571bc3: PUSH EAX
// 00571bc4: OR EBX,ESI
// 00571bc6: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571bcb: ADD ESP,0x10
// 00571bce: MOV ESI,EAX
// 00571bd0: LEA EAX,[ESP + 0x3c]
// 00571bd4: PUSH EAX
// 00571bd5: LEA EAX,[ESP + 0x58]
// 00571bd9: PUSH EAX
// 00571bda: LEA EAX,[ESP + 0x14]
// 00571bde: PUSH EAX
// 00571bdf: LEA EAX,[ESP + 0x14c]
// 00571be6: PUSH EAX
// 00571be7: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571bec: ADD ESP,0x10
// 00571bef: LEA EAX,[ESP + 0x2e0]
// 00571bf6: PUSH EAX
// 00571bf7: LEA EAX,[ESP + 0x224]
// 00571bfe: PUSH dword ptr [ESP + 0x318]
// 00571c05: PUSH EAX
// 00571c06: LEA EAX,[ESP + 0x14c]
// 00571c0d: PUSH EAX
// 00571c0e: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571c13: ADD ESP,0x10
// 00571c16: OR ESI,EAX
// 00571c18: JZ 0x00571c90
//   XREF to: 00571c90 (CONDITIONAL_JUMP)
// 00571c1a: FLD float ptr [ESP + 0x164]
// 00571c21: FLD float ptr [ESP + 0x168]
// 00571c28: FLD float ptr [ESP + 0x16c]
// 00571c2f: LEA EAX,[ESP + 0x2c8]
// 00571c36: LEA EDX,[ESP + 0x2a4]
// 00571c3d: FXCH ST2
// 00571c3f: FCHS
// 00571c41: FXCH
// 00571c43: FCHS
// 00571c45: FXCH ST2
// 00571c47: FCHS
// 00571c49: FXCH ST2
// 00571c4b: FSTP float ptr [ESP + 0x2cc]
// 00571c52: FXCH
// 00571c54: FSTP float ptr [ESP + 0x2d0]
// 00571c5b: FSTP float ptr [ESP + 0x2c8]
// 00571c62: CMP EDX,EAX
// 00571c64: JZ 0x00571c90
//   XREF to: 00571c90 (CONDITIONAL_JUMP)
// 00571c66: MOV EAX,dword ptr [ESP + 0x2c8]
// 00571c6d: MOV dword ptr [ESP + 0x2a4],EAX
// 00571c74: MOV EAX,dword ptr [ESP + 0x2cc]
// 00571c7b: MOV dword ptr [ESP + 0x2a8],EAX
// 00571c82: MOV EAX,dword ptr [ESP + 0x2d0]
// 00571c89: MOV dword ptr [ESP + 0x2ac],EAX
// 00571c90: LEA EAX,[ESP + 0x3c]
//   Label: LAB_00571c90
// 00571c94: PUSH EAX
// 00571c95: LEA EAX,[ESP + 0x10]
// 00571c99: PUSH EAX
// 00571c9a: LEA EAX,[ESP + 0x8]
// 00571c9e: PUSH EAX
// 00571c9f: LEA EAX,[ESP + 0x114]
// 00571ca6: PUSH EAX
// 00571ca7: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571cac: ADD ESP,0x10
// 00571caf: LEA EAX,[ESP + 0x2e0]
// 00571cb6: PUSH EAX
// 00571cb7: LEA EAX,[ESP + 0x224]
// 00571cbe: PUSH dword ptr [ESP + 0x318]
// 00571cc5: PUSH EAX
// 00571cc6: LEA EAX,[ESP + 0x114]
// 00571ccd: PUSH EAX
// 00571cce: OR EBX,ESI
// 00571cd0: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571cd5: ADD ESP,0x10
// 00571cd8: MOV ESI,EAX
// 00571cda: LEA EAX,[ESP + 0x30]
// 00571cde: PUSH EAX
// 00571cdf: LEA EAX,[ESP + 0x40]
// 00571ce3: PUSH EAX
// 00571ce4: LEA EAX,[ESP + 0x8]
// 00571ce8: PUSH EAX
// 00571ce9: LEA EAX,[ESP + 0x114]
// 00571cf0: PUSH EAX
// 00571cf1: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571cf6: ADD ESP,0x10
// 00571cf9: LEA EAX,[ESP + 0x2e0]
// 00571d00: PUSH EAX
// 00571d01: LEA EAX,[ESP + 0x224]
// 00571d08: PUSH dword ptr [ESP + 0x318]
// 00571d0f: PUSH EAX
// 00571d10: LEA EAX,[ESP + 0x114]
// 00571d17: PUSH EAX
// 00571d18: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571d1d: ADD ESP,0x10
// 00571d20: OR ESI,EAX
// 00571d22: JZ 0x00571d9a
//   XREF to: 00571d9a (CONDITIONAL_JUMP)
// 00571d24: FLD float ptr [ESP + 0x12c]
// 00571d2b: FLD float ptr [ESP + 0x130]
// 00571d32: FLD float ptr [ESP + 0x134]
// 00571d39: LEA EAX,[ESP + 0x2d4]
// 00571d40: LEA EDX,[ESP + 0x2a4]
// 00571d47: FXCH ST2
// 00571d49: FCHS
// 00571d4b: FXCH
// 00571d4d: FCHS
// 00571d4f: FXCH ST2
// 00571d51: FCHS
// 00571d53: FXCH ST2
// 00571d55: FSTP float ptr [ESP + 0x2d8]
// 00571d5c: FXCH
// 00571d5e: FSTP float ptr [ESP + 0x2dc]
// 00571d65: FSTP float ptr [ESP + 0x2d4]
// 00571d6c: CMP EDX,EAX
// 00571d6e: JZ 0x00571d9a
//   XREF to: 00571d9a (CONDITIONAL_JUMP)
// 00571d70: MOV EAX,dword ptr [ESP + 0x2d4]
// 00571d77: MOV dword ptr [ESP + 0x2a4],EAX
// 00571d7e: MOV EAX,dword ptr [ESP + 0x2d8]
// 00571d85: MOV dword ptr [ESP + 0x2a8],EAX
// 00571d8c: MOV EAX,dword ptr [ESP + 0x2dc]
// 00571d93: MOV dword ptr [ESP + 0x2ac],EAX
// 00571d9a: LEA EAX,[ESP + 0x54]
//   Label: LAB_00571d9a
// 00571d9e: PUSH EAX
// 00571d9f: LEA EAX,[ESP + 0x4c]
// 00571da3: PUSH EAX
// 00571da4: LEA EAX,[ESP + 0x20]
// 00571da8: PUSH EAX
// 00571da9: LEA EAX,[ESP + 0x184]
// 00571db0: PUSH EAX
// 00571db1: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571db6: ADD ESP,0x10
// 00571db9: LEA EAX,[ESP + 0x2e0]
// 00571dc0: PUSH EAX
// 00571dc1: LEA EAX,[ESP + 0x224]
// 00571dc8: PUSH dword ptr [ESP + 0x318]
// 00571dcf: PUSH EAX
// 00571dd0: LEA EAX,[ESP + 0x184]
// 00571dd7: PUSH EAX
// 00571dd8: OR EBX,ESI
// 00571dda: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571ddf: ADD ESP,0x10
// 00571de2: MOV ESI,EAX
// 00571de4: LEA EAX,[ESP + 0x24]
// 00571de8: PUSH EAX
// 00571de9: LEA EAX,[ESP + 0x58]
// 00571ded: PUSH EAX
// 00571dee: LEA EAX,[ESP + 0x20]
// 00571df2: PUSH EAX
// 00571df3: LEA EAX,[ESP + 0x184]
// 00571dfa: PUSH EAX
// 00571dfb: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571e00: ADD ESP,0x10
// 00571e03: LEA EAX,[ESP + 0x2e0]
// 00571e0a: PUSH EAX
// 00571e0b: LEA EAX,[ESP + 0x224]
// 00571e12: PUSH dword ptr [ESP + 0x318]
// 00571e19: PUSH EAX
// 00571e1a: LEA EAX,[ESP + 0x184]
// 00571e21: PUSH EAX
// 00571e22: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571e27: ADD ESP,0x10
// 00571e2a: OR ESI,EAX
// 00571e2c: JZ 0x00571ea4
//   XREF to: 00571ea4 (CONDITIONAL_JUMP)
// 00571e2e: FLD float ptr [ESP + 0x19c]
// 00571e35: FLD float ptr [ESP + 0x1a0]
// 00571e3c: FLD float ptr [ESP + 0x1a4]
// 00571e43: LEA EDX,[ESP + 0x22c]
// 00571e4a: LEA EAX,[ESP + 0x2a4]
// 00571e51: FXCH ST2
// 00571e53: FCHS
// 00571e55: FXCH
// 00571e57: FCHS
// 00571e59: FXCH ST2
// 00571e5b: FCHS
// 00571e5d: FXCH ST2
// 00571e5f: FSTP float ptr [ESP + 0x230]
// 00571e66: FXCH
// 00571e68: FSTP float ptr [ESP + 0x234]
// 00571e6f: FSTP float ptr [ESP + 0x22c]
// 00571e76: CMP EAX,EDX
// 00571e78: JZ 0x00571ea4
//   XREF to: 00571ea4 (CONDITIONAL_JUMP)
// 00571e7a: MOV EAX,dword ptr [ESP + 0x22c]
// 00571e81: MOV dword ptr [ESP + 0x2a4],EAX
// 00571e88: MOV EAX,dword ptr [ESP + 0x230]
// 00571e8f: MOV dword ptr [ESP + 0x2a8],EAX
// 00571e96: MOV EAX,dword ptr [ESP + 0x234]
// 00571e9d: MOV dword ptr [ESP + 0x2ac],EAX
// 00571ea4: LEA EAX,[ESP + 0x24]
//   Label: LAB_00571ea4
// 00571ea8: PUSH EAX
// 00571ea9: LEA EAX,[ESP + 0x1c]
// 00571ead: PUSH EAX
// 00571eae: LEA EAX,[ESP + 0x8]
// 00571eb2: PUSH EAX
// 00571eb3: LEA EAX,[ESP + 0x6c]
// 00571eb7: PUSH EAX
// 00571eb8: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571ebd: ADD ESP,0x10
// 00571ec0: LEA EAX,[ESP + 0x2e0]
// 00571ec7: PUSH EAX
// 00571ec8: LEA EAX,[ESP + 0x224]
// 00571ecf: PUSH dword ptr [ESP + 0x318]
// 00571ed6: PUSH EAX
// 00571ed7: LEA EAX,[ESP + 0x6c]
// 00571edb: PUSH EAX
// 00571edc: OR EBX,ESI
// 00571ede: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571ee3: ADD ESP,0x10
// 00571ee6: MOV ESI,EAX
// 00571ee8: LEA EAX,[ESP + 0xc]
// 00571eec: PUSH EAX
// 00571eed: LEA EAX,[ESP + 0x28]
// 00571ef1: PUSH EAX
// 00571ef2: LEA EAX,[ESP + 0x8]
// 00571ef6: PUSH EAX
// 00571ef7: LEA EAX,[ESP + 0x6c]
// 00571efb: PUSH EAX
// 00571efc: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571f01: ADD ESP,0x10
// 00571f04: LEA EAX,[ESP + 0x2e0]
// 00571f0b: PUSH EAX
// 00571f0c: LEA EAX,[ESP + 0x224]
// 00571f13: PUSH dword ptr [ESP + 0x318]
// 00571f1a: PUSH EAX
// 00571f1b: LEA EAX,[ESP + 0x6c]
// 00571f1f: PUSH EAX
// 00571f20: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571f25: ADD ESP,0x10
// 00571f28: OR ESI,EAX
// 00571f2a: JZ 0x00571fa2
//   XREF to: 00571fa2 (CONDITIONAL_JUMP)
// 00571f2c: FLD float ptr [ESP + 0x84]
// 00571f33: FLD float ptr [ESP + 0x88]
// 00571f3a: FLD float ptr [ESP + 0x8c]
// 00571f41: LEA EDX,[ESP + 0x274]
// 00571f48: LEA EAX,[ESP + 0x2a4]
// 00571f4f: FXCH ST2
// 00571f51: FCHS
// 00571f53: FXCH
// 00571f55: FCHS
// 00571f57: FXCH ST2
// 00571f59: FCHS
// 00571f5b: FXCH ST2
// 00571f5d: FSTP float ptr [ESP + 0x278]
// 00571f64: FXCH
// 00571f66: FSTP float ptr [ESP + 0x27c]
// 00571f6d: FSTP float ptr [ESP + 0x274]
// 00571f74: CMP EAX,EDX
// 00571f76: JZ 0x00571fa2
//   XREF to: 00571fa2 (CONDITIONAL_JUMP)
// 00571f78: MOV EAX,dword ptr [ESP + 0x274]
// 00571f7f: MOV dword ptr [ESP + 0x2a4],EAX
// 00571f86: MOV EAX,dword ptr [ESP + 0x278]
// 00571f8d: MOV dword ptr [ESP + 0x2a8],EAX
// 00571f94: MOV EAX,dword ptr [ESP + 0x27c]
// 00571f9b: MOV dword ptr [ESP + 0x2ac],EAX
// 00571fa2: LEA EAX,[ESP + 0x54]
//   Label: LAB_00571fa2
// 00571fa6: PUSH EAX
// 00571fa7: LEA EAX,[ESP + 0x40]
// 00571fab: PUSH EAX
// 00571fac: LEA EAX,[ESP + 0x38]
// 00571fb0: PUSH EAX
// 00571fb1: LEA EAX,[ESP + 0xdc]
// 00571fb8: PUSH EAX
// 00571fb9: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00571fbe: ADD ESP,0x10
// 00571fc1: LEA EAX,[ESP + 0x2e0]
// 00571fc8: PUSH EAX
// 00571fc9: LEA EAX,[ESP + 0x224]
// 00571fd0: PUSH dword ptr [ESP + 0x318]
// 00571fd7: PUSH EAX
// 00571fd8: LEA EAX,[ESP + 0xdc]
// 00571fdf: PUSH EAX
// 00571fe0: OR EBX,ESI
// 00571fe2: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571fe7: ADD ESP,0x10
// 00571fea: MOV ESI,EAX
// 00571fec: LEA EAX,[ESP + 0x48]
// 00571ff0: PUSH EAX
// 00571ff1: LEA EAX,[ESP + 0x58]
// 00571ff5: PUSH EAX
// 00571ff6: LEA EAX,[ESP + 0x38]
// 00571ffa: PUSH EAX
// 00571ffb: LEA EAX,[ESP + 0xdc]
// 00572002: PUSH EAX
// 00572003: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00572008: ADD ESP,0x10
// 0057200b: LEA EAX,[ESP + 0x2e0]
// 00572012: PUSH EAX
// 00572013: LEA EAX,[ESP + 0x224]
// 0057201a: PUSH dword ptr [ESP + 0x318]
// 00572021: PUSH EAX
// 00572022: LEA EAX,[ESP + 0xdc]
// 00572029: PUSH EAX
// 0057202a: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 0057202f: ADD ESP,0x10
// 00572032: OR ESI,EAX
// 00572034: JZ 0x005720ac
//   XREF to: 005720ac (CONDITIONAL_JUMP)
// 00572036: FLD float ptr [ESP + 0xf4]
// 0057203d: FLD float ptr [ESP + 0xf8]
// 00572044: FLD float ptr [ESP + 0xfc]
// 0057204b: LEA EDX,[ESP + 0x244]
// 00572052: LEA EAX,[ESP + 0x2a4]
// 00572059: FXCH ST2
// 0057205b: FCHS
// 0057205d: FXCH
// 0057205f: FCHS
// 00572061: FXCH ST2
// 00572063: FCHS
// 00572065: FXCH ST2
// 00572067: FSTP float ptr [ESP + 0x248]
// 0057206e: FXCH
// 00572070: FSTP float ptr [ESP + 0x24c]
// 00572077: FSTP float ptr [ESP + 0x244]
// 0057207e: CMP EAX,EDX
// 00572080: JZ 0x005720ac
//   XREF to: 005720ac (CONDITIONAL_JUMP)
// 00572082: MOV EAX,dword ptr [ESP + 0x244]
// 00572089: MOV dword ptr [ESP + 0x2a4],EAX
// 00572090: MOV EAX,dword ptr [ESP + 0x248]
// 00572097: MOV dword ptr [ESP + 0x2a8],EAX
// 0057209e: MOV EAX,dword ptr [ESP + 0x24c]
// 005720a5: MOV dword ptr [ESP + 0x2ac],EAX
// 005720ac: OR EBX,ESI
//   Label: LAB_005720ac
// 005720ae: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005720b4: MOV EAX,dword ptr [ESP + 0x30c]
// 005720bb: MOV dword ptr [EAX + 0x14d144],EDI
// 005720c1: LEA EAX,[ESP + 0x2a4]
// 005720c8: PUSH EAX
// 005720c9: LEA EAX,[ESP + 0x254]
// 005720d0: PUSH EAX
// 005720d1: PUSH EDI
// 005720d2: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005720d7: ADD ESP,0xc
// 005720da: CMP EBP,EAX
// 005720dc: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005720e2: MOV EDX,dword ptr [EAX]
// 005720e4: MOV dword ptr [EBP],EDX
// 005720e7: MOV EDX,dword ptr [EAX + 0x4]
// 005720ea: MOV dword ptr [EBP + 0x4],EDX
// 005720ed: MOV EDX,dword ptr [EAX + 0x8]
// 005720f0: MOV dword ptr [EBP + 0x8],EDX
// 005720f3: JMP 0x005718ed
//   XREF to: 005718ed (UNCONDITIONAL_JUMP)
// 005720f8: MOV EAX,dword ptr [ESP + 0x1d4]
//   Label: LAB_005720f8
// 005720ff: TEST EAX,EAX
// 00572101: JZ 0x005719f3
//   XREF to: 005719f3 (CONDITIONAL_JUMP)
// 00572107: PUSH EAX
// 00572108: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0057210d: ADD ESP,0x4
// 00572110: MOV ECX,dword ptr [EAX + 0x5698]
// 00572116: MOV EBX,EAX
// 00572118: TEST ECX,ECX
// 0057211a: JNZ 0x00572140
//   XREF to: 00572140 (CONDITIONAL_JUMP)
// 0057211c: PUSH EAX
// 0057211d: MOV ESI,0x6461b6
//   XREF to: 006461b6 (DATA)
// 00572122: MOV EDX,0xcb
// 00572127: PUSH 0x6461cb
//   XREF to: 006461cb (DATA)
// 0057212c: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00572132: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00572138: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057213d: ADD ESP,0x8
// 00572140: LEA EAX,[EDI + 0x20]
//   Label: LAB_00572140
// 00572143: FLD float ptr [ESP + 0x220]
// 0057214a: FSUB float ptr [EAX]
// 0057214c: FLD float ptr [ESP + 0x224]
// 00572153: FXCH
// 00572155: FSTP float ptr [ESP + 0x2b0]
// 0057215c: FSUB float ptr [EAX + 0x4]
// 0057215f: FLD float ptr [ESP + 0x228]
// 00572166: FXCH
// 00572168: FSTP float ptr [ESP + 0x2b4]
// 0057216f: FSUB float ptr [EAX + 0x8]
// 00572172: LEA EAX,[EDI + 0x30]
// 00572175: PUSH EAX
// 00572176: LEA EAX,[ESP + 0x2e8]
// 0057217d: PUSH EAX
// 0057217e: PUSH dword ptr [ESP + 0x31c]
// 00572185: LEA EAX,[ESP + 0x2bc]
// 0057218c: FLD float ptr [ESP + 0x2ec]
// 00572193: PUSH EAX
// 00572194: FXCH
// 00572196: FSTP float ptr [ESP + 0x2c8]
// 0057219d: PUSH 0x0
// 0057219f: FSUB float ptr [EDI + 0x24]
// 005721a2: PUSH EBX
// 005721a3: FSTP float ptr [ESP + 0x2fc]
// 005721aa: CALL core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
//   XREF to: 00478740 (UNCONDITIONAL_CALL)
// 005721af: ADD ESP,0x18
// 005721b2: TEST EAX,EAX
// 005721b4: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005721ba: MOV EAX,dword ptr [ESP + 0x30c]
// 005721c1: MOV EBX,0x3f800000
// 005721c6: MOV dword ptr [EAX + 0x14d144],EDI
// 005721cc: XOR ECX,ECX
// 005721ce: FLD float ptr [ESP + 0x2e4]
// 005721d5: FADD float ptr [EDI + 0x24]
// 005721d8: LEA EAX,[ESP + 0x238]
// 005721df: FSTP float ptr [ESP + 0x2e0]
// 005721e6: MOV dword ptr [ESP + 0x238],ECX
// 005721ed: MOV dword ptr [ESP + 0x23c],EBX
// 005721f4: MOV dword ptr [ESP + 0x240],ECX
// 005721fb: CMP EBP,EAX
// 005721fd: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 00572203: MOV dword ptr [EBP],ECX
// 00572206: MOV EAX,dword ptr [ESP + 0x23c]
// 0057220d: MOV dword ptr [EBP + 0x4],EAX
// 00572210: MOV EAX,dword ptr [ESP + 0x240]
// 00572217: MOV dword ptr [EBP + 0x8],EAX
// 0057221a: JMP 0x005718ed
//   XREF to: 005718ed (UNCONDITIONAL_JUMP)
// 0057221f: LEA EAX,[ESP + 0x220]
//   Label: LAB_0057221f
// 00572226: PUSH EAX
// 00572227: LEA EAX,[ESP + 0x2c0]
// 0057222e: PUSH EAX
// 0057222f: PUSH EDI
// 00572230: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00572235: ADD ESP,0xc
// 00572238: LEA EAX,[ESP + 0x2e8]
// 0057223f: PUSH EAX
// 00572240: FLD float ptr [ESP + 0x2e4]
// 00572247: PUSH dword ptr [ESP + 0x318]
// 0057224e: LEA EAX,[ESP + 0x2c4]
// 00572255: FSUB float ptr [EDI + 0x24]
// 00572258: PUSH EAX
// 00572259: FSTP float ptr [ESP + 0x2f4]
// 00572260: MOV EDX,dword ptr [EDI + 0x154]
// 00572266: PUSH EDI
// 00572267: CALL dword ptr [EDX + 0xb8]
// 0057226d: ADD ESP,0x10
// 00572270: TEST EAX,EAX
// 00572272: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 00572278: MOV EAX,dword ptr [ESP + 0x30c]
// 0057227f: MOV dword ptr [EAX + 0x14d144],EDI
// 00572285: FLD float ptr [ESP + 0x2e8]
// 0057228c: FADD float ptr [EDI + 0x24]
// 0057228f: MOV EAX,0x3f800000
// 00572294: FSTP float ptr [ESP + 0x2e0]
// 0057229b: MOV dword ptr [ESP + 0x284],EAX
// 005722a2: XOR EDI,EDI
// 005722a4: LEA EAX,[ESP + 0x280]
// 005722ab: MOV dword ptr [ESP + 0x280],EDI
// 005722b2: MOV dword ptr [ESP + 0x288],EDI
// 005722b9: CMP EBP,EAX
// 005722bb: JZ 0x005718ed
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005722c1: MOV dword ptr [EBP],EDI
// 005722c4: MOV EAX,dword ptr [ESP + 0x284]
// 005722cb: MOV dword ptr [EBP + 0x4],EAX
// 005722ce: MOV EAX,dword ptr [ESP + 0x288]
// 005722d5: MOV dword ptr [EBP + 0x8],EAX
// 005722d8: JMP 0x005718ed
//   XREF to: 005718ed (UNCONDITIONAL_JUMP)
// 005722dd: JBE 0x005718ed
//   Label: LAB_005722dd
//   XREF to: 005718ed (CONDITIONAL_JUMP)
// 005722e3: CMP EBX,0x3
// 005722e6: JZ 0x0057221f
//   XREF to: 0057221f (CONDITIONAL_JUMP)
// 005722ec: MOV ECX,0x646217
//   Label: LAB_005722ec
//   XREF to: 00646217 (PARAM)
// 005722f1: MOV EBX,0x12b
// 005722f6: PUSH 0x64622c
//   XREF to: 0064622c (DATA)
// 005722fb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00572301: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00572307: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057230c: ADD ESP,0x4
// 0057230f: JMP 0x005718ed
//   XREF to: 005718ed (UNCONDITIONAL_JUMP)
// 00572314: PUSH EBX
//   Label: LAB_00572314
// 00572315: MOV EDX,dword ptr [EBX + 0x154]
// 0057231b: CALL dword ptr [EDX + 0x3c]
// 0057231e: ADD ESP,0x4
// 00572321: MOV EDX,dword ptr [ESP + 0x30c]
// 00572328: MOV dword ptr [EDX + 0x14d134],EAX
// 0057232e: MOV EAX,dword ptr [ESP + 0x2e0]
// 00572335: ADD ESP,0x2f8
// 0057233b: POP EBP
// 0057233c: POP EDI
// 0057233d: POP ESI
// 0057233e: POP EBX
// 0057233f: RET
