// Name: core_script.cpp_FUN_00566880
// Address: 00566880
// Address Range: [[00566880, 00566906]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566880()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565197 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fce0
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_0310fd14
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566880(undefined4 param_1) */

void core_script_cpp_FUN_00566880(void)

{
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  if (DAT_0310fcd8 + DAT_0310fce0 <= DAT_0310fd48) {
    DAT_0310fd48 = DAT_0310fcd8 + DAT_0310fce0 + -1;
  }
  if (DAT_0310fd48 < DAT_0310fcd8) {
    DAT_0310fd48 = DAT_0310fcd8;
  }
  if (DAT_0310fd0c + DAT_0310fd14 <= DAT_0310fd44) {
    DAT_0310fd44 = DAT_0310fd0c + DAT_0310fd14 + -1;
  }
  if (DAT_0310fd44 < DAT_0310fd0c) {
    DAT_0310fd44 = DAT_0310fd0c;
  }
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  return;
}


// Assembly code:
// 00566880: PUSH EBX
//   Label: core_script.cpp_FUN_00566880
// 00566881: PUSH ESI
// 00566882: PUSH EDI
// 00566883: PUSH EBP
// 00566884: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00566888: PUSH EDX
// 00566889: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 0056688e: MOV EAX,[0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 00566893: MOV ECX,dword ptr [0x0310fce0]
//   XREF to: 0310fce0 (READ)
// 00566899: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 0056689f: ADD EAX,ECX
// 005668a1: ADD ESP,0x4
// 005668a4: CMP EAX,EBX
// 005668a6: JLE 0x005668ff
//   XREF to: 005668ff (CONDITIONAL_JUMP)
// 005668a8: MOV ESI,dword ptr [0x0310fcd8]
//   Label: LAB_005668a8
//   XREF to: 0310fcd8 (READ)
// 005668ae: CMP ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005668b4: JLE 0x005668bc
//   XREF to: 005668bc (CONDITIONAL_JUMP)
// 005668b6: MOV dword ptr [0x0310fd48],ESI
//   XREF to: 0310fd48 (WRITE)
// 005668bc: MOV EDI,dword ptr [0x0310fd14]
//   Label: LAB_005668bc
//   XREF to: 0310fd14 (READ)
// 005668c2: MOV EAX,[0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 005668c7: MOV EBP,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005668cd: ADD EAX,EDI
// 005668cf: CMP EAX,EBP
// 005668d1: JG 0x005668d9
//   XREF to: 005668d9 (CONDITIONAL_JUMP)
// 005668d3: DEC EAX
// 005668d4: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 005668d9: MOV EDX,dword ptr [0x0310fd0c]
//   Label: LAB_005668d9
//   XREF to: 0310fd0c (READ)
// 005668df: CMP EDX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005668e5: JLE 0x005668ed
//   XREF to: 005668ed (CONDITIONAL_JUMP)
// 005668e7: MOV dword ptr [0x0310fd44],EDX
//   XREF to: 0310fd44 (WRITE)
// 005668ed: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005668ed
//   XREF to: Stack[0x4] (READ)
// 005668f1: PUSH ECX
// 005668f2: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 005668f7: ADD ESP,0x4
// 005668fa: POP EBP
// 005668fb: POP EDI
// 005668fc: POP ESI
// 005668fd: POP EBX
// 005668fe: RET
// 005668ff: DEC EAX
//   Label: LAB_005668ff
// 00566900: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00566905: JMP 0x005668a8
//   XREF to: 005668a8 (UNCONDITIONAL_JUMP)
