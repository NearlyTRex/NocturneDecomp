// Name: core_main.c_showPromoScreen_FUN_00508340
// Address: 00508340
// Address Range: [[00508340, 00508569]]
// Convention: __cdecl
// Signature: void core_main.c_showPromoScreen_FUN_00508340(void)
// Globals:
//   TerminatedCString s_load_d_006355e6
//   TerminatedCString s_In_stores_10_26_99_006355ed
//   TerminatedCString s_www_nocturnegame_com_00635600
//   TerminatedCString s_Press_any_key_to_continu_00635615
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_MediumFont
//   CBitFont* g_ThemeFont
//   int g_GlobalDeltaTimeInt
//   void* g_CKeysPtr
//   CAlphaBitmap g_LoadingScreenBitmap1
//   CAlphaBitmap g_LoadingScreenBitmap2
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_main_c_showPromoScreen_FUN_00508340(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  BADSPACEBASE *in_ESP;
  
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
  wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff00,"load%d",(uVar2 & 3) + 1);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_LoadingScreenBitmap1,&stack0xffffff04,0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_LoadingScreenBitmap1,0,0,0xffff);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                    (g_MediumFont,"In stores 10/26/99");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,"In stores 10/26/99",0x140 - iVar3 / 2,0xdc,7,0);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                    (g_MediumFont,"www.nocturnegame.com");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,"www.nocturnegame.com",0x140 - iVar3 / 2,0x1e0 - iVar1,7,0);
  iVar5 = 0xa0000;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_GlobalDeltaTimeInt = (iVar4 - iVar3) / 0x12;
    if (g_GlobalDeltaTimeInt < 0) {
      g_GlobalDeltaTimeInt = 0;
    }
    if (0x4000 < g_GlobalDeltaTimeInt) {
      g_GlobalDeltaTimeInt = 0x4000;
    }
    iVar5 = iVar5 - g_GlobalDeltaTimeInt;
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  } while (((iVar3 == 0) || (iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1), iVar3 == 0)) &&
          (iVar3 = iVar4, 0 < iVar5));
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press any key to continue...");
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,text,0x140 - iVar3 / 2,iVar1 * -2 + 0x1e0,7,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap1);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap2);
  return;
}


// Assembly code:
// 00508340: PUSH EBX
//   Label: core_main.c_showPromoScreen_FUN_00508340
// 00508341: PUSH ESI
// 00508342: PUSH EDI
// 00508343: PUSH EBP
// 00508344: SUB ESP,0x100
// 0050834a: PUSH 0x58
// 0050834c: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 00508352: PUSH EDX
// 00508353: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00508358: ADD ESP,0x8
// 0050835b: MOV ESI,EAX
// 0050835d: MOV EDI,EAX
// 0050835f: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00508364: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00508369: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0050836e: AND EAX,0x3
// 00508371: INC EAX
// 00508372: PUSH EAX
// 00508373: PUSH 0x6355e6
//   XREF to: 006355e6 (DATA)
// 00508378: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0050837c: PUSH EAX
// 0050837d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00508382: ADD ESP,0xc
// 00508385: PUSH 0x1e0
// 0050838a: PUSH 0x280
// 0050838f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00508393: PUSH EAX
// 00508394: PUSH 0x2f0ca54
//   XREF to: 02f0ca54 (DATA)
// 00508399: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 0050839e: ADD ESP,0x10
// 005083a1: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005083a6: PUSH 0xffff
// 005083ab: PUSH 0x0
// 005083ad: PUSH 0x0
// 005083af: PUSH 0x2f0ca54
//   XREF to: 02f0ca54 (DATA)
// 005083b4: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 005083b9: ADD ESP,0x10
// 005083bc: PUSH 0x6355ed
//   XREF to: 006355ed (DATA)
// 005083c1: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 005083c7: PUSH ECX
// 005083c8: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 005083cd: MOV EDX,EAX
// 005083cf: SAR EDX,0x1f
// 005083d2: SUB EAX,EDX
// 005083d4: SAR EAX,0x1
// 005083d6: ADD ESP,0x8
// 005083d9: PUSH 0x0
// 005083db: PUSH 0x7
// 005083dd: MOV EDX,0x140
// 005083e2: PUSH 0xdc
// 005083e7: SUB EDX,EAX
// 005083e9: PUSH EDX
// 005083ea: PUSH 0x6355ed
//   XREF to: 006355ed (DATA)
// 005083ef: MOV EBX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 005083f5: PUSH EBX
// 005083f6: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005083fb: ADD ESP,0x18
// 005083fe: MOV EBX,0x1e0
// 00508403: PUSH 0x635600
//   XREF to: 00635600 (DATA)
// 00508408: SUB EBX,ESI
// 0050840a: MOV ESI,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00508410: PUSH ESI
// 00508411: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00508416: MOV EDX,EAX
// 00508418: SAR EDX,0x1f
// 0050841b: SUB EAX,EDX
// 0050841d: SAR EAX,0x1
// 0050841f: ADD ESP,0x8
// 00508422: PUSH 0x0
// 00508424: PUSH 0x7
// 00508426: MOV EDX,0x140
// 0050842b: PUSH EBX
// 0050842c: SUB EDX,EAX
// 0050842e: PUSH EDX
// 0050842f: PUSH 0x635600
//   XREF to: 00635600 (DATA)
// 00508434: MOV EBP,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 0050843a: PUSH EBP
// 0050843b: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00508440: ADD ESP,0x18
// 00508443: MOV EBX,0xa0000
// 00508448: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0050844d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00508452: MOV ESI,EAX
// 00508454: XOR EBP,EBP
// 00508456: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00508456
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0050845b: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00508460: MOV ECX,EAX
// 00508462: SUB EAX,ESI
// 00508464: MOV EDX,EAX
// 00508466: MOV ESI,0x12
// 0050846b: SAR EDX,0x1f
// 0050846e: IDIV ESI
// 00508470: MOV [0x02cf6a80],EAX
//   XREF to: 02cf6a80 (WRITE)
// 00508475: CMP EBP,EAX
// 00508477: JG 0x00508543
//   XREF to: 00508543 (CONDITIONAL_JUMP)
// 0050847d: MOV EDX,dword ptr [0x02cf6a80]
//   Label: LAB_0050847d
//   XREF to: 02cf6a80 (READ)
// 00508483: MOV ESI,ECX
// 00508485: CMP EDX,0x4000
// 0050848b: JLE 0x00508497
//   XREF to: 00508497 (CONDITIONAL_JUMP)
// 0050848d: MOV dword ptr [0x02cf6a80],0x4000
//   XREF to: 02cf6a80 (WRITE)
// 00508497: MOV EAX,[0x02cf6a80]
//   Label: LAB_00508497
//   XREF to: 02cf6a80 (READ)
// 0050849c: PUSH 0x2a
// 0050849e: SUB EBX,EAX
// 005084a0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005084a5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005084a6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005084a8: CALL dword ptr [EDX]
// 005084aa: ADD ESP,0x8
// 005084ad: TEST EAX,EAX
// 005084af: JNZ 0x0050854e
//   XREF to: 0050854e (CONDITIONAL_JUMP)
// 005084b5: TEST EBX,EBX
//   Label: LAB_005084b5
// 005084b7: JG 0x00508456
//   XREF to: 00508456 (CONDITIONAL_JUMP)
// 005084b9: MOV EAX,0x1e0
//   Label: LAB_005084b9
// 005084be: LEA ESI,[EDI + EDI*0x1]
// 005084c1: SUB EAX,ESI
// 005084c3: PUSH 0x635615
//   XREF to: 00635615 (DATA)
// 005084c8: MOV ESI,EAX
// 005084ca: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005084cf: ADD ESP,0x4
// 005084d2: PUSH EAX
// 005084d3: MOV EDX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 005084d9: PUSH EDX
// 005084da: MOV EBX,EAX
// 005084dc: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 005084e1: MOV EDX,EAX
// 005084e3: SAR EDX,0x1f
// 005084e6: SUB EAX,EDX
// 005084e8: SAR EAX,0x1
// 005084ea: ADD ESP,0x8
// 005084ed: PUSH 0x0
// 005084ef: PUSH 0x7
// 005084f1: MOV EDX,0x140
// 005084f6: PUSH ESI
// 005084f7: SUB EDX,EAX
// 005084f9: PUSH EDX
// 005084fa: PUSH EBX
// 005084fb: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00508501: PUSH ECX
// 00508502: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00508507: ADD ESP,0x18
// 0050850a: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0050850f: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00508514: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00508519: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0050851e: PUSH 0x2f0ca54
//   XREF to: 02f0ca54 (DATA)
// 00508523: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 00508528: ADD ESP,0x4
// 0050852b: PUSH 0x2f0ca68
//   XREF to: 02f0ca68 (DATA)
// 00508530: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 00508535: ADD ESP,0x4
// 00508538: ADD ESP,0x100
// 0050853e: POP EBP
// 0050853f: POP EDI
// 00508540: POP ESI
// 00508541: POP EBX
// 00508542: RET
// 00508543: MOV dword ptr [0x02cf6a80],EBP
//   Label: LAB_00508543
//   XREF to: 02cf6a80 (WRITE)
// 00508549: JMP 0x0050847d
//   XREF to: 0050847d (UNCONDITIONAL_JUMP)
// 0050854e: PUSH 0x1
//   Label: LAB_0050854e
// 00508550: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00508555: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00508556: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00508558: CALL dword ptr [EDX]
// 0050855a: ADD ESP,0x8
// 0050855d: TEST EAX,EAX
// 0050855f: JNZ 0x005084b9
//   XREF to: 005084b9 (CONDITIONAL_JUMP)
// 00508565: JMP 0x005084b5
//   XREF to: 005084b5 (UNCONDITIONAL_JUMP)
