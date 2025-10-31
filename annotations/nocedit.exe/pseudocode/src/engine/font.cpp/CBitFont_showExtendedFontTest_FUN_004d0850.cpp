// Name: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
// Address: 004d0850
// Address Range: [[004d0850, 004d110f]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850(CBitFont * this_ptr, int screen_width, int screen_height)
// Globals:
//   char[14] s_A_a_0062a86f
//   char[21] s_?_!_0062a87d
//   char[11] s__0062a892
//   TerminatedCString s_maxCharHght_d_0062a89d
//   char s_CharMax_0062a8ad
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_showExtendedFontTest_FUN_004d0850
          (CBitFont *this_ptr,int screen_width,int screen_height)

{
  int iVar1;
  int iVar2;
  uint y_pos;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int in_stack_00000028;
  int in_stack_00000040;
  int in_stack_00000058;
  int in_stack_00000070;
  int iStack00000080;
  int in_stack_ffffffcc;
  int in_stack_ffffffd0;
  int in_stack_ffffffd4;
  int iVar6;
  
  iVar3 = this_ptr->max_char_width + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar5 = 10;
  iVar4 = 10;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar1 = screen_width + -1;
  iVar6 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar5,iVar4,6,-1);
    iVar5 = iVar5 + iVar2 + 1;
    iVar2 = in_stack_ffffffd0;
    if ((uint)screen_width < this_ptr->char_spacing + iVar5 + this_ptr->max_char_height + 1U) {
      if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,iVar1,iVar4 + -1);
        iVar2 = 0xc5;
        g_ActiveRenderColor = 4;
        iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        iVar1 = iVar1 + iVar4;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004011b0(3,iVar3 + iVar4,iVar1,in_stack_ffffffd0);
        g_ActiveRenderColor = 4;
        in_stack_ffffffcc = this_ptr->max_char_width + iVar4;
        iVar1 = 3;
        iVar3 = 0x4d0977;
        in_stack_ffffffd4 = in_stack_ffffffcc;
        engine_2d_c_drawLine_FUN_004011b0(3,in_stack_ffffffcc,iVar2,in_stack_ffffffcc);
      }
      iVar5 = 10;
      iVar4 = iVar4 + iVar3;
    }
    iVar6 = iVar6 + 1;
    in_stack_ffffffd0 = iVar2;
  } while (iVar6 < 0x7f);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    iVar1 = iVar4 + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar4;
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + iVar4,iVar6,iVar1);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar4 = iVar4 + iVar3;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_ffffffcc);
    iVar1 = this_ptr->max_char_width + iVar4;
    iVar3 = 3;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0x7f;
  iVar1 = 10;
  do {
    iVar5 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar5 + 1;
  } while (iVar6 < 0x90);
  iVar4 = iVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_A_a_0062a86f,(uint)screen_width >> 1,iVar4 - iVar3,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_ffffffd4);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0x90;
  iVar1 = 10;
  do {
    iVar5 = 0x4d0ab5;
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xa0);
  iVar4 = iVar4 + iVar5;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_____0062a87d,(uint)screen_width >> 1,iVar4 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,unaff_EBP);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0xa0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xb0);
  iVar4 = iVar4 + iVar5;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s__0062a892,(uint)screen_width >> 1,iVar4 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1 + iVar4,screen_height);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0xb0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xc0);
  iVar4 = iVar4 + iVar5;
  screen_height = 1;
  y_pos = iVar4 - iVar5;
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,y_pos >> 1,y_pos,1,6,"maxCharHght: %d");
  if (this_ptr->max_char_width + iVar4 == 0) {
    g_ActiveRenderColor = 4;
    screen_height = 0x4d0f40;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000028);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xc0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xd0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000040);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xd0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xe0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000058);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xe0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xf0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000070);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xf0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0x100);
  iStack00000080 = engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(this_ptr,0xff);
  iStack00000080 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xff);
  iStack00000080 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,y_pos >> 1,iVar4,1,6,&s_CharMax_0062a8ad);
  return;
}


// Assembly code:
// 004d0850: PUSH EBX
//   Label: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
// 004d0851: PUSH ESI
// 004d0852: PUSH EDI
// 004d0853: PUSH EBP
// 004d0854: MOV EBP,ESP
// 004d0856: SUB ESP,0x30
// 004d0859: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d085c: MOV EDX,dword ptr [ESI + 0x316c]
// 004d0862: MOV EAX,dword ptr [ESI + 0x3178]
// 004d0868: ADD EDX,EAX
// 004d086a: MOV dword ptr [EBP + -0x30],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004d086d: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0870: LEA EAX,[EDX*0x4 + 0x0]
// 004d0877: SUB EAX,EDX
// 004d0879: MOV ECX,0x1e0
// 004d087e: SHL EAX,0x2
// 004d0881: XOR EDX,EDX
// 004d0883: DIV ECX
// 004d0885: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004d0888: ADD EDX,EAX
// 004d088a: PUSH 0x0
// 004d088c: MOV dword ptr [EBP + -0x2c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004d088f: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004d0895: PUSH EDX
// 004d0896: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004d089c: PUSH ECX
// 004d089d: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004d08a2: PUSH EAX
// 004d08a3: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004d08a9: MOV EDI,0xa
// 004d08ae: PUSH EDX
// 004d08af: MOV EBX,EDI
// 004d08b1: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004d08b6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d08b9: ADD ESP,0x14
// 004d08bc: XOR ECX,ECX
// 004d08be: DEC EAX
// 004d08bf: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004d08c2: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004d08c5: PUSH -0x1
//   Label: LAB_004d08c5
// 004d08c7: PUSH 0x6
// 004d08c9: PUSH EBX
// 004d08ca: PUSH EDI
// 004d08cb: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d08ce: PUSH EAX
// 004d08cf: PUSH ESI
// 004d08d0: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d08d5: INC EAX
// 004d08d6: ADD EDI,EAX
// 004d08d8: MOV EAX,dword ptr [ESI + 0x3168]
// 004d08de: LEA EDX,[EDI + EAX*0x1]
// 004d08e1: MOV EAX,dword ptr [ESI + 0x3174]
// 004d08e7: ADD EAX,EDX
// 004d08e9: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d08ec: INC EAX
// 004d08ed: ADD ESP,0x18
// 004d08f0: CMP EAX,EDX
// 004d08f2: JBE 0x004d0984
//   XREF to: 004d0984 (CONDITIONAL_JUMP)
// 004d08f8: MOV EAX,dword ptr [ESI + 0x316c]
// 004d08fe: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0901: ADD EAX,EBX
// 004d0903: CMP EAX,ECX
// 004d0905: JNC 0x004d097a
//   XREF to: 004d097a (CONDITIONAL_JUMP)
// 004d0907: LEA EAX,[EBX + -0x1]
// 004d090a: PUSH EAX
// 004d090b: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004d090e: PUSH EDX
// 004d090f: PUSH EAX
// 004d0910: MOV EDI,0x4
// 004d0915: PUSH 0x3
// 004d0917: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 004d091d: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0922: ADD ESP,0x10
// 004d0925: PUSH 0xc5
// 004d092a: PUSH ESI
// 004d092b: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 004d0931: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0936: ADD ESP,0x8
// 004d0939: ADD EAX,EBX
// 004d093b: PUSH EAX
// 004d093c: MOV EDI,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004d093f: PUSH EDI
// 004d0940: PUSH 0xc5
// 004d0945: PUSH ESI
// 004d0946: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d094b: ADD ESP,0x8
// 004d094e: ADD EAX,EBX
// 004d0950: PUSH EAX
// 004d0951: PUSH 0x3
// 004d0953: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0958: MOV dword ptr [0x02d02570],0x4
//   XREF to: 02d02570 (WRITE)
// 004d0962: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0968: ADD ESP,0x10
// 004d096b: ADD EAX,EBX
// 004d096d: PUSH EAX
// 004d096e: PUSH EDI
// 004d096f: PUSH EAX
// 004d0970: PUSH 0x3
// 004d0972: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0977: ADD ESP,0x10
// 004d097a: MOV ECX,dword ptr [EBP + -0x2c]
//   Label: LAB_004d097a
//   XREF to: Stack[-0x3c] (READ)
// 004d097d: MOV EDI,0xa
// 004d0982: ADD EBX,ECX
// 004d0984: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004d0984
//   XREF to: Stack[-0x14] (READ)
// 004d0987: INC EAX
// 004d0988: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d098b: CMP EAX,0x7f
// 004d098e: JL 0x004d08c5
//   XREF to: 004d08c5 (CONDITIONAL_JUMP)
// 004d0994: MOV EAX,dword ptr [ESI + 0x316c]
// 004d099a: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d099d: ADD EAX,EBX
// 004d099f: CMP EAX,ECX
// 004d09a1: JNC 0x004d0a19
//   XREF to: 004d0a19 (CONDITIONAL_JUMP)
// 004d09a3: MOV EDI,0x4
// 004d09a8: LEA EAX,[EBX + -0x1]
// 004d09ab: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 004d09b1: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d09b4: PUSH EAX
// 004d09b5: DEC EDI
// 004d09b6: PUSH EDI
// 004d09b7: PUSH EAX
// 004d09b8: PUSH 0x3
// 004d09ba: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d09bf: ADD ESP,0x10
// 004d09c2: PUSH 0xc5
// 004d09c7: MOV EAX,0x4
// 004d09cc: PUSH ESI
// 004d09cd: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d09d2: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d09d7: ADD ESP,0x8
// 004d09da: ADD EAX,EBX
// 004d09dc: PUSH EAX
// 004d09dd: PUSH EDI
// 004d09de: PUSH 0xc5
// 004d09e3: PUSH ESI
// 004d09e4: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d09e9: ADD ESP,0x8
// 004d09ec: ADD EAX,EBX
// 004d09ee: PUSH EAX
// 004d09ef: PUSH 0x3
// 004d09f1: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d09f6: MOV EAX,dword ptr [ESI + 0x316c]
// 004d09fc: ADD ESP,0x10
// 004d09ff: ADD EAX,EBX
// 004d0a01: PUSH EAX
// 004d0a02: PUSH EDI
// 004d0a03: PUSH EAX
// 004d0a04: MOV EDX,0x4
// 004d0a09: PUSH 0x3
// 004d0a0b: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0a11: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0a16: ADD ESP,0x10
// 004d0a19: MOV ECX,dword ptr [EBP + -0x2c]
//   Label: LAB_004d0a19
//   XREF to: Stack[-0x3c] (READ)
// 004d0a1c: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0a22: ADD EBX,ECX
// 004d0a24: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0a27: ADD EAX,EBX
// 004d0a29: CMP EAX,EDI
// 004d0a2b: JC 0x004d0d38
//   XREF to: 004d0d38 (CONDITIONAL_JUMP)
// 004d0a31: MOV EAX,0xa
//   Label: LAB_004d0a31
// 004d0a36: MOV EDI,0x7f
// 004d0a3b: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d0a3e: PUSH -0x1
//   Label: LAB_004d0a3e
// 004d0a40: PUSH 0x6
// 004d0a42: PUSH EBX
// 004d0a43: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004d0a46: PUSH EDX
// 004d0a47: PUSH EDI
// 004d0a48: PUSH ESI
// 004d0a49: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0a4e: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004d0a51: INC EAX
// 004d0a52: INC EDI
// 004d0a53: ADD ECX,EAX
// 004d0a55: ADD ESP,0x18
// 004d0a58: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d0a5b: CMP EDI,0x90
// 004d0a61: JL 0x004d0a3e
//   XREF to: 004d0a3e (CONDITIONAL_JUMP)
// 004d0a63: MOV EDI,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0a66: ADD EBX,EDI
// 004d0a68: PUSH -0x1
// 004d0a6a: MOV EAX,EBX
// 004d0a6c: PUSH 0x6
// 004d0a6e: SUB EAX,EDI
// 004d0a70: PUSH EAX
// 004d0a71: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0a74: SHR EAX,0x1
// 004d0a76: PUSH EAX
// 004d0a77: PUSH 0x62a86f
//   XREF to: 0062a86f (DATA)
// 004d0a7c: PUSH ESI
// 004d0a7d: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0a82: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0a88: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0a8b: ADD EAX,EBX
// 004d0a8d: ADD ESP,0x18
// 004d0a90: CMP EAX,ECX
// 004d0a92: JC 0x004d0db3
//   XREF to: 004d0db3 (CONDITIONAL_JUMP)
// 004d0a98: MOV ECX,0xa
//   Label: LAB_004d0a98
// 004d0a9d: MOV EDI,0x90
// 004d0aa2: MOV dword ptr [EBP + -0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004d0aa5: PUSH -0x1
//   Label: LAB_004d0aa5
// 004d0aa7: PUSH 0x6
// 004d0aa9: PUSH EBX
// 004d0aaa: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004d0aad: PUSH EAX
// 004d0aae: PUSH EDI
// 004d0aaf: PUSH ESI
// 004d0ab0: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0ab5: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004d0ab8: INC EAX
// 004d0ab9: INC EDI
// 004d0aba: ADD EDX,EAX
// 004d0abc: ADD ESP,0x18
// 004d0abf: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d0ac2: CMP EDI,0xa0
// 004d0ac8: JL 0x004d0aa5
//   XREF to: 004d0aa5 (CONDITIONAL_JUMP)
// 004d0aca: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0acd: ADD EBX,ECX
// 004d0acf: PUSH -0x1
// 004d0ad1: MOV EAX,EBX
// 004d0ad3: PUSH 0x6
// 004d0ad5: SUB EAX,ECX
// 004d0ad7: PUSH EAX
// 004d0ad8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0adb: SHR EAX,0x1
// 004d0add: PUSH EAX
// 004d0ade: PUSH 0x62a87d
//   XREF to: 0062a87d (DATA)
// 004d0ae3: PUSH ESI
// 004d0ae4: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0ae9: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0aef: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0af2: ADD EAX,EBX
// 004d0af4: ADD ESP,0x18
// 004d0af7: CMP EAX,EDX
// 004d0af9: JC 0x004d0e2e
//   XREF to: 004d0e2e (CONDITIONAL_JUMP)
// 004d0aff: MOV ECX,0xa
//   Label: LAB_004d0aff
// 004d0b04: MOV EDI,0xa0
// 004d0b09: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004d0b0c: PUSH -0x1
//   Label: LAB_004d0b0c
// 004d0b0e: PUSH 0x6
// 004d0b10: PUSH EBX
// 004d0b11: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004d0b14: PUSH EAX
// 004d0b15: PUSH EDI
// 004d0b16: PUSH ESI
// 004d0b17: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0b1c: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004d0b1f: INC EAX
// 004d0b20: INC EDI
// 004d0b21: ADD EDX,EAX
// 004d0b23: ADD ESP,0x18
// 004d0b26: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004d0b29: CMP EDI,0xb0
// 004d0b2f: JL 0x004d0b0c
//   XREF to: 004d0b0c (CONDITIONAL_JUMP)
// 004d0b31: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0b34: ADD EBX,ECX
// 004d0b36: PUSH -0x1
// 004d0b38: MOV EAX,EBX
// 004d0b3a: PUSH 0x6
// 004d0b3c: SUB EAX,ECX
// 004d0b3e: PUSH EAX
// 004d0b3f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0b42: SHR EAX,0x1
// 004d0b44: PUSH EAX
// 004d0b45: PUSH 0x62a892
//   XREF to: 0062a892 (DATA)
// 004d0b4a: PUSH ESI
// 004d0b4b: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0b50: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0b56: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0b59: ADD EAX,EBX
// 004d0b5b: ADD ESP,0x18
// 004d0b5e: CMP EAX,EDX
// 004d0b60: JC 0x004d0ea9
//   XREF to: 004d0ea9 (CONDITIONAL_JUMP)
// 004d0b66: MOV ECX,0xa
//   Label: LAB_004d0b66
// 004d0b6b: MOV EDI,0xb0
// 004d0b70: MOV dword ptr [EBP + -0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004d0b73: PUSH -0x1
//   Label: LAB_004d0b73
// 004d0b75: PUSH 0x6
// 004d0b77: PUSH EBX
// 004d0b78: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004d0b7b: PUSH EAX
// 004d0b7c: PUSH EDI
// 004d0b7d: PUSH ESI
// 004d0b7e: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0b83: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004d0b86: INC EAX
// 004d0b87: INC EDI
// 004d0b88: ADD EDX,EAX
// 004d0b8a: ADD ESP,0x18
// 004d0b8d: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004d0b90: CMP EDI,0xc0
// 004d0b96: JL 0x004d0b73
//   XREF to: 004d0b73 (CONDITIONAL_JUMP)
// 004d0b98: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0b9e: PUSH EAX
// 004d0b9f: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0ba2: PUSH 0x62a89d
//   XREF to: 0062a89d (DATA)
// 004d0ba7: ADD EBX,ECX
// 004d0ba9: PUSH 0x6
// 004d0bab: MOV EAX,EBX
// 004d0bad: PUSH 0x1
// 004d0baf: SUB EAX,ECX
// 004d0bb1: PUSH EAX
// 004d0bb2: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0bb5: SHR EAX,0x1
// 004d0bb7: PUSH EAX
// 004d0bb8: PUSH ESI
// 004d0bb9: CALL engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
//   XREF to: 004cdc20 (UNCONDITIONAL_CALL)
// 004d0bbe: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0bc4: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0bc7: ADD EAX,EBX
// 004d0bc9: ADD ESP,0x1c
// 004d0bcc: CMP EAX,EDX
// 004d0bce: JC 0x004d0f24
//   XREF to: 004d0f24 (CONDITIONAL_JUMP)
// 004d0bd4: MOV ECX,0xa
//   Label: LAB_004d0bd4
// 004d0bd9: MOV EDI,0xc0
// 004d0bde: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d0be1: PUSH -0x1
//   Label: LAB_004d0be1
// 004d0be3: PUSH 0x6
// 004d0be5: PUSH EBX
// 004d0be6: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004d0be9: PUSH EAX
// 004d0bea: PUSH EDI
// 004d0beb: PUSH ESI
// 004d0bec: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0bf1: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004d0bf4: INC EAX
// 004d0bf5: INC EDI
// 004d0bf6: ADD EDX,EAX
// 004d0bf8: ADD ESP,0x18
// 004d0bfb: MOV dword ptr [EBP + -0x1c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d0bfe: CMP EDI,0xd0
// 004d0c04: JL 0x004d0be1
//   XREF to: 004d0be1 (CONDITIONAL_JUMP)
// 004d0c06: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0c09: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0c0f: ADD EBX,ECX
// 004d0c11: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0c14: ADD EAX,EBX
// 004d0c16: CMP EAX,EDI
// 004d0c18: JC 0x004d0f9f
//   XREF to: 004d0f9f (CONDITIONAL_JUMP)
// 004d0c1e: MOV EAX,0xa
//   Label: LAB_004d0c1e
// 004d0c23: MOV EDI,0xd0
// 004d0c28: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d0c2b: PUSH -0x1
//   Label: LAB_004d0c2b
// 004d0c2d: PUSH 0x6
// 004d0c2f: PUSH EBX
// 004d0c30: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004d0c33: PUSH EDX
// 004d0c34: PUSH EDI
// 004d0c35: PUSH ESI
// 004d0c36: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0c3b: MOV ECX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004d0c3e: INC EAX
// 004d0c3f: INC EDI
// 004d0c40: ADD ECX,EAX
// 004d0c42: ADD ESP,0x18
// 004d0c45: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004d0c48: CMP EDI,0xe0
// 004d0c4e: JL 0x004d0c2b
//   XREF to: 004d0c2b (CONDITIONAL_JUMP)
// 004d0c50: MOV EDI,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0c53: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0c59: ADD EBX,EDI
// 004d0c5b: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0c5e: ADD EAX,EBX
// 004d0c60: CMP EAX,EDX
// 004d0c62: JC 0x004d101a
//   XREF to: 004d101a (CONDITIONAL_JUMP)
// 004d0c68: MOV ECX,0xa
//   Label: LAB_004d0c68
// 004d0c6d: MOV EDI,0xe0
// 004d0c72: MOV dword ptr [EBP + -0x24],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004d0c75: PUSH -0x1
//   Label: LAB_004d0c75
// 004d0c77: PUSH 0x6
// 004d0c79: PUSH EBX
// 004d0c7a: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 004d0c7d: PUSH EAX
// 004d0c7e: PUSH EDI
// 004d0c7f: PUSH ESI
// 004d0c80: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0c85: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 004d0c88: INC EAX
// 004d0c89: INC EDI
// 004d0c8a: ADD EDX,EAX
// 004d0c8c: ADD ESP,0x18
// 004d0c8f: MOV dword ptr [EBP + -0x24],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004d0c92: CMP EDI,0xf0
// 004d0c98: JL 0x004d0c75
//   XREF to: 004d0c75 (CONDITIONAL_JUMP)
// 004d0c9a: MOV ECX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0c9d: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0ca3: ADD EBX,ECX
// 004d0ca5: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d0ca8: ADD EAX,EBX
// 004d0caa: CMP EAX,EDI
// 004d0cac: JC 0x004d1095
//   XREF to: 004d1095 (CONDITIONAL_JUMP)
// 004d0cb2: MOV EAX,0xa
//   Label: LAB_004d0cb2
// 004d0cb7: MOV EDI,0xf0
// 004d0cbc: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d0cbf: PUSH -0x1
//   Label: LAB_004d0cbf
// 004d0cc1: PUSH 0x6
// 004d0cc3: PUSH EBX
// 004d0cc4: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004d0cc7: PUSH EDX
// 004d0cc8: PUSH EDI
// 004d0cc9: PUSH ESI
// 004d0cca: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0ccf: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004d0cd2: INC EAX
// 004d0cd3: INC EDI
// 004d0cd4: ADD ECX,EAX
// 004d0cd6: ADD ESP,0x18
// 004d0cd9: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004d0cdc: CMP EDI,0x100
// 004d0ce2: JL 0x004d0cbf
//   XREF to: 004d0cbf (CONDITIONAL_JUMP)
// 004d0ce4: PUSH 0xff
// 004d0ce9: PUSH ESI
// 004d0cea: CALL engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
//   XREF to: 004d0200 (UNCONDITIONAL_CALL)
// 004d0cef: ADD ESP,0x8
// 004d0cf2: PUSH EAX
// 004d0cf3: PUSH 0xff
// 004d0cf8: PUSH ESI
// 004d0cf9: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0cfe: ADD ESP,0x8
// 004d0d01: PUSH EAX
// 004d0d02: PUSH 0xff
// 004d0d07: PUSH ESI
// 004d0d08: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 004d0d0d: ADD ESP,0x8
// 004d0d10: PUSH EAX
// 004d0d11: PUSH 0x62a8ad
//   XREF to: 0062a8ad (DATA)
// 004d0d16: MOV EDI,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004d0d19: PUSH 0x6
// 004d0d1b: ADD EBX,EDI
// 004d0d1d: PUSH 0x1
// 004d0d1f: SUB EBX,EDI
// 004d0d21: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0d24: PUSH EBX
// 004d0d25: SHR EAX,0x1
// 004d0d27: PUSH EAX
// 004d0d28: PUSH ESI
// 004d0d29: CALL engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
//   XREF to: 004cdc20 (UNCONDITIONAL_CALL)
// 004d0d2e: ADD ESP,0x24
// 004d0d31: MOV ESP,EBP
// 004d0d33: POP EBP
// 004d0d34: POP EDI
// 004d0d35: POP ESI
// 004d0d36: POP EBX
// 004d0d37: RET
// 004d0d38: MOV dword ptr [0x02d02570],0x4
//   Label: LAB_004d0d38
//   XREF to: 02d02570 (WRITE)
// 004d0d42: LEA EAX,[EBX + -0x1]
// 004d0d45: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0d48: PUSH EAX
// 004d0d49: DEC EDI
// 004d0d4a: PUSH EDI
// 004d0d4b: PUSH EAX
// 004d0d4c: PUSH 0x3
// 004d0d4e: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0d53: ADD ESP,0x10
// 004d0d56: PUSH 0xc5
// 004d0d5b: MOV EDX,0x4
// 004d0d60: PUSH ESI
// 004d0d61: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0d67: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0d6c: ADD ESP,0x8
// 004d0d6f: ADD EAX,EBX
// 004d0d71: PUSH EAX
// 004d0d72: PUSH EDI
// 004d0d73: PUSH 0xc5
// 004d0d78: PUSH ESI
// 004d0d79: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0d7e: ADD ESP,0x8
// 004d0d81: ADD EAX,EBX
// 004d0d83: PUSH EAX
// 004d0d84: PUSH 0x3
// 004d0d86: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0d8b: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0d91: ADD ESP,0x10
// 004d0d94: ADD EAX,EBX
// 004d0d96: PUSH EAX
// 004d0d97: PUSH EDI
// 004d0d98: PUSH EAX
// 004d0d99: MOV ECX,0x4
// 004d0d9e: PUSH 0x3
// 004d0da0: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d0da6: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0dab: ADD ESP,0x10
// 004d0dae: JMP 0x004d0a31
//   XREF to: 004d0a31 (UNCONDITIONAL_JUMP)
// 004d0db3: MOV EDI,0x4
//   Label: LAB_004d0db3
// 004d0db8: LEA EAX,[EBX + -0x1]
// 004d0dbb: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 004d0dc1: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0dc4: PUSH EAX
// 004d0dc5: DEC EDI
// 004d0dc6: PUSH EDI
// 004d0dc7: PUSH EAX
// 004d0dc8: PUSH 0x3
// 004d0dca: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0dcf: ADD ESP,0x10
// 004d0dd2: PUSH 0xc5
// 004d0dd7: MOV EAX,0x4
// 004d0ddc: PUSH ESI
// 004d0ddd: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d0de2: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0de7: ADD ESP,0x8
// 004d0dea: ADD EAX,EBX
// 004d0dec: PUSH EAX
// 004d0ded: PUSH EDI
// 004d0dee: PUSH 0xc5
// 004d0df3: PUSH ESI
// 004d0df4: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0df9: ADD ESP,0x8
// 004d0dfc: ADD EAX,EBX
// 004d0dfe: PUSH EAX
// 004d0dff: PUSH 0x3
// 004d0e01: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0e06: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0e0c: ADD ESP,0x10
// 004d0e0f: ADD EAX,EBX
// 004d0e11: PUSH EAX
// 004d0e12: PUSH EDI
// 004d0e13: PUSH EAX
// 004d0e14: MOV EDX,0x4
// 004d0e19: PUSH 0x3
// 004d0e1b: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0e21: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0e26: ADD ESP,0x10
// 004d0e29: JMP 0x004d0a98
//   XREF to: 004d0a98 (UNCONDITIONAL_JUMP)
// 004d0e2e: LEA EAX,[EBX + -0x1]
//   Label: LAB_004d0e2e
// 004d0e31: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0e34: PUSH EAX
// 004d0e35: DEC EDI
// 004d0e36: PUSH EDI
// 004d0e37: PUSH EAX
// 004d0e38: MOV ECX,0x4
// 004d0e3d: PUSH 0x3
// 004d0e3f: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d0e45: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0e4a: ADD ESP,0x10
// 004d0e4d: PUSH 0xc5
// 004d0e52: MOV EAX,0x4
// 004d0e57: PUSH ESI
// 004d0e58: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d0e5d: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0e62: ADD ESP,0x8
// 004d0e65: ADD EAX,EBX
// 004d0e67: PUSH EAX
// 004d0e68: PUSH EDI
// 004d0e69: PUSH 0xc5
// 004d0e6e: PUSH ESI
// 004d0e6f: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0e74: ADD ESP,0x8
// 004d0e77: ADD EAX,EBX
// 004d0e79: PUSH EAX
// 004d0e7a: PUSH 0x3
// 004d0e7c: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0e81: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0e87: ADD ESP,0x10
// 004d0e8a: ADD EAX,EBX
// 004d0e8c: PUSH EAX
// 004d0e8d: PUSH EDI
// 004d0e8e: PUSH EAX
// 004d0e8f: MOV EDX,0x4
// 004d0e94: PUSH 0x3
// 004d0e96: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0e9c: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0ea1: ADD ESP,0x10
// 004d0ea4: JMP 0x004d0aff
//   XREF to: 004d0aff (UNCONDITIONAL_JUMP)
// 004d0ea9: LEA EAX,[EBX + -0x1]
//   Label: LAB_004d0ea9
// 004d0eac: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0eaf: PUSH EAX
// 004d0eb0: DEC EDI
// 004d0eb1: PUSH EDI
// 004d0eb2: PUSH EAX
// 004d0eb3: MOV ECX,0x4
// 004d0eb8: PUSH 0x3
// 004d0eba: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d0ec0: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0ec5: ADD ESP,0x10
// 004d0ec8: PUSH 0xc5
// 004d0ecd: MOV EAX,0x4
// 004d0ed2: PUSH ESI
// 004d0ed3: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d0ed8: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0edd: ADD ESP,0x8
// 004d0ee0: ADD EAX,EBX
// 004d0ee2: PUSH EAX
// 004d0ee3: PUSH EDI
// 004d0ee4: PUSH 0xc5
// 004d0ee9: PUSH ESI
// 004d0eea: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0eef: ADD ESP,0x8
// 004d0ef2: ADD EAX,EBX
// 004d0ef4: PUSH EAX
// 004d0ef5: PUSH 0x3
// 004d0ef7: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0efc: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0f02: ADD ESP,0x10
// 004d0f05: ADD EAX,EBX
// 004d0f07: PUSH EAX
// 004d0f08: PUSH EDI
// 004d0f09: PUSH EAX
// 004d0f0a: MOV EDX,0x4
// 004d0f0f: PUSH 0x3
// 004d0f11: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0f17: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0f1c: ADD ESP,0x10
// 004d0f1f: JMP 0x004d0b66
//   XREF to: 004d0b66 (UNCONDITIONAL_JUMP)
// 004d0f24: LEA EAX,[EBX + -0x1]
//   Label: LAB_004d0f24
// 004d0f27: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0f2a: PUSH EAX
// 004d0f2b: DEC EDI
// 004d0f2c: PUSH EDI
// 004d0f2d: PUSH EAX
// 004d0f2e: MOV ECX,0x4
// 004d0f33: PUSH 0x3
// 004d0f35: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d0f3b: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0f40: ADD ESP,0x10
// 004d0f43: PUSH 0xc5
// 004d0f48: MOV EAX,0x4
// 004d0f4d: PUSH ESI
// 004d0f4e: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d0f53: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0f58: ADD ESP,0x8
// 004d0f5b: ADD EAX,EBX
// 004d0f5d: PUSH EAX
// 004d0f5e: PUSH EDI
// 004d0f5f: PUSH 0xc5
// 004d0f64: PUSH ESI
// 004d0f65: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0f6a: ADD ESP,0x8
// 004d0f6d: ADD EAX,EBX
// 004d0f6f: PUSH EAX
// 004d0f70: PUSH 0x3
// 004d0f72: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0f77: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0f7d: ADD ESP,0x10
// 004d0f80: ADD EAX,EBX
// 004d0f82: PUSH EAX
// 004d0f83: PUSH EDI
// 004d0f84: PUSH EAX
// 004d0f85: MOV EDX,0x4
// 004d0f8a: PUSH 0x3
// 004d0f8c: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0f92: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0f97: ADD ESP,0x10
// 004d0f9a: JMP 0x004d0bd4
//   XREF to: 004d0bd4 (UNCONDITIONAL_JUMP)
// 004d0f9f: MOV dword ptr [0x02d02570],0x4
//   Label: LAB_004d0f9f
//   XREF to: 02d02570 (WRITE)
// 004d0fa9: LEA EAX,[EBX + -0x1]
// 004d0fac: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d0faf: PUSH EAX
// 004d0fb0: DEC EDI
// 004d0fb1: PUSH EDI
// 004d0fb2: PUSH EAX
// 004d0fb3: PUSH 0x3
// 004d0fb5: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0fba: ADD ESP,0x10
// 004d0fbd: PUSH 0xc5
// 004d0fc2: MOV EDX,0x4
// 004d0fc7: PUSH ESI
// 004d0fc8: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d0fce: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0fd3: ADD ESP,0x8
// 004d0fd6: ADD EAX,EBX
// 004d0fd8: PUSH EAX
// 004d0fd9: PUSH EDI
// 004d0fda: PUSH 0xc5
// 004d0fdf: PUSH ESI
// 004d0fe0: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d0fe5: ADD ESP,0x8
// 004d0fe8: ADD EAX,EBX
// 004d0fea: PUSH EAX
// 004d0feb: PUSH 0x3
// 004d0fed: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d0ff2: MOV EAX,dword ptr [ESI + 0x316c]
// 004d0ff8: ADD ESP,0x10
// 004d0ffb: ADD EAX,EBX
// 004d0ffd: PUSH EAX
// 004d0ffe: PUSH EDI
// 004d0fff: PUSH EAX
// 004d1000: MOV ECX,0x4
// 004d1005: PUSH 0x3
// 004d1007: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d100d: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d1012: ADD ESP,0x10
// 004d1015: JMP 0x004d0c1e
//   XREF to: 004d0c1e (UNCONDITIONAL_JUMP)
// 004d101a: LEA EAX,[EBX + -0x1]
//   Label: LAB_004d101a
// 004d101d: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d1020: PUSH EAX
// 004d1021: DEC EDI
// 004d1022: PUSH EDI
// 004d1023: PUSH EAX
// 004d1024: MOV ECX,0x4
// 004d1029: PUSH 0x3
// 004d102b: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d1031: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d1036: ADD ESP,0x10
// 004d1039: PUSH 0xc5
// 004d103e: MOV EAX,0x4
// 004d1043: PUSH ESI
// 004d1044: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004d1049: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d104e: ADD ESP,0x8
// 004d1051: ADD EAX,EBX
// 004d1053: PUSH EAX
// 004d1054: PUSH EDI
// 004d1055: PUSH 0xc5
// 004d105a: PUSH ESI
// 004d105b: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d1060: ADD ESP,0x8
// 004d1063: ADD EAX,EBX
// 004d1065: PUSH EAX
// 004d1066: PUSH 0x3
// 004d1068: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d106d: MOV EAX,dword ptr [ESI + 0x316c]
// 004d1073: ADD ESP,0x10
// 004d1076: ADD EAX,EBX
// 004d1078: PUSH EAX
// 004d1079: PUSH EDI
// 004d107a: PUSH EAX
// 004d107b: MOV EDX,0x4
// 004d1080: PUSH 0x3
// 004d1082: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d1088: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d108d: ADD ESP,0x10
// 004d1090: JMP 0x004d0c68
//   XREF to: 004d0c68 (UNCONDITIONAL_JUMP)
// 004d1095: MOV dword ptr [0x02d02570],0x4
//   Label: LAB_004d1095
//   XREF to: 02d02570 (WRITE)
// 004d109f: LEA EAX,[EBX + -0x1]
// 004d10a2: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d10a5: PUSH EAX
// 004d10a6: DEC EDI
// 004d10a7: PUSH EDI
// 004d10a8: PUSH EAX
// 004d10a9: PUSH 0x3
// 004d10ab: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d10b0: ADD ESP,0x10
// 004d10b3: PUSH 0xc5
// 004d10b8: MOV EDX,0x4
// 004d10bd: PUSH ESI
// 004d10be: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d10c4: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d10c9: ADD ESP,0x8
// 004d10cc: ADD EAX,EBX
// 004d10ce: PUSH EAX
// 004d10cf: PUSH EDI
// 004d10d0: PUSH 0xc5
// 004d10d5: PUSH ESI
// 004d10d6: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d10db: ADD ESP,0x8
// 004d10de: ADD EAX,EBX
// 004d10e0: PUSH EAX
// 004d10e1: PUSH 0x3
// 004d10e3: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d10e8: MOV EAX,dword ptr [ESI + 0x316c]
// 004d10ee: ADD ESP,0x10
// 004d10f1: ADD EAX,EBX
// 004d10f3: PUSH EAX
// 004d10f4: PUSH EDI
// 004d10f5: PUSH EAX
// 004d10f6: MOV ECX,0x4
// 004d10fb: PUSH 0x3
// 004d10fd: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 004d1103: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d1108: ADD ESP,0x10
// 004d110b: JMP 0x004d0cb2
//   XREF to: 004d0cb2 (UNCONDITIONAL_JUMP)
