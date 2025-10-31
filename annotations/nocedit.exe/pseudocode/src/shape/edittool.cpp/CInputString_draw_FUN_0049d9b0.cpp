// Name: shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
// Address: 0049d9b0
// Address Range: [[0049d9b0, 0049db0c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_draw_FUN_0049d9b0(CInputString * this_ptr, int x_pos, int y_pos)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fda2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dd08 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622f38
//   TerminatedCString s_CInputString_draw_string_00622f4e
//   CBitFont* g_EditorFont
//   int g_FontCharacterWidth
//   char[1024] g_TempStringBuffer
//   int g_SelectionColor
//   int g_TextColor
//   int g_CursorColor
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_draw_FUN_0049d9b0(CInputString *this_ptr,int x_pos,int y_pos)

{
  uint uVar1;
  int iVar2;
  int x2;
  int iVar3;
  int unaff_EDI;
  CBitFont *this_ptr_00;
  char *text_string;
  
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->selection_start);
    iVar3 = x_pos + iVar3;
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->cursor_position);
    iVar2 = iVar2 + x_pos;
    x2 = iVar2;
    if (iVar2 < iVar3) {
      x2 = iVar3;
      iVar3 = iVar2;
    }
    engine_2d_c_fillRectColor_FUN_00403170(iVar3,y_pos,x2,unaff_EDI,g_SelectionColor);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  this_ptr_00 = g_EditorFont;
  text_string = this_ptr->string_data;
  iVar3 = g_TextColor;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x1dc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInputString::draw - string too big for hidden text!");
    }
    crt_memory_c_memset_FUN_005fde40(g_TempStringBuffer,0x2a,this_ptr->current_length);
    iVar3 = g_TextColor;
    this_ptr_00 = g_EditorFont;
    text_string = g_TempStringBuffer;
    g_TempStringBuffer[this_ptr->current_length] = '\0';
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr_00,text_string,x_pos,y_pos,iVar3,-1);
  uVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((uVar1 & 0x40000) != 0) {
    g_ActiveRenderColor = g_CursorColor;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004011b0(iVar3 + x_pos,y_pos,iVar3 + x_pos,x_pos);
    return;
  }
  return;
}


// Assembly code:
// 0049d9b0: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
// 0049d9b1: PUSH ESI
// 0049d9b2: PUSH EDI
// 0049d9b3: PUSH EBP
// 0049d9b4: SUB ESP,0x4
// 0049d9b7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0049d9bb: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0049d9bf: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0049d9c3: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 0049d9c8: ADD EAX,EBP
// 0049d9ca: MOV EDX,dword ptr [EBX + 0x134]
// 0049d9d0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0049d9d3: MOV EAX,dword ptr [EBX + 0x138]
// 0049d9d9: CMP EAX,EDX
// 0049d9db: JNZ 0x0049da81
//   XREF to: 0049da81 (CONDITIONAL_JUMP)
// 0049d9e1: PUSH 0xffff
//   Label: LAB_0049d9e1
// 0049d9e6: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049d9eb: MOV ESI,dword ptr [EBX + 0x13c]
// 0049d9f1: ADD ESP,0x4
// 0049d9f4: TEST ESI,ESI
// 0049d9f6: JZ 0x0049dac6
//   XREF to: 0049dac6 (CONDITIONAL_JUMP)
// 0049d9fc: CMP dword ptr [EBX + 0x130],0x400
// 0049da06: JC 0x0049da2a
//   XREF to: 0049da2a (CONDITIONAL_JUMP)
// 0049da08: MOV ESI,0x622f38
//   XREF to: 00622f38 (DATA)
// 0049da0d: MOV EAX,0x1dc
// 0049da12: PUSH 0x622f4e
//   XREF to: 00622f4e (DATA)
// 0049da17: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0049da1d: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0049da22: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049da27: ADD ESP,0x4
// 0049da2a: MOV EDX,dword ptr [EBX + 0x130]
//   Label: LAB_0049da2a
// 0049da30: PUSH EDX
// 0049da31: PUSH 0x2a
// 0049da33: PUSH 0x2cf2678
//   XREF to: 02cf2678 (DATA)
// 0049da38: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0049da3d: ADD ESP,0xc
// 0049da40: PUSH -0x1
// 0049da42: MOV ECX,dword ptr [0x02cf2a9c]
//   XREF to: 02cf2a9c (READ)
// 0049da48: PUSH ECX
// 0049da49: PUSH EBP
// 0049da4a: PUSH EDI
// 0049da4b: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049da51: PUSH 0x2cf2678
//   XREF to: 02cf2678 (DATA)
// 0049da56: MOV EAX,dword ptr [EBX + 0x130]
// 0049da5c: XOR DL,DL
// 0049da5e: PUSH ESI
// 0049da5f: MOV byte ptr [EAX + 0x2cf2678],DL
//   XREF to: 02cf2678 (DATA)
// 0049da65: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   Label: LAB_0049da65
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0049da6a: ADD ESP,0x18
// 0049da6d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0049da72: TEST EAX,0x40000
// 0049da77: JNZ 0x0049dada
//   XREF to: 0049dada (CONDITIONAL_JUMP)
// 0049da79: ADD ESP,0x4
// 0049da7c: POP EBP
// 0049da7d: POP EDI
// 0049da7e: POP ESI
// 0049da7f: POP EBX
// 0049da80: RET
// 0049da81: PUSH EAX
//   Label: LAB_0049da81
// 0049da82: PUSH EBX
// 0049da83: CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
//   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
// 0049da88: ADD ESP,0x8
// 0049da8b: LEA ESI,[EDI + EAX*0x1]
// 0049da8e: MOV EAX,dword ptr [EBX + 0x134]
// 0049da94: PUSH EAX
// 0049da95: PUSH EBX
// 0049da96: CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
//   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
// 0049da9b: ADD EAX,EDI
// 0049da9d: ADD ESP,0x8
// 0049daa0: CMP ESI,EAX
// 0049daa2: JLE 0x0049daaa
//   XREF to: 0049daaa (CONDITIONAL_JUMP)
// 0049daa4: MOV EDX,ESI
// 0049daa6: MOV ESI,EAX
// 0049daa8: MOV EAX,EDX
// 0049daaa: MOV EDX,dword ptr [0x02cf2a98]
//   Label: LAB_0049daaa
//   XREF to: 02cf2a98 (READ)
// 0049dab0: PUSH EDX
// 0049dab1: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0049dab5: PUSH ECX
// 0049dab6: PUSH EAX
// 0049dab7: PUSH EBP
// 0049dab8: PUSH ESI
// 0049dab9: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0049dabe: ADD ESP,0x14
// 0049dac1: JMP 0x0049d9e1
//   XREF to: 0049d9e1 (UNCONDITIONAL_JUMP)
// 0049dac6: PUSH -0x1
//   Label: LAB_0049dac6
// 0049dac8: MOV EAX,[0x02cf2a9c]
//   XREF to: 02cf2a9c (READ)
// 0049dacd: PUSH EAX
// 0049dace: PUSH EBP
// 0049dacf: PUSH EDI
// 0049dad0: PUSH EBX
// 0049dad1: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049dad7: PUSH EDX
// 0049dad8: JMP 0x0049da65
//   XREF to: 0049da65 (UNCONDITIONAL_JUMP)
// 0049dada: MOV EAX,[0x02cf2aa0]
//   Label: LAB_0049dada
//   XREF to: 02cf2aa0 (READ)
// 0049dadf: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0049dae4: MOV EAX,dword ptr [EBX + 0x134]
// 0049daea: PUSH EAX
// 0049daeb: PUSH EBX
// 0049daec: CALL shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
//   XREF to: 0049d8f0 (UNCONDITIONAL_CALL)
// 0049daf1: ADD ESP,0x8
// 0049daf4: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0049daf7: PUSH EDX
// 0049daf8: ADD EAX,EDI
// 0049dafa: PUSH EAX
// 0049dafb: PUSH EBP
// 0049dafc: PUSH EAX
// 0049dafd: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0049db02: ADD ESP,0x10
// 0049db05: ADD ESP,0x4
// 0049db08: POP EBP
// 0049db09: POP EDI
// 0049db0a: POP ESI
// 0049db0b: POP EBX
// 0049db0c: RET
