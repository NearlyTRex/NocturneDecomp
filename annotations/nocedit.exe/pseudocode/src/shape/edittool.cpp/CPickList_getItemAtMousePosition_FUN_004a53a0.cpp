// Name: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
// Address: 004a53a0
// Address Range: [[004a53a0, 004a540e]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0(CPickList * this_ptr, int mouse_x, int mouse_y)
// Cross-references:
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a449f [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipTop

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
          (CPickList *this_ptr,int mouse_x,int mouse_y)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (mouse_y - g_ClipTop) / this_ptr->character_width;
  iVar2 = (mouse_x - g_ClipLeft) / this_ptr->total_content_width;
  if ((((iVar1 < 0) || (this_ptr->vertical_page_size <= iVar1)) || (iVar2 < 0)) ||
     (((this_ptr->column_count <= iVar2 ||
       (iVar1 = iVar2 * this_ptr->vertical_page_size + this_ptr->scroll_top + iVar1, iVar1 < 0)) ||
      ((this_ptr->base_strlist).item_count <= iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}


// Assembly code:
// 004a53a0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
// 004a53a1: PUSH ESI
// 004a53a2: PUSH EDI
// 004a53a3: PUSH EBP
// 004a53a4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a53a8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a53ac: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a53b0: SUB EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a53b6: MOV EBP,dword ptr [ECX + 0x174]
// 004a53bc: MOV EAX,EDX
// 004a53be: SAR EDX,0x1f
// 004a53c1: IDIV EBP
// 004a53c3: SUB ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a53c9: MOV EBX,EAX
// 004a53cb: MOV EDX,ESI
// 004a53cd: MOV EAX,ESI
// 004a53cf: SAR EDX,0x1f
// 004a53d2: IDIV dword ptr [ECX + 0x18c]
// 004a53d8: TEST EBX,EBX
// 004a53da: JL 0x004a5405
//   XREF to: 004a5405 (CONDITIONAL_JUMP)
// 004a53dc: MOV EDI,dword ptr [ECX + 0x188]
// 004a53e2: CMP EBX,EDI
// 004a53e4: JGE 0x004a5405
//   XREF to: 004a5405 (CONDITIONAL_JUMP)
// 004a53e6: TEST EAX,EAX
// 004a53e8: JL 0x004a5405
//   XREF to: 004a5405 (CONDITIONAL_JUMP)
// 004a53ea: CMP EAX,dword ptr [ECX + 0x190]
// 004a53f0: JGE 0x004a5405
//   XREF to: 004a5405 (CONDITIONAL_JUMP)
// 004a53f2: IMUL EAX,EDI
// 004a53f5: ADD EAX,dword ptr [ECX + 0x180]
// 004a53fb: ADD EAX,EBX
// 004a53fd: TEST EAX,EAX
// 004a53ff: JL 0x004a5405
//   XREF to: 004a5405 (CONDITIONAL_JUMP)
// 004a5401: CMP EAX,dword ptr [ECX]
// 004a5403: JL 0x004a540a
//   XREF to: 004a540a (CONDITIONAL_JUMP)
// 004a5405: MOV EAX,0xffffffff
//   Label: LAB_004a5405
// 004a540a: POP EBP
//   Label: LAB_004a540a
// 004a540b: POP EDI
// 004a540c: POP ESI
// 004a540d: POP EBX
// 004a540e: RET
