// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
// Address: 0059a3f0
// Address Range: [[0059a3f0, 0059a50e]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b7ac [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c2e7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059bb99 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e50e
//   TerminatedCString s_Too_many_texture_sets_in_0064e523
//   TerminatedCString s_core_skeleton_cpp_0064e575
//   TerminatedCString s_Too_many_textures_in_CDe_0064e58a
//   TerminatedCString s_core_skeleton_cpp_0064e5d8
//   TerminatedCString s_Too_many_parts_in_CDefor_0064e5ed
//   TerminatedCString s_core_skeleton_cpp_0064e638
//   TerminatedCString s_Too_many_LODs_in_CDeform_0064e64d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_FUN_0059a2b0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_allocMemory(CDeformableModel*
   pDeformableModel, undefined4 nNumLods, int nNumTextureSets, undefined4 nNumTextures, undefined4
   nNumParts) */

undefined8 core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(void)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int *in_stack_00000014;
  
  core_skeleton_cpp_CDeformableModel_FUN_0059a2b0();
  if (5 < in_stack_00000010) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x261;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,in_stack_00000010);
  }
  if (0x50 < in_stack_00000010) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x265;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x50,in_stack_00000010);
  }
  if (0x1e < (int)in_stack_00000014) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x269;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x1e,in_stack_00000014);
  }
  if (5 < in_stack_00000008) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x26d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,in_stack_00000008);
  }
  in_stack_00000004[0x2f] = in_stack_00000010;
  in_stack_00000004[0x1c50] = (int)in_stack_00000014;
  *in_stack_00000004 = in_stack_00000008;
  iVar2 = 0;
  in_stack_00000004[0x2e] = (int)in_stack_00000014;
  piVar1 = in_stack_00000004;
  if (0 < in_stack_00000008) {
    do {
      piVar1[1] = 1;
      piVar1[2] = 0;
      iVar2 = iVar2 + 1;
      in_stack_00000014 = piVar1 + 2;
      piVar1 = in_stack_00000014;
    } while (iVar2 < *in_stack_00000004);
  }
  return CONCAT44(iVar2,in_stack_00000014);
}


// Assembly code:
// 0059a3f0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
// 0059a3f1: PUSH ESI
// 0059a3f2: PUSH EDI
// 0059a3f3: PUSH EBP
// 0059a3f4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059a3f8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059a3fc: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059a400: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0059a404: PUSH EBX
// 0059a405: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)
// 0059a40a: ADD ESP,0x4
// 0059a40d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059a411: CMP EDX,0x5
// 0059a414: JG 0x0059a4e5
//   XREF to: 0059a4e5 (CONDITIONAL_JUMP)
// 0059a41a: CMP ESI,0x50
//   Label: LAB_0059a41a
// 0059a41d: JLE 0x0059a444
//   XREF to: 0059a444 (CONDITIONAL_JUMP)
// 0059a41f: PUSH ESI
// 0059a420: PUSH 0x50
// 0059a422: MOV ECX,0x64e575
//   XREF to: 0064e575 (PARAM)
// 0059a427: MOV EAX,0x265
// 0059a42c: PUSH 0x64e58a
//   XREF to: 0064e58a (DATA)
// 0059a431: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059a437: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059a43c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a441: ADD ESP,0xc
// 0059a444: CMP EBP,0x1e
//   Label: LAB_0059a444
// 0059a447: JLE 0x0059a46f
//   XREF to: 0059a46f (CONDITIONAL_JUMP)
// 0059a449: PUSH EBP
// 0059a44a: PUSH 0x1e
// 0059a44c: MOV EDX,0x64e5d8
//   XREF to: 0064e5d8 (PARAM)
// 0059a451: MOV ECX,0x269
// 0059a456: PUSH 0x64e5ed
//   XREF to: 0064e5ed (DATA)
// 0059a45b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0059a461: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0059a467: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a46c: ADD ESP,0xc
// 0059a46f: CMP EDI,0x5
//   Label: LAB_0059a46f
// 0059a472: JLE 0x0059a499
//   XREF to: 0059a499 (CONDITIONAL_JUMP)
// 0059a474: PUSH EDI
// 0059a475: PUSH 0x5
// 0059a477: MOV EAX,0x64e638
//   XREF to: 0064e638 (PARAM)
// 0059a47c: MOV EDX,0x26d
// 0059a481: PUSH 0x64e64d
//   XREF to: 0064e64d (DATA)
// 0059a486: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059a48b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0059a491: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a496: ADD ESP,0xc
// 0059a499: MOV dword ptr [EBX + 0xbc],ESI
//   Label: LAB_0059a499
// 0059a49f: MOV dword ptr [EBX + 0x7140],EBP
// 0059a4a5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059a4a9: MOV dword ptr [EBX],EDI
// 0059a4ab: XOR EDX,EDX
// 0059a4ad: MOV dword ptr [EBX + 0xb8],EAX
// 0059a4b3: TEST EDI,EDI
// 0059a4b5: JLE 0x0059a4e0
//   XREF to: 0059a4e0 (CONDITIONAL_JUMP)
// 0059a4b7: MOV EAX,EBX
// 0059a4b9: MOV dword ptr [EAX + 0x4],0x1
//   Label: LAB_0059a4b9
// 0059a4c0: MOV dword ptr [EAX + 0x8],0x0
// 0059a4c7: INC EDX
// 0059a4c8: MOV ESI,dword ptr [EBX]
// 0059a4ca: ADD EAX,0x8
// 0059a4cd: CMP EDX,ESI
// 0059a4cf: JL 0x0059a4b9
//   XREF to: 0059a4b9 (CONDITIONAL_JUMP)
// 0059a4d1: LEA EAX,[EAX]
// 0059a4d7: LEA EDX,[EDX]
// 0059a4dd: LEA EAX,[EAX]
// 0059a4e0: POP EBP
//   Label: LAB_0059a4e0
// 0059a4e1: POP EDI
// 0059a4e2: POP ESI
// 0059a4e3: POP EBX
// 0059a4e4: RET
// 0059a4e5: PUSH EDX
//   Label: LAB_0059a4e5
// 0059a4e6: PUSH 0x5
// 0059a4e8: MOV ECX,0x64e50e
//   XREF to: 0064e50e (PARAM)
// 0059a4ed: MOV EAX,0x261
// 0059a4f2: PUSH 0x64e523
//   XREF to: 0064e523 (DATA)
// 0059a4f7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059a4fd: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059a502: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a507: ADD ESP,0xc
// 0059a50a: JMP 0x0059a41a
//   XREF to: 0059a41a (UNCONDITIONAL_JUMP)
