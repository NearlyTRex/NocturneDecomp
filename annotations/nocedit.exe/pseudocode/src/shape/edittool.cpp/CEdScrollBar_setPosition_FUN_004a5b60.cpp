// Name: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
// Address: 004a5b60
// Address Range: [[004a5b60, 004a5c0c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, int bottom_pos)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507598 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005071ad [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c5bd [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536a3d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 0056674e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577ba6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4af4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623f14
//   TerminatedCString s_CEdScrollBar_setPosition_00623f2a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
          (CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->bounds_left = left_pos;
  this_ptr->bounds_top = top_pos;
  this_ptr->bounds_right = right_pos + 1;
  this_ptr->bounds_bottom = bottom_pos + 1;
  iVar1 = this_ptr->bounds_right - this_ptr->bounds_left;
  iVar2 = this_ptr->bounds_bottom - this_ptr->bounds_top;
  if (iVar2 < iVar1) {
    this_ptr->track_start = this_ptr->bounds_left + iVar2 + -1;
    iVar3 = this_ptr->bounds_right - iVar2;
    this_ptr->orientation = 1;
  }
  else {
    this_ptr->track_start = this_ptr->bounds_top + iVar1 + -1;
    iVar3 = this_ptr->bounds_bottom - iVar1;
    this_ptr->orientation = 0;
  }
  this_ptr->track_end = iVar3 + 1;
  if (((3 < iVar1) && (3 < iVar2)) && (3 < this_ptr->track_end - this_ptr->track_start)) {
    return;
  }
  g_CurrentFilename = "..\\shape\\edittool.cpp";
  g_CurrentLineNumber = 0x110b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CEdScrollBar::setPosition - invalid dimensions.");
  return;
}


// Assembly code:
// 004a5b60: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
// 004a5b61: PUSH ESI
// 004a5b62: PUSH EBP
// 004a5b63: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a5b67: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a5b6b: MOV dword ptr [EAX + 0x14],EDX
// 004a5b6e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004a5b72: MOV dword ptr [EAX + 0x18],EDX
// 004a5b75: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004a5b79: INC EDX
// 004a5b7a: MOV dword ptr [EAX + 0x1c],EDX
// 004a5b7d: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004a5b81: INC EDX
// 004a5b82: MOV dword ptr [EAX + 0x20],EDX
// 004a5b85: MOV ECX,dword ptr [EAX + 0x1c]
// 004a5b88: MOV EDX,dword ptr [EAX + 0x14]
// 004a5b8b: MOV EBX,dword ptr [EAX + 0x18]
// 004a5b8e: SUB ECX,EDX
// 004a5b90: MOV EDX,dword ptr [EAX + 0x20]
// 004a5b93: SUB EDX,EBX
// 004a5b95: CMP ECX,EDX
// 004a5b97: JG 0x004a5bcd
//   XREF to: 004a5bcd (CONDITIONAL_JUMP)
// 004a5b99: MOV EBX,dword ptr [EAX + 0x18]
// 004a5b9c: ADD EBX,ECX
// 004a5b9e: DEC EBX
// 004a5b9f: MOV dword ptr [EAX + 0x24],EBX
// 004a5ba2: MOV EBX,dword ptr [EAX + 0x20]
// 004a5ba5: SUB EBX,ECX
// 004a5ba7: MOV dword ptr [EAX + 0x10],0x0
// 004a5bae: INC EBX
//   Label: LAB_004a5bae
// 004a5baf: MOV dword ptr [EAX + 0x28],EBX
// 004a5bb2: CMP ECX,0x4
// 004a5bb5: JL 0x004a5be4
//   XREF to: 004a5be4 (CONDITIONAL_JUMP)
// 004a5bb7: CMP EDX,0x4
// 004a5bba: JL 0x004a5be4
//   XREF to: 004a5be4 (CONDITIONAL_JUMP)
// 004a5bbc: MOV ESI,dword ptr [EAX + 0x24]
// 004a5bbf: MOV EDX,dword ptr [EAX + 0x28]
// 004a5bc2: SUB EDX,ESI
// 004a5bc4: CMP EDX,0x4
// 004a5bc7: JL 0x004a5be4
//   XREF to: 004a5be4 (CONDITIONAL_JUMP)
// 004a5bc9: POP EBP
// 004a5bca: POP ESI
// 004a5bcb: POP EBX
// 004a5bcc: RET
// 004a5bcd: MOV EBX,dword ptr [EAX + 0x14]
//   Label: LAB_004a5bcd
// 004a5bd0: ADD EBX,EDX
// 004a5bd2: DEC EBX
// 004a5bd3: MOV dword ptr [EAX + 0x24],EBX
// 004a5bd6: MOV EBX,dword ptr [EAX + 0x1c]
// 004a5bd9: SUB EBX,EDX
// 004a5bdb: MOV dword ptr [EAX + 0x10],0x1
// 004a5be2: JMP 0x004a5bae
//   XREF to: 004a5bae (UNCONDITIONAL_JUMP)
// 004a5be4: PUSH EDI
//   Label: LAB_004a5be4
// 004a5be5: MOV EDI,0x623f14
//   XREF to: 00623f14 (DATA)
// 004a5bea: MOV EBP,0x110b
// 004a5bef: PUSH 0x623f2a
//   XREF to: 00623f2a (DATA)
// 004a5bf4: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004a5bfa: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004a5c00: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5c05: ADD ESP,0x4
// 004a5c08: POP EDI
// 004a5c09: POP EBP
// 004a5c0a: POP ESI
// 004a5c0b: POP EBX
// 004a5c0c: RET
