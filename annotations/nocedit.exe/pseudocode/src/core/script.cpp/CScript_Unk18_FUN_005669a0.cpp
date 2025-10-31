// Name: core_script.cpp_CScript_Unk18_FUN_005669a0
// Address: 005669a0
// Address Range: [[005669a0, 00566a81]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 0056516f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 005648d1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565c5a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565e1a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 0056605e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 0056614d [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 005679ee [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fcdc
//   undefined4 DAT_0310fce0
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_0310fd10
//   undefined4 DAT_0310fd14
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_Unk18(CScript* param_1) */

void core_script_cpp_CScript_Unk18_FUN_005669a0(void)

{
  int iVar1;
  
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  if (DAT_0310fcdc - DAT_0310fce0 < DAT_0310fcd8) {
    DAT_0310fcd8 = DAT_0310fcdc - DAT_0310fce0;
  }
  if (DAT_0310fd48 < DAT_0310fcd8) {
    DAT_0310fcd8 = DAT_0310fd48;
  }
  iVar1 = (DAT_0310fd48 - DAT_0310fce0) + 1;
  if (DAT_0310fcd8 < iVar1) {
    DAT_0310fcd8 = iVar1;
  }
  if (DAT_0310fcd8 < 0) {
    DAT_0310fcd8 = 0;
  }
  if (DAT_0310fd10 - DAT_0310fd14 < DAT_0310fd0c) {
    DAT_0310fd0c = DAT_0310fd10 - DAT_0310fd14;
  }
  if (DAT_0310fd44 < DAT_0310fd0c) {
    DAT_0310fd0c = DAT_0310fd44;
  }
  iVar1 = (DAT_0310fd44 - DAT_0310fd14) + 1;
  if (DAT_0310fd0c < iVar1) {
    DAT_0310fd0c = iVar1;
  }
  if (-1 < DAT_0310fd0c) {
    return;
  }
  DAT_0310fd0c = 0;
  return;
}


// Assembly code:
// 005669a0: PUSH EBX
//   Label: core_script.cpp_CScript_Unk18_FUN_005669a0
// 005669a1: PUSH ESI
// 005669a2: PUSH EDI
// 005669a3: PUSH EBP
// 005669a4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005669a8: PUSH EDX
// 005669a9: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 005669ae: MOV EAX,[0x0310fcdc]
//   XREF to: 0310fcdc (READ)
// 005669b3: MOV ECX,dword ptr [0x0310fce0]
//   XREF to: 0310fce0 (READ)
// 005669b9: MOV EBX,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005669bf: SUB EAX,ECX
// 005669c1: ADD ESP,0x4
// 005669c4: CMP EAX,EBX
// 005669c6: JL 0x00566a61
//   XREF to: 00566a61 (CONDITIONAL_JUMP)
// 005669cc: MOV ESI,dword ptr [0x0310fd48]
//   Label: LAB_005669cc
//   XREF to: 0310fd48 (READ)
// 005669d2: CMP ESI,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005669d8: JGE 0x005669e0
//   XREF to: 005669e0 (CONDITIONAL_JUMP)
// 005669da: MOV dword ptr [0x0310fcd8],ESI
//   XREF to: 0310fcd8 (WRITE)
// 005669e0: MOV EDI,dword ptr [0x0310fce0]
//   Label: LAB_005669e0
//   XREF to: 0310fce0 (READ)
// 005669e6: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005669eb: SUB EAX,EDI
// 005669ed: MOV EBP,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 005669f3: INC EAX
// 005669f4: CMP EAX,EBP
// 005669f6: JLE 0x005669fd
//   XREF to: 005669fd (CONDITIONAL_JUMP)
// 005669f8: MOV [0x0310fcd8],EAX
//   XREF to: 0310fcd8 (WRITE)
// 005669fd: CMP dword ptr [0x0310fcd8],0x0
//   Label: LAB_005669fd
//   XREF to: 0310fcd8 (READ)
// 00566a04: JL 0x00566a6b
//   XREF to: 00566a6b (CONDITIONAL_JUMP)
// 00566a06: MOV ECX,dword ptr [0x0310fd14]
//   Label: LAB_00566a06
//   XREF to: 0310fd14 (READ)
// 00566a0c: MOV EAX,[0x0310fd10]
//   XREF to: 0310fd10 (READ)
// 00566a11: MOV EBX,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 00566a17: SUB EAX,ECX
// 00566a19: CMP EAX,EBX
// 00566a1b: JGE 0x00566a22
//   XREF to: 00566a22 (CONDITIONAL_JUMP)
// 00566a1d: MOV [0x0310fd0c],EAX
//   XREF to: 0310fd0c (WRITE)
// 00566a22: MOV ESI,dword ptr [0x0310fd44]
//   Label: LAB_00566a22
//   XREF to: 0310fd44 (READ)
// 00566a28: CMP ESI,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 00566a2e: JGE 0x00566a36
//   XREF to: 00566a36 (CONDITIONAL_JUMP)
// 00566a30: MOV dword ptr [0x0310fd0c],ESI
//   XREF to: 0310fd0c (WRITE)
// 00566a36: MOV EDI,dword ptr [0x0310fd14]
//   Label: LAB_00566a36
//   XREF to: 0310fd14 (READ)
// 00566a3c: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 00566a41: SUB EAX,EDI
// 00566a43: MOV EBP,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 00566a49: INC EAX
// 00566a4a: CMP EAX,EBP
// 00566a4c: JLE 0x00566a53
//   XREF to: 00566a53 (CONDITIONAL_JUMP)
// 00566a4e: MOV [0x0310fd0c],EAX
//   XREF to: 0310fd0c (WRITE)
// 00566a53: CMP dword ptr [0x0310fd0c],0x0
//   Label: LAB_00566a53
//   XREF to: 0310fd0c (READ)
// 00566a5a: JL 0x00566a75
//   XREF to: 00566a75 (CONDITIONAL_JUMP)
// 00566a5c: POP EBP
// 00566a5d: POP EDI
// 00566a5e: POP ESI
// 00566a5f: POP EBX
// 00566a60: RET
// 00566a61: MOV [0x0310fcd8],EAX
//   Label: LAB_00566a61
//   XREF to: 0310fcd8 (WRITE)
// 00566a66: JMP 0x005669cc
//   XREF to: 005669cc (UNCONDITIONAL_JUMP)
// 00566a6b: XOR EDX,EDX
//   Label: LAB_00566a6b
// 00566a6d: MOV dword ptr [0x0310fcd8],EDX
//   XREF to: 0310fcd8 (WRITE)
// 00566a73: JMP 0x00566a06
//   XREF to: 00566a06 (UNCONDITIONAL_JUMP)
// 00566a75: XOR EDX,EDX
//   Label: LAB_00566a75
// 00566a77: MOV dword ptr [0x0310fd0c],EDX
//   XREF to: 0310fd0c (WRITE)
// 00566a7d: POP EBP
// 00566a7e: POP EDI
// 00566a7f: POP ESI
// 00566a80: POP EBX
// 00566a81: RET
