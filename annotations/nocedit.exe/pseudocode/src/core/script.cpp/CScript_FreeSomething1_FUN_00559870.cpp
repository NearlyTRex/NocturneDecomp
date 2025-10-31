// Name: core_script.cpp_CScript_FreeSomething1_FUN_00559870
// Address: 00559870
// Address Range: [[00559870, 005598ee]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_FreeSomething1_FUN_00559870()
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_005243a0 (005243a0) at 005243eb [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a2f1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dtor_FUN_00559840 (00559840) at 00559846 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_006416d4
//   TerminatedCString s_core_script_cpp_006416e7
//   undefined4 DAT_0310f4b0
// Function calls:
//   core_script.cpp_CScript_FreeSomething2_FUN_005598f0
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_FreeSomething1(CScript* param_1) */

void core_script_cpp_CScript_FreeSomething1_FUN_00559870(void)

{
  int in_stack_00000004;
  
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10((CStrList *)(in_stack_00000004 + 0x38));
  core_script_cpp_CScript_FreeSomething2_FUN_005598f0();
  if (*(void **)(in_stack_00000004 + 0x20) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x20),"..\\core\\script.cpp",0x1b5);
    *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  if (*(void **)(in_stack_00000004 + 0x2c) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x2c),"..\\core\\script.cpp",0x1bc);
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  }
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  return;
}


// Assembly code:
// 00559870: PUSH EBX
//   Label: core_script.cpp_CScript_FreeSomething1_FUN_00559870
// 00559871: PUSH ESI
// 00559872: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00559876: LEA EAX,[EBX + 0x38]
// 00559879: PUSH EAX
// 0055987a: CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   XREF to: 004a2b10 (UNCONDITIONAL_CALL)
// 0055987f: ADD ESP,0x4
// 00559882: PUSH EBX
// 00559883: CALL core_script.cpp_CScript_FreeSomething2_FUN_005598f0
//   XREF to: 005598f0 (UNCONDITIONAL_CALL)
// 00559888: MOV EDX,dword ptr [EBX + 0x20]
// 0055988b: ADD ESP,0x4
// 0055988e: TEST EDX,EDX
// 00559890: JNZ 0x005598b7
//   XREF to: 005598b7 (CONDITIONAL_JUMP)
// 00559892: MOV ESI,dword ptr [EBX + 0x2c]
//   Label: LAB_00559892
// 00559895: MOV dword ptr [EBX + 0x1c],0x0
// 0055989c: TEST ESI,ESI
// 0055989e: JNZ 0x005598d3
//   XREF to: 005598d3 (CONDITIONAL_JUMP)
// 005598a0: PUSH 0x310f4b0
//   Label: LAB_005598a0
//   XREF to: 0310f4b0 (DATA)
// 005598a5: MOV dword ptr [EBX + 0x28],0x0
// 005598ac: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 005598b1: ADD ESP,0x4
// 005598b4: POP ESI
// 005598b5: POP EBX
// 005598b6: RET
// 005598b7: PUSH 0x1b5
//   Label: LAB_005598b7
// 005598bc: PUSH 0x6416d4
//   XREF to: 006416d4 (DATA)
// 005598c1: PUSH EDX
// 005598c2: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005598c7: ADD ESP,0xc
// 005598ca: MOV dword ptr [EBX + 0x20],0x0
// 005598d1: JMP 0x00559892
//   XREF to: 00559892 (UNCONDITIONAL_JUMP)
// 005598d3: PUSH 0x1bc
//   Label: LAB_005598d3
// 005598d8: PUSH 0x6416e7
//   XREF to: 006416e7 (DATA)
// 005598dd: PUSH ESI
// 005598de: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005598e3: ADD ESP,0xc
// 005598e6: MOV dword ptr [EBX + 0x2c],0x0
// 005598ed: JMP 0x005598a0
//   XREF to: 005598a0 (UNCONDITIONAL_JUMP)
