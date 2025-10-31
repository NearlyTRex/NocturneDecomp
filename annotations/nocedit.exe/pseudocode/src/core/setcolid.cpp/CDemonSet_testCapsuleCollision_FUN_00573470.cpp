// Name: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// Address: 00573470
// Address Range: [[00573470, 00573e04]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 004291bc [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7301 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2e1e [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa414 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_00646266
//   TerminatedCString s_info_keyFramedModelInsta_0064627b
//   TerminatedCString s_core_setcolid_cpp_006462c7
//   TerminatedCString s_Invalid_collision_type_006462dc
//   double DOUBLE_006462f6 = -0.00100000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_CDemonActor_FUN_00409270
//   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
//   core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
          (CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,
          void *user_data1,void *user_data2)

{
  double dVar1;
  double dVar2;
  CDemonActor *actor;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  void *pvVar13;
  uint uVar14;
  CBoundingBox3D *pCVar15;
  int iVar16;
  CKeyFramedModel *this_ptr_00;
  CVector3f *pCVar17;
  BADSPACEBASE *in_ESP;
  double in_stack_fffffd88;
  SIntersectXZCylinder *cylinder1;
  double in_stack_fffffd90;
  double dStack_250;
  undefined1 auStack_1d4 [4];
  undefined1 auStack_1d0 [92];
  undefined1 auStack_174 [44];
  undefined1 local_148 [8];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  void *local_124;
  void *pvStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [24];
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  void *pvStack_c4;
  void *pvStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CKeyFramedModelInstance *pCStack_a4;
  CBoundingBox3D CStack_a0;
  float local_88;
  float local_84;
  void *pvStack_80;
  float fStack_7c;
  CBoundingBox3D CStack_74;
  float fStack_50;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  CKeyFramedModelInstance *pCStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_24;
  CDemonSet *pCVar18;
  int iVar19;
  
  core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
            ((SCapsuleCollision *)(auStack_174 + 0x28),start_x,start_z,dir_x,dir_z,radius,user_data1
             ,user_data2);
  if ((ABS(dir_x) != 0.0) || (ABS(dir_z) != 0.0)) {
    core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
              (&g_CDemonRaytraceInstance,(SCapsuleCollision *)local_148);
  }
  this_ptr->ground_type = 1;
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    CStack_a0.max.y = local_134 - (float)local_124;
    local_84 = local_134 + (float)local_124;
    if (local_12c <= 0.0) {
      CStack_a0.max.y = CStack_a0.max.y + local_12c;
    }
    else {
      local_84 = local_84 + local_12c;
    }
    CStack_a0.max.z = fStack_11c;
    local_88 = local_130 - (float)local_124;
    fStack_7c = local_130 + (float)local_124;
    pvStack_80 = pvStack_120;
    if (local_128 <= 0.0) {
      local_88 = local_88 + local_128;
    }
    else {
      fStack_7c = fStack_7c + local_128;
    }
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_e8);
    local_e8._0_4_ = this_ptr->ray_type;
    local_e8._4_4_ = this_ptr->field52_0x15f684;
    local_e0 = this_ptr->field53_0x15f688;
    fStack_dc = this_ptr->field54_0x15f68c;
    fStack_d8 = this_ptr->field55_0x15f690;
    iVar19 = 0;
    pCVar18 = this_ptr;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      do {
        actor = *(CDemonActor **)(pCVar18->field19_0x14f0a0 + 0x7d0c);
        pvVar13 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,actor);
        if ((pvVar13 == (void *)0x0) &&
           (pvStack_c4 = pvVar13, pvStack_c0 = pvVar13,
           uVar14 = (*((actor->metadata).vtable)->hasCollision)
                              (actor,(SCollisionInfo *)(local_e8 + 4)), uVar14 != 0)) {
          pCVar15 = core_actor_cpp_CDemonActor_FUN_00409270(actor);
          iVar16 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&CStack_74,pCVar15);
          cylinder1 = (SIntersectXZCylinder *)((ulonglong)in_stack_fffffd88 >> 0x20);
          if (iVar16 != 0) {
            if (pCStack_a4 == (CKeyFramedModelInstance *)0x0) {
              if (uVar14 < 2) {
                if (uVar14 == 1) {
                  pCVar15 = (*((actor->metadata).vtable)->getBoundingBox)(actor,&CStack_a0);
                  in_stack_fffffd88 = (double)CONCAT44(cylinder1,pCVar15);
                  iVar16 = core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                                     (this_ptr,(CBoundingBox3D *)auStack_110,(CMatrix3x3f *)pCVar15,
                                      cylinder1,SUB84(in_stack_fffffd90,0));
                  if (iVar16 != 0) {
                    this_ptr->collision_actor = actor;
                  }
                }
                else {
LAB_00573d6f:
                  g_CurrentFilename = "..\\core\\setcolid.cpp";
                  g_CurrentLineNumber = 0x3f1;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid collision type!");
                }
              }
              else if (uVar14 < 3) {
                fStack_b4 = fStack_b4 + (actor->location).position.y;
                fStack_b0 = fStack_b0 + (actor->location).position.y;
                fVar3 = (actor->location).position.x;
                fVar4 = (actor->location).position.z;
                if ((fStack_b4 < (float)auStack_110._16_4_) &&
                   ((float)auStack_110._20_4_ < fStack_b0)) {
                  fVar5 = fVar3 - fStack_114;
                  fVar7 = fVar4 - (float)auStack_110._0_4_;
                  fVar8 = fStack_ac + (float)auStack_110._12_4_;
                  fVar9 = fVar8 * fVar8;
                  fVar6 = fVar7 * fVar7 + fVar5 * fVar5;
                  in_stack_fffffd88 = (double)fVar9;
                  if (fVar9 <= fVar6) {
                    dVar1 = (double)local_f0;
                    dVar2 = (double)local_ec;
                    dVar10 = (double)fVar7 * dVar2 + (double)fVar5 * dVar1;
                    if (0.0 < dVar10) {
                      in_stack_fffffd90 = (double)fStack_114;
                      dVar11 = dVar1 * dVar10 + in_stack_fffffd90;
                      fVar5 = fVar3 - (float)dVar11;
                      dVar10 = dVar2 * dVar10 + (double)(float)auStack_110._0_4_;
                      fVar6 = fVar4 - (float)dVar10;
                      fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
                      if (fVar5 < fVar9) {
                        dVar12 = SQRT(in_stack_fffffd88 - (double)fVar5);
                        dVar11 = dVar11 - dVar1 * dVar12;
                        dVar10 = dVar10 - dVar2 * dVar12;
                        if (ABS((float)auStack_110._4_4_) <= ABS((float)auStack_110._8_4_)) {
                          dVar1 = (dVar10 - (double)(float)auStack_110._0_4_) /
                                  (double)(float)auStack_110._8_4_;
                        }
                        else {
                          dVar1 = (dVar11 - in_stack_fffffd90) / (double)(float)auStack_110._4_4_;
                        }
                        if (((0.0 <= dVar1) && ((float)dVar1 < (float)local_124)) && (dVar1 <= 1.0))
                        {
                          local_124 = (void *)(float)dVar1;
                          pvStack_120 = (void *)((float)dVar11 - fVar3);
                          fStack_118 = (float)dVar10 - fVar4;
                          fStack_11c = 0.0;
                          this_ptr->collision_actor = actor;
                        }
                      }
                    }
                  }
                  else {
                    dStack_250 = SQRT((double)fVar6) - (double)fVar8;
                    if (DOUBLE_006462f6 < dStack_250) {
                      dStack_250 = -0.001;
                    }
                    if ((float)dStack_250 < (float)local_124) {
                      local_124 = (void *)(float)dStack_250;
                      pvStack_120 = (void *)-fVar5;
                      fStack_118 = -fVar7;
                      fStack_11c = 0.0;
                      this_ptr->collision_actor = actor;
                    }
                  }
                }
              }
              else {
                if (uVar14 != 3) goto LAB_00573d6f;
                fStack_40 = fStack_114;
                fStack_38 = (float)auStack_110._0_4_;
                pCStack_3c = pCStack_a4;
                core_actor_cpp_CDemonActor_FUN_00408f10(actor);
                fStack_48 = (float)auStack_110._8_4_;
                fStack_40 = (float)auStack_110._12_4_;
                uStack_44 = 0;
                core_actor_cpp_CDemonActor_FUN_00408ea0(actor);
                core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                          ((SCapsuleCollision *)(auStack_1d0 + 0x58),fStack_50,fStack_48,fStack_2c,
                           fStack_24,radius,
                           (void *)((float)user_data1 - (actor->location).position.y),
                           (void *)((float)user_data2 - (actor->location).position.y));
                auStack_174._0_4_ = fStack_118;
                in_stack_fffffd88 = (double)CONCAT44(cylinder1,(SIntersectXZCylinder *)auStack_174);
                (*((actor->metadata).vtable)->customIntersectCylinderXZ)
                          (actor,(SIntersectXZCylinder *)auStack_174);
                if ((float)auStack_174._20_4_ < (float)auStack_110._12_4_) {
                  auStack_110._12_4_ = auStack_174._20_4_;
                  in_stack_fffffd90 = (double)CONCAT44(actor,0x573d18);
                  pCVar17 = core_actor_cpp_CDemonActor_FUN_00408e80(actor);
                  if ((CVector3f *)(auStack_110 + 0x14) != pCVar17) {
                    auStack_110._20_4_ = pCVar17->x;
                    fStack_f8 = pCVar17->y;
                    fStack_f4 = pCVar17->z;
                  }
                  this_ptr->collision_actor = actor;
                }
              }
            }
            else {
              this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                      (pCStack_a4);
              if (this_ptr_00->collision_triangle_list == (CDemonTriangle *)0x0) {
                g_CurrentFilename = "..\\core\\setcolid.cpp";
                g_CurrentLineNumber = 0x389;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",this_ptr_00);
              }
              core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
                        ((SCapsuleCollision *)auStack_1d4,
                         (float)auStack_110._4_4_ - (actor->location).position.x,
                         (float)auStack_110._8_4_ - (actor->location).position.z,
                         (float)auStack_110._12_4_,(float)auStack_110._16_4_,radius,
                         (void *)((float)user_data1 - (actor->location).position.y),
                         (void *)((float)user_data2 - (actor->location).position.y));
              auStack_1d0._0_4_ = fStack_118;
              in_stack_fffffd88 = (double)CONCAT44(cylinder1,&actor->orient);
              core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
                        (this_ptr_00,0,(SIntersectXZCylinder *)auStack_1d0,
                         (CVector3f *)&actor->orient);
              if ((float)auStack_1d0._4_4_ < fStack_114) {
                fStack_114 = (float)auStack_1d0._4_4_;
                if (auStack_110 != auStack_1d0 + 8) {
                  auStack_110._0_4_ = auStack_1d0._8_4_;
                  auStack_110._4_4_ = auStack_1d0._12_4_;
                  auStack_110._8_4_ = auStack_1d0._16_4_;
                }
                this_ptr->collision_actor = actor;
              }
            }
          }
        }
        iVar19 = iVar19 + 1;
        pCVar18 = (CDemonSet *)pCVar18->cameras;
      } while (iVar19 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
  }
  if ((float)local_148._4_4_ <= 1.0) {
    fVar3 = SQRT(local_138 * local_138 + local_13c * local_13c + local_140 * local_140);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      local_140 = local_140 * fVar3;
      local_13c = local_13c * fVar3;
      local_138 = local_138 * fVar3;
    }
    else {
      local_13c = 0.0;
      local_140 = 0.0;
      local_138 = 0.0;
    }
    if (&this_ptr->collision_normal != (CVector3f *)&local_140) {
      (this_ptr->collision_normal).x = local_140;
      (this_ptr->collision_normal).y = local_13c;
      (this_ptr->collision_normal).z = local_138;
      return (float)local_148._4_4_;
    }
  }
  return (float)local_148._4_4_;
}


// Assembly code:
// 00573470: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// 00573471: PUSH ESI
// 00573472: PUSH EDI
// 00573473: PUSH EBP
// 00573474: MOV EBP,ESP
// 00573476: SUB ESP,0x298
// 0057347c: AND ESP,0xfffffff8
// 0057347f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00573482: PUSH dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00573485: PUSH dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 00573488: PUSH dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0057348b: PUSH dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0057348e: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00573491: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00573494: LEA EAX,[ESP + 0x174]
//   XREF to: Stack[-0x14c] (DATA)
// 0057349b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057349e: PUSH EAX
// 0057349f: CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
//   XREF to: 00496b90 (UNCONDITIONAL_CALL)
// 005734a4: ADD ESP,0x20
// 005734a7: TEST dword ptr [EBP + 0x20],0x7fffffff
//   XREF to: Stack[0x10] (READ)
// 005734ae: JNZ 0x005734b9
//   XREF to: 005734b9 (CONDITIONAL_JUMP)
// 005734b0: TEST dword ptr [EBP + 0x24],0x7fffffff
//   XREF to: Stack[0x14] (READ)
// 005734b7: JZ 0x005734ce
//   XREF to: 005734ce (CONDITIONAL_JUMP)
// 005734b9: LEA EAX,[ESP + 0x15c]
//   Label: LAB_005734b9
//   XREF to: Stack[-0x14c] (DATA)
// 005734c0: PUSH EAX
// 005734c1: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005734c6: CALL core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
//   XREF to: 00496c60 (UNCONDITIONAL_CALL)
// 005734cb: ADD ESP,0x8
// 005734ce: MOV dword ptr [EDI + 0x14d134],0x1
//   Label: LAB_005734ce
// 005734d8: MOV dword ptr [EDI + 0x14d148],0xffffffff
// 005734e2: MOV dword ptr [EDI + 0x14d14c],0xffffffff
// 005734ec: MOV EBX,dword ptr [EDI + 0x15f694]
// 005734f2: MOV dword ptr [EDI + 0x14d144],0x0
// 005734fc: TEST EBX,EBX
// 005734fe: JL 0x00573684
//   XREF to: 00573684 (CONDITIONAL_JUMP)
// 00573504: FLD float ptr [ESP + 0x16c]
//   XREF to: Stack[-0x13c] (READ)
// 0057350b: FLD ST0
// 0057350d: FLD float ptr [ESP + 0x174]
//   XREF to: Stack[-0x134] (READ)
// 00573514: FLDZ
// 00573516: FXCH ST3
// 00573518: FSUB float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x12c] (READ)
// 0057351f: FXCH ST2
// 00573521: FADD float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x12c] (READ)
// 00573528: FXCH ST2
// 0057352a: FSTP float ptr [ESP + 0x210]
//   XREF to: Stack[-0x98] (WRITE)
// 00573531: FXCH
// 00573533: FSTP float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x8c] (WRITE)
// 0057353a: FXCH
// 0057353c: FCOMPP
// 0057353e: FNSTSW AX
// 00573540: SAHF
// 00573541: JNC 0x00573703
//   XREF to: 00573703 (CONDITIONAL_JUMP)
// 00573547: FLD float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x8c] (READ)
// 0057354e: FADD float ptr [ESP + 0x174]
//   XREF to: Stack[-0x134] (READ)
// 00573555: FSTP float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x8c] (WRITE)
// 0057355c: FLD float ptr [ESP + 0x170]
//   Label: LAB_0057355c
//   XREF to: Stack[-0x138] (READ)
// 00573563: FLD ST0
// 00573565: FLD float ptr [ESP + 0x178]
//   XREF to: Stack[-0x130] (READ)
// 0057356c: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x124] (READ)
// 00573573: FLDZ
// 00573575: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0057357c: FXCH ST3
// 0057357e: FSUB float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x12c] (READ)
// 00573585: FXCH ST2
// 00573587: FADD float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x12c] (READ)
// 0057358e: FXCH ST2
// 00573590: FSTP float ptr [ESP + 0x218]
//   XREF to: Stack[-0x90] (WRITE)
// 00573597: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x128] (READ)
// 0057359e: FXCH
// 005735a0: FSTP float ptr [ESP + 0x224]
//   XREF to: Stack[-0x84] (WRITE)
// 005735a7: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005735ae: FXCH
// 005735b0: FCOMPP
// 005735b2: FNSTSW AX
// 005735b4: SAHF
// 005735b5: JNC 0x0057371d
//   XREF to: 0057371d (CONDITIONAL_JUMP)
// 005735bb: FLD float ptr [ESP + 0x224]
//   XREF to: Stack[-0x84] (READ)
// 005735c2: FADD float ptr [ESP + 0x178]
//   XREF to: Stack[-0x130] (READ)
// 005735c9: FSTP float ptr [ESP + 0x224]
//   XREF to: Stack[-0x84] (WRITE)
// 005735d0: LEA EAX,[ESP + 0x1b8]
//   Label: LAB_005735d0
//   XREF to: Stack[-0xf0] (DATA)
// 005735d7: PUSH EAX
// 005735d8: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005735dd: ADD ESP,0x4
// 005735e0: MOV EAX,dword ptr [EDI + 0x15f680]
// 005735e6: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005735ed: MOV EAX,dword ptr [EDI + 0x15f684]
// 005735f3: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005735fa: MOV EAX,dword ptr [EDI + 0x15f688]
// 00573600: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00573607: MOV EAX,dword ptr [EDI + 0x15f68c]
// 0057360d: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 00573614: MOV EAX,dword ptr [EDI + 0x15f690]
// 0057361a: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00573621: XOR ESI,ESI
// 00573623: MOV EAX,dword ptr [EDI + 0x156da8]
// 00573629: MOV dword ptr [ESP + 0x294],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00573630: TEST EAX,EAX
// 00573632: JLE 0x00573684
//   XREF to: 00573684 (CONDITIONAL_JUMP)
// 00573634: MOV dword ptr [ESP + 0x290],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0057363b: MOV EBX,dword ptr [ESP + 0x290]
//   Label: LAB_0057363b
//   XREF to: Stack[-0x18] (READ)
// 00573642: MOV EBX,dword ptr [EBX + 0x156dac]
// 00573648: PUSH EBX
// 00573649: PUSH EDI
// 0057364a: CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   XREF to: 00572e20 (UNCONDITIONAL_CALL)
// 0057364f: ADD ESP,0x8
// 00573652: TEST EAX,EAX
// 00573654: JZ 0x00573737
//   XREF to: 00573737 (CONDITIONAL_JUMP)
// 0057365a: MOV EDX,dword ptr [ESP + 0x290]
//   Label: LAB_0057365a
//   XREF to: Stack[-0x18] (READ)
// 00573661: MOV ECX,dword ptr [ESP + 0x294]
//   XREF to: Stack[-0x14] (READ)
// 00573668: MOV EBX,dword ptr [EDI + 0x156da8]
// 0057366e: ADD EDX,0x4
// 00573671: INC ECX
// 00573672: MOV dword ptr [ESP + 0x290],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00573679: MOV dword ptr [ESP + 0x294],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00573680: CMP ECX,EBX
// 00573682: JL 0x0057363b
//   XREF to: 0057363b (CONDITIONAL_JUMP)
// 00573684: FLD float ptr [ESP + 0x15c]
//   Label: LAB_00573684
//   XREF to: Stack[-0x14c] (READ)
// 0057368b: FLD1
// 0057368d: FCOMPP
// 0057368f: FNSTSW AX
// 00573691: SAHF
// 00573692: JC 0x005736f5
//   XREF to: 005736f5 (CONDITIONAL_JUMP)
// 00573694: FLD float ptr [ESP + 0x160]
//   XREF to: Stack[-0x148] (READ)
// 0057369b: FMUL ST0
// 0057369d: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x144] (READ)
// 005736a4: FMUL ST0
// 005736a6: FADDP
// 005736a8: FLD float ptr [ESP + 0x168]
//   XREF to: Stack[-0x140] (READ)
// 005736af: FMUL ST0
// 005736b1: FADDP
// 005736b3: FSQRT
// 005736b5: FST float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x208] (WRITE)
// 005736bc: FLDZ
// 005736be: FCOMPP
// 005736c0: FNSTSW AX
// 005736c2: SAHF
// 005736c3: JC 0x00573d96
//   XREF to: 00573d96 (CONDITIONAL_JUMP)
// 005736c9: XOR ECX,ECX
// 005736cb: MOV dword ptr [ESP + 0x164],ECX
//   XREF to: Stack[-0x144] (WRITE)
// 005736d2: MOV dword ptr [ESP + 0x160],ECX
//   XREF to: Stack[-0x148] (WRITE)
// 005736d9: MOV dword ptr [ESP + 0x168],ECX
//   XREF to: Stack[-0x140] (WRITE)
// 005736e0: LEA EAX,[ESP + 0x160]
//   Label: LAB_005736e0
//   XREF to: Stack[-0x148] (DATA)
// 005736e7: ADD EDI,0x14d128
// 005736ed: CMP EDI,EAX
// 005736ef: JNZ 0x00573dda
//   XREF to: 00573dda (CONDITIONAL_JUMP)
// 005736f5: MOV EAX,dword ptr [ESP + 0x15c]
//   Label: LAB_005736f5
//   XREF to: Stack[-0x14c] (READ)
// 005736fc: MOV ESP,EBP
// 005736fe: POP EBP
// 005736ff: POP EDI
// 00573700: POP ESI
// 00573701: POP EBX
// 00573702: RET
// 00573703: FLD float ptr [ESP + 0x210]
//   Label: LAB_00573703
//   XREF to: Stack[-0x98] (READ)
// 0057370a: FADD float ptr [ESP + 0x174]
//   XREF to: Stack[-0x134] (READ)
// 00573711: FSTP float ptr [ESP + 0x210]
//   XREF to: Stack[-0x98] (WRITE)
// 00573718: JMP 0x0057355c
//   XREF to: 0057355c (UNCONDITIONAL_JUMP)
// 0057371d: FLD float ptr [ESP + 0x218]
//   Label: LAB_0057371d
//   XREF to: Stack[-0x90] (READ)
// 00573724: FADD float ptr [ESP + 0x178]
//   XREF to: Stack[-0x130] (READ)
// 0057372b: FSTP float ptr [ESP + 0x218]
//   XREF to: Stack[-0x90] (WRITE)
// 00573732: JMP 0x005735d0
//   XREF to: 005735d0 (UNCONDITIONAL_JUMP)
// 00573737: MOV dword ptr [ESP + 0x1d8],EAX
//   Label: LAB_00573737
//   XREF to: Stack[-0xd0] (WRITE)
// 0057373e: MOV dword ptr [ESP + 0x1dc],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00573745: LEA EAX,[ESP + 0x1b8]
//   XREF to: Stack[-0xf0] (DATA)
// 0057374c: PUSH EAX
// 0057374d: MOV ESI,dword ptr [EBX + 0x154]
// 00573753: PUSH EBX
// 00573754: CALL dword ptr [ESI + 0x34]
// 00573757: MOV ESI,EAX
// 00573759: ADD ESP,0x8
// 0057375c: TEST EAX,EAX
// 0057375e: JZ 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573764: PUSH EAX
// 00573765: LEA EAX,[ESP + 0x1bc]
// 0057376c: PUSH EAX
// 0057376d: LEA EAX,[ESP + 0x200]
// 00573774: PUSH EAX
// 00573775: PUSH EBX
// 00573776: CALL core_actor.cpp_CDemonActor_FUN_00409270
//   XREF to: 00409270 (UNCONDITIONAL_CALL)
// 0057377b: ADD ESP,0x10
// 0057377e: PUSH EAX
// 0057377f: LEA EAX,[ESP + 0x214]
// 00573786: PUSH EAX
// 00573787: CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   XREF to: 00421010 (UNCONDITIONAL_CALL)
// 0057378c: ADD ESP,0x8
// 0057378f: TEST EAX,EAX
// 00573791: JZ 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573797: MOV EDX,dword ptr [ESP + 0x1dc]
// 0057379e: TEST EDX,EDX
// 005737a0: JZ 0x00573d50
//   XREF to: 00573d50 (CONDITIONAL_JUMP)
// 005737a6: PUSH EDX
// 005737a7: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005737ac: ADD ESP,0x4
// 005737af: MOV EDX,dword ptr [EAX + 0x5698]
// 005737b5: MOV ESI,EAX
// 005737b7: TEST EDX,EDX
// 005737b9: JNZ 0x005737df
//   XREF to: 005737df (CONDITIONAL_JUMP)
// 005737bb: PUSH EAX
// 005737bc: MOV ECX,0x646266
//   XREF to: 00646266 (PARAM)
// 005737c1: MOV EDX,0x389
// 005737c6: PUSH 0x64627b
//   XREF to: 0064627b (DATA)
// 005737cb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005737d1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005737d7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005737dc: ADD ESP,0x8
// 005737df: FLD float ptr [EBP + 0x30]
//   Label: LAB_005737df
//   XREF to: Stack[0x20] (READ)
// 005737e2: SUB ESP,0x4
// 005737e5: FSUB float ptr [EBX + 0x24]
// 005737e8: FLD float ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005737eb: FXCH
// 005737ed: FSTP float ptr [ESP]
// 005737f0: FSUB float ptr [EBX + 0x24]
// 005737f3: SUB ESP,0x4
// 005737f6: FSTP float ptr [ESP]
// 005737f9: PUSH dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005737fc: PUSH dword ptr [ESP + 0x184]
// 00573803: FLD float ptr [ESP + 0x180]
// 0057380a: PUSH dword ptr [ESP + 0x184]
// 00573811: FSUB float ptr [EBX + 0x28]
// 00573814: SUB ESP,0x4
// 00573817: FSTP float ptr [ESP]
// 0057381a: FLD float ptr [ESP + 0x184]
// 00573821: SUB ESP,0x4
// 00573824: FSUB float ptr [EBX + 0x20]
// 00573827: LEA EAX,[ESP + 0xc0]
// 0057382e: FSTP float ptr [ESP]
// 00573831: PUSH EAX
// 00573832: CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
//   XREF to: 00496b90 (UNCONDITIONAL_CALL)
// 00573837: ADD ESP,0x20
// 0057383a: MOV EAX,dword ptr [ESP + 0x15c]
// 00573841: MOV dword ptr [ESP + 0xa4],EAX
// 00573848: LEA EAX,[EBX + 0x30]
// 0057384b: PUSH EAX
// 0057384c: LEA EAX,[ESP + 0xa8]
// 00573853: PUSH EAX
// 00573854: PUSH 0x0
// 00573856: PUSH ESI
// 00573857: CALL core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
//   XREF to: 00478650 (UNCONDITIONAL_CALL)
// 0057385c: ADD ESP,0x10
// 0057385f: FLD float ptr [ESP + 0xa4]
// 00573866: FCOMP float ptr [ESP + 0x15c]
// 0057386d: FNSTSW AX
// 0057386f: SAHF
// 00573870: JNC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573876: MOV EAX,dword ptr [ESP + 0xa4]
// 0057387d: LEA ESI,[ESP + 0xa8]
// 00573884: MOV dword ptr [ESP + 0x15c],EAX
// 0057388b: LEA EAX,[ESP + 0x160]
// 00573892: CMP EAX,ESI
// 00573894: JZ 0x005738c0
//   XREF to: 005738c0 (CONDITIONAL_JUMP)
// 00573896: MOV EAX,dword ptr [ESP + 0xa8]
// 0057389d: MOV dword ptr [ESP + 0x160],EAX
// 005738a4: MOV EAX,dword ptr [ESP + 0xac]
// 005738ab: MOV dword ptr [ESP + 0x164],EAX
// 005738b2: MOV EAX,dword ptr [ESP + 0xb0]
// 005738b9: MOV dword ptr [ESP + 0x168],EAX
// 005738c0: MOV dword ptr [EDI + 0x14d144],EBX
//   Label: LAB_005738c0
// 005738c6: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 005738cb: LEA EAX,[EBX + 0x3c]
//   Label: LAB_005738cb
// 005738ce: PUSH EAX
// 005738cf: LEA EAX,[EBX + 0x20]
// 005738d2: PUSH EAX
// 005738d3: LEA ESI,[ESP + 0x1e8]
// 005738da: PUSH ESI
// 005738db: MOV EAX,dword ptr [EBX + 0x154]
// 005738e1: PUSH EBX
// 005738e2: CALL dword ptr [EAX + 0x14]
// 005738e5: ADD ESP,0x8
// 005738e8: PUSH EAX
// 005738e9: LEA EAX,[ESP + 0x168]
// 005738f0: PUSH EAX
// 005738f1: PUSH EDI
// 005738f2: CALL core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
//   XREF to: 00573140 (UNCONDITIONAL_CALL)
// 005738f7: ADD ESP,0x14
// 005738fa: TEST EAX,EAX
// 005738fc: JZ 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573902: MOV dword ptr [EDI + 0x14d144],EBX
// 00573908: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 0057390d: FLD float ptr [ESP + 0x1cc]
//   Label: LAB_0057390d
// 00573914: FADD float ptr [EBX + 0x24]
// 00573917: FLD float ptr [ESP + 0x1d0]
// 0057391e: FXCH
// 00573920: FSTP float ptr [ESP + 0x1cc]
// 00573927: FADD float ptr [EBX + 0x24]
// 0057392a: FSTP float ptr [ESP + 0x1d0]
// 00573931: MOV EAX,dword ptr [EBX + 0x20]
// 00573934: MOV dword ptr [ESP + 0x98],EAX
// 0057393b: MOV EAX,dword ptr [EBX + 0x28]
// 0057393e: FLD float ptr [ESP + 0x180]
// 00573945: MOV dword ptr [ESP + 0x9c],EAX
// 0057394c: FCOMP float ptr [ESP + 0x1cc]
// 00573953: FNSTSW AX
// 00573955: SAHF
// 00573956: JBE 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 0057395c: FLD float ptr [ESP + 0x184]
// 00573963: FCOMP float ptr [ESP + 0x1d0]
// 0057396a: FNSTSW AX
// 0057396c: SAHF
// 0057396d: JNC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573973: FLD float ptr [ESP + 0x98]
// 0057397a: FSUB float ptr [ESP + 0x16c]
// 00573981: FST double ptr [ESP + 0x28]
// 00573985: FMUL double ptr [ESP + 0x28]
// 00573989: FLD float ptr [ESP + 0x1d4]
// 00573990: FLD float ptr [ESP + 0x9c]
// 00573997: FSUB float ptr [ESP + 0x170]
// 0057399e: FXCH
// 005739a0: FADD float ptr [ESP + 0x17c]
// 005739a7: FXCH
// 005739a9: FST double ptr [ESP + 0x38]
// 005739ad: FMUL double ptr [ESP + 0x38]
// 005739b1: FXCH
// 005739b3: FST double ptr [ESP + 0x20]
// 005739b7: FMUL double ptr [ESP + 0x20]
// 005739bb: FXCH
// 005739bd: FADDP ST2,ST0
// 005739bf: FSTP double ptr [ESP + 0x8]
// 005739c3: FST double ptr [ESP + 0x80]
// 005739ca: FCOMP double ptr [ESP + 0x8]
// 005739ce: FNSTSW AX
// 005739d0: SAHF
// 005739d1: JNC 0x00573a58
//   XREF to: 00573a58 (CONDITIONAL_JUMP)
// 005739d7: FLD double ptr [ESP + 0x80]
// 005739de: FSQRT
// 005739e0: FSUB double ptr [ESP + 0x20]
// 005739e4: FST double ptr [ESP + 0x30]
// 005739e8: FCOMP double ptr [0x006462f6]
//   XREF to: 006462f6 (READ)
// 005739ee: FNSTSW AX
// 005739f0: SAHF
// 005739f1: JBE 0x00573a05
//   XREF to: 00573a05 (CONDITIONAL_JUMP)
// 005739f3: MOV EDX,0xd2f1a9fc
// 005739f8: MOV ECX,0xbf50624d
// 005739fd: MOV dword ptr [ESP + 0x30],EDX
// 00573a01: MOV dword ptr [ESP + 0x34],ECX
// 00573a05: FLD float ptr [ESP + 0x15c]
//   Label: LAB_00573a05
// 00573a0c: FCOMP double ptr [ESP + 0x30]
// 00573a10: FNSTSW AX
// 00573a12: SAHF
// 00573a13: JBE 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573a19: FLD double ptr [ESP + 0x30]
// 00573a1d: FLD double ptr [ESP + 0x28]
// 00573a21: FLD double ptr [ESP + 0x38]
// 00573a25: FXCH ST2
// 00573a27: FSTP float ptr [ESP + 0x15c]
// 00573a2e: FCHS
// 00573a30: FXCH
// 00573a32: FCHS
// 00573a34: XOR ESI,ESI
// 00573a36: FXCH
// 00573a38: FSTP float ptr [ESP + 0x160]
// 00573a3f: FSTP float ptr [ESP + 0x168]
// 00573a46: MOV dword ptr [ESP + 0x164],ESI
// 00573a4d: MOV dword ptr [EDI + 0x14d144],EBX
// 00573a53: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 00573a58: FLD double ptr [ESP + 0x28]
//   Label: LAB_00573a58
// 00573a5c: FLD float ptr [ESP + 0x190]
// 00573a63: FSTP double ptr [ESP + 0x58]
// 00573a67: FMUL double ptr [ESP + 0x58]
// 00573a6b: FLD float ptr [ESP + 0x194]
// 00573a72: FSTP double ptr [ESP + 0x60]
// 00573a76: FLD double ptr [ESP + 0x38]
// 00573a7a: FMUL double ptr [ESP + 0x60]
// 00573a7e: FADDP
// 00573a80: FLDZ
// 00573a82: FXCH
// 00573a84: FSTP double ptr [ESP + 0x18]
// 00573a88: FCOMP double ptr [ESP + 0x18]
// 00573a8c: FNSTSW AX
// 00573a8e: SAHF
// 00573a8f: JNC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573a95: FLD double ptr [ESP + 0x18]
// 00573a99: FLD double ptr [ESP + 0x58]
// 00573a9d: FMUL ST1
// 00573a9f: FLD double ptr [ESP + 0x60]
// 00573aa3: FMULP ST2
// 00573aa5: FLD float ptr [ESP + 0x16c]
// 00573aac: FSTP double ptr [ESP + 0x10]
// 00573ab0: FADD double ptr [ESP + 0x10]
// 00573ab4: FLD float ptr [ESP + 0x98]
// 00573abb: FXCH
// 00573abd: FSTP double ptr [ESP + 0x78]
// 00573ac1: FSUB double ptr [ESP + 0x78]
// 00573ac5: FMUL ST0
// 00573ac7: FLD float ptr [ESP + 0x170]
// 00573ace: FSTP double ptr [ESP + 0x50]
// 00573ad2: FXCH
// 00573ad4: FADD double ptr [ESP + 0x50]
// 00573ad8: FLD float ptr [ESP + 0x9c]
// 00573adf: FXCH
// 00573ae1: FSTP double ptr [ESP + 0x68]
// 00573ae5: FSUB double ptr [ESP + 0x68]
// 00573ae9: FMUL ST0
// 00573aeb: FADDP
// 00573aed: FST double ptr [ESP + 0x70]
// 00573af1: FCOMP double ptr [ESP + 0x8]
// 00573af5: FNSTSW AX
// 00573af7: SAHF
// 00573af8: JNC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573afe: FLD float ptr [ESP + 0x174]
// 00573b05: FST double ptr [ESP + 0x90]
// 00573b0c: FABS
// 00573b0e: FLD double ptr [ESP + 0x8]
// 00573b12: FSUB double ptr [ESP + 0x70]
// 00573b16: FSQRT
// 00573b18: FLD float ptr [ESP + 0x178]
// 00573b1f: FST double ptr [ESP + 0x88]
// 00573b26: FABS
// 00573b28: FLD double ptr [ESP + 0x58]
// 00573b2c: FMUL ST2
// 00573b2e: FLD double ptr [ESP + 0x60]
// 00573b32: FMULP ST3
// 00573b34: FLD double ptr [ESP + 0x68]
// 00573b38: FLD double ptr [ESP + 0x78]
// 00573b3c: FSUBRP ST2,ST0
// 00573b3e: FSUBRP ST3,ST0
// 00573b40: FSTP double ptr [ESP]
// 00573b43: FXCH
// 00573b45: FSTP double ptr [ESP + 0x40]
// 00573b49: FCOMPP
// 00573b4b: FNSTSW AX
// 00573b4d: SAHF
// 00573b4e: JNC 0x00573be0
//   XREF to: 00573be0 (CONDITIONAL_JUMP)
// 00573b54: FLD double ptr [ESP]
// 00573b57: FSUB double ptr [ESP + 0x10]
// 00573b5b: FDIV double ptr [ESP + 0x90]
// 00573b62: FSTP double ptr [ESP + 0x48]
//   Label: LAB_00573b62
// 00573b66: FLDZ
// 00573b68: FCOMP double ptr [ESP + 0x48]
// 00573b6c: FNSTSW AX
// 00573b6e: SAHF
// 00573b6f: JA 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573b75: FLD float ptr [ESP + 0x15c]
// 00573b7c: FCOMP double ptr [ESP + 0x48]
// 00573b80: FNSTSW AX
// 00573b82: SAHF
// 00573b83: JBE 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573b89: FLD1
// 00573b8b: FCOMP double ptr [ESP + 0x48]
// 00573b8f: FNSTSW AX
// 00573b91: SAHF
// 00573b92: JC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573b98: FLD double ptr [ESP + 0x48]
// 00573b9c: FLD float ptr [ESP + 0x98]
// 00573ba3: FLD float ptr [ESP + 0x9c]
// 00573baa: FXCH ST2
// 00573bac: FSTP float ptr [ESP + 0x15c]
// 00573bb3: XOR EAX,EAX
// 00573bb5: FSUBR double ptr [ESP]
// 00573bb8: FXCH
// 00573bba: FSUBR double ptr [ESP + 0x40]
// 00573bbe: MOV dword ptr [ESP + 0x164],EAX
// 00573bc5: FXCH
// 00573bc7: FSTP float ptr [ESP + 0x160]
// 00573bce: FSTP float ptr [ESP + 0x168]
// 00573bd5: MOV dword ptr [EDI + 0x14d144],EBX
// 00573bdb: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 00573be0: FLD double ptr [ESP + 0x40]
//   Label: LAB_00573be0
// 00573be4: FSUB double ptr [ESP + 0x50]
// 00573be8: FDIV double ptr [ESP + 0x88]
// 00573bef: JMP 0x00573b62
//   XREF to: 00573b62 (UNCONDITIONAL_JUMP)
// 00573bf4: MOV EAX,dword ptr [ESP + 0x16c]
//   Label: LAB_00573bf4
// 00573bfb: MOV dword ptr [ESP + 0x240],EAX
// 00573c02: MOV EAX,dword ptr [ESP + 0x170]
// 00573c09: MOV dword ptr [ESP + 0x248],EAX
// 00573c10: LEA EAX,[ESP + 0x240]
// 00573c17: PUSH EAX
// 00573c18: LEA EAX,[ESP + 0x22c]
// 00573c1f: PUSH EAX
// 00573c20: PUSH EBX
// 00573c21: MOV dword ptr [ESP + 0x250],EDX
// 00573c28: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00573c2d: ADD ESP,0xc
// 00573c30: MOV EAX,dword ptr [ESP + 0x174]
// 00573c37: MOV dword ptr [ESP + 0x234],EAX
// 00573c3e: MOV EAX,dword ptr [ESP + 0x178]
// 00573c45: MOV dword ptr [ESP + 0x23c],EAX
// 00573c4c: LEA EAX,[ESP + 0x234]
// 00573c53: PUSH EAX
// 00573c54: LEA EAX,[ESP + 0x250]
// 00573c5b: PUSH EAX
// 00573c5c: XOR ESI,ESI
// 00573c5e: PUSH EBX
// 00573c5f: MOV dword ptr [ESP + 0x244],ESI
// 00573c66: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 00573c6b: ADD ESP,0xc
// 00573c6e: FLD float ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 00573c71: SUB ESP,0x4
// 00573c74: FSUB float ptr [EBX + 0x24]
// 00573c77: FLD float ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 00573c7a: FXCH
// 00573c7c: FSTP float ptr [ESP]
// 00573c7f: FSUB float ptr [EBX + 0x24]
// 00573c82: SUB ESP,0x4
// 00573c85: FSTP float ptr [ESP]
// 00573c88: PUSH dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00573c8b: PUSH dword ptr [ESP + 0x260]
// 00573c92: PUSH dword ptr [ESP + 0x25c]
// 00573c99: PUSH dword ptr [ESP + 0x244]
// 00573ca0: LEA EAX,[ESP + 0x118]
// 00573ca7: PUSH dword ptr [ESP + 0x240]
// 00573cae: PUSH EAX
// 00573caf: CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
//   XREF to: 00496b90 (UNCONDITIONAL_CALL)
// 00573cb4: ADD ESP,0x20
// 00573cb7: MOV EAX,dword ptr [ESP + 0x15c]
// 00573cbe: MOV dword ptr [ESP + 0x100],EAX
// 00573cc5: LEA EAX,[ESP + 0x100]
// 00573ccc: PUSH EAX
// 00573ccd: MOV ESI,dword ptr [EBX + 0x154]
// 00573cd3: PUSH EBX
// 00573cd4: CALL dword ptr [ESI + 0xb4]
// 00573cda: ADD ESP,0x8
// 00573cdd: FLD float ptr [ESP + 0x100]
// 00573ce4: FCOMP float ptr [ESP + 0x15c]
// 00573ceb: FNSTSW AX
// 00573ced: SAHF
// 00573cee: JNC 0x0057365a
//   XREF to: 0057365a (CONDITIONAL_JUMP)
// 00573cf4: MOV EAX,dword ptr [ESP + 0x100]
// 00573cfb: MOV dword ptr [ESP + 0x15c],EAX
// 00573d02: LEA EAX,[ESP + 0x104]
// 00573d09: PUSH EAX
// 00573d0a: LEA EAX,[ESP + 0x25c]
// 00573d11: PUSH EAX
// 00573d12: PUSH EBX
// 00573d13: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00573d18: MOV ESI,EAX
// 00573d1a: LEA EAX,[ESP + 0x16c]
// 00573d21: ADD ESP,0xc
// 00573d24: CMP EAX,ESI
// 00573d26: JZ 0x00573d45
//   XREF to: 00573d45 (CONDITIONAL_JUMP)
// 00573d28: MOV EAX,dword ptr [ESI]
// 00573d2a: MOV dword ptr [ESP + 0x160],EAX
// 00573d31: MOV EAX,dword ptr [ESI + 0x4]
// 00573d34: MOV dword ptr [ESP + 0x164],EAX
// 00573d3b: MOV EAX,dword ptr [ESI + 0x8]
// 00573d3e: MOV dword ptr [ESP + 0x168],EAX
// 00573d45: MOV dword ptr [EDI + 0x14d144],EBX
//   Label: LAB_00573d45
// 00573d4b: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 00573d50: CMP ESI,0x2
//   Label: LAB_00573d50
// 00573d53: JNC 0x00573d60
//   XREF to: 00573d60 (CONDITIONAL_JUMP)
// 00573d55: CMP ESI,0x1
// 00573d58: JZ 0x005738cb
//   XREF to: 005738cb (CONDITIONAL_JUMP)
// 00573d5e: JMP 0x00573d6f
//   XREF to: 00573d6f (UNCONDITIONAL_JUMP)
// 00573d60: JBE 0x0057390d
//   Label: LAB_00573d60
//   XREF to: 0057390d (CONDITIONAL_JUMP)
// 00573d66: CMP ESI,0x3
// 00573d69: JZ 0x00573bf4
//   XREF to: 00573bf4 (CONDITIONAL_JUMP)
// 00573d6f: MOV EAX,0x6462c7
//   Label: LAB_00573d6f
//   XREF to: 006462c7 (PARAM)
// 00573d74: MOV EDX,0x3f1
// 00573d79: PUSH 0x6462dc
//   XREF to: 006462dc (DATA)
// 00573d7e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00573d83: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00573d89: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00573d8e: ADD ESP,0x4
// 00573d91: JMP 0x0057365a
//   XREF to: 0057365a (UNCONDITIONAL_JUMP)
// 00573d96: FLD1
//   Label: LAB_00573d96
// 00573d98: FLD float ptr [ESP + 0x160]
//   XREF to: Stack[-0x148] (READ)
// 00573d9f: FXCH
// 00573da1: FDIV float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x208] (READ)
// 00573da8: FXCH
// 00573daa: FMUL ST1
// 00573dac: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x144] (READ)
// 00573db3: FMUL ST2
// 00573db5: FLD float ptr [ESP + 0x168]
//   XREF to: Stack[-0x140] (READ)
// 00573dbc: FMULP ST3
// 00573dbe: FXCH
// 00573dc0: FSTP float ptr [ESP + 0x160]
//   XREF to: Stack[-0x148] (WRITE)
// 00573dc7: FSTP float ptr [ESP + 0x164]
//   XREF to: Stack[-0x144] (WRITE)
// 00573dce: FSTP float ptr [ESP + 0x168]
//   XREF to: Stack[-0x140] (WRITE)
// 00573dd5: JMP 0x005736e0
//   XREF to: 005736e0 (UNCONDITIONAL_JUMP)
// 00573dda: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_00573dda
//   XREF to: Stack[-0x148] (DATA)
// 00573de1: MOV dword ptr [EDI],EAX
// 00573de3: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x144] (READ)
// 00573dea: MOV dword ptr [EDI + 0x4],EAX
// 00573ded: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x140] (READ)
// 00573df4: MOV dword ptr [EDI + 0x8],EAX
// 00573df7: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14c] (READ)
// 00573dfe: MOV ESP,EBP
// 00573e00: POP EBP
// 00573e01: POP EDI
// 00573e02: POP ESI
// 00573e03: POP EBX
// 00573e04: RET
