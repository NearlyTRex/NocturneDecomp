// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
// Address Range: [[0042dcd0, 0042ddc8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042dfcf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_0061746e
//   TerminatedCString s_CCharacter_applyLookAt_n_00617483
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

{
  CQuaternion4f *pCVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1840 [1519];
  CQuaternion4f *in_stack_ffffff8c;
  CQuaternion4f *in_stack_ffffff90;
  float in_stack_ffffff94;
  undefined4 local_64;
  undefined4 uStack_58;
  undefined1 local_54 [16];
  float local_44 [9];
  float fStack_20;
  float afStack_1c [5];
  float fStack_8;
  
  bVar4 = 0;
  if (0.0 < *(float *)(this_ptr->field11_0x25a0 + 0x40)) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x44) < 0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xde5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x3c),unaff_EDI);
    local_44[1] = afStack_1c[0];
    local_44[(uint)bVar4 * -2 + 2] = afStack_1c[(uint)bVar4 * -2 + 1];
    local_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
         afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
    (local_44 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 3)[(uint)bVar4 * -2 + 1] =
         (afStack_1c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 2)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x38),(float)(local_44 + 2));
    local_54._8_4_ = fStack_8;
    local_44[(uint)bVar4 * -2 + -1] = *(float *)(&stack0xfffffffc + (uint)bVar4 * -8);
    local_44[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
         *(float *)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (local_44 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1] =
         *(float *)((int)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
                   ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640
              ((CQuaternion4f *)(local_54 + 0xc),in_stack_ffffff8c,in_stack_ffffff90);
    uStack_58 = local_64;
    *(undefined4 *)(local_54 + (uint)bVar4 * -8) =
         *(undefined4 *)(&stack0xffffffa0 + (uint)bVar4 * -8);
    *(undefined4 *)(local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
         *(undefined4 *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(undefined4 *)
     ((int)(local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) + ((uint)bVar4 * -2 + 1) * 4) =
         *(undefined4 *)
          ((int)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->model).bone_rotations + *(int *)(this_ptr->field11_0x25a0 + 0x44),
               (CQuaternion4f *)local_54,*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x40),
               in_stack_ffffff94);
    pCVar1 = (this_ptr->model).bone_rotations + *(int *)(this_ptr->field11_0x25a0 + 0x44);
    pfVar2 = (float *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar1->w = fStack_20;
    pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
    *pfVar2 = afStack_1c[(uint)bVar4 * -2];
    *pfVar3 = afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar3[(uint)bVar4 * -2 + 1] =
         (afStack_1c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  }
  return;
}


// Assembly code:
// 0042dcd0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// 0042dcd1: SUB ESP,0x70
// 0042dcd4: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 0042dcd8: FLD float ptr [EBX + 0x25e0]
// 0042dcde: FLDZ
// 0042dce0: FCOMPP
// 0042dce2: FNSTSW AX
// 0042dce4: SAHF
// 0042dce5: JNC 0x0042dd9b
//   XREF to: 0042dd9b (CONDITIONAL_JUMP)
// 0042dceb: PUSH EDI
// 0042dcec: PUSH ESI
// 0042dced: CMP dword ptr [EBX + 0x25e4],0x0
// 0042dcf4: JL 0x0042dda0
//   XREF to: 0042dda0 (CONDITIONAL_JUMP)
// 0042dcfa: PUSH dword ptr [EBX + 0x25dc]
//   Label: LAB_0042dcfa
// 0042dd00: LEA ESI,[ESP + 0x5c]
//   XREF to: Stack[-0x24] (DATA)
// 0042dd04: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x44] (DATA)
// 0042dd08: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 0042dd0d: LEA ESI,[ESP + 0x5c]
//   XREF to: Stack[-0x24] (DATA)
// 0042dd11: ADD ESP,0x4
// 0042dd14: MOVSD ES:EDI,ESI
// 0042dd15: MOVSD ES:EDI,ESI
// 0042dd16: MOVSD ES:EDI,ESI
// 0042dd17: MOVSD ES:EDI,ESI
// 0042dd18: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x44] (DATA)
// 0042dd1c: PUSH ESI
// 0042dd1d: PUSH dword ptr [EBX + 0x25d8]
// 0042dd23: LEA ESI,[ESP + 0x70]
//   XREF to: Stack[-0x14] (DATA)
// 0042dd27: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x54] (DATA)
// 0042dd2b: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 0042dd30: LEA ESI,[ESP + 0x70]
//   XREF to: Stack[-0x14] (DATA)
// 0042dd34: ADD ESP,0x4
// 0042dd37: MOVSD ES:EDI,ESI
// 0042dd38: MOVSD ES:EDI,ESI
// 0042dd39: MOVSD ES:EDI,ESI
// 0042dd3a: MOVSD ES:EDI,ESI
// 0042dd3b: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x54] (DATA)
// 0042dd3f: PUSH ESI
// 0042dd40: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x74] (DATA)
// 0042dd44: LEA EDI,[ESP + 0x20]
//   XREF to: Stack[-0x64] (DATA)
// 0042dd48: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0042dd4d: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x74] (DATA)
// 0042dd51: ADD ESP,0x8
// 0042dd54: MOVSD ES:EDI,ESI
// 0042dd55: MOVSD ES:EDI,ESI
// 0042dd56: MOVSD ES:EDI,ESI
// 0042dd57: MOVSD ES:EDI,ESI
// 0042dd58: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x64] (DATA)
// 0042dd5c: PUSH dword ptr [EBX + 0x25e0]
// 0042dd62: PUSH ESI
// 0042dd63: MOV ESI,dword ptr [EBX + 0x25e4]
// 0042dd69: LEA EAX,[EBX + 0x808]
// 0042dd6f: SHL ESI,0x4
// 0042dd72: ADD ESI,EAX
// 0042dd74: PUSH ESI
// 0042dd75: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x34] (DATA)
// 0042dd79: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0042dd7e: MOV ESI,dword ptr [EBX + 0x25e4]
// 0042dd84: SHL ESI,0x4
// 0042dd87: LEA EDI,[ESI + EBX*0x1 + 0x808]
// 0042dd8e: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x34] (DATA)
// 0042dd92: ADD ESP,0xc
// 0042dd95: MOVSD ES:EDI,ESI
// 0042dd96: MOVSD ES:EDI,ESI
// 0042dd97: MOVSD ES:EDI,ESI
// 0042dd98: MOVSD ES:EDI,ESI
// 0042dd99: POP ESI
// 0042dd9a: POP EDI
// 0042dd9b: ADD ESP,0x70
//   Label: LAB_0042dd9b
// 0042dd9e: POP EBX
// 0042dd9f: RET
// 0042dda0: PUSH EBX
//   Label: LAB_0042dda0
// 0042dda1: MOV ECX,0x61746e
//   XREF to: 0061746e (PARAM)
// 0042dda6: MOV ESI,0xde5
// 0042ddab: PUSH 0x617483
//   XREF to: 00617483 (DATA)
// 0042ddb0: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0042ddb6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0042ddbc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042ddc1: ADD ESP,0x8
// 0042ddc4: JMP 0x0042dcfa
//   XREF to: 0042dcfa (UNCONDITIONAL_JUMP)
