// Name: core_script.cpp_FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005676d3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567630()
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 00563d00 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_msnedit.cpp_FUN_0053ea30
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   core_script.cpp_FUN_00567080
//   crt_stdlib.c_qsort_FUN_005fdf38

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00567630(undefined4 param_1) */

void core_script_cpp_FUN_00567630(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  iVar1 = core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      iVar2 = iVar2 + 1;
      core_script_cpp_FUN_00567080();
      iVar1 = *(int *)(in_stack_00000004 + 0x30);
    } while (iVar2 < iVar1);
  }
  core_msnedit_cpp_FUN_0053ea30(iVar1);
  crt_stdlib_c_qsort_FUN_005fdf38
            (*(void **)(in_stack_00000004 + 0x2c),*(SIZE_T *)(in_stack_00000004 + 0x28),0x114,
             core_script_cpp_FUN_005675a0);
  return;
}


// Assembly code:
// 00567630: PUSH EBX
//   Label: core_script.cpp_FUN_00567630
// 00567631: PUSH ESI
// 00567632: PUSH EDI
// 00567633: PUSH EBP
// 00567634: SUB ESP,0x114
// 0056763a: MOV EBX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x4] (READ)
// 00567641: PUSH EBX
// 00567642: MOV dword ptr [EBX + 0x28],0x0
// 00567649: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 0056764e: XOR EDI,EDI
// 00567650: MOV EDX,dword ptr [EBX + 0x30]
// 00567653: ADD ESP,0x4
// 00567656: TEST EDX,EDX
// 00567658: JLE 0x005676a0
//   XREF to: 005676a0 (CONDITIONAL_JUMP)
// 0056765a: XOR ESI,ESI
// 0056765c: XOR ECX,ECX
//   Label: LAB_0056765c
// 0056765e: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00567665: MOV EAX,dword ptr [EBX + 0x34]
// 00567668: MOV EAX,dword ptr [ESI + EAX*0x1]
// 0056766b: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00567672: MOV EAX,ESP
// 00567674: PUSH EAX
// 00567675: MOV EAX,dword ptr [EBX + 0x34]
// 00567678: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x4]
// 0056767c: PUSH EBP
// 0056767d: PUSH EBX
// 0056767e: ADD ESI,0x8
// 00567681: INC EDI
// 00567682: CALL core_script.cpp_FUN_00567080
//   XREF to: 00567080 (UNCONDITIONAL_CALL)
// 00567687: MOV EAX,dword ptr [EBX + 0x30]
// 0056768a: ADD ESP,0xc
// 0056768d: CMP EDI,EAX
// 0056768f: JL 0x0056765c
//   XREF to: 0056765c (CONDITIONAL_JUMP)
// 00567691: LEA EAX,[EAX]
// 00567697: LEA EDX,[EDX]
// 0056769d: LEA EAX,[EAX]
// 005676a0: MOV EDX,dword ptr [0x0067d550]
//   Label: LAB_005676a0
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005676a6: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 005676a7: CALL core_msnedit.cpp_FUN_0053ea30
//   XREF to: 0053ea30 (UNCONDITIONAL_CALL)
// 005676ac: ADD ESP,0x4
// 005676af: PUSH 0x5675a0
//   XREF to: 005675a0 (DATA)
// 005676b4: PUSH 0x114
// 005676b9: MOV ECX,dword ptr [EBX + 0x28]
// 005676bc: PUSH ECX
// 005676bd: MOV ESI,dword ptr [EBX + 0x2c]
// 005676c0: PUSH ESI
// 005676c1: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 005676c6: ADD ESP,0x10
// 005676c9: ADD ESP,0x114
// 005676cf: POP EBP
// 005676d0: POP EDI
// 005676d1: POP ESI
// 005676d2: POP EBX
// 005676d3: RET
