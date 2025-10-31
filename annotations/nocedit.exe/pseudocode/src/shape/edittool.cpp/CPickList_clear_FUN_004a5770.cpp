// Name: shape_edittool.cpp_CPickList_clear_FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57e7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db26a [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2253 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cfa4 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870 (00559870) at 005598ac [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a157 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0 (0055a4b0) at 0055a4d3 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 005660f4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576e87 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578686 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3c94 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623d8c
//   TerminatedCString s_shape_edittool_cpp_00623da2
// Function calls:
//   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_clear_FUN_004a5770(CPickList *this_ptr)

{
  if (this_ptr->enabled_array != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->enabled_array,"..\\shape\\edittool.cpp",0x1080);
    this_ptr->enabled_array = (int *)0x0;
  }
  this_ptr->enabled_capacity = 0;
  if (this_ptr->hotkey_array != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->hotkey_array,"..\\shape\\edittool.cpp",0x1085);
    this_ptr->hotkey_array = (int *)0x0;
  }
  this_ptr->hotkey_capacity = 0;
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10(&this_ptr->base_strlist);
  return;
}


// Assembly code:
// 004a5770: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_clear_FUN_004a5770
// 004a5771: PUSH ESI
// 004a5772: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a5776: MOV EDX,dword ptr [EBX + 0x198]
// 004a577c: TEST EDX,EDX
// 004a577e: JNZ 0x004a57aa
//   XREF to: 004a57aa (CONDITIONAL_JUMP)
// 004a5780: MOV ESI,dword ptr [EBX + 0x1a0]
//   Label: LAB_004a5780
// 004a5786: MOV dword ptr [EBX + 0x194],0x0
// 004a5790: TEST ESI,ESI
// 004a5792: JNZ 0x004a57c9
//   XREF to: 004a57c9 (CONDITIONAL_JUMP)
// 004a5794: PUSH EBX
//   Label: LAB_004a5794
// 004a5795: MOV dword ptr [EBX + 0x19c],0x0
// 004a579f: CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   XREF to: 004a2b10 (UNCONDITIONAL_CALL)
// 004a57a4: ADD ESP,0x4
// 004a57a7: POP ESI
// 004a57a8: POP EBX
// 004a57a9: RET
// 004a57aa: PUSH 0x1080
//   Label: LAB_004a57aa
// 004a57af: PUSH 0x623d8c
//   XREF to: 00623d8c (DATA)
// 004a57b4: PUSH EDX
// 004a57b5: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a57ba: ADD ESP,0xc
// 004a57bd: MOV dword ptr [EBX + 0x198],0x0
// 004a57c7: JMP 0x004a5780
//   XREF to: 004a5780 (UNCONDITIONAL_JUMP)
// 004a57c9: PUSH 0x1085
//   Label: LAB_004a57c9
// 004a57ce: PUSH 0x623da2
//   XREF to: 00623da2 (DATA)
// 004a57d3: PUSH ESI
// 004a57d4: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a57d9: ADD ESP,0xc
// 004a57dc: MOV dword ptr [EBX + 0x1a0],0x0
// 004a57e6: JMP 0x004a5794
//   XREF to: 004a5794 (UNCONDITIONAL_JUMP)
