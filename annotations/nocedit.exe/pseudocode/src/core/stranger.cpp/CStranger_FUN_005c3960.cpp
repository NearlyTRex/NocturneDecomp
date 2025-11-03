// Name: core_stranger.cpp_CStranger_FUN_005c3960
// Address: 005c3960
// Address Range: [[005c3960, 005c4364]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c3960()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc4e5 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00653c94 = 3.14159265350000
//   double DOUBLE_00653c9c = 2
//   double DOUBLE_00653ca4 = 0.0333333333333333
//   double DOUBLE_00653cac = 1.5
//   double DOUBLE_00653cb4 = 0.5
//   double DOUBLE_00653cbc = 0.0100000000000000
//   double DOUBLE_00653cc4 = 30
//   double DOUBLE_00653ccc = 10
//   WatcomTypeInfo g_CVectorTypeInfo
//   undefined4 DAT_00663770
//   undefined4 DAT_00663774
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03267198
//   undefined4 DAT_0326719c
//   undefined4 DAT_032671a0
//   undefined4 DAT_03f6bad8
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bb00
//   undefined4 DAT_03f6bb04
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c3960(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_stranger_cpp_CStranger_FUN_005c3960(void)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  CDemonActor *this_ptr;
  int iVar6;
  int iVar7;
  float fVar8;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  SCollisionInfo *in_stack_fffffe48;
  undefined1 auStack_1a0 [120];
  CMatrix3x3f CStack_128;
  CVector3f CStack_100;
  float fStack_f4;
  float fStack_f0;
  undefined1 auStack_ec [28];
  CVector3f CStack_d0;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_94 [20];
  CVector3f CStack_80;
  float fStack_74;
  CVector3f aCStack_70 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  CDemonActor_vtable *pCStack_38;
  float fStack_34;
  CDemonActor_vtable *local_30;
  CDemonActor_vtable *local_2c;
  float fStack_28;
  int *local_24;
  int iStack_20;
  CDemonActor *pCStack_1c;
  float fStack_18;
  CDemonActor *pCStack_14;
  
  local_24 = (int *)(in_stack_00000004[0x17a].actor_name + 0x18);
  if (in_stack_00000008 == 1) {
    local_24 = &in_stack_00000004[0x179].field28_0x150;
  }
  fVar8 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if (fVar8 == 0.0) {
    local_24[3] = 0;
    local_24[1] = 0;
    uVar3 = 0;
    if (*(int *)(in_stack_00000004[0x1b].create_event + in_stack_00000008 * 0x44 + -0xc) != 0) {
      uVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event +
                                            in_stack_00000008 * 0x44 + -0xc) + 0x154) + 0x6c))();
    }
    if ((uVar3 & 4) == 0) {
      (((CLocation *)(local_24 + 2))->position).x = 0.0;
      *local_24 = 0;
      return;
    }
    local_48 = 3;
  }
  else {
    local_48 = *(int *)((int)fVar8 + 0x2e0);
  }
  if (in_stack_00000008 == 0) {
    if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) == 2) && (local_48 == 0)) {
      return;
    }
    local_30 = (CDemonActor_vtable *)0xbfa78d36;
    local_2c = (CDemonActor_vtable *)0x3f060a92;
  }
  else if (local_48 == 0) {
    local_2c = (CDemonActor_vtable *)0x3fa78d36;
    local_30 = (CDemonActor_vtable *)0xbf060a92;
  }
  else {
    local_2c = (CDemonActor_vtable *)0x3f060a92;
    local_30 = (CDemonActor_vtable *)0xbf060a92;
  }
  fVar8 = (float)in_stack_00000004[0x8d].field11_0xdc * (float)DOUBLE_00653c94 *
          (float)DOUBLE_00653c9c * in_stack_0000000c + (float)*local_24;
  local_24[1] = 0;
  *local_24 = (int)fVar8;
  if (fVar8 < DAT_00663770) {
    *local_24 = (int)DAT_00663770;
  }
  if (DAT_00663774 < (float)*local_24) {
    *local_24 = (int)DAT_00663774;
  }
  if ((float)local_24[3] < (float)local_30) {
    local_24[3] = (int)local_30;
  }
  if ((float)local_2c < (float)local_24[3]) {
    local_24[3] = (int)local_2c;
  }
  if ((float)local_24[1] < (float)local_30) {
    local_24[1] = (int)local_30;
  }
  if ((float)local_2c < (float)local_24[1]) {
    local_24[1] = (int)local_2c;
  }
  local_24[7] = 0;
  pCStack_38 = (CDemonActor_vtable *)local_24[1];
  fStack_34 = (float)*local_24;
  if ((local_48 == 3) ||
     (fVar8 = *(float *)(in_stack_00000004[0x176].create_event + 0x2c), fVar8 != 0.0)) {
    local_24[3] = 0;
  }
  else {
    fVar1 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
    CStack_80.y = fVar8;
    CStack_80.z = fVar8;
    fStack_74 = fVar8;
    if ((fVar1 != 0.0) &&
       (pfVar4 = (float *)(**(code **)(*(int *)((int)fVar1 + 0x154) + 0xf4))(),
       &CStack_80.y != pfVar4)) {
      CStack_80.y = *pfVar4;
      CStack_80.z = pfVar4[1];
      fStack_74 = pfVar4[2];
    }
    if (local_48 == 0) {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1));
      if (&CStack_100 != pCVar5) {
        CStack_100.x = pCVar5->x;
        CStack_100.y = pCVar5->y;
        CStack_100.z = pCVar5->z;
      }
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1));
      if (&CStack_100 != pCVar5) {
        CStack_100.x = pCVar5->x;
        CStack_100.y = pCVar5->y;
        CStack_100.z = pCVar5->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)auStack_94,&CStack_100);
    aCStack_70[0].x = (float)*local_24;
    aCStack_70[0].z = 0.0;
    aCStack_70[0].y = (float)local_24[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_128,aCStack_70);
    auStack_b0._4_4_ = 0.0;
    fStack_a8 = 0.0;
    uStack_a4 = 0x3f800000;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              (&CStack_128,&CStack_d0,(CVector3f *)(auStack_b0 + 4));
    iStack_20 = 0x7149f2ca;
    iStack_3c = 0;
    for (iStack_40 = 0; iStack_40 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 16000);
        iStack_40 = iStack_40 + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + 0x3e84)
                            ,g_CCharacterClassInfo.name_hash);
      if (this_ptr == (CDemonActor *)0x0) {
LAB_005c3e52:
        pCStack_1c = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + 0x3e84);
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (auStack_1a0,10,&g_CVectorTypeInfo);
        iStack_20 = (*pCStack_1c->vtable->getTargetPoints)(pCStack_1c,(CVector3f *)auStack_1a0);
        if ((0 < iStack_20) && (iVar6 = 0, 0 < iStack_20)) {
          pCVar5 = (CVector3f *)(auStack_1a0 + 8);
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCStack_14,&CStack_80,pCVar5);
            in_stack_fffffe48 = (SCollisionInfo *)(auStack_ec + 0x18);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (in_stack_00000004,(CVector3f *)in_stack_fffffe48,&CStack_80);
            auStack_b0._0_4_ = (float)auStack_ec._24_4_ - CStack_100.z;
            auStack_b0._4_4_ = CStack_d0.x - fStack_f4;
            fStack_a8 = CStack_d0.y - fStack_f0;
            if ((0.0 < (double)fStack_a8) && ((double)fStack_a8 <= DOUBLE_00653cc4)) {
              in_stack_fffffe48 = (SCollisionInfo *)auStack_ec;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        ((CVector3f *)in_stack_fffffe48,(CVector3f *)auStack_b0);
              auStack_1a0._0_4_ = 0.5235988;
              if (fStack_a8 < (float)DOUBLE_00653ccc) {
                auStack_1a0._0_4_ = 1.5707964;
              }
              if (((ABS((float)auStack_ec._0_4_) <= (float)auStack_1a0._0_4_) &&
                  (fStack_28 <= (float)auStack_ec._4_4_)) &&
                 ((float)auStack_ec._4_4_ <= (float)local_24)) {
                fVar8 = SQRT(fStack_a8 * fStack_a8 +
                             (float)auStack_b0._0_4_ * (float)auStack_b0._0_4_ +
                             (float)auStack_b0._4_4_ * (float)auStack_b0._4_4_);
                fVar1 = 1.0 / fVar8;
                auStack_b0._4_4_ = (float)auStack_b0._4_4_ * fVar1;
                auStack_b0._0_4_ = (float)auStack_b0._0_4_ * fVar1;
                fStack_a8 = fStack_a8 * fVar1;
                auStack_1a0._4_4_ =
                     fVar8 * (float)DOUBLE_00653ca4 +
                     ((float)DOUBLE_00653c9c -
                     (fStack_a8 * fStack_c0 +
                     (float)auStack_b0._0_4_ * CStack_d0.z + (float)auStack_b0._4_4_ * fStack_c4));
                if ((float)auStack_1a0._4_4_ < fStack_18) {
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_14);
                  iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                    (g_CDemonSetPtr,(CVector3f *)(auStack_94 + 8),&CStack_80);
                  in_stack_fffffe48 = (SCollisionInfo *)0x5c40fe;
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  if (iVar7 == 0) {
                    fStack_18 = (float)auStack_1a0._4_4_;
                    local_30 = (CDemonActor_vtable *)auStack_ec._4_4_;
                    local_2c = (CDemonActor_vtable *)auStack_ec._0_4_;
                    pCStack_1c->actor_name[0x1c] = '\x01';
                    pCStack_1c->actor_name[0x1d] = '\0';
                    pCStack_1c->actor_name[0x1e] = '\0';
                    pCStack_1c->actor_name[0x1f] = '\0';
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            pCVar5 = pCVar5 + 1;
          } while (iVar6 < iStack_20);
        }
      }
      else {
        iVar6 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffe48);
        if (iVar6 == 0) {
          in_stack_fffffe48 = (SCollisionInfo *)0x5c3e47;
          iVar6 = (*this_ptr->vtable->shouldIgnoreForTargeting)(this_ptr);
          if (iVar6 == 0) goto LAB_005c3e52;
        }
      }
      iStack_3c = iStack_3c + 4;
    }
  }
  dVar2 = DOUBLE_00653cac;
  if (local_48 != 0) {
    dVar2 = DOUBLE_00653cb4;
  }
  fStack_44 = in_stack_0000000c * (float)DOUBLE_00653c94 * (float)dVar2;
  fStack_4c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)pCStack_38 - (float)local_24[3])
  ;
  fStack_18 = fStack_4c;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (fStack_34 - (((CLocation *)(local_24 + 2))->position).x);
  fStack_54 = -fStack_44;
  if (fStack_4c < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_44 < fStack_4c) {
    fStack_4c = fStack_44;
  }
  fStack_58 = -fStack_44;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_58) {
    fStack_50 = fStack_58;
  }
  if (fStack_44 < fStack_50) {
    fStack_50 = fStack_44;
  }
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_24[3] + fStack_4c);
  fVar8 = (((CLocation *)(local_24 + 2))->position).x;
  local_24[3] = (int)fStack_18;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar8 + fStack_50);
  (((CLocation *)(local_24 + 2))->position).x = fVar8;
  local_24[5] = 0x3f800000;
  if ((((float)local_24[7] == 1.4013e-45) &&
      (ABS((float)local_24[3] - (float)pCStack_38) < (float)DOUBLE_00653cbc)) &&
     (ABS((((CLocation *)(local_24 + 2))->position).x - fStack_34) < (float)DOUBLE_00653cbc)) {
    local_24[7] = 2;
    return;
  }
  return;
}


// Assembly code:
// 005c3960: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c3960
// 005c3961: PUSH ESI
// 005c3962: PUSH EDI
// 005c3963: PUSH EBP
// 005c3964: MOV EBP,ESP
// 005c3966: SUB ESP,0x1a4
// 005c396c: AND ESP,0xfffffff8
// 005c396f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c3972: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c3975: ADD EAX,0x1fc08
// 005c397a: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c3981: CMP ESI,0x1
// 005c3984: JZ 0x005c3d44
//   XREF to: 005c3d44 (CONDITIONAL_JUMP)
// 005c398a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c398a
//   XREF to: Stack[0x4] (READ)
// 005c398d: MOV EDX,dword ptr [EAX + 0x1fc2c]
// 005c3993: TEST EDX,EDX
// 005c3995: JNZ 0x005c3d73
//   XREF to: 005c3d73 (CONDITIONAL_JUMP)
// 005c399b: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x24] (READ)
// 005c39a2: MOV dword ptr [EAX + 0xc],EDX
// 005c39a5: MOV dword ptr [EAX + 0x4],EDX
// 005c39a8: MOV EAX,ESI
// 005c39aa: SHL EAX,0x4
// 005c39ad: ADD EAX,ESI
// 005c39af: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c39b2: SHL EAX,0x2
// 005c39b5: ADD EAX,ECX
// 005c39b7: MOV EBX,dword ptr [EAX + 0x24b4]
// 005c39bd: TEST EBX,EBX
// 005c39bf: JZ 0x005c39d0
//   XREF to: 005c39d0 (CONDITIONAL_JUMP)
// 005c39c1: PUSH EBX
// 005c39c2: MOV EDX,dword ptr [EBX + 0x154]
// 005c39c8: CALL dword ptr [EDX + 0x6c]
// 005c39cb: ADD ESP,0x4
// 005c39ce: MOV EDX,EAX
// 005c39d0: TEST DL,0x4
//   Label: LAB_005c39d0
// 005c39d3: JZ 0x005c3d58
//   XREF to: 005c3d58 (CONDITIONAL_JUMP)
// 005c39d9: MOV dword ptr [ESP + 0x170],0x3
//   XREF to: Stack[-0x48] (WRITE)
// 005c39e4: TEST ESI,ESI
//   Label: LAB_005c39e4
// 005c39e6: JNZ 0x005c3d85
//   XREF to: 005c3d85 (CONDITIONAL_JUMP)
// 005c39ec: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c39ef: CMP dword ptr [EAX + 0x1f734],0x2
// 005c39f6: JNZ 0x005c3a06
//   XREF to: 005c3a06 (CONDITIONAL_JUMP)
// 005c39f8: CMP dword ptr [ESP + 0x170],0x0
//   XREF to: Stack[-0x48] (READ)
// 005c3a00: JZ 0x005c3d6c
//   XREF to: 005c3d6c (CONDITIONAL_JUMP)
// 005c3a06: MOV EBX,0xbfa78d36
//   Label: LAB_005c3a06
// 005c3a0b: MOV EAX,0x3f060a92
// 005c3a10: MOV ESI,dword ptr [0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005c3a16: MOV EDI,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005c3a1c: MOV dword ptr [ESP + 0x188],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005c3a23: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c3a2a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c3a2a
//   XREF to: Stack[0x4] (READ)
// 005c3a2d: FLD float ptr [EAX + 0xbe54]
// 005c3a33: FMUL double ptr [0x00653c94]
//   XREF to: 00653c94 (READ)
// 005c3a39: FMUL double ptr [0x00653c9c]
//   XREF to: 00653c9c (READ)
// 005c3a3f: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c3a42: MOV EAX,dword ptr [ESP + 0x194]
// 005c3a49: FLD float ptr [EAX]
// 005c3a4b: FXCH
// 005c3a4d: FADD ST0,ST1
// 005c3a4f: MOV dword ptr [EAX + 0x4],0x0
// 005c3a56: FSTP ST1
// 005c3a58: FST float ptr [EAX]
// 005c3a5a: FCOMP float ptr [0x00663770]
//   XREF to: 00663770 (READ)
// 005c3a60: FNSTSW AX
// 005c3a62: SAHF
// 005c3a63: JNC 0x005c3a74
//   XREF to: 005c3a74 (CONDITIONAL_JUMP)
// 005c3a65: MOV EAX,dword ptr [ESP + 0x194]
// 005c3a6c: MOV EDX,dword ptr [0x00663770]
//   XREF to: 00663770 (READ)
// 005c3a72: MOV dword ptr [EAX],EDX
// 005c3a74: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3a74
// 005c3a7b: FLD float ptr [EAX]
// 005c3a7d: FCOMP float ptr [0x00663774]
//   XREF to: 00663774 (READ)
// 005c3a83: FNSTSW AX
// 005c3a85: SAHF
// 005c3a86: JBE 0x005c3a97
//   XREF to: 005c3a97 (CONDITIONAL_JUMP)
// 005c3a88: MOV EAX,dword ptr [ESP + 0x194]
// 005c3a8f: MOV EDX,dword ptr [0x00663774]
//   XREF to: 00663774 (READ)
// 005c3a95: MOV dword ptr [EAX],EDX
// 005c3a97: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3a97
// 005c3a9e: FLD float ptr [EAX + 0xc]
// 005c3aa1: FCOMP float ptr [ESP + 0x188]
// 005c3aa8: FNSTSW AX
// 005c3aaa: SAHF
// 005c3aab: JNC 0x005c3abe
//   XREF to: 005c3abe (CONDITIONAL_JUMP)
// 005c3aad: MOV EDX,dword ptr [ESP + 0x194]
// 005c3ab4: MOV EAX,dword ptr [ESP + 0x188]
// 005c3abb: MOV dword ptr [EDX + 0xc],EAX
// 005c3abe: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3abe
// 005c3ac5: FLD float ptr [EAX + 0xc]
// 005c3ac8: FCOMP float ptr [ESP + 0x18c]
// 005c3acf: FNSTSW AX
// 005c3ad1: SAHF
// 005c3ad2: JBE 0x005c3ae5
//   XREF to: 005c3ae5 (CONDITIONAL_JUMP)
// 005c3ad4: MOV EDX,dword ptr [ESP + 0x194]
// 005c3adb: MOV EAX,dword ptr [ESP + 0x18c]
// 005c3ae2: MOV dword ptr [EDX + 0xc],EAX
// 005c3ae5: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3ae5
// 005c3aec: FLD float ptr [EAX + 0x4]
// 005c3aef: FCOMP float ptr [ESP + 0x188]
// 005c3af6: FNSTSW AX
// 005c3af8: SAHF
// 005c3af9: JNC 0x005c3b0c
//   XREF to: 005c3b0c (CONDITIONAL_JUMP)
// 005c3afb: MOV EDX,dword ptr [ESP + 0x194]
// 005c3b02: MOV EAX,dword ptr [ESP + 0x188]
// 005c3b09: MOV dword ptr [EDX + 0x4],EAX
// 005c3b0c: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3b0c
// 005c3b13: FLD float ptr [EAX + 0x4]
// 005c3b16: FCOMP float ptr [ESP + 0x18c]
// 005c3b1d: FNSTSW AX
// 005c3b1f: SAHF
// 005c3b20: JBE 0x005c3b33
//   XREF to: 005c3b33 (CONDITIONAL_JUMP)
// 005c3b22: MOV EDX,dword ptr [ESP + 0x194]
// 005c3b29: MOV EAX,dword ptr [ESP + 0x18c]
// 005c3b30: MOV dword ptr [EDX + 0x4],EAX
// 005c3b33: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3b33
// 005c3b3a: MOV dword ptr [EAX + 0x1c],0x0
// 005c3b41: MOV EAX,dword ptr [EAX + 0x4]
// 005c3b44: MOV dword ptr [ESP + 0x180],EAX
// 005c3b4b: MOV EAX,dword ptr [ESP + 0x194]
// 005c3b52: MOV EAX,dword ptr [EAX]
// 005c3b54: MOV EDX,dword ptr [ESP + 0x170]
// 005c3b5b: MOV dword ptr [ESP + 0x184],EAX
// 005c3b62: CMP EDX,0x3
// 005c3b65: JZ 0x005c4143
//   XREF to: 005c4143 (CONDITIONAL_JUMP)
// 005c3b6b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c3b6e: MOV ECX,dword ptr [EAX + 0x1f734]
// 005c3b74: TEST ECX,ECX
// 005c3b76: JNZ 0x005c4143
//   XREF to: 005c4143 (CONDITIONAL_JUMP)
// 005c3b7c: MOV dword ptr [ESP + 0x140],ECX
// 005c3b83: MOV dword ptr [ESP + 0x144],ECX
// 005c3b8a: MOV dword ptr [ESP + 0x13c],ECX
// 005c3b91: MOV ECX,dword ptr [EAX + 0x1fc2c]
// 005c3b97: TEST ECX,ECX
// 005c3b99: JZ 0x005c3bdd
//   XREF to: 005c3bdd (CONDITIONAL_JUMP)
// 005c3b9b: LEA EDX,[ESP + 0xd0]
// 005c3ba2: PUSH EDX
// 005c3ba3: MOV EBX,dword ptr [ECX + 0x154]
// 005c3ba9: PUSH ECX
// 005c3baa: CALL dword ptr [EBX + 0xf4]
// 005c3bb0: MOV EBX,EAX
// 005c3bb2: LEA EAX,[ESP + 0x144]
// 005c3bb9: ADD ESP,0x8
// 005c3bbc: CMP EAX,EBX
// 005c3bbe: JZ 0x005c3bdd
//   XREF to: 005c3bdd (CONDITIONAL_JUMP)
// 005c3bc0: MOV EAX,dword ptr [EBX]
// 005c3bc2: MOV dword ptr [ESP + 0x13c],EAX
// 005c3bc9: MOV EAX,dword ptr [EBX + 0x4]
// 005c3bcc: MOV dword ptr [ESP + 0x140],EAX
// 005c3bd3: MOV EAX,dword ptr [EBX + 0x8]
// 005c3bd6: MOV dword ptr [ESP + 0x144],EAX
// 005c3bdd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c3bdd
//   XREF to: Stack[0x4] (READ)
// 005c3be0: MOV EBX,dword ptr [ESP + 0x170]
// 005c3be7: ADD EAX,0x158
// 005c3bec: TEST EBX,EBX
// 005c3bee: JNZ 0x005c3df8
//   XREF to: 005c3df8 (CONDITIONAL_JUMP)
// 005c3bf4: PUSH EDI
// 005c3bf5: LEA EDX,[ESP + 0x11c]
// 005c3bfc: PUSH EDX
// 005c3bfd: PUSH EAX
// 005c3bfe: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c3c03: MOV EBX,EAX
// 005c3c05: LEA EAX,[ESP + 0xc4]
// 005c3c0c: ADD ESP,0xc
// 005c3c0f: CMP EAX,EBX
// 005c3c11: JNZ 0x005c3dd6
//   XREF to: 005c3dd6 (CONDITIONAL_JUMP)
// 005c3c17: LEA EAX,[ESP + 0xb8]
//   Label: LAB_005c3c17
// 005c3c1e: PUSH EAX
// 005c3c1f: LEA EAX,[ESP + 0x128]
// 005c3c26: PUSH EAX
// 005c3c27: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c3c2a: PUSH ESI
// 005c3c2b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c3c30: ADD ESP,0xc
// 005c3c33: MOV EAX,dword ptr [ESP + 0x194]
// 005c3c3a: MOV EAX,dword ptr [EAX]
// 005c3c3c: XOR EDI,EDI
// 005c3c3e: MOV dword ptr [ESP + 0x148],EAX
// 005c3c45: MOV EAX,dword ptr [ESP + 0x194]
// 005c3c4c: MOV dword ptr [ESP + 0x150],EDI
// 005c3c53: MOV EAX,dword ptr [EAX + 0x4]
// 005c3c56: MOV dword ptr [ESP + 0x14c],EAX
// 005c3c5d: LEA EAX,[ESP + 0x148]
// 005c3c64: PUSH EAX
// 005c3c65: LEA EAX,[ESP + 0x94]
// 005c3c6c: PUSH EAX
// 005c3c6d: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005c3c72: ADD ESP,0x8
// 005c3c75: LEA EAX,[ESP + 0x10c]
// 005c3c7c: MOV EBX,0x7149f2ca
// 005c3c81: PUSH EAX
// 005c3c82: LEA EAX,[ESP + 0xec]
// 005c3c89: MOV ECX,0x3f800000
// 005c3c8e: PUSH EAX
// 005c3c8f: LEA EAX,[ESP + 0x98]
// 005c3c96: MOV dword ptr [ESP + 0x114],EDI
// 005c3c9d: PUSH EAX
// 005c3c9e: MOV dword ptr [ESP + 0x11c],EDI
// 005c3ca5: MOV dword ptr [ESP + 0x120],ECX
// 005c3cac: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005c3cb1: ADD ESP,0xc
// 005c3cb4: MOV dword ptr [ESP + 0x198],EBX
// 005c3cbb: MOV dword ptr [ESP + 0x178],EDI
// 005c3cc2: MOV dword ptr [ESP + 0x17c],EDI
// 005c3cc9: MOV EAX,[0x006810c8]
//   Label: LAB_005c3cc9
//   XREF to: 006810c8 (READ)
// 005c3cce: MOV EDX,dword ptr [ESP + 0x178]
// 005c3cd5: CMP EDX,dword ptr [EAX + 0x152f20]
//   XREF to: 03267198 (READ)
// 005c3cdb: JGE 0x005c4151
//   XREF to: 005c4151 (CONDITIONAL_JUMP)
// 005c3ce1: MOV ESI,dword ptr [ESP + 0x17c]
// 005c3ce8: MOV EBX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 005c3cee: ADD EAX,ESI
// 005c3cf0: PUSH EBX
// 005c3cf1: MOV EDI,dword ptr [EAX + 0x152f24]
//   XREF to: 0326719c (DATA)
//   XREF to: 032671a0 (DATA)
// 005c3cf7: PUSH EDI
// 005c3cf8: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c3cfd: MOV EBX,EAX
// 005c3cff: ADD ESP,0x8
// 005c3d02: TEST EAX,EAX
// 005c3d04: JZ 0x005c3e52
//   XREF to: 005c3e52 (CONDITIONAL_JUMP)
// 005c3d0a: PUSH EBX
// 005c3d0b: MOV EAX,dword ptr [EAX + 0x154]
// 005c3d11: CALL dword ptr [EAX + 0x120]
// 005c3d17: ADD ESP,0x4
// 005c3d1a: TEST EAX,EAX
// 005c3d1c: JZ 0x005c3e3d
//   XREF to: 005c3e3d (CONDITIONAL_JUMP)
// 005c3d22: MOV ECX,dword ptr [ESP + 0x178]
//   Label: LAB_005c3d22
// 005c3d29: MOV EDX,dword ptr [ESP + 0x17c]
// 005c3d30: INC ECX
// 005c3d31: ADD EDX,0x4
// 005c3d34: MOV dword ptr [ESP + 0x178],ECX
// 005c3d3b: MOV dword ptr [ESP + 0x17c],EDX
// 005c3d42: JMP 0x005c3cc9
//   XREF to: 005c3cc9 (UNCONDITIONAL_JUMP)
// 005c3d44: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c3d44
//   XREF to: Stack[0x4] (READ)
// 005c3d47: ADD EAX,0x1fbe8
// 005c3d4c: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c3d53: JMP 0x005c398a
//   XREF to: 005c398a (UNCONDITIONAL_JUMP)
// 005c3d58: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c3d58
// 005c3d5f: MOV dword ptr [EAX + 0x8],0x0
// 005c3d66: MOV dword ptr [EAX],0x0
// 005c3d6c: MOV ESP,EBP
//   Label: LAB_005c3d6c
// 005c3d6e: POP EBP
// 005c3d6f: POP EDI
// 005c3d70: POP ESI
// 005c3d71: POP EBX
// 005c3d72: RET
// 005c3d73: MOV EAX,dword ptr [EDX + 0x2e0]
//   Label: LAB_005c3d73
// 005c3d79: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005c3d80: JMP 0x005c39e4
//   XREF to: 005c39e4 (UNCONDITIONAL_JUMP)
// 005c3d85: MOV EAX,dword ptr [ESP + 0x170]
//   Label: LAB_005c3d85
// 005c3d8c: MOV ESI,dword ptr [0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005c3d92: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005c3d98: TEST EAX,EAX
// 005c3d9a: JNZ 0x005c3db9
//   XREF to: 005c3db9 (CONDITIONAL_JUMP)
// 005c3d9c: MOV EAX,0x3fa78d36
// 005c3da1: MOV EBX,0xbf060a92
// 005c3da6: MOV dword ptr [ESP + 0x18c],EAX
// 005c3dad: MOV dword ptr [ESP + 0x188],EBX
// 005c3db4: JMP 0x005c3a2a
//   XREF to: 005c3a2a (UNCONDITIONAL_JUMP)
// 005c3db9: MOV ECX,0x3f060a92
//   Label: LAB_005c3db9
// 005c3dbe: MOV EDX,0xbf060a92
// 005c3dc3: MOV dword ptr [ESP + 0x18c],ECX
// 005c3dca: MOV dword ptr [ESP + 0x188],EDX
// 005c3dd1: JMP 0x005c3a2a
//   XREF to: 005c3a2a (UNCONDITIONAL_JUMP)
// 005c3dd6: MOV EAX,dword ptr [EBX]
//   Label: LAB_005c3dd6
// 005c3dd8: MOV dword ptr [ESP + 0xb8],EAX
// 005c3ddf: MOV EAX,dword ptr [EBX + 0x4]
// 005c3de2: MOV dword ptr [ESP + 0xbc],EAX
// 005c3de9: MOV EAX,dword ptr [EBX + 0x8]
// 005c3dec: MOV dword ptr [ESP + 0xc0],EAX
// 005c3df3: JMP 0x005c3c17
//   XREF to: 005c3c17 (UNCONDITIONAL_JUMP)
// 005c3df8: PUSH ESI
//   Label: LAB_005c3df8
// 005c3df9: LEA EDX,[ESP + 0xf8]
// 005c3e00: PUSH EDX
// 005c3e01: PUSH EAX
// 005c3e02: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c3e07: MOV EBX,EAX
// 005c3e09: LEA EAX,[ESP + 0xc4]
// 005c3e10: ADD ESP,0xc
// 005c3e13: CMP EAX,EBX
// 005c3e15: JZ 0x005c3c17
//   XREF to: 005c3c17 (CONDITIONAL_JUMP)
// 005c3e1b: MOV EAX,dword ptr [EBX]
// 005c3e1d: MOV dword ptr [ESP + 0xb8],EAX
// 005c3e24: MOV EAX,dword ptr [EBX + 0x4]
// 005c3e27: MOV dword ptr [ESP + 0xbc],EAX
// 005c3e2e: MOV EAX,dword ptr [EBX + 0x8]
// 005c3e31: MOV dword ptr [ESP + 0xc0],EAX
// 005c3e38: JMP 0x005c3c17
//   XREF to: 005c3c17 (UNCONDITIONAL_JUMP)
// 005c3e3d: PUSH EBX
//   Label: LAB_005c3e3d
// 005c3e3e: MOV EAX,dword ptr [EBX + 0x154]
// 005c3e44: CALL dword ptr [EAX + 0x68]
// 005c3e47: ADD ESP,0x4
// 005c3e4a: TEST EAX,EAX
// 005c3e4c: JNZ 0x005c3d22
//   XREF to: 005c3d22 (CONDITIONAL_JUMP)
// 005c3e52: MOV EDX,dword ptr [ESP + 0x17c]
//   Label: LAB_005c3e52
// 005c3e59: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c3e5e: ADD EAX,EDX
// 005c3e60: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005c3e65: MOV EAX,dword ptr [EAX + 0x152f24]
//   XREF to: 0326719c (DATA)
// 005c3e6b: PUSH 0xa
// 005c3e6d: MOV dword ptr [ESP + 0x1a4],EAX
// 005c3e74: LEA EAX,[ESP + 0x20]
// 005c3e78: PUSH EAX
// 005c3e79: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005c3e7e: ADD ESP,0xc
// 005c3e81: LEA EAX,[ESP + 0x18]
// 005c3e85: PUSH EAX
// 005c3e86: MOV ECX,dword ptr [ESP + 0x1a0]
// 005c3e8d: MOV EBX,dword ptr [ESP + 0x1a0]
// 005c3e94: PUSH ECX
// 005c3e95: MOV EBX,dword ptr [EBX + 0x154]
// 005c3e9b: CALL dword ptr [EBX + 0x4c]
// 005c3e9e: ADD ESP,0x8
// 005c3ea1: MOV dword ptr [ESP + 0x190],EAX
// 005c3ea8: CMP EAX,0x1
// 005c3eab: JL 0x005c3d22
//   XREF to: 005c3d22 (CONDITIONAL_JUMP)
// 005c3eb1: XOR EBX,EBX
// 005c3eb3: TEST EAX,EAX
// 005c3eb5: JLE 0x005c3d22
//   XREF to: 005c3d22 (CONDITIONAL_JUMP)
// 005c3ebb: LEA ESI,[ESP + 0x18]
// 005c3ebf: PUSH ESI
//   Label: LAB_005c3ebf
// 005c3ec0: LEA EAX,[ESP + 0x134]
// 005c3ec7: PUSH EAX
// 005c3ec8: MOV EAX,dword ptr [ESP + 0x1a4]
// 005c3ecf: PUSH EAX
// 005c3ed0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c3ed5: ADD ESP,0xc
// 005c3ed8: LEA EAX,[ESP + 0x130]
// 005c3edf: PUSH EAX
// 005c3ee0: LEA EAX,[ESP + 0xe0]
// 005c3ee7: PUSH EAX
// 005c3ee8: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c3eeb: PUSH EDX
// 005c3eec: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c3ef1: ADD ESP,0xc
// 005c3ef4: FLDZ
// 005c3ef6: FLD float ptr [ESP + 0xdc]
// 005c3efd: FLD float ptr [ESP + 0xe0]
// 005c3f04: FLD float ptr [ESP + 0xe4]
// 005c3f0b: FXCH ST2
// 005c3f0d: FSUB float ptr [ESP + 0xb8]
// 005c3f14: FXCH
// 005c3f16: FSUB float ptr [ESP + 0xbc]
// 005c3f1d: FXCH ST2
// 005c3f1f: FSUB float ptr [ESP + 0xc0]
// 005c3f26: FXCH
// 005c3f28: FSTP float ptr [ESP + 0x100]
// 005c3f2f: FXCH
// 005c3f31: FSTP float ptr [ESP + 0x104]
// 005c3f38: FST float ptr [ESP + 0x108]
// 005c3f3f: FSTP double ptr [ESP]
// 005c3f42: FCOMP double ptr [ESP]
// 005c3f45: FNSTSW AX
// 005c3f47: SAHF
// 005c3f48: JC 0x005c3f62
//   XREF to: 005c3f62 (CONDITIONAL_JUMP)
// 005c3f4a: MOV EDI,dword ptr [ESP + 0x190]
//   Label: LAB_005c3f4a
// 005c3f51: INC EBX
// 005c3f52: ADD ESI,0xc
// 005c3f55: CMP EBX,EDI
// 005c3f57: JGE 0x005c3d22
//   XREF to: 005c3d22 (CONDITIONAL_JUMP)
// 005c3f5d: JMP 0x005c3ebf
//   XREF to: 005c3ebf (UNCONDITIONAL_JUMP)
// 005c3f62: FLD double ptr [ESP]
//   Label: LAB_005c3f62
// 005c3f65: FCOMP double ptr [0x00653cc4]
//   XREF to: 00653cc4 (READ)
// 005c3f6b: FNSTSW AX
// 005c3f6d: SAHF
// 005c3f6e: JA 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c3f70: LEA EAX,[ESP + 0x100]
// 005c3f77: PUSH EAX
// 005c3f78: LEA EAX,[ESP + 0xc8]
// 005c3f7f: PUSH EAX
// 005c3f80: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c3f85: ADD ESP,0x8
// 005c3f88: MOV ECX,0x3f060a92
// 005c3f8d: FLD float ptr [ESP + 0x108]
// 005c3f94: MOV dword ptr [ESP + 0x10],ECX
// 005c3f98: FCOMP double ptr [0x00653ccc]
//   XREF to: 00653ccc (READ)
// 005c3f9e: FNSTSW AX
// 005c3fa0: SAHF
// 005c3fa1: JNC 0x005c3fab
//   XREF to: 005c3fab (CONDITIONAL_JUMP)
// 005c3fa3: MOV dword ptr [ESP + 0x10],0x3fc90fdb
// 005c3fab: FLD float ptr [ESP + 0xc4]
//   Label: LAB_005c3fab
// 005c3fb2: FABS
// 005c3fb4: FLD float ptr [ESP + 0x10]
// 005c3fb8: FCOMPP
// 005c3fba: FNSTSW AX
// 005c3fbc: SAHF
// 005c3fbd: JC 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c3fbf: FLD float ptr [ESP + 0xc8]
// 005c3fc6: FCOMP float ptr [ESP + 0x188]
// 005c3fcd: FNSTSW AX
// 005c3fcf: SAHF
// 005c3fd0: JC 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c3fd6: FLD float ptr [ESP + 0xc8]
// 005c3fdd: FCOMP float ptr [ESP + 0x18c]
// 005c3fe4: FNSTSW AX
// 005c3fe6: SAHF
// 005c3fe7: JA 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c3fed: FLD float ptr [ESP + 0x104]
// 005c3ff4: FMUL ST0
// 005c3ff6: FLD float ptr [ESP + 0x100]
// 005c3ffd: FMUL ST0
// 005c3fff: FADDP
// 005c4001: FLD float ptr [ESP + 0x108]
// 005c4008: FMUL ST0
// 005c400a: FADDP
// 005c400c: FSQRT
// 005c400e: FLD1
// 005c4010: FLD float ptr [ESP + 0x104]
// 005c4017: FXCH
// 005c4019: FDIV ST0,ST2
// 005c401b: FXCH
// 005c401d: FMUL ST1
// 005c401f: FLD float ptr [ESP + 0x100]
// 005c4026: FMUL ST2
// 005c4028: FXCH
// 005c402a: FST float ptr [ESP + 0x104]
// 005c4031: FMUL float ptr [ESP + 0xec]
// 005c4038: FXCH
// 005c403a: FST float ptr [ESP + 0x100]
// 005c4041: FMUL float ptr [ESP + 0xe8]
// 005c4048: FLD float ptr [ESP + 0x108]
// 005c404f: FMULP ST3
// 005c4051: FADDP
// 005c4053: FXCH
// 005c4055: FST float ptr [ESP + 0x108]
// 005c405c: FMUL float ptr [ESP + 0xf0]
// 005c4063: FADDP
// 005c4065: FSUBR double ptr [0x00653c9c]
//   XREF to: 00653c9c (READ)
// 005c406b: FXCH
// 005c406d: FMUL double ptr [0x00653ca4]
//   XREF to: 00653ca4 (READ)
// 005c4073: FADDP
// 005c4075: FST float ptr [ESP + 0x14]
// 005c4079: FCOMP float ptr [ESP + 0x198]
// 005c4080: FNSTSW AX
// 005c4082: SAHF
// 005c4083: JNC 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c4089: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c408e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c408f: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c4094: ADD ESP,0x4
// 005c4097: PUSH 0x2
// 005c4099: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c409f: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c40a0: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 005c40a5: ADD ESP,0x8
// 005c40a8: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c40ab: PUSH ECX
// 005c40ac: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c40b2: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005c40b3: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c40b8: ADD ESP,0x8
// 005c40bb: MOV EAX,dword ptr [ESP + 0x19c]
// 005c40c2: PUSH EAX
// 005c40c3: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c40c9: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c40ca: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c40cf: ADD ESP,0x8
// 005c40d2: LEA EAX,[ESP + 0x130]
// 005c40d9: PUSH EAX
// 005c40da: LEA EAX,[ESP + 0x128]
// 005c40e1: PUSH EAX
// 005c40e2: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c40e8: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005c40e9: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 005c40ee: ADD ESP,0xc
// 005c40f1: MOV EDI,EAX
// 005c40f3: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c40f8: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c40f9: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c40fe: ADD ESP,0x4
// 005c4101: TEST EDI,EDI
// 005c4103: JNZ 0x005c3f4a
//   XREF to: 005c3f4a (CONDITIONAL_JUMP)
// 005c4109: MOV EAX,dword ptr [ESP + 0x14]
// 005c410d: MOV dword ptr [ESP + 0x198],EAX
// 005c4114: MOV EAX,dword ptr [ESP + 0xc8]
// 005c411b: MOV dword ptr [ESP + 0x180],EAX
// 005c4122: MOV EAX,dword ptr [ESP + 0xc4]
// 005c4129: MOV dword ptr [ESP + 0x184],EAX
// 005c4130: MOV EAX,dword ptr [ESP + 0x194]
// 005c4137: MOV dword ptr [EAX + 0x1c],0x1
// 005c413e: JMP 0x005c3f4a
//   XREF to: 005c3f4a (UNCONDITIONAL_JUMP)
// 005c4143: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c4143
// 005c414a: MOV dword ptr [EAX + 0xc],0x0
// 005c4151: FLD float ptr [EBP + 0x1c]
//   Label: LAB_005c4151
//   XREF to: Stack[0xc] (READ)
// 005c4154: FMUL double ptr [0x00653c94]
//   XREF to: 00653c94 (READ)
// 005c415a: FST double ptr [ESP + 0x8]
// 005c415e: FMUL double ptr [0x00653cac]
//   XREF to: 00653cac (READ)
// 005c4164: MOV EBX,dword ptr [ESP + 0x170]
// 005c416b: FSTP float ptr [ESP + 0x174]
// 005c4172: TEST EBX,EBX
// 005c4174: JZ 0x005c4187
//   XREF to: 005c4187 (CONDITIONAL_JUMP)
// 005c4176: FLD double ptr [ESP + 0x8]
// 005c417a: FMUL double ptr [0x00653cb4]
//   XREF to: 00653cb4 (READ)
// 005c4180: FSTP float ptr [ESP + 0x174]
// 005c4187: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c4187
// 005c418e: FLD float ptr [ESP + 0x180]
// 005c4195: FSUB float ptr [EAX + 0xc]
// 005c4198: SUB ESP,0x4
// 005c419b: FSTP float ptr [ESP]
// 005c419e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c41a3: MOV dword ptr [ESP + 0x1a4],EAX
// 005c41aa: FLD float ptr [ESP + 0x1a4]
// 005c41b1: ADD ESP,0x4
// 005c41b4: FLD float ptr [ESP + 0x184]
// 005c41bb: MOV EAX,dword ptr [ESP + 0x194]
// 005c41c2: FXCH
// 005c41c4: FSTP float ptr [ESP + 0x16c]
// 005c41cb: FSUB float ptr [EAX + 0x8]
// 005c41ce: SUB ESP,0x4
// 005c41d1: FSTP float ptr [ESP]
// 005c41d4: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c41d9: MOV dword ptr [ESP + 0x1a4],EAX
// 005c41e0: FLD float ptr [ESP + 0x1a4]
// 005c41e7: ADD ESP,0x4
// 005c41ea: FLD float ptr [ESP + 0x174]
// 005c41f1: FLD float ptr [ESP + 0x16c]
// 005c41f8: FXCH ST2
// 005c41fa: FSTP float ptr [ESP + 0x168]
// 005c4201: FCHS
// 005c4203: FSTP float ptr [ESP + 0x164]
// 005c420a: FCOMP float ptr [ESP + 0x164]
// 005c4211: FNSTSW AX
// 005c4213: SAHF
// 005c4214: JNC 0x005c4224
//   XREF to: 005c4224 (CONDITIONAL_JUMP)
// 005c4216: MOV EAX,dword ptr [ESP + 0x164]
// 005c421d: MOV dword ptr [ESP + 0x16c],EAX
// 005c4224: FLD float ptr [ESP + 0x16c]
//   Label: LAB_005c4224
// 005c422b: FCOMP float ptr [ESP + 0x174]
// 005c4232: FNSTSW AX
// 005c4234: SAHF
// 005c4235: JBE 0x005c4245
//   XREF to: 005c4245 (CONDITIONAL_JUMP)
// 005c4237: MOV EAX,dword ptr [ESP + 0x174]
// 005c423e: MOV dword ptr [ESP + 0x16c],EAX
// 005c4245: FLD float ptr [ESP + 0x168]
//   Label: LAB_005c4245
// 005c424c: FLD float ptr [ESP + 0x174]
// 005c4253: FCHS
// 005c4255: FSTP float ptr [ESP + 0x160]
// 005c425c: FCOMP float ptr [ESP + 0x160]
// 005c4263: FNSTSW AX
// 005c4265: SAHF
// 005c4266: JNC 0x005c4276
//   XREF to: 005c4276 (CONDITIONAL_JUMP)
// 005c4268: MOV EAX,dword ptr [ESP + 0x160]
// 005c426f: MOV dword ptr [ESP + 0x168],EAX
// 005c4276: FLD float ptr [ESP + 0x168]
//   Label: LAB_005c4276
// 005c427d: FCOMP float ptr [ESP + 0x174]
// 005c4284: FNSTSW AX
// 005c4286: SAHF
// 005c4287: JBE 0x005c4297
//   XREF to: 005c4297 (CONDITIONAL_JUMP)
// 005c4289: MOV EAX,dword ptr [ESP + 0x174]
// 005c4290: MOV dword ptr [ESP + 0x168],EAX
// 005c4297: MOV EAX,dword ptr [ESP + 0x194]
//   Label: LAB_005c4297
// 005c429e: FLD float ptr [EAX + 0xc]
// 005c42a1: FADD float ptr [ESP + 0x16c]
// 005c42a8: SUB ESP,0x4
// 005c42ab: FSTP float ptr [ESP]
// 005c42ae: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c42b3: MOV dword ptr [ESP + 0x1a4],EAX
// 005c42ba: FLD float ptr [ESP + 0x1a4]
// 005c42c1: ADD ESP,0x4
// 005c42c4: MOV EAX,dword ptr [ESP + 0x194]
// 005c42cb: FLD float ptr [EAX + 0x8]
// 005c42ce: FADD float ptr [ESP + 0x168]
// 005c42d5: SUB ESP,0x4
// 005c42d8: FXCH
// 005c42da: FSTP float ptr [EAX + 0xc]
// 005c42dd: FSTP float ptr [ESP]
// 005c42e0: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c42e5: MOV dword ptr [ESP + 0x1a4],EAX
// 005c42ec: FLD float ptr [ESP + 0x1a4]
// 005c42f3: ADD ESP,0x4
// 005c42f6: MOV EAX,dword ptr [ESP + 0x194]
// 005c42fd: FSTP float ptr [EAX + 0x8]
// 005c4300: MOV ESI,dword ptr [EAX + 0x1c]
// 005c4303: MOV dword ptr [EAX + 0x14],0x3f800000
// 005c430a: CMP ESI,0x1
// 005c430d: JNZ 0x005c3d6c
//   XREF to: 005c3d6c (CONDITIONAL_JUMP)
// 005c4313: FLD float ptr [EAX + 0xc]
// 005c4316: FSUB float ptr [ESP + 0x180]
// 005c431d: FABS
// 005c431f: FCOMP double ptr [0x00653cbc]
//   XREF to: 00653cbc (READ)
// 005c4325: FNSTSW AX
// 005c4327: SAHF
// 005c4328: JNC 0x005c3d6c
//   XREF to: 005c3d6c (CONDITIONAL_JUMP)
// 005c432e: MOV EAX,dword ptr [ESP + 0x194]
// 005c4335: FLD float ptr [EAX + 0x8]
// 005c4338: FSUB float ptr [ESP + 0x184]
// 005c433f: FABS
// 005c4341: FCOMP double ptr [0x00653cbc]
//   XREF to: 00653cbc (READ)
// 005c4347: FNSTSW AX
// 005c4349: SAHF
// 005c434a: JNC 0x005c3d6c
//   XREF to: 005c3d6c (CONDITIONAL_JUMP)
// 005c4350: MOV EAX,dword ptr [ESP + 0x194]
// 005c4357: MOV dword ptr [EAX + 0x1c],0x2
// 005c435e: MOV ESP,EBP
// 005c4360: POP EBP
// 005c4361: POP EDI
// 005c4362: POP ESI
// 005c4363: POP EBX
// 005c4364: RET
