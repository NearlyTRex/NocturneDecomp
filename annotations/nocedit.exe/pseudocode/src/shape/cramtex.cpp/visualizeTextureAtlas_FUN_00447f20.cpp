// Name: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 004481c8]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
// Cross-references:
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 004452b4 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445c96 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00446946 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_result_00619a32
//   TerminatedCString s_progress_00619a39
//   TerminatedCString s_Done_Press_a_key_00619a96
//   TerminatedCString s_Hit_Esc_when_you_ve_had__00619aac
//   double g_CramPercentageMultiplier = 100
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c228
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   SCramRectangle[50] g_CramRectangles
//   undefined4 DAT_00840c18
//   undefined4 DAT_00840c1c
//   undefined4 DAT_00840c38
//   undefined4 DAT_00840c3c
//   undefined4 DAT_00840c40
//   undefined4 DAT_00840c44
//   undefined4 DAT_00840c60
//   uint g_CramTextureCount
//   int g_CramTotalMaps
//   int g_CramPlacedTextureCount
//   int g_CramRectangleCount
//   int g_CramAcceptableSize
//   int g_CramAtlasWidth
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
//   int g_CramMapNumber
//   int g_CramVisualizationFlag
//   int g_ActiveRenderColor
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_plotPixel_FUN_00401140
//   shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20
          (int visualization_mode,int completion_mode,int display_mode)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  SCramWorkingEntry *pSVar5;
  char *pcVar6;
  int draw_width;
  uint uVar7;
  int iVar8;
  int draw_y;
  int iVar9;
  int iVar10;
  SCramRectangle *pSVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  int x;
  int y;
  int in_stack_ffffff1c;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x134);
  g_CramMapNumber = g_CramMapNumber % g_CramTotalMaps;
  iVar12 = 0;
  iVar9 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar5 = g_CramSortedTextureEntries;
    do {
      piVar1 = &pSVar5->final_right;
      piVar2 = &pSVar5->final_left;
      piVar3 = &pSVar5->final_top;
      piVar4 = &pSVar5->final_bottom;
      pSVar5 = pSVar5 + 1;
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + ((*piVar4 - *piVar3) - g_CramPaddingCalculation) *
                        ((*piVar1 - *piVar2) - g_CramPaddingCalculation);
    } while (iVar9 < (int)g_CramTextureCount);
  }
  if (display_mode == 0) {
    pcVar6 = "progress";
  }
  else {
    pcVar6 = "result";
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xffffff08,"CramTex II %s:  N=%d  Map %d/%d  Coverage: %4.1f%%  Shrink: %4.1f%%  Size: %u (%u)\n",pcVar6,g_CramTextureCount,
             g_CramMapNumber + 1,g_CramTotalMaps,
             ((double)iVar12 * g_CramPercentageMultiplier) /
             (double)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps),
             ((double)g_CramAtlasWidth * g_CramPercentageMultiplier) /
             (double)g_CramCurrentAcceptableSize,g_CramCurrentAcceptableSize,g_CramAcceptableSize);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff08,0,0);
  if (display_mode == 0) {
    pcVar6 = "Hit <Esc> when you've had enough...";
  }
  else {
    pcVar6 = "Done.  Press a key...";
  }
  engine_2d_c_drawText_FUN_00401fd0(pcVar6,0,0x16);
  iVar12 = g_WindowHeight;
  iVar9 = g_WindowWidth;
  draw_y = g_WindowWidth + -10;
  draw_width = g_WindowHeight + -10;
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(10,0x36,g_WindowWidth + -0xb,g_WindowHeight + -0xb,1);
    uVar7 = g_CramPlacedTextureCount;
    if (completion_mode != 0) {
      uVar7 = g_CramTextureCount;
    }
    iVar10 = 0;
    if (0 < (int)uVar7) {
      do {
        iVar10 = iVar10 + 1;
        shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
                  ((SCramWorkingEntry *)completion_mode,10,0x36,draw_y,draw_width,in_stack_ffffff1c)
        ;
      } while (iVar10 < (int)uVar7);
    }
    if ((completion_mode == 0) && (local_14 = completion_mode, 0 < g_CramRectangleCount)) {
      pSVar11 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar11->left) && (-1 < pSVar11->active_flag)) {
          iVar10 = (pSVar11->top * (iVar9 + -0x14)) / g_CramCurrentAcceptableSize;
          x = iVar10 + 10;
          iVar8 = (pSVar11->right * (iVar12 + -0x40)) / g_CramCurrentAcceptableSize;
          y = iVar8 + 0x36;
          if ((x < draw_y) && (y < draw_width)) {
            g_ActiveRenderColor = pSVar11->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x,y);
            engine_2d_c_plotPixel_FUN_00401140(iVar10 + 0xb,y);
            engine_2d_c_plotPixel_FUN_00401140(x,iVar8 + 0x37);
          }
        }
        local_14 = local_14 + 1;
        pSVar11 = pSVar11 + 1;
      } while (local_14 < g_CramRectangleCount);
    }
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}


// Assembly code:
// 00447f20: PUSH 0x134
//   Label: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
// 00447f25: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447f2a: PUSH EBX
// 00447f2b: PUSH ESI
// 00447f2c: PUSH EDI
// 00447f2d: PUSH EBP
// 00447f2e: MOV EBP,ESP
// 00447f30: SUB ESP,0xf0
// 00447f36: SUB EBP,0x7a
// 00447f39: MOV EAX,[0x0084a890]
//   XREF to: 0084a890 (READ)
// 00447f3e: MOV EDX,EAX
// 00447f40: MOV EBX,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 00447f46: SAR EDX,0x1f
// 00447f49: IDIV EBX
// 00447f4b: FILD dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00447f51: FMUL double ptr [0x00619ad2]
//   XREF to: 00619ad2 (READ)
// 00447f57: FILD dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447f5d: FDIVP
// 00447f5f: MOV dword ptr [0x0084a890],EDX
//   XREF to: 0084a890 (WRITE)
// 00447f65: MOV EDX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00447f6b: PUSH EDX
// 00447f6c: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447f72: PUSH ECX
// 00447f73: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447f79: XOR ESI,ESI
// 00447f7b: SUB ESP,0x8
// 00447f7e: XOR EBX,EBX
// 00447f80: FSTP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 00447f83: TEST EDI,EDI
// 00447f85: JLE 0x00447fc0
//   XREF to: 00447fc0 (CONDITIONAL_JUMP)
// 00447f87: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00447f8c: MOV EDX,dword ptr [EAX + 0x38]
//   Label: LAB_00447f8c
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00447f8f: MOV ECX,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00447f92: MOV EDI,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447f98: SUB EDX,ECX
// 00447f9a: SUB EDX,EDI
// 00447f9c: MOV ECX,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00447f9f: MOV EDI,EDX
// 00447fa1: MOV EDX,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00447fa4: SUB EDX,ECX
// 00447fa6: SUB EDX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447fac: IMUL EDX,EDI
// 00447faf: ADD EAX,0x4c
// 00447fb2: INC EBX
// 00447fb3: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447fb9: ADD ESI,EDX
// 00447fbb: CMP EBX,EDI
// 00447fbd: JL 0x00447f8c
//   XREF to: 00447f8c (CONDITIONAL_JUMP)
// 00447fbf: NOP
// 00447fc0: MOV EAX,[0x0084a884]
//   Label: LAB_00447fc0
//   XREF to: 0084a884 (READ)
// 00447fc5: IMUL EAX,EAX
// 00447fc8: MOV ECX,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 00447fce: IMUL EAX,ECX
// 00447fd1: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00447fd4: MOV dword ptr [EBP + 0x76],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00447fd7: FILD dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00447fda: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00447fdd: FMUL double ptr [0x00619ad2]
//   XREF to: 00619ad2 (READ)
// 00447fe3: FDIVRP
// 00447fe5: SUB ESP,0x8
// 00447fe8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 00447feb: MOV EAX,[0x0084a890]
//   XREF to: 0084a890 (READ)
// 00447ff0: PUSH ECX
// 00447ff1: INC EAX
// 00447ff2: PUSH EAX
// 00447ff3: MOV ESI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447ff9: MOV EDI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00447fff: PUSH ESI
// 00448000: TEST EDI,EDI
// 00448002: JZ 0x00448093
//   XREF to: 00448093 (CONDITIONAL_JUMP)
// 00448008: MOV EAX,0x619a32
//   XREF to: 00619a32 (DATA)
// 0044800d: PUSH EAX
//   Label: LAB_0044800d
//   XREF to: 00619a32 (DATA)
//   XREF to: 00619a39 (DATA)
// 0044800e: PUSH 0x619a42
//   XREF to: 00619a42 (DATA)
// 00448013: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 00448016: PUSH EAX
// 00448017: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0044801c: ADD ESP,0x30
// 0044801f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00448024: PUSH 0x0
// 00448026: PUSH 0x0
// 00448028: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0044802b: PUSH EAX
// 0044802c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00448031: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00448037: ADD ESP,0xc
// 0044803a: TEST EAX,EAX
// 0044803c: JZ 0x0044809d
//   XREF to: 0044809d (CONDITIONAL_JUMP)
// 0044803e: PUSH 0x16
// 00448040: PUSH 0x0
// 00448042: PUSH 0x619a96
//   XREF to: 00619a96 (DATA)
// 00448047: CALL engine_2d.c_drawText_FUN_00401fd0
//   Label: LAB_00448047
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044804c: ADD ESP,0xc
// 0044804f: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00448055: MOV ECX,0xa
// 0044805a: MOV EBX,0x36
// 0044805f: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00448065: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0044806a: MOV ESI,dword ptr [0x0084a894]
//   XREF to: 0084a894 (READ)
// 00448070: SUB EDX,0xa
// 00448073: SUB EAX,0xa
// 00448076: MOV dword ptr [EBP + 0x62],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00448079: MOV dword ptr [EBP + 0x66],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0044807c: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0044807f: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00448082: TEST ESI,ESI
// 00448084: JNZ 0x004480a7
//   XREF to: 004480a7 (CONDITIONAL_JUMP)
// 00448086: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00448086
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0044808b: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0044808e: POP EBP
// 0044808f: POP EDI
// 00448090: POP ESI
// 00448091: POP EBX
// 00448092: RET
// 00448093: MOV EAX,0x619a39
//   Label: LAB_00448093
//   XREF to: 00619a39 (DATA)
// 00448098: JMP 0x0044800d
//   XREF to: 0044800d (UNCONDITIONAL_JUMP)
// 0044809d: PUSH 0x16
//   Label: LAB_0044809d
// 0044809f: PUSH EAX
// 004480a0: PUSH 0x619aac
//   XREF to: 00619aac (DATA)
// 004480a5: JMP 0x00448047
//   XREF to: 00448047 (UNCONDITIONAL_JUMP)
// 004480a7: PUSH 0x1
//   Label: LAB_004480a7
// 004480a9: DEC EAX
// 004480aa: PUSH EAX
// 004480ab: DEC EDX
// 004480ac: PUSH EDX
// 004480ad: PUSH EBX
// 004480ae: PUSH ECX
// 004480af: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004480b4: ADD ESP,0x14
// 004480b7: TEST EDI,EDI
// 004480b9: JZ 0x004481bf
//   XREF to: 004481bf (CONDITIONAL_JUMP)
// 004480bf: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 004480c4: MOV dword ptr [EBP + 0x56],EAX
//   Label: LAB_004480c4
//   XREF to: Stack[-0x34] (WRITE)
// 004480c7: XOR EBX,EBX
// 004480c9: TEST EAX,EAX
// 004480cb: JLE 0x00448100
//   XREF to: 00448100 (CONDITIONAL_JUMP)
// 004480cd: MOV ESI,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004480d2: MOV EDX,dword ptr [EBP + 0x5e]
//   Label: LAB_004480d2
//   XREF to: Stack[-0x2c] (READ)
// 004480d5: PUSH EDX
// 004480d6: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004480d9: PUSH ECX
// 004480da: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004480dd: PUSH EAX
// 004480de: MOV EDX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004480e1: PUSH EDX
// 004480e2: PUSH EDI
// 004480e3: PUSH ESI
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 004480e4: INC EBX
// 004480e5: CALL shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
//   XREF to: 00447c20 (UNCONDITIONAL_CALL)
// 004480ea: MOV ECX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004480ed: ADD ESP,0x18
// 004480f0: ADD ESI,0x4c
// 004480f3: CMP EBX,ECX
// 004480f5: JL 0x004480d2
//   XREF to: 004480d2 (CONDITIONAL_JUMP)
// 004480f7: LEA EAX,[EAX]
// 004480fd: LEA EDX,[EDX]
// 00448100: TEST EDI,EDI
//   Label: LAB_00448100
// 00448102: JNZ 0x00448086
//   XREF to: 00448086 (CONDITIONAL_JUMP)
// 00448104: MOV ESI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 0044810a: MOV dword ptr [EBP + 0x6e],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0044810d: TEST ESI,ESI
// 0044810f: JLE 0x00448086
//   XREF to: 00448086 (CONDITIONAL_JUMP)
// 00448115: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00448118: SUB EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 0044811b: MOV EBX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0044811e: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00448121: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 00448124: SUB EAX,EBX
// 00448126: MOV EBX,0x840c14
//   XREF to: 00840c14 (PARAM)
// 0044812b: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044812e: MOV ESI,dword ptr [0x0084a890]
//   Label: LAB_0044812e
//   XREF to: 0084a890 (READ)
// 00448134: CMP ESI,dword ptr [EBX]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00448136: JNZ 0x004481a2
//   XREF to: 004481a2 (CONDITIONAL_JUMP)
// 00448138: CMP dword ptr [EBX + 0x24],0x0
//   XREF to: 00840c38 (READ)
//   XREF to: 00840c60 (READ)
// 0044813c: JL 0x004481a2
//   XREF to: 004481a2 (CONDITIONAL_JUMP)
// 0044813e: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 00448141: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00448144: IMUL EDX,EAX
// 00448147: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 0044814d: MOV EAX,EDX
// 0044814f: SAR EDX,0x1f
// 00448152: IDIV ECX
// 00448154: MOV EDI,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 00448157: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 0044815a: IMUL EDX,EDI
// 0044815d: MOV ESI,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 00448160: ADD ESI,EAX
// 00448162: MOV EAX,EDX
// 00448164: SAR EDX,0x1f
// 00448167: IDIV ECX
// 00448169: MOV EDI,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0044816c: ADD EDI,EAX
// 0044816e: CMP ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00448171: JGE 0x004481a2
//   XREF to: 004481a2 (CONDITIONAL_JUMP)
// 00448173: CMP EDI,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 00448176: JGE 0x004481a2
//   XREF to: 004481a2 (CONDITIONAL_JUMP)
// 00448178: PUSH EDI
// 00448179: MOV EAX,dword ptr [EBX + 0x24]
//   XREF to: 00840c38 (READ)
// 0044817c: PUSH ESI
// 0044817d: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00448182: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00448187: ADD ESP,0x8
// 0044818a: PUSH EDI
// 0044818b: LEA EAX,[ESI + 0x1]
// 0044818e: PUSH EAX
// 0044818f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00448194: ADD ESP,0x8
// 00448197: INC EDI
// 00448198: PUSH EDI
// 00448199: PUSH ESI
// 0044819a: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0044819f: ADD ESP,0x8
// 004481a2: MOV EDI,dword ptr [EBP + 0x6e]
//   Label: LAB_004481a2
//   XREF to: Stack[-0x1c] (READ)
// 004481a5: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004481ab: INC EDI
// 004481ac: ADD EBX,0x28
//   XREF to: 00840c3c (PARAM)
// 004481af: MOV dword ptr [EBP + 0x6e],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004481b2: CMP EDI,EDX
// 004481b4: JGE 0x00448086
//   XREF to: 00448086 (CONDITIONAL_JUMP)
// 004481ba: JMP 0x0044812e
//   XREF to: 0044812e (UNCONDITIONAL_JUMP)
// 004481bf: MOV EAX,[0x0084a85c]
//   Label: LAB_004481bf
//   XREF to: 0084a85c (READ)
// 004481c4: JMP 0x004480c4
//   XREF to: 004480c4 (UNCONDITIONAL_JUMP)
