// Name: shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
// Address: 004a6a00
// Address Range: [[004a6a00, 004a6a3d]]
// Convention: __cdecl
// Signature: CEdCheck * shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck * this_ptr)
// Cross-references:
//   core_msnedit.cpp_staticInit_FUN_00535c30 (00535c30) at 00535c42 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck *this_ptr)

{
  int iVar1;
  
  this_ptr->checked_state = 0;
  this_ptr->interactive_flag = 0;
  this_ptr->checkbox_text[0] = '\0';
  this_ptr->right_boundary = 0;
  this_ptr->border_style_flag = 0;
  this_ptr->coord_unk = 0;
  this_ptr->vtable = (void **)0x0;
  iVar1 = this_ptr->right_boundary;
  this_ptr->total_width = iVar1;
  this_ptr->y_position = iVar1;
  this_ptr->x_position = iVar1;
  return this_ptr;
}


// Assembly code:
// 004a6a00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
//   XREF to: Stack[0x4] (READ)
// 004a6a04: MOV dword ptr [EAX + 0x4],0x0
// 004a6a0b: MOV dword ptr [EAX + 0x8],0x0
// 004a6a12: MOV byte ptr [EAX + 0x24],0x0
// 004a6a16: MOV dword ptr [EAX + 0x1c],0x0
// 004a6a1d: MOV dword ptr [EAX + 0x20],0x0
// 004a6a24: MOV dword ptr [EAX + 0xc],0x0
// 004a6a2b: MOV dword ptr [EAX],0x0
// 004a6a31: MOV EDX,dword ptr [EAX + 0x1c]
// 004a6a34: MOV dword ptr [EAX + 0x18],EDX
// 004a6a37: MOV dword ptr [EAX + 0x14],EDX
// 004a6a3a: MOV dword ptr [EAX + 0x10],EDX
// 004a6a3d: RET
