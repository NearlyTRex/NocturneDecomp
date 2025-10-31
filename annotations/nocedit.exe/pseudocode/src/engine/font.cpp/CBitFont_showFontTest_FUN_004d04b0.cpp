// Name: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// Address: 004d04b0
// Address Range: [[004d04b0, 004d0841]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont * this_ptr, int screen_height)
// Globals:
//   TerminatedCString s_one_0062a762
//   char s_BackspaceChar_0062a766 = 
//   TerminatedCString s_two_0062a768
//   char s_FormFeedChar_0062a76c = 
//   TerminatedCString s_three_0062a76e
//   TerminatedCString s_anon_0062a774
//   TerminatedCString s_four_0062a776
//   TerminatedCString s_anon_0062a77b
//   TerminatedCString s_s_01234_5_6_7_8_9_0_8_8_0062a77e
//   TerminatedCString s_s_023_0_23_a_t_5_0_2_1_0062a79c
//   TerminatedCString s_s_0A_1B_1_O_I_I_O_x_0062a7ba
//   TerminatedCString s_No_Hi_A_0A_G_V_0062a7d2
//   TerminatedCString s_s_2_00pm_21_000_isn_t_Uh_0062a7f3
//   TerminatedCString s_One_newline_Two_newlines_0062a810
//   TerminatedCString s_Here_is_a_newline_Next_l_0062a844
//   TerminatedCString s_CART_Precision_Racing_v1_0067b568
//   undefined4 s_Precision_Racing_v1_00_0067b56c
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   undefined4 DAT_54524143
// Function calls:
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  byte bVar9;
  CBitFont *pCVar10;
  
  bVar9 = 0;
  iVar7 = 0x20;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar5 = 10;
  iVar1 = this_ptr->max_char_width + this_ptr->line_spacing;
  iVar3 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar5,iVar3,1,-1);
    iVar5 = iVar5 + this_ptr->max_char_height;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + iVar5 + this_ptr->max_char_height)) {
      iVar5 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x7f);
  iVar5 = 10;
  iVar3 = iVar3 + iVar1;
  iVar7 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar5,iVar3,1,-1);
    iVar5 = iVar5 + iVar2;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + this_ptr->max_char_height + iVar5)) {
      iVar5 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x7f);
  iVar3 = iVar3 + iVar1 + 10;
  engine_2d_c_fillRectColor_FUN_00403170
            (0,iVar3,screen_height + -1,this_ptr->max_char_width * 3 + iVar3 + 8,1);
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,"one",10,iVar3,6,-1);
  iVar5 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_BackspaceChar_0062a766,iVar1 + 10,iVar3,6,-1);
  iVar5 = iVar1 + 10 + iVar5;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"two",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_FormFeedChar_0062a76c,iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"three",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"\t",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"four",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"  ",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar5,iVar3,6,-1);
  iVar3 = iVar3 + iVar5;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar3,6,-1);
  pCVar10 = this_ptr;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"{0A,1B} ~1 O<<I I|O &x;",iVar1 + 10,iVar3,6,-1);
  pcVar4 = pCVar10->bitmap_files[0] + iVar3 + -4;
  iVar3 = 0x4d06d9;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,(int)pcVar4,6,-1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"2:00pm  21,000  isn't  Uh,..",iVar1 + 10,(int)pcVar4,6,-1);
  pcVar4 = pcVar4 + iVar3 * 2;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,(int)pcVar4,6,-1);
  pCVar10 = (CBitFont *)0x82;
  pcVar6 = "CART Precision Racing v1.00";
  puVar8 = (undefined4 *)&stack0xffffffd0;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (pCVar10,&stack0xffffffd0,0x82,(int)pcVar4,0xf8,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,(char *)&stack0xffffffd0,0x82,(int)pcVar4,0xf9,0);
  pcVar4 = pcVar4 + iVar3;
  iVar1 = iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfa,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfb,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfc,0);
  pcVar4 = pcVar4 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfd,0);
  pcVar4 = pcVar4 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfe,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)0x4d079b,&stack0xffffffd0,0x82,(int)(pcVar4 + iVar1),0xff,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)0x4d079b,"Here is a newline:\nNext line!!\nAnd again!!",0x82,
             (int)(pcVar4 + iVar1 + iVar1),0xff,0);
  return;
}


// Assembly code:
// 004d04b0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// 004d04b1: PUSH ESI
// 004d04b2: PUSH EDI
// 004d04b3: PUSH EBP
// 004d04b4: MOV EBP,ESP
// 004d04b6: SUB ESP,0x20
// 004d04b9: PUSH 0x0
// 004d04bb: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004d04c1: PUSH EDX
// 004d04c2: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004d04c8: PUSH ECX
// 004d04c9: MOV EBX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004d04cf: PUSH EBX
// 004d04d0: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004d04d6: PUSH ESI
// 004d04d7: MOV EDI,0x20
// 004d04dc: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004d04e1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d04e4: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d04e7: MOV ESI,0xa
// 004d04ec: MOV EAX,dword ptr [EAX + 0x316c]
// 004d04f2: MOV EDX,dword ptr [EDX + 0x3178]
// 004d04f8: ADD ESP,0x14
// 004d04fb: ADD EAX,EDX
// 004d04fd: MOV EBX,ESI
// 004d04ff: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d0502: PUSH -0x1
//   Label: LAB_004d0502
// 004d0504: PUSH 0x1
// 004d0506: PUSH EBX
// 004d0507: PUSH ESI
// 004d0508: PUSH EDI
// 004d0509: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d050c: PUSH EAX
// 004d050d: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0512: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0515: MOV EAX,dword ptr [EAX + 0x3168]
// 004d051b: ADD ESI,EAX
// 004d051d: LEA EDX,[ESI + EAX*0x1]
// 004d0520: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0523: MOV EAX,dword ptr [EAX + 0x3174]
// 004d0529: ADD EAX,EDX
// 004d052b: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d052e: ADD ESP,0x18
// 004d0531: CMP EAX,EDX
// 004d0533: JBE 0x004d053f
//   XREF to: 004d053f (CONDITIONAL_JUMP)
// 004d0535: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0538: MOV ESI,0xa
// 004d053d: ADD EBX,ECX
// 004d053f: INC EDI
//   Label: LAB_004d053f
// 004d0540: CMP EDI,0x7e
// 004d0543: JLE 0x004d0502
//   XREF to: 004d0502 (CONDITIONAL_JUMP)
// 004d0545: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0548: MOV ESI,0xa
// 004d054d: ADD EBX,EDI
// 004d054f: XOR EDI,EDI
// 004d0551: PUSH -0x1
//   Label: LAB_004d0551
// 004d0553: PUSH 0x1
// 004d0555: PUSH EBX
// 004d0556: PUSH ESI
// 004d0557: PUSH EDI
// 004d0558: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d055b: PUSH EAX
// 004d055c: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 004d0561: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0564: ADD ESI,EAX
// 004d0566: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0569: MOV EDX,dword ptr [EDX + 0x3168]
// 004d056f: MOV EAX,dword ptr [EAX + 0x3174]
// 004d0575: ADD EDX,ESI
// 004d0577: ADD EAX,EDX
// 004d0579: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d057c: ADD ESP,0x18
// 004d057f: CMP EAX,EDX
// 004d0581: JBE 0x004d058d
//   XREF to: 004d058d (CONDITIONAL_JUMP)
// 004d0583: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0586: MOV ESI,0xa
// 004d058b: ADD EBX,ECX
// 004d058d: INC EDI
//   Label: LAB_004d058d
// 004d058e: CMP EDI,0x7e
// 004d0591: JLE 0x004d0551
//   XREF to: 004d0551 (CONDITIONAL_JUMP)
// 004d0593: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0596: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0599: ADD EAX,0xa
// 004d059c: MOV EDX,dword ptr [EDX + 0x316c]
// 004d05a2: ADD EBX,EAX
// 004d05a4: LEA EAX,[EDX*0x4 + 0x0]
// 004d05ab: SUB EAX,EDX
// 004d05ad: ADD EAX,EBX
// 004d05af: PUSH 0x1
// 004d05b1: ADD EAX,0x8
// 004d05b4: PUSH EAX
// 004d05b5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d05b8: DEC EAX
// 004d05b9: PUSH EAX
// 004d05ba: PUSH EBX
// 004d05bb: PUSH 0x0
// 004d05bd: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004d05c2: ADD ESP,0x14
// 004d05c5: PUSH -0x1
// 004d05c7: PUSH 0x6
// 004d05c9: PUSH EBX
// 004d05ca: PUSH 0xa
// 004d05cc: PUSH 0x62a762
//   XREF to: 0062a762 (DATA)
// 004d05d1: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d05d4: PUSH ESI
// 004d05d5: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d05da: ADD ESP,0x18
// 004d05dd: PUSH -0x1
// 004d05df: PUSH 0x6
// 004d05e1: PUSH EBX
// 004d05e2: LEA ESI,[EAX + 0xa]
// 004d05e5: PUSH ESI
// 004d05e6: PUSH 0x62a766
//   XREF to: 0062a766 (DATA)
// 004d05eb: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d05ee: PUSH EDI
// 004d05ef: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d05f4: ADD ESP,0x18
// 004d05f7: PUSH -0x1
// 004d05f9: PUSH 0x6
// 004d05fb: PUSH EBX
// 004d05fc: ADD ESI,EAX
// 004d05fe: PUSH ESI
// 004d05ff: PUSH 0x62a768
//   XREF to: 0062a768 (DATA)
// 004d0604: PUSH EDI
// 004d0605: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d060a: ADD ESP,0x18
// 004d060d: PUSH -0x1
// 004d060f: PUSH 0x6
// 004d0611: PUSH EBX
// 004d0612: ADD ESI,EAX
// 004d0614: PUSH ESI
// 004d0615: PUSH 0x62a76c
//   XREF to: 0062a76c (DATA)
// 004d061a: PUSH EDI
// 004d061b: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0620: ADD ESP,0x18
// 004d0623: PUSH -0x1
// 004d0625: PUSH 0x6
// 004d0627: PUSH EBX
// 004d0628: ADD ESI,EAX
// 004d062a: PUSH ESI
// 004d062b: PUSH 0x62a76e
//   XREF to: 0062a76e (DATA)
// 004d0630: PUSH EDI
// 004d0631: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0636: ADD ESP,0x18
// 004d0639: PUSH -0x1
// 004d063b: PUSH 0x6
// 004d063d: PUSH EBX
// 004d063e: ADD ESI,EAX
// 004d0640: PUSH ESI
// 004d0641: PUSH 0x62a774
//   XREF to: 0062a774 (DATA)
// 004d0646: PUSH EDI
// 004d0647: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d064c: ADD ESP,0x18
// 004d064f: ADD ESI,EAX
// 004d0651: PUSH -0x1
// 004d0653: PUSH 0x6
// 004d0655: PUSH EBX
// 004d0656: PUSH ESI
// 004d0657: PUSH 0x62a776
//   XREF to: 0062a776 (DATA)
// 004d065c: PUSH EDI
// 004d065d: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0662: ADD ESP,0x18
// 004d0665: PUSH -0x1
// 004d0667: PUSH 0x6
// 004d0669: PUSH EBX
// 004d066a: ADD ESI,EAX
// 004d066c: PUSH ESI
// 004d066d: PUSH 0x62a77b
//   XREF to: 0062a77b (DATA)
// 004d0672: PUSH EDI
// 004d0673: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0678: ADD ESP,0x18
// 004d067b: PUSH -0x1
// 004d067d: PUSH 0x6
// 004d067f: PUSH EBX
// 004d0680: ADD ESI,EAX
// 004d0682: PUSH ESI
// 004d0683: PUSH 0x62a77e
//   XREF to: 0062a77e (DATA)
// 004d0688: PUSH EDI
// 004d0689: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d068e: ADD ESP,0x18
// 004d0691: PUSH -0x1
// 004d0693: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0696: PUSH 0x6
// 004d0698: ADD EBX,ESI
// 004d069a: PUSH EBX
// 004d069b: PUSH 0xa
// 004d069d: PUSH 0x62a79c
//   XREF to: 0062a79c (DATA)
// 004d06a2: PUSH EDI
// 004d06a3: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d06a8: ADD ESP,0x18
// 004d06ab: PUSH -0x1
// 004d06ad: PUSH 0x6
// 004d06af: PUSH EBX
// 004d06b0: LEA ESI,[EAX + 0xa]
// 004d06b3: PUSH ESI
// 004d06b4: PUSH 0x62a7ba
//   XREF to: 0062a7ba (DATA)
// 004d06b9: PUSH EDI
// 004d06ba: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d06bf: ADD ESP,0x18
// 004d06c2: PUSH -0x1
// 004d06c4: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d06c7: PUSH 0x6
// 004d06c9: ADD EBX,EDX
// 004d06cb: PUSH EBX
// 004d06cc: PUSH 0xa
// 004d06ce: PUSH 0x62a7d2
//   XREF to: 0062a7d2 (DATA)
// 004d06d3: PUSH EDI
// 004d06d4: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d06d9: ADD ESP,0x18
// 004d06dc: PUSH -0x1
// 004d06de: PUSH 0x6
// 004d06e0: PUSH EBX
// 004d06e1: LEA ESI,[EAX + 0xa]
// 004d06e4: PUSH ESI
// 004d06e5: PUSH 0x62a7f3
//   XREF to: 0062a7f3 (DATA)
// 004d06ea: PUSH EDI
// 004d06eb: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d06f0: ADD ESP,0x18
// 004d06f3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d06f6: PUSH -0x1
// 004d06f8: ADD EAX,EAX
// 004d06fa: PUSH 0x6
// 004d06fc: ADD EBX,EAX
// 004d06fe: PUSH EBX
// 004d06ff: PUSH 0x1c2
// 004d0704: PUSH 0x62a810
//   XREF to: 0062a810 (DATA)
// 004d0709: PUSH EDI
// 004d070a: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d070f: ADD ESP,0x18
// 004d0712: PUSH 0x0
// 004d0714: PUSH 0xf8
// 004d0719: PUSH EBX
// 004d071a: MOV ESI,0x67b568
//   XREF to: 0067b568 (DATA)
// 004d071f: PUSH 0x82
// 004d0724: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d0727: MOV ECX,0x7
// 004d072c: PUSH EAX
// 004d072d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0730: LEA EDI,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d0733: PUSH EAX
// 004d0734: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067b568 (READ)
//   XREF to: 54524143 (DATA)
//   XREF to: 0067b56c (READ)
// 004d0736: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d073b: ADD ESP,0x18
// 004d073e: PUSH 0x0
// 004d0740: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0743: PUSH 0xf9
// 004d0748: ADD EBX,EDX
// 004d074a: PUSH EBX
// 004d074b: PUSH 0x82
// 004d0750: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d0753: PUSH EAX
// 004d0754: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0757: PUSH ECX
// 004d0758: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d075d: ADD ESP,0x18
// 004d0760: PUSH 0x0
// 004d0762: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d0765: PUSH 0xfa
// 004d076a: ADD EBX,ESI
// 004d076c: PUSH EBX
// 004d076d: PUSH 0x82
// 004d0772: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d0775: PUSH EAX
// 004d0776: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0779: PUSH EDI
// 004d077a: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d077f: ADD ESP,0x18
// 004d0782: PUSH 0x0
// 004d0784: PUSH 0xfb
// 004d0789: ADD EBX,ESI
// 004d078b: PUSH EBX
// 004d078c: PUSH 0x82
// 004d0791: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d0794: PUSH EAX
// 004d0795: PUSH EDI
// 004d0796: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d079b: ADD ESP,0x18
// 004d079e: PUSH 0x0
// 004d07a0: PUSH 0xfc
// 004d07a5: ADD EBX,ESI
// 004d07a7: PUSH EBX
// 004d07a8: PUSH 0x82
// 004d07ad: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d07b0: PUSH EAX
// 004d07b1: PUSH EDI
// 004d07b2: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d07b7: ADD ESP,0x18
// 004d07ba: PUSH 0x0
// 004d07bc: MOV ESI,EDI
// 004d07be: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d07c1: PUSH 0xfd
// 004d07c6: ADD EBX,EDI
// 004d07c8: PUSH EBX
// 004d07c9: PUSH 0x82
// 004d07ce: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d07d1: PUSH EAX
// 004d07d2: MOV EAX,ESI
// 004d07d4: PUSH EAX
// 004d07d5: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d07da: ADD ESP,0x18
// 004d07dd: PUSH 0x0
// 004d07df: PUSH 0xfe
// 004d07e4: ADD EBX,EDI
// 004d07e6: PUSH EBX
// 004d07e7: PUSH 0x82
// 004d07ec: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d07ef: PUSH EAX
// 004d07f0: MOV ECX,ESI
// 004d07f2: PUSH ECX
// 004d07f3: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d07f8: ADD ESP,0x18
// 004d07fb: PUSH 0x0
// 004d07fd: PUSH 0xff
// 004d0802: ADD EBX,EDI
// 004d0804: PUSH EBX
// 004d0805: PUSH 0x82
// 004d080a: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004d080d: PUSH EAX
// 004d080e: MOV ESI,EDI
// 004d0810: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d0813: PUSH EDI
// 004d0814: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0819: ADD ESP,0x18
// 004d081c: PUSH 0x0
// 004d081e: MOV EAX,ESI
// 004d0820: PUSH 0xff
// 004d0825: ADD EBX,EAX
// 004d0827: PUSH EBX
// 004d0828: PUSH 0x82
// 004d082d: PUSH 0x62a844
//   XREF to: 0062a844 (DATA)
// 004d0832: PUSH EDI
// 004d0833: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d0838: ADD ESP,0x18
// 004d083b: MOV ESP,EBP
// 004d083d: POP EBP
// 004d083e: POP EDI
// 004d083f: POP ESI
// 004d0840: POP EBX
// 004d0841: RET
