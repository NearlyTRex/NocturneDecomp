// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
// Address: 004a54e0
// Address Range: [[004a54e0, 004a553b]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList * this_ptr, int item_index)
// Cross-references:
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a436a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 (004a3f20) at 004a3f57 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a50c7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623b2c
//   TerminatedCString s_CPickList_isItemEnabled__00623b42
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || ((this_ptr->base_strlist).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x103d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::isItemEnabled - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    return 1;
  }
  return (uint)(this_ptr->enabled_array[item_index] != 0);
}


// Assembly code:
// 004a54e0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
// 004a54e1: PUSH ESI
// 004a54e2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a54e6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a54ea: TEST EBX,EBX
// 004a54ec: JL 0x004a54f2
//   XREF to: 004a54f2 (CONDITIONAL_JUMP)
// 004a54ee: CMP EBX,dword ptr [ESI]
// 004a54f0: JL 0x004a5517
//   XREF to: 004a5517 (CONDITIONAL_JUMP)
// 004a54f2: PUSH EDI
//   Label: LAB_004a54f2
// 004a54f3: MOV ECX,0x623b2c
//   XREF to: 00623b2c (PARAM)
// 004a54f8: MOV EDI,0x103d
// 004a54fd: PUSH 0x623b42
//   XREF to: 00623b42 (DATA)
// 004a5502: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5508: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a550e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5513: ADD ESP,0x4
// 004a5516: POP EDI
// 004a5517: CMP EBX,dword ptr [ESI + 0x194]
//   Label: LAB_004a5517
// 004a551d: JL 0x004a5527
//   XREF to: 004a5527 (CONDITIONAL_JUMP)
// 004a551f: MOV EAX,0x1
// 004a5524: POP ESI
// 004a5525: POP EBX
// 004a5526: RET
// 004a5527: MOV EAX,dword ptr [ESI + 0x198]
//   Label: LAB_004a5527
// 004a552d: CMP dword ptr [EAX + EBX*0x4],0x0
// 004a5531: SETNZ AL
// 004a5534: AND EAX,0xff
// 004a5539: POP ESI
// 004a553a: POP EBX
// 004a553b: RET
