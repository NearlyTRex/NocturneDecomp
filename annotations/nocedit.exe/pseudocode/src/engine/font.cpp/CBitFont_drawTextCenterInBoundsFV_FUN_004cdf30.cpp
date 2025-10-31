// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
// Address: 004cdf30
// Address Range: [[004cdf30, 004cdf78]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30(CBitFont * this_ptr, int left_x, int right_x, int y_pos, int color_mode, int color_value, char * format_string, ...)
// Cross-references:
//   core_menu.cpp_SettingMouseSensitivity_FUN_005107c0 (005107c0) at 0051099e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a0624 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
          (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,
          char *format_string,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  va_list_t local_14;
  
  local_14 = &stack0x00000020;
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
                    (this_ptr,left_x,right_x,y_pos,color_mode,color_value,format_string,&local_14);
  return iVar1;
}


// Assembly code:
// 004cdf30: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
// 004cdf31: PUSH ESI
// 004cdf32: PUSH EDI
// 004cdf33: PUSH EBP
// 004cdf34: SUB ESP,0x4
// 004cdf37: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x20] (DATA)
// 004cdf3b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004cdf3e: MOV EAX,ESP
// 004cdf40: PUSH EAX
// 004cdf41: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x1c] (READ)
// 004cdf45: PUSH EDX
// 004cdf46: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 004cdf4a: PUSH ECX
// 004cdf4b: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 004cdf4f: PUSH EBX
// 004cdf50: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 004cdf54: PUSH ESI
// 004cdf55: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004cdf59: PUSH EDI
// 004cdf5a: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004cdf5e: PUSH EBP
// 004cdf5f: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004cdf63: PUSH EAX
// 004cdf64: CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
//   XREF to: 004cdf80 (UNCONDITIONAL_CALL)
// 004cdf69: ADD ESP,0x20
// 004cdf6c: XOR EDX,EDX
// 004cdf6e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 004cdf71: ADD ESP,0x4
// 004cdf74: POP EBP
// 004cdf75: POP EDI
// 004cdf76: POP ESI
// 004cdf77: POP EBX
// 004cdf78: RET
