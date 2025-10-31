// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
// Address: 00489120
// Address Range: [[00489120, 004893e5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text, int alignment_mode)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730 (00489730) at 0048974c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 (004899c0) at 004899e4 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 (004898e0) at 00489900 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 (00489800) at 00489820 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590 (00489590) at 004895ac [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660 (00489660) at 0048967c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 (004894c0) at 004894dc [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 (004893f0) at 0048940c [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004890d4 = 004891dd
//   void* switchdataD_004890f4 = 00489336
//   int g_CurrentDrawColor
//   int g_PaletteColorIndex
//   CBitFont* g_CurrentFont
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_disableTextWrap_FUN_00402820
//   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
//   engine_2d.c_drawTextCenteredColor_FUN_004026c0
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_drawTextRightAlignedColor_FUN_00402530
//   engine_2d.c_getTextColor_FUN_00402830
//   engine_2d.c_getTextWrapEnabled_FUN_004027f0
//   engine_2d.c_setTextColor_FUN_00402840
//   engine_2d.c_setTextWrapEnabled_FUN_00402800
//   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   engine_font.cpp_getDefaultTextColor_FUN_004ce220
//   engine_font.cpp_setDefaultTextColor_FUN_004ce230

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text,int alignment_mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int color;
  
  iVar4 = g_ClipBottom;
  iVar3 = g_ClipRight;
  iVar2 = g_ClipTop;
  iVar1 = g_ClipLeft;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  if (g_CurrentFont == (CBitFont *)0x0) {
    iVar5 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
    color = engine_2d_c_getTextColor_FUN_00402830();
    engine_2d_c_disableTextWrap_FUN_00402820();
    engine_2d_c_setTextColor_FUN_00402840(g_PaletteColorIndex);
    if ((uint)alignment_mode < 8) {
                    /* WARNING: Could not recover jumptable at 0x004893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&switchD_004893e0::switchdataD_004890f4)[alignment_mode])();
      return;
    }
    engine_2d_c_setTextColor_FUN_00402840(color);
    engine_2d_c_setTextWrapEnabled_FUN_00402800(iVar5);
  }
  else {
    iVar5 = engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    engine_font_cpp_setDefaultTextColor_FUN_004ce230(g_CurrentDrawColor);
    if ((uint)alignment_mode < 8) {
                    /* WARNING: Could not recover jumptable at 0x004891d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&switchD_004891d7::switchdataD_004890d4)[alignment_mode])();
      return;
    }
    engine_font_cpp_setDefaultTextColor_FUN_004ce230(iVar5);
  }
  g_ClipLeft = iVar1;
  g_ClipRight = iVar3;
  g_ClipTop = iVar2;
  g_ClipBottom = iVar4;
  return;
}


// Assembly code:
// 00489120: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
// 00489121: PUSH ESI
// 00489122: PUSH EDI
// 00489123: PUSH EBP
// 00489124: SUB ESP,0x20
// 00489127: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0048912b: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0048912f: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 00489133: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00489137: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x18] (READ)
// 0048913b: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 0048913f: MOV EDX,dword ptr [EAX + 0x8]
// 00489142: ADD ECX,EDX
// 00489144: ADD ESI,EDX
// 00489146: MOV EDX,dword ptr [EAX + 0xc]
// 00489149: ADD EBX,EDX
// 0048914b: ADD EBP,EDX
// 0048914d: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00489153: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00489157: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0048915d: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00489161: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00489167: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0048916b: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00489171: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00489175: MOV EDX,dword ptr [EAX + 0x10]
// 00489178: MOV dword ptr [0x02d02558],EDX
//   XREF to: 02d02558 (WRITE)
// 0048917e: MOV EDX,dword ptr [EAX + 0x18]
// 00489181: MOV dword ptr [0x02d02560],EDX
//   XREF to: 02d02560 (WRITE)
// 00489187: MOV EDX,dword ptr [EAX + 0x14]
// 0048918a: MOV EAX,dword ptr [EAX + 0x1c]
// 0048918d: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 00489192: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x1c] (READ)
// 00489196: SHL EAX,0x2
// 00489199: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[0x10] (WRITE)
// 0048919d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004891a1: MOV EAX,[0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 004891a6: MOV dword ptr [0x02d0255c],EDX
//   XREF to: 02d0255c (WRITE)
// 004891ac: TEST EAX,EAX
// 004891ae: JZ 0x004893ab
//   XREF to: 004893ab (CONDITIONAL_JUMP)
// 004891b4: CALL engine_font.cpp_getDefaultTextColor_FUN_004ce220
//   XREF to: 004ce220 (UNCONDITIONAL_CALL)
// 004891b9: MOV ECX,dword ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 004891bf: PUSH ECX
// 004891c0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004891c4: CALL engine_font.cpp_setDefaultTextColor_FUN_004ce230
//   XREF to: 004ce230 (UNCONDITIONAL_CALL)
// 004891c9: ADD ESP,0x4
// 004891cc: CMP dword ptr [ESP + 0x4c],0x7
//   XREF to: Stack[0x1c] (READ)
// 004891d1: JA 0x004891f3
//   XREF to: 004891f3 (CONDITIONAL_JUMP)
// 004891d3: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 004891d7: JMP dword ptr [EAX + 0x4890d4]
//   Label: switchD
//   XREF to: 004891dd (COMPUTED_JUMP)
//   XREF to: 0048922b (COMPUTED_JUMP)
//   XREF to: 00489240 (COMPUTED_JUMP)
//   XREF to: 00489255 (COMPUTED_JUMP)
//   XREF to: 00489278 (COMPUTED_JUMP)
//   XREF to: 004892a1 (COMPUTED_JUMP)
//   XREF to: 004892c1 (COMPUTED_JUMP)
//   XREF to: 004892e9 (COMPUTED_JUMP)
//   XREF to: 004890d4 (DATA)
// 004891dd: PUSH EDI
//   Label: caseD_0
// 004891de: PUSH -0x1
// 004891e0: PUSH -0x3
// 004891e2: PUSH EBX
// 004891e3: PUSH ESI
// 004891e4: MOV EBP,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 004891ea: PUSH EBP
//   Label: LAB_004891ea
// 004891eb: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004891f0: ADD ESP,0x18
//   Label: LAB_004891f0
// 004891f3: MOV EAX,dword ptr [ESP]
//   Label: default
//   XREF to: Stack[-0x30] (DATA)
// 004891f6: PUSH EAX
// 004891f7: CALL engine_font.cpp_setDefaultTextColor_FUN_004ce230
//   XREF to: 004ce230 (UNCONDITIONAL_CALL)
// 004891fc: ADD ESP,0x4
//   Label: LAB_004891fc
// 004891ff: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00489203: MOV [0x02d02558],EAX
//   XREF to: 02d02558 (WRITE)
// 00489208: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0048920c: MOV [0x02d02560],EAX
//   XREF to: 02d02560 (WRITE)
// 00489211: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00489215: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 0048921a: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0048921e: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 00489223: ADD ESP,0x20
// 00489226: POP EBP
// 00489227: POP EDI
// 00489228: POP ESI
// 00489229: POP EBX
// 0048922a: RET
// 0048922b: PUSH EDI
//   Label: caseD_1
// 0048922c: PUSH -0x1
// 0048922e: PUSH -0x3
// 00489230: PUSH EBX
// 00489231: PUSH ESI
// 00489232: MOV EDI,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 00489238: PUSH EDI
// 00489239: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   XREF to: 004cdce0 (UNCONDITIONAL_CALL)
// 0048923e: JMP 0x004891f0
//   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
// 00489240: PUSH EDI
//   Label: caseD_2
// 00489241: PUSH -0x1
// 00489243: PUSH -0x3
// 00489245: PUSH EBX
// 00489246: PUSH ESI
// 00489247: MOV ESI,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 0048924d: PUSH ESI
// 0048924e: CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
// 00489253: JMP 0x004891f0
//   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
// 00489255: MOV EBP,dword ptr [0x02c6d558]
//   Label: caseD_3
//   XREF to: 02c6d558 (READ)
// 0048925b: MOV EDX,dword ptr [EBP + 0x3170]
// 00489261: MOV EAX,EDX
// 00489263: SAR EDX,0x1f
// 00489266: SUB EAX,EDX
// 00489268: SAR EAX,0x1
// 0048926a: PUSH EDI
// 0048926b: PUSH -0x1
// 0048926d: PUSH -0x3
// 0048926f: SUB EBX,EAX
// 00489271: PUSH EBX
// 00489272: PUSH ESI
// 00489273: JMP 0x004891ea
//   XREF to: 004891ea (UNCONDITIONAL_JUMP)
// 00489278: MOV EBP,dword ptr [0x02c6d558]
//   Label: caseD_4
//   XREF to: 02c6d558 (READ)
// 0048927e: MOV EDX,dword ptr [EBP + 0x3170]
// 00489284: MOV EAX,EDX
// 00489286: SAR EDX,0x1f
// 00489289: SUB EAX,EDX
// 0048928b: SAR EAX,0x1
// 0048928d: PUSH EDI
// 0048928e: PUSH -0x1
// 00489290: PUSH -0x3
// 00489292: SUB EBX,EAX
// 00489294: PUSH EBX
// 00489295: PUSH ESI
// 00489296: PUSH EBP
// 00489297: CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
// 0048929c: JMP 0x004891f0
//   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
// 004892a1: PUSH EDI
//   Label: caseD_5
// 004892a2: PUSH -0x1
// 004892a4: PUSH -0x3
// 004892a6: PUSH EBX
// 004892a7: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 004892ab: PUSH ECX
// 004892ac: PUSH ESI
// 004892ad: MOV EBX,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 004892b3: PUSH EBX
// 004892b4: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004892b9: ADD ESP,0x1c
// 004892bc: JMP 0x004891f3
//   XREF to: 004891f3 (UNCONDITIONAL_JUMP)
// 004892c1: ADD EBX,EBP
//   Label: caseD_6
// 004892c3: MOV EBP,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 004892c9: LEA EDX,[EBX + 0x1]
// 004892cc: MOV EAX,dword ptr [EBP + 0x3170]
// 004892d2: SUB EDX,EAX
// 004892d4: MOV EAX,EDX
// 004892d6: SAR EDX,0x1f
// 004892d9: SUB EAX,EDX
// 004892db: SAR EAX,0x1
// 004892dd: PUSH EDI
// 004892de: PUSH -0x1
// 004892e0: PUSH -0x3
// 004892e2: PUSH EAX
// 004892e3: PUSH ESI
// 004892e4: JMP 0x004891ea
//   XREF to: 004891ea (UNCONDITIONAL_JUMP)
// 004892e9: ADD EBX,EBP
//   Label: caseD_7
// 004892eb: MOV EBP,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 004892f1: INC EBX
// 004892f2: MOV EDX,dword ptr [EBP + 0x3170]
// 004892f8: SUB EBX,EDX
// 004892fa: MOV EDX,EBX
// 004892fc: MOV EAX,EBX
// 004892fe: SAR EDX,0x1f
// 00489301: SUB EAX,EDX
// 00489303: SAR EAX,0x1
// 00489305: PUSH EDI
// 00489306: PUSH -0x1
// 00489308: PUSH -0x3
// 0048930a: PUSH EAX
// 0048930b: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 0048930f: PUSH EDX
// 00489310: PUSH ESI
// 00489311: PUSH EBP
// 00489312: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 00489317: ADD ESP,0x1c
// 0048931a: JMP 0x004891f3
//   XREF to: 004891f3 (UNCONDITIONAL_JUMP)
// 0048931f: PUSH EBX
//   Label: caseD_1
// 00489320: PUSH ESI
// 00489321: PUSH EDI
// 00489322: CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530
//   XREF to: 00402530 (UNCONDITIONAL_CALL)
// 00489327: JMP 0x0048933e
//   XREF to: 0048933e (UNCONDITIONAL_JUMP)
// 00489329: PUSH EBX
//   Label: caseD_2
// 0048932a: PUSH ESI
// 0048932b: PUSH EDI
// 0048932c: CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
//   XREF to: 004025f0 (UNCONDITIONAL_CALL)
// 00489331: JMP 0x0048933e
//   XREF to: 0048933e (UNCONDITIONAL_JUMP)
// 00489333: SUB EBX,0x5
//   Label: caseD_3
// 00489336: PUSH EBX
//   Label: caseD_0
// 00489337: PUSH ESI
//   Label: LAB_00489337
// 00489338: PUSH EDI
// 00489339: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 0048933e: ADD ESP,0xc
//   Label: LAB_0048933e
// 00489341: MOV EAX,dword ptr [ESP + 0x18]
//   Label: default
//   XREF to: Stack[-0x18] (READ)
// 00489345: PUSH EAX
// 00489346: CALL engine_2d.c_setTextColor_FUN_00402840
//   XREF to: 00402840 (UNCONDITIONAL_CALL)
// 0048934b: ADD ESP,0x4
// 0048934e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 00489352: PUSH EDX
// 00489353: CALL engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: 00402800 (UNCONDITIONAL_CALL)
// 00489358: JMP 0x004891fc
//   XREF to: 004891fc (UNCONDITIONAL_JUMP)
// 0048935d: SUB EBX,0x5
//   Label: caseD_4
// 00489360: PUSH EBX
// 00489361: PUSH ESI
// 00489362: PUSH EDI
// 00489363: CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
//   XREF to: 004025f0 (UNCONDITIONAL_CALL)
// 00489368: JMP 0x0048933e
//   XREF to: 0048933e (UNCONDITIONAL_JUMP)
// 0048936a: PUSH EBX
//   Label: caseD_5
// 0048936b: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0048936f: PUSH EBP
// 00489370: PUSH ESI
// 00489371: PUSH EDI
// 00489372: CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0
//   XREF to: 004026c0 (UNCONDITIONAL_CALL)
// 00489377: ADD ESP,0x10
// 0048937a: JMP 0x00489341
//   XREF to: 00489341 (UNCONDITIONAL_JUMP)
// 0048937c: LEA EDX,[EBX + EBP*0x1 + -0xa]
//   Label: caseD_6
// 00489380: MOV EAX,EDX
// 00489382: SAR EDX,0x1f
// 00489385: SUB EAX,EDX
// 00489387: SAR EAX,0x1
// 00489389: PUSH EAX
// 0048938a: JMP 0x00489337
//   XREF to: 00489337 (UNCONDITIONAL_JUMP)
// 0048938c: LEA EDX,[EBX + EBP*0x1 + -0xa]
//   Label: caseD_7
// 00489390: MOV EAX,EDX
// 00489392: SAR EDX,0x1f
// 00489395: SUB EAX,EDX
// 00489397: SAR EAX,0x1
// 00489399: PUSH EAX
// 0048939a: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0048939e: PUSH EBX
// 0048939f: PUSH ESI
// 004893a0: PUSH EDI
// 004893a1: CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0
//   XREF to: 004026c0 (UNCONDITIONAL_CALL)
// 004893a6: ADD ESP,0x10
// 004893a9: JMP 0x00489341
//   XREF to: 00489341 (UNCONDITIONAL_JUMP)
// 004893ab: CALL engine_2d.c_getTextWrapEnabled_FUN_004027f0
//   Label: LAB_004893ab
//   XREF to: 004027f0 (UNCONDITIONAL_CALL)
// 004893b0: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004893b4: CALL engine_2d.c_getTextColor_FUN_00402830
//   XREF to: 00402830 (UNCONDITIONAL_CALL)
// 004893b9: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004893bd: CALL engine_2d.c_disableTextWrap_FUN_00402820
//   XREF to: 00402820 (UNCONDITIONAL_CALL)
// 004893c2: MOV EDX,dword ptr [0x02c6d554]
//   XREF to: 02c6d554 (READ)
// 004893c8: PUSH EDX
// 004893c9: CALL engine_2d.c_setTextColor_FUN_00402840
//   XREF to: 00402840 (UNCONDITIONAL_CALL)
// 004893ce: ADD ESP,0x4
// 004893d1: CMP dword ptr [ESP + 0x4c],0x7
//   XREF to: Stack[0x1c] (READ)
// 004893d6: JA 0x00489341
//   XREF to: 00489341 (CONDITIONAL_JUMP)
// 004893dc: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 004893e0: JMP dword ptr [EAX + 0x4890f4]
//   Label: switchD
//   XREF to: 0048931f (COMPUTED_JUMP)
//   XREF to: 00489329 (COMPUTED_JUMP)
//   XREF to: 00489333 (COMPUTED_JUMP)
//   XREF to: 00489336 (COMPUTED_JUMP)
//   XREF to: 0048935d (COMPUTED_JUMP)
//   XREF to: 0048936a (COMPUTED_JUMP)
//   XREF to: 0048937c (COMPUTED_JUMP)
//   XREF to: 0048938c (COMPUTED_JUMP)
//   XREF to: 004890f4 (DATA)
