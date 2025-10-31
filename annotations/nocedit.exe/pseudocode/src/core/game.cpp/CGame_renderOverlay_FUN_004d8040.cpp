// Name: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
// Address Range: [[004d8040, 004d8590]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_renderOverlay_FUN_004d8040(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da56d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_s_0062b265
//   double g_AlphaConversionFactor = 65535
//   double g_StatusThresholdHigh = 0.600000000000000
//   double g_StatusThresholdLow = 0.350000000000000
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CScript* g_CScriptPtr = 0310f858
//   CBitFont* g_MediumFont
//   CBitFont* g_TinyFont
//   CBitFont* g_ThemeFont
//   CBitFont* g_SmallEditorFont
//   char* g_WrappedTextBuffer
//   undefined4 DAT_02d7b9e0
//   undefined1 DAT_02d830a8
//   char* g_CurrentDisplayText
//   float g_OverlayDisplayTimer
//   CScript g_CScriptInstance
//   undefined4 g_ScreenHeightForFonts
// Function calls:
//   core_script.cpp_FUN_00559ac0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBitFont *pCVar5;
  int iVar6;
  char *text_string;
  int iVar7;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  char **text;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float fStack_14c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  CBitFont *local_34;
  CBitFont *local_30;
  CBitFont *local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_14;
  
  if (ABS(this_ptr->message_timer) != 0.0) {
    fVar1 = this_ptr->message_timer;
    if (1.0 < fVar1 || (fVar1 == 1.0) != 0) {
      iVar2 = 0xffff;
    }
    else {
      fVar8 = (float10)fVar1 * (float10)g_AlphaConversionFactor;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44(in_EDX,CONCAT22((short)((uint)this_ptr >> 0x10),
                                                  (ushort)(1.0 < fVar1) << 8 |
                                                  (ushort)NAN(fVar1) << 10 |
                                                  (ushort)(fVar1 == 1.0) << 0xe)));
      iVar2 = (int)ROUND(fVar8);
      local_14 = iVar2;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(iVar2);
    local_34 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_34 = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_34,this_ptr->message_text,(char *)&g_WrappedTextBuffer,10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    local_48 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_30,0x58);
    iVar2 = g_WindowHeight - iVar2 * local_48;
    iVar3 = core_script_cpp_FUN_00559ac0();
    iVar2 = (iVar2 - iVar3) - local_48;
    if (g_SmallEditorFont == local_28) {
      iVar2 = iVar2 + -7;
    }
    iVar4 = 0;
    iVar3 = g_WindowWidth + -1;
    if (0 < local_38) {
      text = &g_WrappedTextBuffer;
      do {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_28,(char *)text);
        iVar4 = iVar4 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (local_24,(char *)text,(local_38 - iVar7) / 2,iVar2,0xf8,0);
        text = text + 0x40;
        iVar2 = iVar2 + iVar3;
      } while (iVar4 < (int)local_30);
    }
  }
  if (0.0 < g_OverlayDisplayTimer) {
    pCVar5 = g_MediumFont;
    if ((g_WindowHeight < 0x1e0) && (pCVar5 = g_TinyFont, g_WindowHeight < 0x180)) {
      pCVar5 = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar5,0x58);
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(pCVar5,0x58);
    core_script_cpp_FUN_00559ac0();
    iVar4 = core_script_cpp_FUN_00559ac0();
    iVar4 = g_WindowHeight - iVar4;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea4,"%d - %s",g_CurrentDisplayText);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (pCVar5,&stack0xfffffea8,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    local_30 = g_SmallEditorFont;
    if (0x280 < g_WindowWidth) {
      local_30 = g_TinyFont;
    }
    if (800 < g_WindowWidth) {
      local_30 = g_MediumFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_30,0x58);
    if ((int)local_30 < iVar2) {
      local_2c = (CBitFont *)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_2c,0x58);
    }
    iVar2 = local_48 / 0x50;
    iVar3 = local_4c - local_44 / 0x50;
    if (0 < this_ptr->status_display_count) {
      do {
        pCVar5 = (CBitFont *)(iVar3 - (int)local_2c);
        iVar4 = 2;
        if (*(float *)(this_ptr->field101_0x38c + 0x500) < (float)g_StatusThresholdHigh) {
          iVar4 = 0xfb;
        }
        if (*(float *)(this_ptr->field101_0x38c + 0x500) < (float)g_StatusThresholdLow) {
          iVar4 = 1;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (iVar2,(int)pCVar5,
                   iVar2 + ((int)((local_50 + (local_50 >> 0x1f) * -4) -
                                 (uint)((local_50 >> 0x1f) << 1 < 0)) >> 2),iVar3,0,0);
        iVar6 = iVar3 - iVar2;
        text_string = (char *)(iVar6 + 1);
        fVar8 = (float10)(int)text_string * (float10)fStack_14c;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,text_string));
        iVar7 = (int)ROUND(fVar8);
        if (0 < iVar7) {
          engine_2d_c_fillRectColor_FUN_00403170
                    (iVar2,local_14,iVar7 + iVar2,(int)this_ptr->field101_0x38c,iVar4);
        }
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (pCVar5,text_string,(int)pCVar5,iVar7,0xf8,0);
        iVar3 = iVar3 - (int)local_28;
      } while (iVar6 + 2 < this_ptr->status_display_count);
    }
  }
  return;
}


// Assembly code:
// 004d8040: PUSH EBX
//   Label: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// 004d8041: PUSH ESI
// 004d8042: PUSH EDI
// 004d8043: PUSH EBP
// 004d8044: MOV EBP,ESP
// 004d8046: SUB ESP,0x160
// 004d804c: AND ESP,0xfffffff8
// 004d804f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d8054: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004d805b: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d8060: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004d8067: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004d806e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d8071: TEST dword ptr [EAX + 0x384],0x7fffffff
// 004d807b: JNZ 0x004d83fd
//   XREF to: 004d83fd (CONDITIONAL_JUMP)
// 004d8081: LEA EAX,[EAX]
// 004d8087: LEA EDX,[EDX]
// 004d808d: LEA EAX,[EAX]
// 004d8090: FLD float ptr [0x02d831ac]
//   Label: LAB_004d8090
//   XREF to: 02d831ac (READ)
// 004d8096: FLDZ
// 004d8098: FCOMPP
// 004d809a: FNSTSW AX
// 004d809c: SAHF
// 004d809d: JNC 0x004d8156
//   XREF to: 004d8156 (CONDITIONAL_JUMP)
// 004d80a3: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d80a9: MOV EBX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 004d80af: CMP EDX,0x1e0
// 004d80b5: JGE 0x004d80cb
//   XREF to: 004d80cb (CONDITIONAL_JUMP)
// 004d80b7: MOV EBX,dword ptr [0x020a571c]
//   XREF to: 020a571c (READ)
// 004d80bd: CMP EDX,0x180
// 004d80c3: JGE 0x004d80cb
//   XREF to: 004d80cb (CONDITIONAL_JUMP)
// 004d80c5: MOV EBX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 004d80cb: PUSH 0x58
//   Label: LAB_004d80cb
// 004d80cd: PUSH EBX
// 004d80ce: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d80d3: ADD ESP,0x8
// 004d80d6: PUSH 0x58
// 004d80d8: PUSH EBX
// 004d80d9: MOV EDI,EAX
// 004d80db: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 004d80e0: ADD ESP,0x8
// 004d80e3: MOV ESI,EAX
// 004d80e5: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004d80ea: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 004d80eb: CALL core_script.cpp_FUN_00559ac0
//   XREF to: 00559ac0 (UNCONDITIONAL_CALL)
// 004d80f0: ADD ESP,0x4
// 004d80f3: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004d80f9: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 004d80fa: CALL core_script.cpp_FUN_00559ac0
//   XREF to: 00559ac0 (UNCONDITIONAL_CALL)
// 004d80ff: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8105: SUB EDX,EAX
// 004d8107: MOV EAX,EDX
// 004d8109: ADD ESP,0x4
// 004d810c: SUB EAX,EDI
// 004d810e: PUSH 0xffff
// 004d8113: MOV EDI,EAX
// 004d8115: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004d811a: ADD ESP,0x4
// 004d811d: PUSH 0x2d830a8
//   XREF to: 02d830a8 (DATA)
// 004d8122: MOV ECX,dword ptr [0x02d831a8]
//   XREF to: 02d831a8 (READ)
// 004d8128: PUSH ECX
// 004d8129: PUSH 0x62b265
//   XREF to: 0062b265 (DATA)
// 004d812e: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x164] (DATA)
// 004d8132: PUSH EAX
// 004d8133: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d8138: ADD ESP,0x10
// 004d813b: PUSH 0x0
// 004d813d: PUSH 0xf8
// 004d8142: SUB EDI,ESI
// 004d8144: PUSH EDI
// 004d8145: ADD ESI,ESI
// 004d8147: PUSH ESI
// 004d8148: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x164] (DATA)
// 004d814c: PUSH EAX
// 004d814d: PUSH EBX
// 004d814e: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8153: ADD ESP,0x18
// 004d8156: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004d8156
//   XREF to: Stack[0x4] (READ)
// 004d8159: CMP dword ptr [EAX + 0x228],0x0
// 004d8160: JNZ 0x004d83f6
//   XREF to: 004d83f6 (CONDITIONAL_JUMP)
// 004d8166: CMP dword ptr [EAX + 0x388],0x0
// 004d816d: JLE 0x004d83f6
//   XREF to: 004d83f6 (CONDITIONAL_JUMP)
// 004d8173: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x60] (READ)
// 004d817a: MOV EDX,EAX
// 004d817c: SAR EDX,0x1f
// 004d817f: SHL EDX,0x2
// 004d8182: SBB EAX,EDX
// 004d8184: SAR EAX,0x2
// 004d8187: MOV EBX,EAX
// 004d8189: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x5c] (READ)
// 004d8190: MOV EDX,EAX
// 004d8192: MOV ESI,0x28
// 004d8197: SAR EDX,0x1f
// 004d819a: IDIV ESI
// 004d819c: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004d81a3: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 004d81a8: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d81ae: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004d81b5: CMP EDI,0x280
// 004d81bb: JG 0x004d8580
//   XREF to: 004d8580 (CONDITIONAL_JUMP)
// 004d81c1: CMP dword ptr [0x00679394],0x320
//   Label: LAB_004d81c1
//   XREF to: 00679394 (READ)
// 004d81cb: JLE 0x004d81d9
//   XREF to: 004d81d9 (CONDITIONAL_JUMP)
// 004d81cd: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 004d81d2: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004d81d9: PUSH 0x58
//   Label: LAB_004d81d9
// 004d81db: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 004d81e2: PUSH EDX
// 004d81e3: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d81e8: ADD ESP,0x8
// 004d81eb: CMP EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x44] (READ)
// 004d81f2: JLE 0x004d820d
//   XREF to: 004d820d (CONDITIONAL_JUMP)
// 004d81f4: PUSH 0x58
// 004d81f6: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 004d81fd: PUSH ESI
// 004d81fe: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d8203: ADD ESP,0x8
// 004d8206: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004d820d: MOV EAX,dword ptr [ESP + 0x110]
//   Label: LAB_004d820d
//   XREF to: Stack[-0x60] (READ)
// 004d8214: MOV EDX,EAX
// 004d8216: MOV ESI,0x50
// 004d821b: SAR EDX,0x1f
// 004d821e: IDIV ESI
// 004d8220: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004d8227: ADD EAX,EBX
// 004d8229: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004d8230: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x5c] (READ)
// 004d8237: MOV EDX,EAX
// 004d8239: SAR EDX,0x1f
// 004d823c: IDIV ESI
// 004d823e: MOV ESI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x64] (READ)
// 004d8245: SUB ESI,EAX
// 004d8247: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d824a: XOR EDI,EDI
// 004d824c: MOV EDX,dword ptr [EAX + 0x388]
// 004d8252: MOV dword ptr [ESP + 0x150],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004d8259: TEST EDX,EDX
// 004d825b: JLE 0x004d83f6
//   XREF to: 004d83f6 (CONDITIONAL_JUMP)
// 004d8261: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x44] (READ)
// 004d8268: LEA EBX,[EAX + 0x38c]
// 004d826e: LEA EAX,[EDX*0x4 + 0x0]
// 004d8275: SUB EAX,EDX
// 004d8277: MOV EDX,EAX
// 004d8279: SAR EDX,0x1f
// 004d827c: SUB EAX,EDX
// 004d827e: SAR EAX,0x1
// 004d8280: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004d8287: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d828a: MOV dword ptr [ESP + 0x154],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d8291: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d8298: MOV EBX,dword ptr [ESP + 0x12c]
//   Label: LAB_004d8298
//   XREF to: Stack[-0x44] (READ)
// 004d829f: MOV EAX,ESI
// 004d82a1: SUB EAX,EBX
// 004d82a3: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d82aa: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004d82b1: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x58] (READ)
// 004d82b8: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004d82bf: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 004d82c6: MOV EDI,0x2
// 004d82cb: MOV EAX,dword ptr [EAX + 0x88c]
// 004d82d1: MOV dword ptr [ESP + 0x14c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004d82d8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 004d82dc: MOV EBX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x3c] (READ)
// 004d82e3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x168] (READ)
// 004d82e7: FCOMP double ptr [0x0062b275]
//   XREF to: 0062b275 (READ)
// 004d82ed: FNSTSW AX
// 004d82ef: SAHF
// 004d82f0: JNC 0x004d82f7
//   XREF to: 004d82f7 (CONDITIONAL_JUMP)
// 004d82f2: MOV EDI,0xfb
// 004d82f7: FLD float ptr [ESP + 0x8]
//   Label: LAB_004d82f7
//   XREF to: Stack[-0x168] (READ)
// 004d82fb: FCOMP double ptr [0x0062b27d]
//   XREF to: 0062b27d (READ)
// 004d8301: FNSTSW AX
// 004d8303: SAHF
// 004d8304: JNC 0x004d830b
//   XREF to: 004d830b (CONDITIONAL_JUMP)
// 004d8306: MOV EDI,0x1
// 004d830b: PUSH 0x0
//   Label: LAB_004d830b
// 004d830d: PUSH 0x0
// 004d830f: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x24] (READ)
// 004d8316: PUSH EAX
// 004d8317: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x28] (READ)
// 004d831e: PUSH EDX
// 004d831f: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x34] (READ)
// 004d8326: PUSH ECX
// 004d8327: PUSH EBX
// 004d8328: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 004d832d: ADD ESP,0x18
// 004d8330: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x28] (READ)
// 004d8337: SUB EAX,EBX
// 004d8339: INC EAX
// 004d833a: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d8341: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 004d8348: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x168] (READ)
// 004d834c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d8351: FISTP dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x2c] (WRITE)
// 004d8358: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x2c] (READ)
// 004d835f: TEST EAX,EAX
// 004d8361: JLE 0x004d8380
//   XREF to: 004d8380 (CONDITIONAL_JUMP)
// 004d8363: PUSH EDI
// 004d8364: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x24] (READ)
// 004d836b: PUSH EDX
// 004d836c: ADD EAX,EBX
// 004d836e: PUSH EAX
// 004d836f: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x34] (READ)
// 004d8376: PUSH ECX
// 004d8377: PUSH EBX
// 004d8378: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004d837d: ADD ESP,0x14
// 004d8380: PUSH 0x0
//   Label: LAB_004d8380
// 004d8382: PUSH 0xf8
// 004d8387: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x30] (READ)
// 004d838e: PUSH ECX
// 004d838f: MOV EBX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x3c] (READ)
// 004d8396: PUSH EBX
// 004d8397: MOV EDI,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x1c] (READ)
// 004d839e: PUSH EDI
// 004d839f: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x40] (READ)
// 004d83a6: PUSH EAX
// 004d83a7: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d83ac: ADD ESP,0x18
// 004d83af: LEA EBX,[EDI + 0x100]
// 004d83b5: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x50] (READ)
// 004d83bc: MOV ECX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 004d83c3: MOV EDI,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x20] (READ)
// 004d83ca: MOV dword ptr [ESP + 0x154],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d83d1: ADD ECX,0x4
// 004d83d4: SUB ESI,EDX
// 004d83d6: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d83d9: INC EDI
// 004d83da: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004d83e1: MOV ECX,dword ptr [EDX + 0x388]
// 004d83e7: MOV dword ptr [ESP + 0x150],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004d83ee: CMP EDI,ECX
// 004d83f0: JL 0x004d8298
//   XREF to: 004d8298 (CONDITIONAL_JUMP)
// 004d83f6: MOV ESP,EBP
//   Label: LAB_004d83f6
// 004d83f8: POP EBP
// 004d83f9: POP EDI
// 004d83fa: POP ESI
// 004d83fb: POP EBX
// 004d83fc: RET
// 004d83fd: FLD1
//   Label: LAB_004d83fd
// 004d83ff: FLD float ptr [EAX + 0x384]
// 004d8405: FSTP double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 004d8408: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 004d840b: FNSTSW AX
// 004d840d: SAHF
// 004d840e: JBE 0x004d8576
//   XREF to: 004d8576 (CONDITIONAL_JUMP)
// 004d8414: FLD double ptr [ESP]
//   XREF to: Stack[-0x170] (DATA)
// 004d8417: FMUL double ptr [0x0062b26d]
//   XREF to: 0062b26d (READ)
// 004d841d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d8422: FISTP dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (WRITE)
// 004d8429: MOV ECX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 004d8430: PUSH ECX
// 004d8431: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   Label: LAB_004d8431
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004d8436: ADD ESP,0x4
// 004d8439: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d843e: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004d8445: MOV EAX,[0x03275a28]
//   XREF to: 03275a28 (READ)
// 004d844a: CMP EAX,0x1e0
// 004d844f: JGE 0x004d845d
//   XREF to: 004d845d (CONDITIONAL_JUMP)
// 004d8451: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 004d8456: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004d845d: MOV EDX,dword ptr [0x03275a28]
//   Label: LAB_004d845d
//   XREF to: 03275a28 (READ)
// 004d8463: LEA EAX,[EDX*0x8 + 0x0]
// 004d846a: ADD EDX,EAX
// 004d846c: MOV EBX,0xa
// 004d8471: MOV EAX,EDX
// 004d8473: SAR EDX,0x1f
// 004d8476: IDIV EBX
// 004d8478: PUSH EAX
// 004d8479: PUSH 0x100
// 004d847e: PUSH EBX
// 004d847f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d8482: PUSH 0x2d7b8e0
//   XREF to: 02d7b8e0 (DATA)
// 004d8487: ADD EAX,0x284
// 004d848c: PUSH EAX
// 004d848d: MOV EBX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x38] (READ)
// 004d8494: PUSH EBX
// 004d8495: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 004d849a: ADD ESP,0x18
// 004d849d: PUSH 0x58
// 004d849f: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x38] (READ)
// 004d84a6: PUSH ESI
// 004d84a7: MOV EBX,EAX
// 004d84a9: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004d84b0: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d84b5: IMUL EBX,EAX
// 004d84b8: ADD ESP,0x8
// 004d84bb: MOV ESI,EAX
// 004d84bd: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004d84c4: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d84c9: MOV EDI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 004d84cf: SUB EAX,EBX
// 004d84d1: PUSH EDI
//   XREF to: 0310f858 (DATA)
// 004d84d2: MOV EBX,EAX
// 004d84d4: CALL core_script.cpp_FUN_00559ac0
//   XREF to: 00559ac0 (UNCONDITIONAL_CALL)
// 004d84d9: SUB EBX,EAX
// 004d84db: MOV EAX,EBX
// 004d84dd: MOV EDX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 004d84e3: SUB EAX,ESI
// 004d84e5: ADD ESP,0x4
// 004d84e8: MOV ESI,EAX
// 004d84ea: CMP EDX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 004d84f1: JNZ 0x004d84f6
//   XREF to: 004d84f6 (CONDITIONAL_JUMP)
// 004d84f3: SUB ESI,0x7
// 004d84f6: MOV ECX,dword ptr [ESP + 0x128]
//   Label: LAB_004d84f6
//   XREF to: Stack[-0x48] (READ)
// 004d84fd: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d8502: XOR EDI,EDI
// 004d8504: DEC EAX
// 004d8505: TEST ECX,ECX
// 004d8507: JLE 0x004d8090
//   XREF to: 004d8090 (CONDITIONAL_JUMP)
// 004d850d: MOV EBX,0x2d7b8e0
//   XREF to: 02d7b8e0 (PARAM)
// 004d8512: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004d8519: PUSH EBX
//   Label: LAB_004d8519
//   XREF to: 02d7b8e0 (DATA)
//   XREF to: 02d7b9e0 (DATA)
// 004d851a: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x38] (READ)
// 004d8521: PUSH EAX
// 004d8522: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004d8527: ADD ESP,0x8
// 004d852a: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x4c] (READ)
// 004d8531: SUB EDX,EAX
// 004d8533: MOV EAX,EDX
// 004d8535: SAR EDX,0x1f
// 004d8538: SUB EAX,EDX
// 004d853a: SAR EAX,0x1
// 004d853c: PUSH 0x0
// 004d853e: PUSH 0xf8
// 004d8543: PUSH ESI
// 004d8544: PUSH EAX
// 004d8545: PUSH EBX
//   XREF to: 02d7b8e0 (DATA)
// 004d8546: MOV EDX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x38] (READ)
// 004d854d: PUSH EDX
// 004d854e: INC EDI
// 004d854f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8554: ADD ESP,0x18
// 004d8557: ADD EBX,0x100
// 004d855d: MOV ECX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x54] (READ)
// 004d8564: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x48] (READ)
// 004d856b: ADD ESI,ECX
// 004d856d: CMP EDI,EAX
// 004d856f: JL 0x004d8519
//   XREF to: 004d8519 (CONDITIONAL_JUMP)
// 004d8571: JMP 0x004d8090
//   XREF to: 004d8090 (UNCONDITIONAL_JUMP)
// 004d8576: PUSH 0xffff
//   Label: LAB_004d8576
// 004d857b: JMP 0x004d8431
//   XREF to: 004d8431 (UNCONDITIONAL_JUMP)
// 004d8580: MOV EAX,[0x020a571c]
//   Label: LAB_004d8580
//   XREF to: 020a571c (READ)
// 004d8585: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004d858c: JMP 0x004d81c1
//   XREF to: 004d81c1 (UNCONDITIONAL_JUMP)
