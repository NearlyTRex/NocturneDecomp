// Name: core_icepick.cpp_FUN_004f8b20
// Address: 004f8b20
// Address Range: [[004f8b20, 004f8c6f]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8b20()
// Globals:
//   TerminatedCString s_core_icepick_cpp_0062f75b
//   TerminatedCString s_CIcePick_getCarryObjToBo_0062f76f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f8b20(CIcePick* param_1, undefined4 param_2)
    */

void core_icepick_cpp_FUN_004f8b20(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff60;
  undefined4 auStack_9c [10];
  undefined1 auStack_74 [56];
  undefined4 local_3c;
  CVector3f local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CVector3f local_20;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 1) {
    local_20.z = 0.45;
    local_14 = 0xbe6a7efa;
    local_10 = 0xbca3d70a;
    if ((float *)&local_3c != &local_20.z) {
      local_38.x = -0.229;
      local_38.y = -0.02;
      local_3c = 0x3ee66666;
    }
    local_28 = 0x3fb76c8b;
    local_2c = 0x3f96872b;
    local_38.z = -0.39;
    if ((float *)&local_24 != &local_38.z) {
      local_20.y = 1.433;
      local_24 = 0xbec7ae14;
      local_20.x = 1.176;
    }
  }
  else {
    g_CurrentFilename = "..\\core\\icepick.cpp";
    g_CurrentLineNumber = 0x28a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_74,&local_38,&local_20);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_74 + 4),
             (CMatrix3x4f *)(iVar1 * 0x30 + in_stack_0000000c + 0xfd8),in_stack_ffffff60);
  puVar2 = auStack_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 004f8b20: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f8b20
// 004f8b21: PUSH EDI
// 004f8b22: PUSH EBP
// 004f8b23: SUB ESP,0x9c
// 004f8b29: MOV EDX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 004f8b30: MOV EBX,ESI
// 004f8b32: MOV EAX,EDX
// 004f8b34: SHL EAX,0x4
// 004f8b37: ADD EAX,EDX
// 004f8b39: MOV ECX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 004f8b40: SHL EAX,0x2
// 004f8b43: ADD EAX,ECX
// 004f8b45: MOV EDI,dword ptr [EAX + 0x24ac]
// 004f8b4b: CMP EDX,0x1
// 004f8b4e: JNZ 0x004f8c48
//   XREF to: 004f8c48 (CONDITIONAL_JUMP)
// 004f8b54: MOV EAX,0x3ee66666
// 004f8b59: MOV EDX,0xbe6a7efa
// 004f8b5e: MOV ECX,0xbca3d70a
// 004f8b63: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x3c] (DATA)
// 004f8b67: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f8b6e: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004f8b75: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x18] (DATA)
// 004f8b7c: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004f8b83: CMP ESI,EAX
// 004f8b85: JNZ 0x004f8c32
//   XREF to: 004f8c32 (CONDITIONAL_JUMP)
// 004f8b8b: MOV ECX,0x3fb76c8b
//   Label: LAB_004f8b8b
// 004f8b90: MOV ESI,0x3f96872b
// 004f8b95: MOV EDX,0xbec7ae14
// 004f8b9a: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x30] (DATA)
// 004f8b9e: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004f8ba5: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004f8ba9: LEA ESI,[ESP + 0x84]
//   XREF to: Stack[-0x24] (DATA)
// 004f8bb0: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 004f8bb4: CMP ESI,EAX
// 004f8bb6: JZ 0x004f8bd2
//   XREF to: 004f8bd2 (CONDITIONAL_JUMP)
// 004f8bb8: MOV EAX,0x3f96872b
// 004f8bbd: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f8bc4: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004f8bcb: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f8bd2: LEA EAX,[ESP + 0x84]
//   Label: LAB_004f8bd2
//   XREF to: Stack[-0x24] (DATA)
// 004f8bd9: PUSH EAX
// 004f8bda: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x3c] (DATA)
// 004f8bde: PUSH EAX
// 004f8bdf: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x78] (DATA)
// 004f8be3: PUSH EAX
// 004f8be4: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004f8be9: LEA EAX,[EDI*0x4 + 0x0]
// 004f8bf0: ADD ESP,0xc
// 004f8bf3: SUB EAX,EDI
// 004f8bf5: MOV ESI,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 004f8bfc: SHL EAX,0x4
// 004f8bff: ADD ESI,0xfd8
// 004f8c05: ADD EAX,ESI
// 004f8c07: PUSH EAX
// 004f8c08: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x78] (DATA)
// 004f8c0c: PUSH EAX
// 004f8c0d: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 004f8c11: MOV EDI,EBX
// 004f8c13: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004f8c18: MOV ECX,0xc
// 004f8c1d: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 004f8c21: ADD ESP,0x8
// 004f8c24: MOVSD.REP ES:EDI,ESI
// 004f8c26: MOV EAX,EBX
// 004f8c28: ADD ESP,0x9c
// 004f8c2e: POP EBP
// 004f8c2f: POP EDI
// 004f8c30: POP EBX
// 004f8c31: RET
// 004f8c32: MOV ESI,0x3ee66666
//   Label: LAB_004f8c32
// 004f8c37: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004f8c3b: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004f8c3f: MOV dword ptr [ESP + 0x6c],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 004f8c43: JMP 0x004f8b8b
//   XREF to: 004f8b8b (UNCONDITIONAL_JUMP)
// 004f8c48: MOV ESI,0x62f75b
//   Label: LAB_004f8c48
//   XREF to: 0062f75b (DATA)
// 004f8c4d: MOV EBP,0x28a
// 004f8c52: PUSH 0x62f76f
//   XREF to: 0062f76f (DATA)
// 004f8c57: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004f8c5d: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004f8c63: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004f8c68: ADD ESP,0x4
// 004f8c6b: JMP 0x004f8bd2
//   XREF to: 004f8bd2 (UNCONDITIONAL_JUMP)
