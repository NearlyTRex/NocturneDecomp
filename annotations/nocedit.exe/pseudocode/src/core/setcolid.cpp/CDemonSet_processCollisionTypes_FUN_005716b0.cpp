// Name: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
// Address: 005716b0
// Address Range: [[005716b0, 0057233f]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)

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
  CVector3f *pCVar8;
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
  byte auStack_25c [20];
  byte auStack_248 [12];
  byte auStack_23c [8];
  CVector3f CStack_234;
  byte auStack_228 [8];
  byte auStack_220 [8];
  byte auStack_218 [36];
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  byte auStack_1a0 [8];
  byte auStack_198 [8];
  byte auStack_190 [32];
  byte auStack_170 [8];
  byte auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  byte auStack_154 [24];
  float fStack_13c;
  byte local_138 [36];
  byte auStack_114 [8];
  byte auStack_10c [16];
  float local_fc;
  byte local_f8 [12];
  float local_ec;
  float local_e8;
  byte local_e4 [36];
  CVector3f CStack_c0;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_9c;
  byte auStack_8c [8];
  byte auStack_84 [8];
  byte auStack_7c [8];
  byte auStack_74 [8];
  byte auStack_6c [8];
  byte auStack_64 [8];
  byte auStack_5c [8];
  float fStack_54;
  CDemonSet *pCStack_50;
  CVector3f *pCStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  byte auStack_38 [16];
  float local_28;
  CVector3f CStack_24;
  float local_18;
  CVector3f *local_14;
  
  pCVar4 = position;
  if (0.0 < radius) {
    CStack_24.x = core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
                            (&g_CDemonRaytraceInstance,position,radius,&this_ptr->ground_type,
                             &this_ptr->collision_normal);
  }
  else {
    CStack_24.x = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
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
  local_e4._4_4_ = (float)local_e4._4_4_ + 2f;
  position[0x1bc1b].x = 0.0;
  position[0x1bc1b].y = -NAN;
  fVar2 = position[0x1d48c].y;
  position[0x1bc1b].z = -NAN;
  if (-1 < (int)fVar2) {
    if (local_f8 + 8 != local_e4) {
      local_f8._8_4_ = local_e4._0_4_;
      local_e8 = (float)local_e4._8_4_;
      local_ec = (float)local_e4._4_4_;
    }
    local_f8._8_4_ = (float)local_f8._8_4_ + in_stack_00000010;
    local_e8 = local_e8 + in_stack_00000010;
    local_fc = local_fc - in_stack_00000010;
    local_f8._4_4_ = (float)local_f8._4_4_ - in_stack_00000010;
    if (&local_fc != (float *)(local_f8 + 8)) {
      local_f8._0_4_ = local_ec;
      local_fc = (float)local_f8._8_4_;
      local_f8._4_4_ = local_e8;
    }
    local_f8._0_4_ = (float)local_f8._0_4_ + -10f;
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
           && (local_138._12_4_ = pCVar6, local_138._16_4_ = pCVar6,
              uVar7 = (*pCVar3->vtable->hasCollision)(pCVar3,(SCollisionInfo *)(auStack_154 + 8)),
              uVar7 != 0)) {
          other = core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
                            (pCVar3,(CBoundingBox3D *)local_f8,(SCollisionInfo *)local_138,uVar7);
          iVar5 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
                            ((CBoundingBox3D *)(local_e4 + 8),other);
          if (iVar5 != 0) {
            if ((pCVar20[0x1d492].y == 0.0) &&
               ((CKeyFramedModelInstance *)auStack_10c._0_4_ != (CKeyFramedModelInstance *)0x0)) {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      ((CKeyFramedModelInstance *)auStack_10c._0_4_);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0xcb;
                core_main_c_displayErrorAndQuit_FUN_00506f10("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision");
              }
              local_28 = CStack_c0.z - (pCVar3->location).position.x;
              CStack_24.x = fStack_b4 - (pCVar3->location).position.y;
              CStack_24.y = fStack_b0 - (pCVar3->location).position.z;
              radius = (float)position - (pCVar3->location).position.y;
              iVar5 = core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
                                (this_ptr_00,0,(float)&local_28,in_stack_0000003c,&radius,
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
                pCVar20 = (CVector3f *)&stack0xfffffd24;
                uVar7 = 0;
                (*pCVar3->vtable->getBoundingBox)(pCVar3,(CBoundingBox3D *)(auStack_10c + 8));
                do {
                  pCVar8 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                                     ((CBoundingBox3D *)(local_f8 + 8),(CVector3f *)(auStack_38 + 8)
                                      ,uVar7);
                  pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                     (pCVar3,(CVector3f *)auStack_38,pCVar8);
                  if (pCVar20 != pCVar8) {
                    pCVar20->x = pCVar8->x;
                    pCVar20->y = pCVar8->y;
                    pCVar20->z = pCVar8->z;
                  }
                  uVar7 = uVar7 + 1;
                  pCVar20 = pCVar20 + 1;
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
                           (CVector3f *)&stack0xfffffd74,(CVector3f *)auStack_25c);
                iVar10 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_170 + 4),(float)auStack_8c,
                                    in_stack_00000068,(float *)&stack0x00000034);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_168,(CVector3f *)&stack0xfffffd64,
                           (CVector3f *)(auStack_25c + 8),(CVector3f *)&stack0xfffffd94);
                iVar11 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_168 + 4),(float)auStack_84,
                                    in_stack_00000070,&stack0x0000003c);
                if (iVar10 != 0 || iVar11 != 0) {
                  in_stack_00000028 = (CDemonSet *)-fStack_13c;
                  in_stack_0000002c = (CVector3f *)-(float)local_138._0_4_;
                  in_stack_00000030 = -(float)local_138._4_4_;
                  if (&this_ptr != &stack0x00000028) {
                    this_ptr = in_stack_00000028;
                    position = in_stack_0000002c;
                    radius = in_stack_00000030;
                  }
                }
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_198,(CVector3f *)&stack0xfffffd60,
                           (CVector3f *)&stack0xfffffd6c,(CVector3f *)&stack0xfffffd9c);
                iVar12 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_198 + 4),(float)auStack_7c,
                                    in_stack_00000078,&stack0x00000044);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_190,(CVector3f *)&stack0xfffffd68,
                           (CVector3f *)auStack_25c,(CVector3f *)&stack0xfffffd98);
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
                          ((CDemonTriangle *)(local_138 + 0x20),(CVector3f *)&stack0xfffffd88,
                           (CVector3f *)auStack_248,(CVector3f *)auStack_23c);
                iVar14 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)auStack_114,(float)auStack_6c,
                                    in_stack_00000088,&stack0x00000054);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)(auStack_114 + 4),(CVector3f *)&stack0xfffffd90,
                           &CStack_234,(CVector3f *)&stack0xfffffd9c);
                iVar15 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)auStack_10c,(float)auStack_64,
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
                           (CVector3f *)&stack0xfffffd98,(CVector3f *)auStack_25c);
                iVar16 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                                   ((CDemonTriangle *)(auStack_220 + 4),(float)auStack_5c,
                                    in_stack_00000098,(float *)&stack0x00000064);
                core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                          ((CDemonTriangle *)auStack_218,(CVector3f *)&stack0xfffffd88,
                           (CVector3f *)(auStack_25c + 8),(CVector3f *)&stack0xfffffd94);
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
                  CStack_24.z = -(float)auStack_170._4_4_;
                  local_18 = -(float)auStack_168._0_4_;
                  local_14 = (CVector3f *)-(float)auStack_168._4_4_;
                  if (&stack0x00000044 != &CStack_24.z) {
                    in_stack_00000044 = CStack_24.z;
                    in_stack_00000048 = local_18;
                    in_stack_0000004c = local_14;
                  }
                }
                if ((((((iVar5 != 0 || iVar9 != 0) || (iVar10 != 0 || iVar11 != 0)) ||
                      (iVar12 != 0 || iVar13 != 0)) || (iVar14 != 0 || iVar15 != 0)) ||
                    (iVar16 != 0 || iVar17 != 0)) || (iVar18 != 0 || iVar19 != 0)) {
                  *(CDemonActor **)(in_stack_000000ac + 0x14d144) = pCVar3;
                  pCVar20 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                      (pCVar3,(CVector3f *)&stack0xfffffff0,
                                       (CVector3f *)&stack0x00000044);
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
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar3,&CStack_24,&CStack_c0);
              radius = (float)this_ptr - (pCVar3->location).position.y;
              iVar5 = (*pCVar3->vtable->customGetFloorHeight)
                                (pCVar3,(float)&CStack_24.y,(float)in_stack_00000038,&radius);
              if (iVar5 != 0) {
                *(CDemonActor **)((int)in_stack_00000054 + 0x14d144) = pCVar3;
                in_stack_00000028 = (CDemonSet *)(in_stack_00000030 + (pCVar3->location).position.y)
                ;
                auStack_38._4_4_ = 1.0;
                auStack_38._0_4_ = 0.0;
                auStack_38._8_4_ = 0.0;
                if (pfVar1 != (float *)auStack_38) {
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
      iVar5 = (*pCVar3->vtable->getGroundType)(pCVar3);
      *(int *)((int)in_stack_00000014 + 0x14d134) = iVar5;
      return local_18;
    }
  }
  return CStack_24.x;
}
