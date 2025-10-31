// Name: core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
// Address: 00566fa0
// Address Range: [[00566fa0, 0056700c]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0()
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 00562c68 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00644042
// Function calls:
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_CallLoadingScriptFile(CScript* param_1, undefined4
   param_2) */

void core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  CStrList *in_stack_00000008;
  char acStack_d0 [192];
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar3 = 0;
    do {
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c
                        (*(char **)(iVar3 + 4 + *(int *)(in_stack_00000004 + 0x34)),": %s",
                         &stack0xffffff2c);
      if (iVar1 == 1) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,acStack_d0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  return;
}


// Assembly code:
// 00566fa0: PUSH EBX
//   Label: core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
// 00566fa1: PUSH ESI
// 00566fa2: PUSH EDI
// 00566fa3: PUSH EBP
// 00566fa4: SUB ESP,0xc8
// 00566faa: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00566fb1: MOV EBP,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 00566fb8: PUSH EDI
// 00566fb9: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 00566fbe: XOR EBX,EBX
// 00566fc0: MOV EDX,dword ptr [EDI + 0x30]
// 00566fc3: ADD ESP,0x4
// 00566fc6: TEST EDX,EDX
// 00566fc8: JLE 0x00566ff4
//   XREF to: 00566ff4 (CONDITIONAL_JUMP)
// 00566fca: XOR ESI,ESI
// 00566fcc: MOV EAX,ESP
//   Label: LAB_00566fcc
// 00566fce: PUSH EAX
// 00566fcf: MOV EAX,dword ptr [EDI + 0x34]
// 00566fd2: PUSH 0x644042
//   XREF to: 00644042 (DATA)
// 00566fd7: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00566fdb: PUSH EDX
// 00566fdc: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00566fe1: ADD ESP,0xc
// 00566fe4: CMP EAX,0x1
// 00566fe7: JZ 0x00566fff
//   XREF to: 00566fff (CONDITIONAL_JUMP)
// 00566fe9: INC EBX
//   Label: LAB_00566fe9
// 00566fea: MOV ECX,dword ptr [EDI + 0x30]
// 00566fed: ADD ESI,0x8
// 00566ff0: CMP EBX,ECX
// 00566ff2: JL 0x00566fcc
//   XREF to: 00566fcc (CONDITIONAL_JUMP)
// 00566ff4: ADD ESP,0xc8
//   Label: LAB_00566ff4
// 00566ffa: POP EBP
// 00566ffb: POP EDI
// 00566ffc: POP ESI
// 00566ffd: POP EBX
// 00566ffe: RET
// 00566fff: MOV EAX,ESP
//   Label: LAB_00566fff
// 00567001: PUSH EAX
// 00567002: PUSH EBP
// 00567003: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00567008: ADD ESP,0x8
// 0056700b: JMP 0x00566fe9
//   XREF to: 00566fe9 (UNCONDITIONAL_JUMP)
