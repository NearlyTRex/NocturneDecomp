// Name: core_platfrm.cpp_FUN_0054ea00
// Address: 0054ea00
// Address Range: [[0054ea00, 0054f058]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054ea00()
// Cross-references:
//   core_conveyor.cpp_FUN_004421c0 (004421c0) at 004422db [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0054e9f0 = 0054eb61
//   double DOUBLE_0063fc6e = 4
//   double DOUBLE_0063fc76 = 0.25
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_platfrm.cpp_FUN_0054cab0
//   core_platfrm.cpp_FUN_0054e480
//   core_skeleton.cpp_FUN_005a20b0
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054ea00(undefined4 param_1) */

void core_platfrm_cpp_FUN_0054ea00(void)

{
  char *pcVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte bVar12;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  COrientation *in_stack_00000024;
  CLocation *in_stack_0000002c;
  int *in_stack_00000030;
  CVector3f *in_stack_00000044;
  CVector3f *in_stack_0000004c;
  float *in_stack_00000050;
  float afStackY_184c [21];
  int aiStackY_17f8 [488];
  float afStackY_1058 [21];
  int aiStackY_1004 [835];
  CVector3f *in_stack_fffffd38;
  CVector3f *in_stack_fffffd5c;
  CMatrix3x4f *in_stack_fffffd60;
  CMatrix3x4f *in_stack_fffffd6c;
  CMatrix3x4f *in_stack_fffffd78;
  CMatrix3x3f *in_stack_fffffd7c;
  CMatrix3x4f *in_stack_fffffd80;
  CMatrix3x3f *in_stack_fffffd84;
  undefined1 auStack_268 [8];
  CDemonActor *pCStack_260;
  float fStack_254;
  undefined4 uStack_24c;
  CQuaternion4f CStack_248;
  float fStack_22c;
  float fStack_21c;
  undefined4 auStack_218 [5];
  float afStack_204 [6];
  undefined1 auStack_1ec [48];
  undefined1 auStack_1bc [32];
  undefined1 auStack_19c [24];
  undefined4 uStack_184;
  CQuaternion4f CStack_180;
  float fStack_164;
  float fStack_154;
  undefined1 auStack_150 [24];
  CMatrix3x4f aCStack_138 [2];
  undefined4 auStack_d8 [5];
  undefined1 auStack_c4 [24];
  CQuaternion4f CStack_ac;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_94 [8];
  float fStack_8c;
  undefined4 uStack_70;
  float afStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_54;
  float afStack_50 [6];
  CVector3f aCStack_38 [2];
  undefined4 uStack_1c;
  int local_18 [2];
  
  this_ptr = in_stack_00000004;
  bVar12 = 0;
  if (in_stack_00000004[5].field7_0x6c != 4) {
    if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
      afStack_50[1] =
           (float)in_stack_00000004[2].field7_0x6c - *(float *)in_stack_00000004[2].create_event;
      afStack_50[2] =
           (float)in_stack_00000004[2].was_created -
           *(float *)(in_stack_00000004[2].create_event + 4);
      afStack_50[3] =
           in_stack_00000004[2].create_prob - *(float *)(in_stack_00000004[2].create_event + 8);
      iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      if ((iVar2 != 0) && (iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47), iVar2 != 0)
         ) {
        pcVar1 = this_ptr[2].create_event;
        if ((CLocation *)pcVar1 != &this_ptr->location) {
          *(float *)pcVar1 = (this_ptr->location).position.x;
          *(float *)(this_ptr[2].create_event + 4) = (this_ptr->location).position.y;
          *(float *)(this_ptr[2].create_event + 8) = (this_ptr->location).position.z;
        }
        if (&this_ptr[2].field7_0x6c != (int *)pcVar1) {
          this_ptr[2].field7_0x6c = *(int *)pcVar1;
          this_ptr[2].was_created = *(int *)(this_ptr[2].create_event + 4);
          this_ptr[2].create_prob = *(float *)(this_ptr[2].create_event + 8);
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)&this_ptr->orient,in_stack_fffffd38);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(undefined4 *)(this_ptr[2].create_event + 0x1c) = uStack_70;
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        puVar6 = (undefined4 *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        puVar4 = (undefined4 *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(undefined4 *)(this_ptr[2].create_event + 0xc) =
             *(undefined4 *)(this_ptr[2].create_event + 0x1c);
        puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar4 + (uint)bVar12 * -2 + 1;
        *puVar6 = *puVar4;
        *puVar7 = *puVar11;
        puVar7[(uint)bVar12 * -2 + 1] = puVar11[(uint)bVar12 * -2 + 1];
      }
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x15);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054e480();
      }
      switch(this_ptr[5].field7_0x6c) {
      case 1:
        if ((int *)(auStack_c4 + 4) != &this_ptr[2].field7_0x6c) {
          auStack_c4._4_4_ = this_ptr[2].field7_0x6c;
          auStack_c4._8_4_ = this_ptr[2].was_created;
          auStack_c4._12_4_ = this_ptr[2].create_prob;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0x00000010,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0xc));
        if ((CVector3f *)(auStack_c4 + 0x14) != pCVar3) {
          auStack_c4._20_4_ = pCVar3->x;
          CStack_ac.w = pCVar3->y;
          CStack_ac.x = pCVar3->z;
        }
        core_skeleton_cpp_FUN_005a20b0();
        if (&this_ptr[2].field7_0x6c != (int *)(auStack_c4 + 0xc)) {
          this_ptr[2].field7_0x6c = auStack_c4._12_4_;
          this_ptr[2].was_created = auStack_c4._16_4_;
          this_ptr[2].create_prob = (float)auStack_c4._20_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&CStack_ac,in_stack_fffffd5c);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        *(float *)(this_ptr[2].create_event + 0xc) = afStack_6c[0];
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2 + 1];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 2)[(uint)bVar12 * -2 + 1];
        break;
      case 2:
        if (&CStack_ac.y != (float *)this_ptr[2].create_event) {
          CStack_ac.y = *(float *)this_ptr[2].create_event;
          CStack_ac.z = *(float *)(this_ptr[2].create_event + 4);
          fStack_9c = *(float *)(this_ptr[2].create_event + 8);
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           (aCStack_38,(CQuaternion4f *)(this_ptr[2].create_event + 0x1c));
        if ((CVector3f *)auStack_94 != pCVar3) {
          auStack_94._0_4_ = pCVar3->x;
          auStack_94._4_4_ = pCVar3->y;
          fStack_8c = pCVar3->z;
        }
        core_skeleton_cpp_FUN_005a20b0();
        if ((float *)this_ptr[2].create_event != &fStack_9c) {
          *(float *)this_ptr[2].create_event = fStack_9c;
          *(float *)(this_ptr[2].create_event + 4) = fStack_98;
          *(undefined4 *)(this_ptr[2].create_event + 8) = auStack_94._0_4_;
        }
        core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                  ((CQuaternion4f *)(auStack_94 + 4),in_stack_fffffd5c);
        pfVar5 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(undefined4 *)(this_ptr[2].create_event + 0x1c) = uStack_5c;
        pfVar8 = pfVar5 + (uint)bVar12 * -2 + 1;
        *pfVar5 = afStack_6c[(uint)bVar12 * -2 + 5];
        *pfVar8 = afStack_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 6];
        pfVar8[(uint)bVar12 * -2 + 1] =
             (afStack_6c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 6)[(uint)bVar12 * -2 + 1];
        break;
      case 3:
        in_stack_00000024 = &this_ptr->orient;
        in_stack_0000002c = &this_ptr->location;
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  ((CMatrix3x4f *)auStack_150,&in_stack_0000002c->position,
                   (CVector3f *)in_stack_00000024);
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0x00000008,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0xc));
        in_stack_00000030 = &this_ptr[2].field7_0x6c;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_268,(CVector3f *)in_stack_00000030,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_268 + 4),(CMatrix3x4f *)(auStack_150 + 0xc),
                   in_stack_fffffd60);
        pfVar5 = &aCStack_138[0].m[2].y;
        pfVar8 = afStack_204;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar8 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar12 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
        }
        pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                           ((CVector3f *)&stack0xfffffff0,
                            (CQuaternion4f *)(this_ptr[2].create_event + 0x1c));
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)auStack_19c,(CVector3f *)this_ptr[2].create_event,pCVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(auStack_19c + 4),aCStack_138,in_stack_fffffd6c);
        puVar4 = (undefined4 *)&stack0xfffffd7c;
        puVar11 = auStack_d8;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(this_ptr);
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  ((CMatrix3x4f *)(auStack_1ec + 0x2c),in_stack_0000004c,in_stack_00000044);
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_1ec,(CMatrix3x4f *)auStack_1bc,in_stack_fffffd78);
        puVar4 = auStack_218;
        puVar11 = &uStack_24c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        in_stack_00000014 = CStack_248.z;
        in_stack_00000018 = fStack_22c;
        in_stack_0000001c = fStack_21c;
        if (&stack0x00000014 != in_stack_00000050) {
          *in_stack_00000050 = CStack_248.z;
          in_stack_00000050[1] = fStack_22c;
          in_stack_00000050[2] = fStack_21c;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_248,in_stack_fffffd7c);
        piVar9 = (int *)((int)this_ptr + (uint)bVar12 * -8 + 0x338);
        *(undefined4 *)(this_ptr[2].create_event + 0xc) = uStack_1c;
        piVar10 = piVar9 + (uint)bVar12 * -2 + 1;
        *piVar9 = local_18[(uint)bVar12 * -2];
        *piVar10 = local_18[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        piVar10[(uint)bVar12 * -2 + 1] =
             (local_18 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)auStack_c4,(CMatrix3x4f *)(auStack_1bc + 8),in_stack_fffffd80);
        puVar4 = (undefined4 *)auStack_150;
        puVar11 = &uStack_184;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        in_stack_00000004 = (CDemonActor *)CStack_180.z;
        in_stack_00000008 = fStack_164;
        in_stack_0000000c = fStack_154;
        if ((CDemonActor **)this_ptr[2].create_event != &stack0x00000004) {
          *(float *)this_ptr[2].create_event = CStack_180.z;
          *(float *)(this_ptr[2].create_event + 4) = fStack_164;
          *(float *)(this_ptr[2].create_event + 8) = fStack_154;
        }
        core_xform_cpp_matrixToQuaternion_FUN_005f7420(&CStack_180,in_stack_fffffd84);
        puVar11 = (undefined4 *)((int)this_ptr + (uint)bVar12 * -8 + 0x348);
        *(undefined4 *)(this_ptr[2].create_event + 0x1c) = uStack_54;
        puVar6 = puVar11 + (uint)bVar12 * -2 + 1;
        puVar4 = (undefined4 *)((int)aCStack_38 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -0x14);
        *puVar11 = *(undefined4 *)((int)aCStack_38 + (uint)bVar12 * -8 + -0x18);
        *puVar6 = *puVar4;
        puVar6[(uint)bVar12 * -2 + 1] = puVar4[(uint)bVar12 * -2 + 1];
      }
    }
    else {
      local_18[0] = in_stack_00000004[2].runtime_state;
    }
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      this_ptr[2].location.area_id =
           (int)((float)this_ptr[2].location.area_id + (float)auStack_268._0_4_);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      this_ptr[2].location.area_id = (int)((float)this_ptr[2].location.area_id - fStack_254);
    }
    pCStack_260 = this_ptr;
    auStack_268._4_4_ = 7.798827e-39;
    core_platfrm_cpp_FUN_0054cab0();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}


// Assembly code:
// 0054ea00: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054ea00
// 0054ea01: PUSH ESI
// 0054ea02: PUSH EDI
// 0054ea03: PUSH EBP
// 0054ea04: MOV EBP,ESP
// 0054ea06: SUB ESP,0x2dc
// 0054ea0c: AND ESP,0xfffffff8
// 0054ea0f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054ea12: CMP dword ptr [EBX + 0x724],0x4
// 0054ea19: JZ 0x0054ebff
//   XREF to: 0054ebff (CONDITIONAL_JUMP)
// 0054ea1f: CMP byte ptr [EBX + 0x2f0],0x0
// 0054ea26: JNZ 0x0054ec0f
//   XREF to: 0054ec0f (CONDITIONAL_JUMP)
// 0054ea2c: LEA EAX,[EBX + 0x31c]
// 0054ea32: LEA EDX,[EBX + 0x328]
// 0054ea38: FLD float ptr [EAX]
// 0054ea3a: FSUB float ptr [EDX]
// 0054ea3c: FSTP float ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x4c] (WRITE)
// 0054ea43: FLD float ptr [EAX + 0x4]
// 0054ea46: FSUB float ptr [EDX + 0x4]
// 0054ea49: FST float ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x48] (WRITE)
// 0054ea50: FMUL float ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x48] (READ)
// 0054ea57: FLD float ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x4c] (READ)
// 0054ea5e: FMUL ST0
// 0054ea60: FLD float ptr [EAX + 0x8]
// 0054ea63: FSUB float ptr [EDX + 0x8]
// 0054ea66: FXCH
// 0054ea68: FADDP ST2,ST0
// 0054ea6a: FST float ptr [ESP + 0x2ac]
//   XREF to: Stack[-0x44] (WRITE)
// 0054ea71: FMUL float ptr [ESP + 0x2ac]
//   XREF to: Stack[-0x44] (READ)
// 0054ea78: FADDP
// 0054ea7a: FSQRT
// 0054ea7c: FLD1
// 0054ea7e: FXCH
// 0054ea80: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 0054ea83: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 0054ea86: FNSTSW AX
// 0054ea88: SAHF
// 0054ea89: JNC 0x0054ec32
//   XREF to: 0054ec32 (CONDITIONAL_JUMP)
// 0054ea8f: FLD1
// 0054ea91: FDIV double ptr [ESP]
//   XREF to: Stack[-0x2f0] (DATA)
// 0054ea94: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x2e8] (WRITE)
// 0054ea98: PUSH 0x1d
//   Label: LAB_0054ea98
// 0054ea9a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054ea9f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054eaa0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054eaa2: CALL dword ptr [EDX]
// 0054eaa4: ADD ESP,0x8
// 0054eaa7: TEST EAX,EAX
// 0054eaa9: JZ 0x0054eb30
//   XREF to: 0054eb30 (CONDITIONAL_JUMP)
// 0054eaaf: PUSH 0x47
// 0054eab1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054eab6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054eab7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054eab9: CALL dword ptr [EDX + 0x4]
// 0054eabc: ADD ESP,0x8
// 0054eabf: TEST EAX,EAX
// 0054eac1: JZ 0x0054eb30
//   XREF to: 0054eb30 (CONDITIONAL_JUMP)
// 0054eac3: LEA EAX,[EBX + 0x328]
// 0054eac9: LEA EDX,[EBX + 0x20]
// 0054eacc: MOV ECX,EAX
// 0054eace: CMP EAX,EDX
// 0054ead0: JZ 0x0054eae2
//   XREF to: 0054eae2 (CONDITIONAL_JUMP)
// 0054ead2: MOV ESI,dword ptr [EDX]
// 0054ead4: MOV dword ptr [EAX],ESI
// 0054ead6: MOV ESI,dword ptr [EDX + 0x4]
// 0054ead9: MOV dword ptr [EAX + 0x4],ESI
// 0054eadc: MOV ESI,dword ptr [EDX + 0x8]
// 0054eadf: MOV dword ptr [EAX + 0x8],ESI
// 0054eae2: LEA EAX,[EBX + 0x31c]
//   Label: LAB_0054eae2
// 0054eae8: CMP EAX,ECX
// 0054eaea: JZ 0x0054eafc
//   XREF to: 0054eafc (CONDITIONAL_JUMP)
// 0054eaec: MOV EDX,dword ptr [ECX]
// 0054eaee: MOV dword ptr [EAX],EDX
// 0054eaf0: MOV EDX,dword ptr [ECX + 0x4]
// 0054eaf3: MOV dword ptr [EAX + 0x4],EDX
// 0054eaf6: MOV EDX,dword ptr [ECX + 0x8]
// 0054eaf9: MOV dword ptr [EAX + 0x8],EDX
// 0054eafc: LEA EAX,[EBX + 0x30]
//   Label: LAB_0054eafc
// 0054eaff: PUSH EAX
// 0054eb00: LEA ESI,[ESP + 0x258]
// 0054eb07: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0054eb0c: LEA ESI,[ESP + 0x258]
// 0054eb13: LEA EDI,[EBX + 0x344]
// 0054eb19: ADD ESP,0x4
// 0054eb1c: MOVSD ES:EDI,ESI
// 0054eb1d: MOVSD ES:EDI,ESI
// 0054eb1e: MOVSD ES:EDI,ESI
// 0054eb1f: MOVSD ES:EDI,ESI
// 0054eb20: LEA EDI,[EBX + 0x334]
// 0054eb26: LEA ESI,[EBX + 0x344]
// 0054eb2c: MOVSD ES:EDI,ESI
// 0054eb2d: MOVSD ES:EDI,ESI
// 0054eb2e: MOVSD ES:EDI,ESI
// 0054eb2f: MOVSD ES:EDI,ESI
// 0054eb30: PUSH 0x15
//   Label: LAB_0054eb30
// 0054eb32: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054eb37: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054eb38: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054eb3a: CALL dword ptr [EDX + 0x4]
// 0054eb3d: ADD ESP,0x8
// 0054eb40: TEST EAX,EAX
// 0054eb42: JZ 0x0054eb4f
//   XREF to: 0054eb4f (CONDITIONAL_JUMP)
// 0054eb44: PUSH 0x0
// 0054eb46: PUSH EBX
// 0054eb47: CALL core_platfrm.cpp_FUN_0054e480
//   XREF to: 0054e480 (UNCONDITIONAL_CALL)
// 0054eb4c: ADD ESP,0x8
// 0054eb4f: MOV EAX,dword ptr [EBX + 0x724]
//   Label: LAB_0054eb4f
// 0054eb55: CMP EAX,0x3
// 0054eb58: JA 0x0054eb61
//   XREF to: 0054eb61 (CONDITIONAL_JUMP)
// 0054eb5a: JMP dword ptr [EAX*0x4 + 0x54e9f0]
//   Label: switchD
//   XREF to: 0054eb61 (COMPUTED_JUMP)
//   XREF to: 0054ec3f (COMPUTED_JUMP)
//   XREF to: 0054ed19 (COMPUTED_JUMP)
//   XREF to: 0054edf3 (COMPUTED_JUMP)
//   XREF to: 0054e9f0 (DATA)
// 0054eb61: PUSH 0x2a
//   Label: caseD_0
// 0054eb63: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054eb68: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054eb69: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054eb6b: CALL dword ptr [EDX]
// 0054eb6d: ADD ESP,0x8
// 0054eb70: TEST EAX,EAX
// 0054eb72: JZ 0x0054eb86
//   XREF to: 0054eb86 (CONDITIONAL_JUMP)
// 0054eb74: FLD float ptr [ESP + 0x8]
// 0054eb78: FLD ST0
// 0054eb7a: FMUL double ptr [0x0063fc6e]
//   XREF to: 0063fc6e (READ)
// 0054eb80: FSTP ST1
// 0054eb82: FSTP float ptr [ESP + 0x8]
// 0054eb86: PUSH 0x38
//   Label: LAB_0054eb86
// 0054eb88: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054eb8d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054eb8e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054eb90: CALL dword ptr [EDX]
// 0054eb92: ADD ESP,0x8
// 0054eb95: TEST EAX,EAX
// 0054eb97: JZ 0x0054eba7
//   XREF to: 0054eba7 (CONDITIONAL_JUMP)
// 0054eb99: FLD float ptr [ESP + 0x8]
// 0054eb9d: FMUL double ptr [0x0063fc76]
//   XREF to: 0063fc76 (READ)
// 0054eba3: FSTP float ptr [ESP + 0x8]
// 0054eba7: PUSH 0x34
//   Label: LAB_0054eba7
// 0054eba9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054ebae: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054ebaf: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054ebb1: CALL dword ptr [EDX + 0x4]
// 0054ebb4: ADD ESP,0x8
// 0054ebb7: TEST EAX,EAX
// 0054ebb9: JZ 0x0054ebcb
//   XREF to: 0054ebcb (CONDITIONAL_JUMP)
// 0054ebbb: FLD float ptr [EBX + 0x2dc]
// 0054ebc1: FADD float ptr [ESP + 0x8]
// 0054ebc5: FSTP float ptr [EBX + 0x2dc]
// 0054ebcb: PUSH 0x33
//   Label: LAB_0054ebcb
// 0054ebcd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0054ebd2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0054ebd3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0054ebd5: CALL dword ptr [EDX + 0x4]
// 0054ebd8: ADD ESP,0x8
// 0054ebdb: TEST EAX,EAX
// 0054ebdd: JZ 0x0054ebef
//   XREF to: 0054ebef (CONDITIONAL_JUMP)
// 0054ebdf: FLD float ptr [EBX + 0x2dc]
// 0054ebe5: FSUB float ptr [ESP + 0x8]
// 0054ebe9: FSTP float ptr [EBX + 0x2dc]
// 0054ebef: PUSH EBX
//   Label: LAB_0054ebef
// 0054ebf0: CALL core_platfrm.cpp_FUN_0054cab0
//   XREF to: 0054cab0 (UNCONDITIONAL_CALL)
// 0054ebf5: ADD ESP,0x4
// 0054ebf8: MOV ESP,EBP
// 0054ebfa: POP EBP
// 0054ebfb: POP EDI
// 0054ebfc: POP ESI
// 0054ebfd: POP EBX
// 0054ebfe: RET
// 0054ebff: PUSH EBX
//   Label: LAB_0054ebff
// 0054ec00: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0054ec05: ADD ESP,0x4
// 0054ec08: MOV ESP,EBP
// 0054ec0a: POP EBP
// 0054ec0b: POP EDI
// 0054ec0c: POP ESI
// 0054ec0d: POP EBX
// 0054ec0e: RET
// 0054ec0f: LEA EAX,[EBX + 0x310]
//   Label: LAB_0054ec0f
// 0054ec15: MOV EAX,dword ptr [EAX]
// 0054ec17: MOV dword ptr [ESP + 0x2d8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054ec1e: FILD dword ptr [ESP + 0x2d8]
//   XREF to: Stack[-0x18] (READ)
// 0054ec25: FLD1
// 0054ec27: FDIVRP
// 0054ec29: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x2e8] (WRITE)
// 0054ec2d: JMP 0x0054eb61
//   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)
// 0054ec32: MOV dword ptr [ESP + 0x8],0x3f800000
//   Label: LAB_0054ec32
//   XREF to: Stack[-0x2e8] (WRITE)
// 0054ec3a: JMP 0x0054ea98
//   XREF to: 0054ea98 (UNCONDITIONAL_JUMP)
// 0054ec3f: LEA EAX,[ESP + 0x1ec]
//   Label: caseD_1
// 0054ec46: LEA EDX,[EBX + 0x31c]
// 0054ec4c: CMP EAX,EDX
// 0054ec4e: JZ 0x0054ec6d
//   XREF to: 0054ec6d (CONDITIONAL_JUMP)
// 0054ec50: MOV EAX,dword ptr [EDX]
// 0054ec52: MOV dword ptr [ESP + 0x1ec],EAX
// 0054ec59: MOV EAX,dword ptr [EDX + 0x4]
// 0054ec5c: MOV dword ptr [ESP + 0x1f0],EAX
// 0054ec63: MOV EAX,dword ptr [EDX + 0x8]
// 0054ec66: MOV dword ptr [ESP + 0x1f4],EAX
// 0054ec6d: LEA EAX,[EBX + 0x334]
//   Label: LAB_0054ec6d
// 0054ec73: PUSH EAX
// 0054ec74: LEA EAX,[ESP + 0x2c0]
// 0054ec7b: PUSH EAX
// 0054ec7c: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054ec81: MOV EDX,EAX
// 0054ec83: LEA EAX,[ESP + 0x200]
// 0054ec8a: ADD ESP,0x8
// 0054ec8d: CMP EAX,EDX
// 0054ec8f: JZ 0x0054ecae
//   XREF to: 0054ecae (CONDITIONAL_JUMP)
// 0054ec91: MOV EAX,dword ptr [EDX]
// 0054ec93: MOV dword ptr [ESP + 0x1f8],EAX
// 0054ec9a: MOV EAX,dword ptr [EDX + 0x4]
// 0054ec9d: MOV dword ptr [ESP + 0x1fc],EAX
// 0054eca4: MOV EAX,dword ptr [EDX + 0x8]
// 0054eca7: MOV dword ptr [ESP + 0x200],EAX
// 0054ecae: LEA EAX,[ESP + 0x1ec]
//   Label: LAB_0054ecae
// 0054ecb5: PUSH EAX
// 0054ecb6: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0054ecbb: LEA EAX,[ESP + 0x1f0]
// 0054ecc2: LEA EDX,[EBX + 0x31c]
// 0054ecc8: ADD ESP,0x4
// 0054eccb: CMP EDX,EAX
// 0054eccd: JZ 0x0054ecec
//   XREF to: 0054ecec (CONDITIONAL_JUMP)
// 0054eccf: MOV EAX,dword ptr [ESP + 0x1ec]
// 0054ecd6: MOV dword ptr [EDX],EAX
// 0054ecd8: MOV EAX,dword ptr [ESP + 0x1f0]
// 0054ecdf: MOV dword ptr [EDX + 0x4],EAX
// 0054ece2: MOV EAX,dword ptr [ESP + 0x1f4]
// 0054ece9: MOV dword ptr [EDX + 0x8],EAX
// 0054ecec: LEA EAX,[ESP + 0x1f8]
//   Label: LAB_0054ecec
// 0054ecf3: PUSH EAX
// 0054ecf4: LEA ESI,[ESP + 0x238]
// 0054ecfb: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0054ed00: LEA ESI,[ESP + 0x238]
// 0054ed07: LEA EDI,[EBX + 0x334]
// 0054ed0d: ADD ESP,0x4
// 0054ed10: MOVSD ES:EDI,ESI
// 0054ed11: MOVSD ES:EDI,ESI
// 0054ed12: MOVSD ES:EDI,ESI
// 0054ed13: MOVSD ES:EDI,ESI
// 0054ed14: JMP 0x0054eb61
//   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)
// 0054ed19: LEA EAX,[ESP + 0x208]
//   Label: caseD_2
// 0054ed20: LEA EDX,[EBX + 0x328]
// 0054ed26: CMP EAX,EDX
// 0054ed28: JZ 0x0054ed47
//   XREF to: 0054ed47 (CONDITIONAL_JUMP)
// 0054ed2a: MOV EAX,dword ptr [EDX]
// 0054ed2c: MOV dword ptr [ESP + 0x208],EAX
// 0054ed33: MOV EAX,dword ptr [EDX + 0x4]
// 0054ed36: MOV dword ptr [ESP + 0x20c],EAX
// 0054ed3d: MOV EAX,dword ptr [EDX + 0x8]
// 0054ed40: MOV dword ptr [ESP + 0x210],EAX
// 0054ed47: LEA EAX,[EBX + 0x344]
//   Label: LAB_0054ed47
// 0054ed4d: PUSH EAX
// 0054ed4e: LEA EAX,[ESP + 0x278]
// 0054ed55: PUSH EAX
// 0054ed56: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054ed5b: MOV EDX,EAX
// 0054ed5d: LEA EAX,[ESP + 0x21c]
// 0054ed64: ADD ESP,0x8
// 0054ed67: CMP EAX,EDX
// 0054ed69: JZ 0x0054ed88
//   XREF to: 0054ed88 (CONDITIONAL_JUMP)
// 0054ed6b: MOV EAX,dword ptr [EDX]
// 0054ed6d: MOV dword ptr [ESP + 0x214],EAX
// 0054ed74: MOV EAX,dword ptr [EDX + 0x4]
// 0054ed77: MOV dword ptr [ESP + 0x218],EAX
// 0054ed7e: MOV EAX,dword ptr [EDX + 0x8]
// 0054ed81: MOV dword ptr [ESP + 0x21c],EAX
// 0054ed88: LEA EAX,[ESP + 0x208]
//   Label: LAB_0054ed88
// 0054ed8f: PUSH EAX
// 0054ed90: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0054ed95: LEA EAX,[ESP + 0x20c]
// 0054ed9c: LEA EDX,[EBX + 0x328]
// 0054eda2: ADD ESP,0x4
// 0054eda5: CMP EDX,EAX
// 0054eda7: JZ 0x0054edc6
//   XREF to: 0054edc6 (CONDITIONAL_JUMP)
// 0054eda9: MOV EAX,dword ptr [ESP + 0x208]
// 0054edb0: MOV dword ptr [EDX],EAX
// 0054edb2: MOV EAX,dword ptr [ESP + 0x20c]
// 0054edb9: MOV dword ptr [EDX + 0x4],EAX
// 0054edbc: MOV EAX,dword ptr [ESP + 0x210]
// 0054edc3: MOV dword ptr [EDX + 0x8],EAX
// 0054edc6: LEA EAX,[ESP + 0x214]
//   Label: LAB_0054edc6
// 0054edcd: PUSH EAX
// 0054edce: LEA ESI,[ESP + 0x248]
// 0054edd5: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0054edda: LEA ESI,[ESP + 0x248]
// 0054ede1: LEA EDI,[EBX + 0x344]
// 0054ede7: ADD ESP,0x4
// 0054edea: MOVSD ES:EDI,ESI
// 0054edeb: MOVSD ES:EDI,ESI
// 0054edec: MOVSD ES:EDI,ESI
// 0054eded: MOVSD ES:EDI,ESI
// 0054edee: JMP 0x0054eb61
//   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)
// 0054edf3: LEA EAX,[EBX + 0x30]
//   Label: caseD_3
// 0054edf6: PUSH EAX
// 0054edf7: MOV dword ptr [ESP + 0x2d4],EAX
// 0054edfe: LEA EAX,[EBX + 0x20]
// 0054ee01: PUSH EAX
// 0054ee02: MOV dword ptr [ESP + 0x2e0],EAX
// 0054ee09: LEA EAX,[ESP + 0x164]
// 0054ee10: PUSH EAX
// 0054ee11: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0054ee16: ADD ESP,0xc
// 0054ee19: LEA EAX,[EBX + 0x334]
// 0054ee1f: PUSH EAX
// 0054ee20: LEA EAX,[ESP + 0x2b4]
// 0054ee27: PUSH EAX
// 0054ee28: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054ee2d: ADD ESP,0x8
// 0054ee30: PUSH EAX
// 0054ee31: LEA EAX,[EBX + 0x31c]
// 0054ee37: PUSH EAX
// 0054ee38: MOV dword ptr [ESP + 0x2dc],EAX
// 0054ee3f: LEA EAX,[ESP + 0x44]
// 0054ee43: PUSH EAX
// 0054ee44: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054ee49: ADD ESP,0xc
// 0054ee4c: LEA EAX,[ESP + 0x15c]
// 0054ee53: PUSH EAX
// 0054ee54: LEA EAX,[ESP + 0x40]
// 0054ee58: PUSH EAX
// 0054ee59: LEA ESI,[ESP + 0x194]
// 0054ee60: LEA EDI,[ESP + 0xa4]
// 0054ee67: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054ee6c: ADD ESP,0x8
// 0054ee6f: LEA EAX,[EBX + 0x344]
// 0054ee75: MOV ECX,0xc
// 0054ee7a: PUSH EAX
// 0054ee7b: LEA EAX,[ESP + 0x290]
// 0054ee82: LEA ESI,[ESP + 0x190]
// 0054ee89: PUSH EAX
// 0054ee8a: MOVSD.REP ES:EDI,ESI
// 0054ee8c: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054ee91: ADD ESP,0x8
// 0054ee94: PUSH EAX
// 0054ee95: LEA EAX,[EBX + 0x328]
// 0054ee9b: PUSH EAX
// 0054ee9c: LEA EAX,[ESP + 0x104]
// 0054eea3: PUSH EAX
// 0054eea4: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054eea9: ADD ESP,0xc
// 0054eeac: LEA EAX,[ESP + 0x15c]
// 0054eeb3: PUSH EAX
// 0054eeb4: LEA EAX,[ESP + 0x100]
// 0054eebb: PUSH EAX
// 0054eebc: LEA ESI,[ESP + 0x14]
// 0054eec0: LEA EDI,[ESP + 0x1c4]
// 0054eec7: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054eecc: ADD ESP,0x8
// 0054eecf: MOV ECX,0xc
// 0054eed4: LEA ESI,[ESP + 0xc]
// 0054eed8: PUSH EBX
// 0054eed9: MOVSD.REP ES:EDI,ESI
// 0054eedb: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0054eee0: ADD ESP,0x4
// 0054eee3: MOV EDX,dword ptr [ESP + 0x2d0]
// 0054eeea: PUSH EDX
// 0054eeeb: MOV ECX,dword ptr [ESP + 0x2dc]
// 0054eef2: PUSH ECX
// 0054eef3: LEA EAX,[ESP + 0xd4]
// 0054eefa: PUSH EAX
// 0054eefb: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054ef00: ADD ESP,0xc
// 0054ef03: LEA EAX,[ESP + 0xcc]
// 0054ef0a: PUSH EAX
// 0054ef0b: LEA EAX,[ESP + 0xa0]
// 0054ef12: PUSH EAX
// 0054ef13: LEA ESI,[ESP + 0x74]
// 0054ef17: LEA EDI,[ESP + 0x44]
// 0054ef1b: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054ef20: MOV ECX,0xc
// 0054ef25: LEA ESI,[ESP + 0x74]
// 0054ef29: ADD ESP,0x8
// 0054ef2c: MOVSD.REP ES:EDI,ESI
// 0054ef2e: MOV EAX,dword ptr [ESP + 0x48]
// 0054ef32: MOV dword ptr [ESP + 0x298],EAX
// 0054ef39: MOV EAX,dword ptr [ESP + 0x58]
// 0054ef3d: MOV dword ptr [ESP + 0x29c],EAX
// 0054ef44: MOV EAX,dword ptr [ESP + 0x68]
// 0054ef48: MOV ESI,dword ptr [ESP + 0x2d4]
// 0054ef4f: MOV dword ptr [ESP + 0x2a0],EAX
// 0054ef56: LEA EAX,[ESP + 0x298]
// 0054ef5d: CMP EAX,ESI
// 0054ef5f: JZ 0x0054ef7b
//   XREF to: 0054ef7b (CONDITIONAL_JUMP)
// 0054ef61: MOV EAX,dword ptr [ESP + 0x48]
// 0054ef65: MOV dword ptr [ESI],EAX
// 0054ef67: MOV EAX,dword ptr [ESP + 0x29c]
// 0054ef6e: MOV dword ptr [ESI + 0x4],EAX
// 0054ef71: MOV EAX,dword ptr [ESP + 0x2a0]
// 0054ef78: MOV dword ptr [ESI + 0x8],EAX
// 0054ef7b: LEA EAX,[ESP + 0x3c]
//   Label: LAB_0054ef7b
// 0054ef7f: PUSH EAX
// 0054ef80: LEA ESI,[ESP + 0x268]
// 0054ef87: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 0054ef8c: LEA ESI,[ESP + 0x268]
// 0054ef93: ADD ESP,0x4
// 0054ef96: LEA EAX,[ESP + 0xcc]
// 0054ef9d: LEA EDI,[EBX + 0x334]
// 0054efa3: PUSH EAX
// 0054efa4: LEA EAX,[ESP + 0x1c0]
// 0054efab: MOVSD ES:EDI,ESI
// 0054efac: MOVSD ES:EDI,ESI
// 0054efad: MOVSD ES:EDI,ESI
// 0054efae: MOVSD ES:EDI,ESI
// 0054efaf: PUSH EAX
// 0054efb0: LEA ESI,[ESP + 0x134]
// 0054efb7: LEA EDI,[ESP + 0x104]
// 0054efbe: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054efc3: MOV ECX,0xc
// 0054efc8: LEA ESI,[ESP + 0x134]
// 0054efcf: ADD ESP,0x8
// 0054efd2: MOVSD.REP ES:EDI,ESI
// 0054efd4: MOV EAX,dword ptr [ESP + 0x108]
// 0054efdb: MOV dword ptr [ESP + 0x280],EAX
// 0054efe2: MOV EAX,dword ptr [ESP + 0x118]
// 0054efe9: MOV dword ptr [ESP + 0x284],EAX
// 0054eff0: MOV EAX,dword ptr [ESP + 0x128]
// 0054eff7: LEA EDX,[EBX + 0x328]
// 0054effd: MOV dword ptr [ESP + 0x288],EAX
// 0054f004: LEA EAX,[ESP + 0x280]
// 0054f00b: CMP EDX,EAX
// 0054f00d: JZ 0x0054f02c
//   XREF to: 0054f02c (CONDITIONAL_JUMP)
// 0054f00f: MOV EAX,dword ptr [ESP + 0x108]
// 0054f016: MOV dword ptr [EDX],EAX
// 0054f018: MOV EAX,dword ptr [ESP + 0x284]
// 0054f01f: MOV dword ptr [EDX + 0x4],EAX
// 0054f022: MOV EAX,dword ptr [ESP + 0x288]
// 0054f029: MOV dword ptr [EDX + 0x8],EAX
// 0054f02c: LEA EAX,[ESP + 0xfc]
//   Label: LAB_0054f02c
// 0054f033: PUSH EAX
// 0054f034: LEA ESI,[ESP + 0x228]
// 0054f03b: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 0054f040: LEA ESI,[ESP + 0x228]
// 0054f047: LEA EDI,[EBX + 0x344]
// 0054f04d: ADD ESP,0x4
// 0054f050: MOVSD ES:EDI,ESI
// 0054f051: MOVSD ES:EDI,ESI
// 0054f052: MOVSD ES:EDI,ESI
// 0054f053: MOVSD ES:EDI,ESI
// 0054f054: JMP 0x0054eb61
//   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)
