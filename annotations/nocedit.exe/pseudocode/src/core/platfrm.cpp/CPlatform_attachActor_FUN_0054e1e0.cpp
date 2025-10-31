// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e2d5]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c072 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_platfrm_cpp_0063f98a
//   TerminatedCString s_CPlatform_attachActor_to_0063f99e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_CPlatform_attachActor(CPlatform* param_1,
   undefined4 param_2) */

void core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff68;
  undefined4 auStack_64 [21];
  
  bVar6 = 0;
  if (in_stack_00000008 != 0) {
    iVar2 = 0;
    iVar3 = *(int *)(in_stack_00000004 + 0x51c);
    iVar1 = in_stack_00000004;
    while (in_stack_00000008 != iVar3) {
      iVar2 = iVar2 + 1;
      if (9 < iVar2) {
        iVar3 = *(int *)(in_stack_00000004 + 0x51c);
        iVar2 = 0;
        iVar1 = in_stack_00000004;
        while( true ) {
          if (iVar3 == 0) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      ((CMatrix3x4f *)&stack0xffffff60,(CVector3f *)(in_stack_00000008 + 0x20),
                       (CVector3f *)(in_stack_00000008 + 0x30));
            core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                      ((CMatrix3x4f *)(auStack_64 + 10),(CVector3f *)(in_stack_00000004 + 0x20),
                       (CVector3f *)(in_stack_00000004 + 0x30));
            *(int *)(iVar1 + 0x51c) = in_stack_00000008;
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      ((CMatrix3x4f *)&stack0xffffff68,(CMatrix3x4f *)(auStack_64 + 0xb),
                       in_stack_ffffff68);
            puVar4 = auStack_64;
            puVar5 = (undefined4 *)(iVar1 + 0x520);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            return;
          }
          iVar2 = iVar2 + 1;
          if (9 < iVar2) break;
          iVar3 = *(int *)(iVar1 + 0x550);
          iVar1 = iVar1 + 0x34;
        }
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x3d0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::attachActor - too many!");
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x550);
      iVar1 = iVar1 + 0x34;
    }
  }
  return;
}


// Assembly code:
// 0054e1e0: PUSH EBX
//   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// 0054e1e1: PUSH ESI
// 0054e1e2: PUSH EDI
// 0054e1e3: PUSH EBP
// 0054e1e4: SUB ESP,0x90
// 0054e1ea: MOV ESI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 0054e1f1: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 0054e1f8: TEST EBX,EBX
// 0054e1fa: JZ 0x0054e21b
//   XREF to: 0054e21b (CONDITIONAL_JUMP)
// 0054e1fc: MOV EDI,ESI
// 0054e1fe: MOV EDX,dword ptr [ESI + 0x51c]
// 0054e204: XOR EAX,EAX
// 0054e206: CMP EBX,EDX
// 0054e208: JZ 0x0054e21b
//   XREF to: 0054e21b (CONDITIONAL_JUMP)
// 0054e20a: INC EAX
//   Label: LAB_0054e20a
// 0054e20b: ADD EDI,0x34
// 0054e20e: CMP EAX,0xa
// 0054e211: JGE 0x0054e226
//   XREF to: 0054e226 (CONDITIONAL_JUMP)
// 0054e213: CMP EBX,dword ptr [EDI + 0x51c]
// 0054e219: JNZ 0x0054e20a
//   XREF to: 0054e20a (CONDITIONAL_JUMP)
// 0054e21b: ADD ESP,0x90
//   Label: LAB_0054e21b
// 0054e221: POP EBP
// 0054e222: POP EDI
// 0054e223: POP ESI
// 0054e224: POP EBX
// 0054e225: RET
// 0054e226: MOV EDI,ESI
//   Label: LAB_0054e226
// 0054e228: MOV EBP,dword ptr [ESI + 0x51c]
// 0054e22e: XOR EAX,EAX
// 0054e230: TEST EBP,EBP
// 0054e232: JZ 0x0054e246
//   XREF to: 0054e246 (CONDITIONAL_JUMP)
// 0054e234: INC EAX
//   Label: LAB_0054e234
// 0054e235: ADD EDI,0x34
// 0054e238: CMP EAX,0xa
// 0054e23b: JGE 0x0054e2a8
//   XREF to: 0054e2a8 (CONDITIONAL_JUMP)
// 0054e23d: CMP dword ptr [EDI + 0x51c],0x0
// 0054e244: JNZ 0x0054e234
//   XREF to: 0054e234 (CONDITIONAL_JUMP)
// 0054e246: LEA EAX,[EBX + 0x30]
//   Label: LAB_0054e246
// 0054e249: PUSH EAX
// 0054e24a: LEA EAX,[EBX + 0x20]
// 0054e24d: PUSH EAX
// 0054e24e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa0] (DATA)
// 0054e252: PUSH EAX
// 0054e253: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054e258: ADD ESP,0xc
// 0054e25b: LEA EAX,[ESI + 0x30]
// 0054e25e: PUSH EAX
// 0054e25f: ADD ESI,0x20
// 0054e262: PUSH ESI
// 0054e263: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 0054e267: PUSH EAX
// 0054e268: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0054e26d: ADD ESP,0xc
// 0054e270: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 0054e274: PUSH EAX
// 0054e275: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0054e279: PUSH EAX
// 0054e27a: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x70] (DATA)
// 0054e27e: MOV dword ptr [EDI + 0x51c],EBX
// 0054e284: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054e289: MOV ECX,0xc
// 0054e28e: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x70] (DATA)
// 0054e292: LEA EDI,[EDI + 0x520]
// 0054e298: ADD ESP,0x8
// 0054e29b: MOVSD.REP ES:EDI,ESI
// 0054e29d: ADD ESP,0x90
// 0054e2a3: POP EBP
// 0054e2a4: POP EDI
// 0054e2a5: POP ESI
// 0054e2a6: POP EBX
// 0054e2a7: RET
// 0054e2a8: MOV ECX,0x63f98a
//   Label: LAB_0054e2a8
//   XREF to: 0063f98a (PARAM)
// 0054e2ad: MOV EBX,0x3d0
// 0054e2b2: PUSH 0x63f99e
//   XREF to: 0063f99e (DATA)
// 0054e2b7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054e2bd: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0054e2c3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054e2c8: ADD ESP,0x4
// 0054e2cb: ADD ESP,0x90
// 0054e2d1: POP EBP
// 0054e2d2: POP EDI
// 0054e2d3: POP ESI
// 0054e2d4: POP EBX
// 0054e2d5: RET
