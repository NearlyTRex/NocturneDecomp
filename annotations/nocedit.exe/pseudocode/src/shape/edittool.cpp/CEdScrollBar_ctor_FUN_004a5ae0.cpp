// Name: shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
// Address: 004a5ae0
// Address Range: [[004a5ae0, 004a5b19]]
// Convention: __cdecl
// Signature: CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507566 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 0050717b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c6c7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00535e82 [UNCONDITIONAL_CALL]
//   core_script.cpp_staticInit_FUN_005591b0 (005591b0) at 00559203 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577d12 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 (004a3b90) at 004a3ba6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar *this_ptr)

{
  int iVar1;
  
  this_ptr->current_value = 1;
  this_ptr->scroll_position = 0;
  this_ptr->max_value = 1;
  this_ptr->bounds_bottom = 0;
  this_ptr->scroll_increment = 1;
  this_ptr->orientation = 0;
  iVar1 = this_ptr->bounds_bottom;
  this_ptr->bounds_right = iVar1;
  this_ptr->bounds_top = iVar1;
  this_ptr->bounds_left = iVar1;
  return this_ptr;
}


// Assembly code:
// 004a5ae0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: Stack[0x4] (READ)
// 004a5ae4: MOV dword ptr [EAX + 0x4],0x1
// 004a5aeb: MOV dword ptr [EAX],0x0
// 004a5af1: MOV dword ptr [EAX + 0x8],0x1
// 004a5af8: MOV dword ptr [EAX + 0x20],0x0
// 004a5aff: MOV dword ptr [EAX + 0xc],0x1
// 004a5b06: MOV dword ptr [EAX + 0x10],0x0
// 004a5b0d: MOV EDX,dword ptr [EAX + 0x20]
// 004a5b10: MOV dword ptr [EAX + 0x1c],EDX
// 004a5b13: MOV dword ptr [EAX + 0x18],EDX
// 004a5b16: MOV dword ptr [EAX + 0x14],EDX
// 004a5b19: RET
