// Name: core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
// Address: 0055a4b0
// Address Range: [[0055a4b0, 0055a537]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0()
// Cross-references:
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a146 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 00566097 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310ec9c
//   undefined1 DAT_0310eca0
//   undefined4 DAT_0310f4b0
// Function calls:
//   core_script.cpp_CScript_step_FUN_0055a810
//   core_script.cpp_FUN_0055a540
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_StepThroughWholeScript(undefined4 param_1,
   undefined4 param_2) */

undefined1 * core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000010;
  
  DAT_0310ec9c = 1;
  core_script_cpp_FUN_0055a540();
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  if (*(int *)(in_stack_00000004 + 0x48) < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      iVar2 = *(int *)(in_stack_00000004 + 0x48);
      iVar1 = core_script_cpp_CScript_step_FUN_0055a810();
      if (iVar1 < 0) {
        *in_stack_00000010 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + iVar2 * 8) + -1;
        return &DAT_0310eca0;
      }
      iVar2 = iVar2 + 1;
      *(int *)(in_stack_00000004 + 0x48) = iVar2;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  DAT_0310ec9c = 0;
  return (undefined1 *)0x0;
}


// Assembly code:
// 0055a4b0: PUSH EBX
//   Label: core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
// 0055a4b1: PUSH ESI
// 0055a4b2: PUSH EBP
// 0055a4b3: SUB ESP,0x4
// 0055a4b6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055a4ba: MOV EDX,0x1
// 0055a4bf: PUSH EBX
// 0055a4c0: MOV dword ptr [0x0310ec9c],EDX
//   XREF to: 0310ec9c (WRITE)
// 0055a4c6: CALL core_script.cpp_FUN_0055a540
//   XREF to: 0055a540 (UNCONDITIONAL_CALL)
// 0055a4cb: ADD ESP,0x4
// 0055a4ce: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 0055a4d3: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0055a4d8: MOV EAX,dword ptr [EBX + 0x48]
// 0055a4db: MOV ECX,dword ptr [EBX + 0x30]
// 0055a4de: ADD ESP,0x4
// 0055a4e1: CMP EAX,ECX
// 0055a4e3: JGE 0x0055a50c
//   XREF to: 0055a50c (CONDITIONAL_JUMP)
// 0055a4e5: MOV EBP,0x3e800000
// 0055a4ea: MOV EAX,ESP
//   Label: LAB_0055a4ea
// 0055a4ec: PUSH EAX
// 0055a4ed: PUSH EBX
// 0055a4ee: MOV ESI,dword ptr [EBX + 0x48]
// 0055a4f1: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 0055a4f5: CALL core_script.cpp_CScript_step_FUN_0055a810
//   XREF to: 0055a810 (UNCONDITIONAL_CALL)
// 0055a4fa: ADD ESP,0x8
// 0055a4fd: TEST EAX,EAX
// 0055a4ff: JL 0x0055a51f
//   XREF to: 0055a51f (CONDITIONAL_JUMP)
// 0055a501: INC ESI
// 0055a502: MOV dword ptr [EBX + 0x48],ESI
// 0055a505: MOV EAX,ESI
// 0055a507: CMP EAX,dword ptr [EBX + 0x30]
// 0055a50a: JL 0x0055a4ea
//   XREF to: 0055a4ea (CONDITIONAL_JUMP)
// 0055a50c: PUSH EDI
//   Label: LAB_0055a50c
// 0055a50d: XOR EDI,EDI
// 0055a50f: XOR EAX,EAX
// 0055a511: MOV dword ptr [0x0310ec9c],EDI
//   XREF to: 0310ec9c (WRITE)
// 0055a517: POP EDI
// 0055a518: ADD ESP,0x4
// 0055a51b: POP EBP
// 0055a51c: POP ESI
// 0055a51d: POP EBX
// 0055a51e: RET
// 0055a51f: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_0055a51f
// 0055a522: MOV EAX,dword ptr [EAX + ESI*0x8]
// 0055a525: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055a529: DEC EAX
// 0055a52a: MOV dword ptr [EBX],EAX
// 0055a52c: MOV EAX,0x310eca0
//   XREF to: 0310eca0 (DATA)
// 0055a531: ADD ESP,0x4
// 0055a534: POP EBP
// 0055a535: POP ESI
// 0055a536: POP EBX
// 0055a537: RET
