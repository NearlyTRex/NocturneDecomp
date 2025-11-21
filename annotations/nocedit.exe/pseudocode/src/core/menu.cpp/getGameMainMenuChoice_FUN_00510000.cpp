// Name: core_menu.cpp_getGameMainMenuChoice_FUN_00510000
// Address: 00510000
// Address Range: [[00510000, 0051040d]]
// Convention: __cdecl
// Signature: int core_menu.cpp_getGameMainMenuChoice_FUN_00510000(void)
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511b81 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00511105 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005126a7 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512e42 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513130 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Nocturne_c_1999_Terminal_00636547
//   TerminatedCString s_Nocturne_1999_Terminal_R_00636580
//   undefined4 DAT_006365b6
//   TerminatedCString s_NON_RELEASE_EDITOR_BUILD_006365b8
//   TerminatedCString s_Press_CTRL_D_to_access_t_006365d1
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_ThemeFont
//   CBitFont* g_SmallEditorFont
//   void* g_CKeysPtr
//   CMoon g_CMoonInstance
//   undefined4 DAT_02f26cac
//   int INT_02f26cb8
//   int g_MessageCount
// Function calls:
//   core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl core_menu_cpp_getGameMainMenuChoice_FUN_00510000(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  CBitFont *unaff_EBX;
  CBitFont *unaff_EBP;
  int iVar4;
  undefined4 *unaff_ESI;
  char *pcVar5;
  CBitFont *unaff_EDI;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000030;
  int *in_stack_00000038;
  int in_stack_00000048;
  int *in_stack_0000004c;
  int in_stack_0000005c;
  int *in_stack_00000060;
  int *in_stack_00000074;
  int *in_stack_00000088;
  char *pcVar6;
  int iVar7;
  int in_stack_ffffffdc;
  int in_stack_ffffffe0;
  CBitFont *in_stack_ffffffe4;
  CBitFont *pCVar8;
  
  pCVar8 = g_ThemeFont;
  iVar4 = in_stack_00000010;
  if (in_stack_00000014 != (char *)0x0) {
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,in_stack_00000014,0xa0,in_stack_00000010,7,0);
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar8,0x58);
    iVar4 = in_stack_00000010 + iVar4 * 2;
  }
  pCVar8 = (CBitFont *)0x0;
  if (0 < in_stack_00000010) {
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(unaff_EDI,(char *)*in_stack_0000000c);
      engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(in_stack_ffffffe4,0x58);
      iVar7 = 0xf8;
      if (in_stack_ffffffdc == *in_stack_00000008) {
        iVar1 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance);
        if (iVar1 == 0) {
          in_stack_ffffffdc = 0xff;
        }
        else {
          iVar1 = 0;
          pCVar8 = in_stack_ffffffe4;
          do {
            uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
            uVar3 = crt_stdlib_c_rand_FUN_005feb5c();
            iVar7 = crt_stdlib_c_rand_FUN_005feb5c();
            engine_3d_c_setRenderAlpha_FUN_00406d80
                      ((uint)((longlong)iVar7 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar7 * 48000) >> 0x20) << 0x10);
            in_stack_ffffffe0 = -1;
            in_stack_ffffffdc = 7;
            iVar7 = ((uVar3 & 3) - 2) + iVar4;
            iVar1 = iVar1 + 1;
            engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                      (unaff_EBX,(char *)*unaff_ESI,(uVar2 & 3) + 0x9e,iVar7,7,-1);
          } while (iVar1 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00406d80(48000);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (unaff_EBP,(char *)pCVar8->bitmap_count,iVar7,iVar4,in_stack_ffffffe0,-1);
      iVar4 = iVar4 + in_stack_ffffffe0;
      if (in_stack_0000001c == 0) {
        iVar4 = iVar4 + in_stack_ffffffe0;
      }
      in_stack_0000000c = in_stack_0000000c + 1;
      pCVar8 = (CBitFont *)((int)&pCVar8->bitmap_count + 1);
    } while ((int)pCVar8 < in_stack_00000010);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_MessageCount == 0) {
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"[binary_data_00636580]");
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"[binary_data_00636580]");
    pcVar6 = "[binary_data_00636580]";
  }
  else {
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                      (g_SmallEditorFont,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar6 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,pcVar6,0x27f - iVar4,0x1df - iVar7,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0x8000);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,&DAT_006365b6,0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"NON-RELEASE EDITOR BUILD",0,0,0xf8,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_SmallEditorFont,"Press CTRL+D to access the editor menu",0,0x14,0xf8,0);
  pcVar6 = *(char **)(*in_stack_00000038 * 4 + in_stack_00000030);
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == ':') goto LAB_00510279;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == ':') goto LAB_00510279;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00510279:
  INT_02f26cb8 = 0;
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
  if (iVar4 != 0) {
    iVar4 = *in_stack_0000004c;
    INT_02f26cb8 = 1;
    *in_stack_0000004c = iVar4 + -1;
    if (iVar4 + -1 < 0) {
      *in_stack_0000004c = in_stack_00000048 + -1;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
  if (iVar4 != 0) {
    INT_02f26cb8 = 1;
    iVar4 = *in_stack_00000060;
    *in_stack_00000060 = iVar4 + 1;
    if (in_stack_0000005c <= iVar4 + 1) {
      *in_stack_00000060 = 0;
    }
  }
  if (pcVar5 != (char *)0x0) {
    DAT_02f26cac = 0;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
    if (iVar4 != 0) {
      DAT_02f26cac = 1;
      return *in_stack_00000074;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
    if (iVar4 != 0) goto LAB_00510340;
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
  if (iVar4 == 0) {
    return -1;
  }
LAB_00510340:
  return *in_stack_00000088;
}


// Assembly code:
// 00510000: PUSH EBX
//   Label: core_menu.cpp_getGameMainMenuChoice_FUN_00510000
// 00510001: PUSH ESI
// 00510002: PUSH EDI
// 00510003: PUSH EBP
// 00510004: SUB ESP,0x1c
// 00510007: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0051000b: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 00510010: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 00510014: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00510018: TEST EDX,EDX
// 0051001a: JNZ 0x0051034e
//   XREF to: 0051034e (CONDITIONAL_JUMP)
// 00510020: XOR EDI,EDI
//   Label: LAB_00510020
// 00510022: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00510026: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0051002a: TEST EAX,EAX
// 0051002c: JLE 0x00510162
//   XREF to: 00510162 (CONDITIONAL_JUMP)
// 00510032: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00510036: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051003a: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0051003a
//   XREF to: Stack[-0x1c] (READ)
// 0051003e: MOV EDI,dword ptr [EAX]
// 00510040: PUSH EDI
// 00510041: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00510045: PUSH EAX
// 00510046: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0051004b: ADD ESP,0x8
// 0051004e: PUSH 0x58
// 00510050: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00510054: PUSH EDX
// 00510055: MOV EBX,0xf8
// 0051005a: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0051005f: ADD ESP,0x8
// 00510062: MOV ECX,0xa0
// 00510067: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0051006b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051006f: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x2c] (DATA)
// 00510072: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00510076: MOV ESI,dword ptr [EDX]
// 00510078: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0051007c: CMP EAX,ESI
// 0051007e: JNZ 0x00510104
//   XREF to: 00510104 (CONDITIONAL_JUMP)
// 00510084: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00510089: MOV EDI,0x7
// 0051008e: CALL core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
//   XREF to: 0052a3f0 (UNCONDITIONAL_CALL)
// 00510093: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00510097: ADD ESP,0x4
// 0051009a: TEST EAX,EAX
// 0051009c: JZ 0x0051037a
//   XREF to: 0051037a (CONDITIONAL_JUMP)
// 005100a2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 005100a6: XOR EBX,EBX
// 005100a8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005100ac: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005100ac
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005100b1: MOV EDI,EAX
// 005100b3: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005100b8: AND EAX,0x3
// 005100bb: LEA ESI,[EAX + -0x2]
// 005100be: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005100c3: MOV EDX,EAX
// 005100c5: MOV EAX,0xbb80
// 005100ca: IMUL EDX
// 005100cc: SHRD EAX,EDX,0x10
// 005100d0: PUSH EAX
// 005100d1: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 005100d6: ADD ESP,0x4
// 005100d9: PUSH -0x1
// 005100db: PUSH 0x7
// 005100dd: ADD ESI,EBP
// 005100df: AND EDI,0x3
// 005100e2: PUSH ESI
// 005100e3: ADD EDI,0x9e
// 005100e9: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005100ed: PUSH EDI
// 005100ee: MOV EDX,dword ptr [EAX]
// 005100f0: PUSH EDX
// 005100f1: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005100f5: PUSH ECX
// 005100f6: INC EBX
// 005100f7: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005100fc: ADD ESP,0x18
// 005100ff: CMP EBX,0x5
// 00510102: JL 0x005100ac
//   XREF to: 005100ac (CONDITIONAL_JUMP)
// 00510104: PUSH 0xbb80
//   Label: LAB_00510104
// 00510109: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0051010e: ADD ESP,0x4
// 00510111: PUSH -0x1
// 00510113: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 00510117: PUSH EBX
// 00510118: PUSH EBP
// 00510119: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0051011d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00510121: PUSH ESI
// 00510122: MOV EDI,dword ptr [EAX]
// 00510124: PUSH EDI
// 00510125: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00510129: PUSH EAX
// 0051012a: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0051012f: ADD ESP,0x18
// 00510132: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00510136: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x14] (READ)
// 0051013a: ADD EBP,EDX
// 0051013c: TEST ECX,ECX
// 0051013e: JNZ 0x00510142
//   XREF to: 00510142 (CONDITIONAL_JUMP)
// 00510140: ADD EBP,EDX
// 00510142: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00510142
//   XREF to: Stack[-0x1c] (READ)
// 00510146: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0051014a: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0051014e: ADD EDX,0x4
// 00510151: INC ECX
// 00510152: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00510156: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0051015a: CMP ECX,EBX
// 0051015c: JL 0x0051003a
//   XREF to: 0051003a (CONDITIONAL_JUMP)
// 00510162: PUSH 0xffff
//   Label: LAB_00510162
// 00510167: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0051016c: MOV ESI,dword ptr [0x02fa8cd0]
//   XREF to: 02fa8cd0 (READ)
// 00510172: ADD ESP,0x4
// 00510175: TEST ESI,ESI
// 00510177: JZ 0x00510387
//   XREF to: 00510387 (CONDITIONAL_JUMP)
// 0051017d: PUSH 0x636547
//   XREF to: 00636547 (DATA)
// 00510182: MOV EDX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510188: PUSH EDX
// 00510189: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0051018e: ADD ESP,0x8
// 00510191: PUSH 0x636547
//   XREF to: 00636547 (DATA)
// 00510196: MOV ECX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 0051019c: PUSH ECX
// 0051019d: MOV EBX,EAX
// 0051019f: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 005101a4: ADD ESP,0x8
// 005101a7: PUSH 0x0
// 005101a9: MOV EDX,0x1df
// 005101ae: PUSH 0xf8
// 005101b3: SUB EDX,EAX
// 005101b5: MOV EAX,0x27f
// 005101ba: PUSH EDX
// 005101bb: SUB EAX,EBX
// 005101bd: PUSH EAX
// 005101be: PUSH 0x636547
//   XREF to: 00636547 (DATA)
// 005101c3: MOV EBX,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 005101c9: PUSH EBX
// 005101ca: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   Label: LAB_005101ca
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005101cf: ADD ESP,0x18
// 005101d2: PUSH 0x8000
// 005101d7: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 005101dc: ADD ESP,0x4
// 005101df: PUSH 0x0
// 005101e1: PUSH 0xf8
// 005101e6: PUSH 0x63
// 005101e8: PUSH 0x206
// 005101ed: PUSH 0x6365b6
//   XREF to: 006365b6 (DATA)
// 005101f2: MOV ESI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 005101f8: PUSH ESI
// 005101f9: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005101fe: ADD ESP,0x18
// 00510201: PUSH 0xffff
// 00510206: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0051020b: ADD ESP,0x4
// 0051020e: PUSH 0x0
// 00510210: PUSH 0xf8
// 00510215: PUSH 0x0
// 00510217: PUSH 0x0
// 00510219: PUSH 0x6365b8
//   XREF to: 006365b8 (DATA)
// 0051021e: MOV EDI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510224: PUSH EDI
// 00510225: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0051022a: ADD ESP,0x18
// 0051022d: PUSH 0x0
// 0051022f: PUSH 0xf8
// 00510234: PUSH 0x14
// 00510236: PUSH 0x0
// 00510238: PUSH 0x6365d1
//   XREF to: 006365d1 (DATA)
// 0051023d: MOV EBP,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510243: PUSH EBP
// 00510244: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00510249: ADD ESP,0x18
// 0051024c: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00510250: MOV EAX,dword ptr [EAX]
// 00510252: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00510256: SHL EAX,0x2
// 00510259: ADD EAX,EDX
// 0051025b: MOV DL,0x3a
// 0051025d: MOV ESI,dword ptr [EAX]
// 0051025f: XOR EBX,EBX
// 00510261: MOV AL,byte ptr [ESI]
//   Label: LAB_00510261
// 00510263: CMP AL,DL
// 00510265: JZ 0x00510279
//   XREF to: 00510279 (CONDITIONAL_JUMP)
// 00510267: CMP AL,0x0
// 00510269: JZ 0x00510277
//   XREF to: 00510277 (CONDITIONAL_JUMP)
// 0051026b: INC ESI
// 0051026c: MOV AL,byte ptr [ESI]
// 0051026e: CMP AL,DL
// 00510270: JZ 0x00510279
//   XREF to: 00510279 (CONDITIONAL_JUMP)
// 00510272: INC ESI
// 00510273: CMP AL,0x0
// 00510275: JNZ 0x00510261
//   XREF to: 00510261 (CONDITIONAL_JUMP)
// 00510277: SUB ESI,ESI
//   Label: LAB_00510277
// 00510279: TEST ESI,ESI
//   Label: LAB_00510279
// 0051027b: JZ 0x00510282
//   XREF to: 00510282 (CONDITIONAL_JUMP)
// 0051027d: MOV EBX,0x1
// 00510282: PUSH 0x48
//   Label: LAB_00510282
// 00510284: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00510289: XOR ECX,ECX
// 0051028b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051028c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051028e: MOV dword ptr [0x02f26cb8],ECX
//   XREF to: 02f26cb8 (WRITE)
// 00510294: CALL dword ptr [EDX + 0x4]
// 00510297: ADD ESP,0x8
// 0051029a: TEST EAX,EAX
// 0051029c: JZ 0x005102bb
//   XREF to: 005102bb (CONDITIONAL_JUMP)
// 0051029e: MOV EAX,dword ptr [ESP + 0x38]
// 005102a2: MOV ESI,0x1
// 005102a7: MOV EDI,dword ptr [EAX]
// 005102a9: SUB EDI,ESI
// 005102ab: MOV dword ptr [0x02f26cb8],ESI
//   XREF to: 02f26cb8 (WRITE)
// 005102b1: MOV dword ptr [EAX],EDI
// 005102b3: TEST EDI,EDI
// 005102b5: JL 0x005103d7
//   XREF to: 005103d7 (CONDITIONAL_JUMP)
// 005102bb: PUSH 0x50
//   Label: LAB_005102bb
// 005102bd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005102c2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005102c3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005102c5: CALL dword ptr [EDX + 0x4]
// 005102c8: ADD ESP,0x8
// 005102cb: TEST EAX,EAX
// 005102cd: JZ 0x005102f0
//   XREF to: 005102f0 (CONDITIONAL_JUMP)
// 005102cf: MOV dword ptr [0x02f26cb8],0x1
//   XREF to: 02f26cb8 (WRITE)
// 005102d9: MOV EAX,dword ptr [ESP + 0x38]
// 005102dd: MOV EDX,dword ptr [EAX]
// 005102df: INC EDX
// 005102e0: MOV ECX,dword ptr [ESP + 0x34]
// 005102e4: MOV dword ptr [EAX],EDX
// 005102e6: CMP EDX,ECX
// 005102e8: JL 0x005102f0
//   XREF to: 005102f0 (CONDITIONAL_JUMP)
// 005102ea: MOV dword ptr [EAX],0x0
// 005102f0: TEST EBX,EBX
//   Label: LAB_005102f0
// 005102f2: JZ 0x00510328
//   XREF to: 00510328 (CONDITIONAL_JUMP)
// 005102f4: PUSH 0x4b
// 005102f6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005102fb: XOR EBX,EBX
// 005102fd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005102fe: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00510300: MOV dword ptr [0x02f26cac],EBX
//   XREF to: 02f26cac (WRITE)
// 00510306: CALL dword ptr [EDX + 0x4]
// 00510309: ADD ESP,0x8
// 0051030c: TEST EAX,EAX
// 0051030e: JNZ 0x005103e8
//   XREF to: 005103e8 (CONDITIONAL_JUMP)
// 00510314: PUSH 0x4d
// 00510316: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051031b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051031c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051031e: CALL dword ptr [EDX + 0x4]
// 00510321: ADD ESP,0x8
// 00510324: TEST EAX,EAX
// 00510326: JNZ 0x00510340
//   XREF to: 00510340 (CONDITIONAL_JUMP)
// 00510328: PUSH 0x1c
//   Label: LAB_00510328
// 0051032a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051032f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00510330: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00510332: CALL dword ptr [EDX + 0x4]
// 00510335: ADD ESP,0x8
// 00510338: TEST EAX,EAX
// 0051033a: JZ 0x00510401
//   XREF to: 00510401 (CONDITIONAL_JUMP)
// 00510340: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00510340
// 00510344: MOV EAX,dword ptr [EAX]
// 00510346: ADD ESP,0x1c
// 00510349: POP EBP
// 0051034a: POP EDI
// 0051034b: POP ESI
// 0051034c: POP EBX
// 0051034d: RET
// 0051034e: PUSH 0x0
//   Label: LAB_0051034e
// 00510350: PUSH 0x7
// 00510352: PUSH EBP
// 00510353: PUSH 0xa0
// 00510358: PUSH EDX
// 00510359: PUSH EAX
// 0051035a: MOV EBX,EAX
// 0051035c: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00510361: ADD ESP,0x18
// 00510364: PUSH 0x58
// 00510366: MOV ESI,EBX
// 00510368: PUSH ESI
// 00510369: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0051036e: ADD EAX,EAX
// 00510370: ADD ESP,0x8
// 00510373: ADD EBP,EAX
// 00510375: JMP 0x00510020
//   XREF to: 00510020 (UNCONDITIONAL_JUMP)
// 0051037a: MOV dword ptr [ESP + 0x8],0xff
//   Label: LAB_0051037a
//   XREF to: Stack[-0x24] (WRITE)
// 00510382: JMP 0x00510104
//   XREF to: 00510104 (UNCONDITIONAL_JUMP)
// 00510387: PUSH 0x636580
//   Label: LAB_00510387
//   XREF to: 00636580 (DATA)
// 0051038c: MOV EDI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00510392: PUSH EDI
// 00510393: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00510398: ADD ESP,0x8
// 0051039b: PUSH 0x636580
//   XREF to: 00636580 (DATA)
// 005103a0: MOV EBP,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 005103a6: PUSH EBP
// 005103a7: MOV EBX,EAX
// 005103a9: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 005103ae: ADD ESP,0x8
// 005103b1: PUSH ESI
// 005103b2: MOV EDX,0x1df
// 005103b7: PUSH 0xf8
// 005103bc: SUB EDX,EAX
// 005103be: MOV EAX,0x27f
// 005103c3: PUSH EDX
// 005103c4: SUB EAX,EBX
// 005103c6: PUSH EAX
// 005103c7: PUSH 0x636580
//   XREF to: 00636580 (DATA)
// 005103cc: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 005103d1: PUSH EAX
// 005103d2: JMP 0x005101ca
//   XREF to: 005101ca (UNCONDITIONAL_JUMP)
// 005103d7: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_005103d7
// 005103db: MOV EDX,dword ptr [ESP + 0x38]
// 005103df: SUB EAX,ESI
// 005103e1: MOV dword ptr [EDX],EAX
// 005103e3: JMP 0x005102bb
//   XREF to: 005102bb (UNCONDITIONAL_JUMP)
// 005103e8: MOV ESI,0x1
//   Label: LAB_005103e8
// 005103ed: MOV EAX,dword ptr [ESP + 0x38]
// 005103f1: MOV dword ptr [0x02f26cac],ESI
//   XREF to: 02f26cac (WRITE)
// 005103f7: MOV EAX,dword ptr [EAX]
// 005103f9: ADD ESP,0x1c
// 005103fc: POP EBP
// 005103fd: POP EDI
// 005103fe: POP ESI
// 005103ff: POP EBX
// 00510400: RET
// 00510401: MOV EAX,0xffffffff
//   Label: LAB_00510401
// 00510406: ADD ESP,0x1c
// 00510409: POP EBP
// 0051040a: POP EDI
// 0051040b: POP ESI
// 0051040c: POP EBX
// 0051040d: RET
