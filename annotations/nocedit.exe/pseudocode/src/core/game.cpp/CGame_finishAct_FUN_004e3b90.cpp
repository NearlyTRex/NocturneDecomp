// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// Address Range: [[004e3b90, 004e400c]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_finishAct_FUN_004e3b90()
// Cross-references:
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 00524617 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_To_be_continued_0062d555
//   TerminatedCString s_stats_0062d568
//   TerminatedCString s_Mission_time_0062d56e
//   TerminatedCString s_anon_0062d57b
//   undefined4 DAT_0062d57c
//   undefined4 DAT_0062d57d
//   TerminatedCString s_s_2d_2d_2d_2d_0062d57e
//   TerminatedCString s_Total_body_count_0062d590
//   TerminatedCString s_anon_0062d5a1
//   undefined4 DAT_0062d5a2
//   undefined4 DAT_0062d5a3
//   TerminatedCString s_d_0062d5a4
//   double DOUBLE_0062d5ad = 0.000277777777777778
//   double DOUBLE_0062d5b5 = 3600
//   double DOUBLE_0062d5bd = 0.0166666666666667
//   double DOUBLE_0062d5c5 = 60
//   double DOUBLE_0062d5cd = 100
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CBitFont* g_ThemeFont
//   CBitFont* g_SmallEditorFont
//   undefined4 DAT_02d7d6f0
//   undefined4 DAT_02d7d7f0
//   undefined4 g_ScreenHeightForFonts
// Function calls:
//   core_game.cpp_CGame_rollCredits_FUN_004e4010
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

/* Signature: int core_game.cpp_CGame_finishAct(CGame* param_1) */

void core_game_cpp_CGame_finishAct_FUN_004e3b90
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               CGame *param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
               CBitFont *param_10,undefined4 param_11,CBitFont *param_12)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  uint uVar7;
  int y_pos;
  CBitFont *this_ptr;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  CGame *in_stack_fffffab4;
  float fVar14;
  char *in_stack_fffffacc;
  char acStack_128 [4];
  char acStack_124 [8];
  char acStack_11c [208];
  undefined1 local_4c [12];
  CAlphaBitmap aCStack_40 [2];
  int local_18;
  int local_14;
  
  bVar10 = 0;
  if (param_5->field87_0x258 == 2) {
    this_ptr = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      this_ptr = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(param_5,in_stack_fffffab4);
    for (fVar14 = 5.0; 0.0 < fVar14; fVar14 = fVar14 - param_5->delta_time_float) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("To be continued...");
      fVar14 = 0.0;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr,0,g_WindowWidth + -1,(g_WindowHeight - iVar2) / 2,0xf8,0,pcVar3);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(param_5);
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_game_cpp_CGame_rollCredits_FUN_004e4010(param_5);
    return;
  }
  param_5->player_pos_y = param_5->player_rotation + param_5->player_pos_y;
  param_5->game_state_flags = param_5->game_state_flags + (int)param_5->player_pos_x;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(local_4c + 4),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(aCStack_40,0,0,0xffff);
  fVar11 = (float10)param_5->player_pos_y;
  fVar12 = fVar11 * (float10)DOUBLE_0062d5ad;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,param_5));
  local_14 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_14 * (float10)DOUBLE_0062d5b5;
  param_5->player_pos_y = (float)fVar11;
  fVar12 = fVar11 * (float10)DOUBLE_0062d5bd;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),param_5))
  ;
  local_18 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_18 * (float10)DOUBLE_0062d5c5;
  *(float *)(local_18 + 0x248) = (float)fVar11;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),local_18));
  iVar2 = (int)ROUND(fVar11);
  fVar12 = (float10)*(float *)(iVar2 + 0x248) - (float10)iVar2;
  *(float *)(iVar2 + 0x248) = (float)fVar12;
  fVar12 = fVar12 * (float10)DOUBLE_0062d5cd;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),iVar2));
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(in_stack_fffffacc);
  pcVar3 = &stack0xfffffad8;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "\n\n";
  iVar2 = -1;
  pcVar3 = &stack0xfffffad8;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_128,"%2d:%2d:%2d.%2d\n\n",unaff_EBX,(int)ROUND(fVar12),param_7,unaff_ESI);
  do {
    uVar6 = 0xffffffff;
    pcVar3 = acStack_124;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (acStack_124[uVar7] == ' ') {
      acStack_124[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar3 = acStack_124;
  iVar2 = -1;
  pcVar4 = &stack0xfffffadc;
  do {
    pcVar8 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Total body count");
  iVar2 = -1;
  pcVar3 = &stack0xfffffae0;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "\n\n";
  iVar2 = -1;
  pcVar3 = &stack0xfffffae0;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_124 + 4,"%d\n\n");
  pcVar3 = acStack_11c;
  iVar2 = -1;
  pcVar4 = &stack0xfffffae4;
  do {
    pcVar8 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar4 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar2 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (param_10,&stack0xfffffae8,&DAT_02d7d6f0,0x14,0x100,0xc0);
  iVar9 = 0;
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(param_10,0x58);
  y_pos = 0xf0;
  if (0 < iVar2) {
    pcVar3 = &DAT_02d7d6f0;
    do {
      iVar9 = iVar9 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (param_12,0x1c0,0x27f,y_pos,0xf8,0,pcVar3);
      pcVar3 = pcVar3 + 0x100;
      y_pos = y_pos + iVar5;
    } while (iVar9 < (int)param_10);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0x00000000);
  return;
}


// Assembly code:
// 004e3b90: PUSH EBX
//   Label: core_game.cpp_CGame_finishAct_FUN_004e3b90
// 004e3b91: PUSH ESI
// 004e3b92: PUSH EDI
// 004e3b93: PUSH EBP
// 004e3b94: MOV EBP,ESP
// 004e3b96: SUB ESP,0x540
// 004e3b9c: AND ESP,0xfffffff8
// 004e3b9f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3ba2: CMP dword ptr [EAX + 0x258],0x2
// 004e3ba9: JNZ 0x004e3c6c
//   XREF to: 004e3c6c (CONDITIONAL_JUMP)
// 004e3baf: MOV EAX,[0x03275a28]
//   XREF to: 03275a28 (READ)
// 004e3bb4: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004e3bba: CMP EAX,0x1e0
// 004e3bbf: JGE 0x004e3bc7
//   XREF to: 004e3bc7 (CONDITIONAL_JUMP)
// 004e3bc1: MOV EDI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 004e3bc7: PUSH 0x58
//   Label: LAB_004e3bc7
// 004e3bc9: PUSH EDI
// 004e3bca: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004e3bcf: ADD ESP,0x8
// 004e3bd2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3bd5: PUSH EDX
// 004e3bd6: MOV ESI,EAX
// 004e3bd8: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004e3bdd: MOV ECX,0x40a00000
// 004e3be2: ADD ESP,0x4
// 004e3be5: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x550] (DATA)
// 004e3be8: FLD float ptr [ESP]
//   Label: LAB_004e3be8
//   XREF to: Stack[-0x550] (DATA)
// 004e3beb: FLDZ
// 004e3bed: FCOMPP
// 004e3bef: FNSTSW AX
// 004e3bf1: SAHF
// 004e3bf2: JNC 0x004e3c54
//   XREF to: 004e3c54 (CONDITIONAL_JUMP)
// 004e3bf4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004e3bf9: PUSH 0x62d555
//   XREF to: 0062d555 (DATA)
// 004e3bfe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e3c03: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e3c09: ADD ESP,0x4
// 004e3c0c: SUB EDX,ESI
// 004e3c0e: PUSH EAX
// 004e3c0f: MOV EAX,EDX
// 004e3c11: SAR EDX,0x1f
// 004e3c14: SUB EAX,EDX
// 004e3c16: SAR EAX,0x1
// 004e3c18: PUSH 0x0
// 004e3c1a: PUSH 0xf8
// 004e3c1f: PUSH EAX
// 004e3c20: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004e3c25: DEC EAX
// 004e3c26: PUSH EAX
// 004e3c27: PUSH 0x0
// 004e3c29: PUSH EDI
// 004e3c2a: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004e3c2f: ADD ESP,0x1c
// 004e3c32: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e3c37: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3c3a: PUSH EAX
// 004e3c3b: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 004e3c40: ADD ESP,0x4
// 004e3c43: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3c46: FLD float ptr [ESP]
//   XREF to: Stack[-0x550] (DATA)
// 004e3c49: FSUB float ptr [EAX + 0x264]
// 004e3c4f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x550] (DATA)
// 004e3c52: JMP 0x004e3be8
//   XREF to: 004e3be8 (UNCONDITIONAL_JUMP)
// 004e3c54: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_004e3c54
//   XREF to: Stack[0x4] (READ)
// 004e3c57: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e3c5c: PUSH EBX
// 004e3c5d: CALL core_game.cpp_CGame_rollCredits_FUN_004e4010
//   XREF to: 004e4010 (UNCONDITIONAL_CALL)
// 004e3c62: ADD ESP,0x4
// 004e3c65: MOV ESP,EBP
// 004e3c67: POP EBP
// 004e3c68: POP EDI
// 004e3c69: POP ESI
// 004e3c6a: POP EBX
// 004e3c6b: RET
// 004e3c6c: FLD float ptr [EAX + 0x250]
//   Label: LAB_004e3c6c
// 004e3c72: FADD float ptr [EAX + 0x248]
// 004e3c78: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3c7b: FSTP float ptr [EAX + 0x248]
// 004e3c81: MOV EAX,dword ptr [EAX + 0x24c]
// 004e3c87: MOV ECX,dword ptr [EDX + 0x254]
// 004e3c8d: ADD ECX,EAX
// 004e3c8f: LEA EAX,[ESP + 0x504]
//   XREF to: Stack[-0x4c] (DATA)
// 004e3c96: PUSH EAX
// 004e3c97: MOV dword ptr [EDX + 0x254],ECX
// 004e3c9d: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004e3ca2: ADD ESP,0x4
// 004e3ca5: PUSH 0x1e0
// 004e3caa: PUSH 0x280
// 004e3caf: PUSH 0x62d568
//   XREF to: 0062d568 (DATA)
// 004e3cb4: LEA EAX,[ESP + 0x510]
//   XREF to: Stack[-0x4c] (DATA)
// 004e3cbb: PUSH EAX
// 004e3cbc: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 004e3cc1: ADD ESP,0x10
// 004e3cc4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004e3cc9: PUSH 0xffff
// 004e3cce: PUSH 0x0
// 004e3cd0: PUSH 0x0
// 004e3cd2: LEA EAX,[ESP + 0x510]
//   XREF to: Stack[-0x4c] (DATA)
// 004e3cd9: PUSH EAX
// 004e3cda: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 004e3cdf: ADD ESP,0x10
// 004e3ce2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3ce5: FLD float ptr [EAX + 0x248]
// 004e3ceb: FLD ST0
// 004e3ced: FMUL double ptr [0x0062d5ad]
//   XREF to: 0062d5ad (READ)
// 004e3cf3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3cf8: FISTP dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x28] (WRITE)
// 004e3cff: MOV EAX,dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x28] (READ)
// 004e3d06: MOV dword ptr [ESP + 0x53c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3d0d: FILD dword ptr [ESP + 0x53c]
//   XREF to: Stack[-0x14] (READ)
// 004e3d14: FMUL double ptr [0x0062d5b5]
//   XREF to: 0062d5b5 (READ)
// 004e3d1a: FSUBP
// 004e3d1c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3d1f: FST float ptr [EAX + 0x248]
// 004e3d25: FLD ST0
// 004e3d27: FMUL double ptr [0x0062d5bd]
//   XREF to: 0062d5bd (READ)
// 004e3d2d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3d32: FISTP dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x30] (WRITE)
// 004e3d39: MOV EAX,dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x30] (READ)
// 004e3d40: MOV dword ptr [ESP + 0x53c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3d47: FILD dword ptr [ESP + 0x53c]
//   XREF to: Stack[-0x14] (READ)
// 004e3d4e: FMUL double ptr [0x0062d5c5]
//   XREF to: 0062d5c5 (READ)
// 004e3d54: FSUBP
// 004e3d56: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3d59: FST float ptr [EAX + 0x248]
// 004e3d5f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3d64: FISTP dword ptr [ESP + 0x538]
//   XREF to: Stack[-0x18] (WRITE)
// 004e3d6b: MOV EAX,dword ptr [ESP + 0x538]
//   XREF to: Stack[-0x18] (READ)
// 004e3d72: MOV dword ptr [ESP + 0x53c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e3d79: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3d7c: FILD dword ptr [ESP + 0x53c]
//   XREF to: Stack[-0x14] (READ)
// 004e3d83: FSUBR float ptr [EAX + 0x248]
// 004e3d89: FST float ptr [EAX + 0x248]
// 004e3d8f: FMUL double ptr [0x0062d5cd]
//   XREF to: 0062d5cd (READ)
// 004e3d95: PUSH 0x62d56e
//   XREF to: 0062d56e (DATA)
// 004e3d9a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3d9f: FISTP dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x2c] (WRITE)
// 004e3da6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e3dab: ADD ESP,0x4
// 004e3dae: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3db2: MOV ESI,EAX
// 004e3db4: PUSH EDI
// 004e3db5: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3db5
// 004e3db7: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3db9: CMP AL,0x0
// 004e3dbb: JZ 0x004e3dcd
//   XREF to: 004e3dcd (CONDITIONAL_JUMP)
// 004e3dbd: MOV AL,byte ptr [ESI + 0x1]
// 004e3dc0: ADD ESI,0x2
// 004e3dc3: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3dc6: ADD EDI,0x2
// 004e3dc9: CMP AL,0x0
// 004e3dcb: JNZ 0x004e3db5
//   XREF to: 004e3db5 (CONDITIONAL_JUMP)
// 004e3dcd: POP EDI
//   Label: LAB_004e3dcd
// 004e3dce: MOV ESI,0x62d57b
//   XREF to: 0062d57b (DATA)
// 004e3dd3: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3dd7: MOV EBX,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x2c] (READ)
// 004e3dde: PUSH EDI
// 004e3ddf: SUB ECX,ECX
// 004e3de1: DEC ECX
// 004e3de2: MOV AL,0x0
// 004e3de4: SCASB.REPNE ES:EDI
// 004e3de6: DEC EDI
// 004e3de7: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3de7
//   XREF to: 0062d57b (READ)
//   XREF to: 0062d57d (READ)
// 004e3de9: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3deb: CMP AL,0x0
// 004e3ded: JZ 0x004e3dff
//   XREF to: 004e3dff (CONDITIONAL_JUMP)
// 004e3def: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062d57c (READ)
//   XREF to: 0062d57e (READ)
// 004e3df2: ADD ESI,0x2
// 004e3df5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3df8: ADD EDI,0x2
// 004e3dfb: CMP AL,0x0
// 004e3dfd: JNZ 0x004e3de7
//   XREF to: 004e3de7 (CONDITIONAL_JUMP)
// 004e3dff: POP EDI
//   Label: LAB_004e3dff
// 004e3e00: PUSH EBX
// 004e3e01: MOV ESI,dword ptr [ESP + 0x53c]
//   XREF to: Stack[-0x18] (READ)
// 004e3e08: PUSH ESI
// 004e3e09: MOV EDI,dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x30] (READ)
// 004e3e10: PUSH EDI
// 004e3e11: MOV EAX,dword ptr [ESP + 0x534]
//   XREF to: Stack[-0x28] (READ)
// 004e3e18: PUSH EAX
// 004e3e19: PUSH 0x62d57e
//   XREF to: 0062d57e (DATA)
// 004e3e1e: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0x14c] (DATA)
// 004e3e25: PUSH EAX
// 004e3e26: XOR ESI,ESI
// 004e3e28: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e3e2d: MOV DL,0x30
// 004e3e2f: ADD ESP,0x18
// 004e3e32: LEA EDI,[ESP + 0x404]
//   Label: LAB_004e3e32
//   XREF to: Stack[-0x14c] (DATA)
// 004e3e39: SUB ECX,ECX
// 004e3e3b: DEC ECX
// 004e3e3c: XOR EAX,EAX
// 004e3e3e: SCASB.REPNE ES:EDI
// 004e3e40: NOT ECX
// 004e3e42: DEC ECX
// 004e3e43: CMP ESI,ECX
// 004e3e45: JNC 0x004e3e5d
//   XREF to: 004e3e5d (CONDITIONAL_JUMP)
// 004e3e47: CMP byte ptr [ESP + ESI*0x1 + 0x404],0x20
// 004e3e4f: JZ 0x004e3e54
//   XREF to: 004e3e54 (CONDITIONAL_JUMP)
// 004e3e51: INC ESI
//   Label: LAB_004e3e51
// 004e3e52: JMP 0x004e3e32
//   XREF to: 004e3e32 (UNCONDITIONAL_JUMP)
// 004e3e54: MOV byte ptr [ESP + ESI*0x1 + 0x404],DL
//   Label: LAB_004e3e54
// 004e3e5b: JMP 0x004e3e51
//   XREF to: 004e3e51 (UNCONDITIONAL_JUMP)
// 004e3e5d: LEA ESI,[ESP + 0x404]
//   Label: LAB_004e3e5d
//   XREF to: Stack[-0x14c] (DATA)
// 004e3e64: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3e68: PUSH EDI
// 004e3e69: SUB ECX,ECX
// 004e3e6b: DEC ECX
// 004e3e6c: MOV AL,0x0
// 004e3e6e: SCASB.REPNE ES:EDI
// 004e3e70: DEC EDI
// 004e3e71: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3e71
//   XREF to: Stack[-0x14c] (DATA)
// 004e3e73: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3e75: CMP AL,0x0
// 004e3e77: JZ 0x004e3e89
//   XREF to: 004e3e89 (CONDITIONAL_JUMP)
// 004e3e79: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x14b] (READ)
// 004e3e7c: ADD ESI,0x2
// 004e3e7f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3e82: ADD EDI,0x2
// 004e3e85: CMP AL,0x0
// 004e3e87: JNZ 0x004e3e71
//   XREF to: 004e3e71 (CONDITIONAL_JUMP)
// 004e3e89: POP EDI
//   Label: LAB_004e3e89
// 004e3e8a: PUSH 0x62d590
//   XREF to: 0062d590 (DATA)
// 004e3e8f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e3e94: ADD ESP,0x4
// 004e3e97: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3e9b: MOV ESI,EAX
// 004e3e9d: PUSH EDI
// 004e3e9e: SUB ECX,ECX
// 004e3ea0: DEC ECX
// 004e3ea1: MOV AL,0x0
// 004e3ea3: SCASB.REPNE ES:EDI
// 004e3ea5: DEC EDI
// 004e3ea6: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3ea6
// 004e3ea8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3eaa: CMP AL,0x0
// 004e3eac: JZ 0x004e3ebe
//   XREF to: 004e3ebe (CONDITIONAL_JUMP)
// 004e3eae: MOV AL,byte ptr [ESI + 0x1]
// 004e3eb1: ADD ESI,0x2
// 004e3eb4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3eb7: ADD EDI,0x2
// 004e3eba: CMP AL,0x0
// 004e3ebc: JNZ 0x004e3ea6
//   XREF to: 004e3ea6 (CONDITIONAL_JUMP)
// 004e3ebe: POP EDI
//   Label: LAB_004e3ebe
// 004e3ebf: MOV ESI,0x62d5a1
//   XREF to: 0062d5a1 (DATA)
// 004e3ec4: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3ec8: PUSH EDI
// 004e3ec9: SUB ECX,ECX
// 004e3ecb: DEC ECX
// 004e3ecc: MOV AL,0x0
// 004e3ece: SCASB.REPNE ES:EDI
// 004e3ed0: DEC EDI
// 004e3ed1: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3ed1
//   XREF to: 0062d5a1 (READ)
//   XREF to: 0062d5a3 (READ)
// 004e3ed3: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3ed5: CMP AL,0x0
// 004e3ed7: JZ 0x004e3ee9
//   XREF to: 004e3ee9 (CONDITIONAL_JUMP)
// 004e3ed9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062d5a2 (READ)
//   XREF to: 0062d5a4 (READ)
// 004e3edc: ADD ESI,0x2
// 004e3edf: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3ee2: ADD EDI,0x2
// 004e3ee5: CMP AL,0x0
// 004e3ee7: JNZ 0x004e3ed1
//   XREF to: 004e3ed1 (CONDITIONAL_JUMP)
// 004e3ee9: POP EDI
//   Label: LAB_004e3ee9
// 004e3eea: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e3eed: MOV EBX,dword ptr [EAX + 0x254]
// 004e3ef3: PUSH EBX
// 004e3ef4: PUSH 0x62d5a4
//   XREF to: 0062d5a4 (DATA)
// 004e3ef9: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x14c] (DATA)
// 004e3f00: PUSH EAX
// 004e3f01: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e3f06: ADD ESP,0xc
// 004e3f09: LEA ESI,[ESP + 0x404]
//   XREF to: Stack[-0x14c] (DATA)
// 004e3f10: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3f14: PUSH EDI
// 004e3f15: SUB ECX,ECX
// 004e3f17: DEC ECX
// 004e3f18: MOV AL,0x0
// 004e3f1a: SCASB.REPNE ES:EDI
// 004e3f1c: DEC EDI
// 004e3f1d: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3f1d
//   XREF to: Stack[-0x14c] (DATA)
// 004e3f1f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x54c] (DATA)
// 004e3f21: CMP AL,0x0
// 004e3f23: JZ 0x004e3f35
//   XREF to: 004e3f35 (CONDITIONAL_JUMP)
// 004e3f25: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x14b] (READ)
// 004e3f28: ADD ESI,0x2
// 004e3f2b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x54b] (WRITE)
// 004e3f2e: ADD EDI,0x2
// 004e3f31: CMP AL,0x0
// 004e3f33: JNZ 0x004e3f1d
//   XREF to: 004e3f1d (CONDITIONAL_JUMP)
// 004e3f35: POP EDI
//   Label: LAB_004e3f35
// 004e3f36: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004e3f3b: PUSH 0xffff
// 004e3f40: MOV dword ptr [ESP + 0x538],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e3f47: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004e3f4c: ADD ESP,0x4
// 004e3f4f: PUSH 0xc0
// 004e3f54: PUSH 0x100
// 004e3f59: PUSH 0x14
// 004e3f5b: PUSH 0x2d7d6f0
//   XREF to: 02d7d6f0 (DATA)
// 004e3f60: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x54c] (DATA)
// 004e3f64: PUSH EAX
// 004e3f65: MOV ESI,dword ptr [ESP + 0x548]
//   XREF to: Stack[-0x1c] (READ)
// 004e3f6c: PUSH ESI
// 004e3f6d: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 004e3f72: ADD ESP,0x18
// 004e3f75: PUSH 0x58
// 004e3f77: XOR EDI,EDI
// 004e3f79: PUSH ESI
// 004e3f7a: MOV EBX,EAX
// 004e3f7c: MOV dword ptr [ESP + 0x534],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004e3f83: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004e3f88: ADD ESP,0x8
// 004e3f8b: MOV ESI,0xf0
// 004e3f90: MOV dword ptr [ESP + 0x530],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e3f97: TEST EBX,EBX
// 004e3f99: JLE 0x004e3fe0
//   XREF to: 004e3fe0 (CONDITIONAL_JUMP)
// 004e3f9b: MOV EBX,0x2d7d6f0
//   XREF to: 02d7d6f0 (PARAM)
// 004e3fa0: PUSH EBX
//   Label: LAB_004e3fa0
//   XREF to: 02d7d6f0 (DATA)
//   XREF to: 02d7d7f0 (DATA)
// 004e3fa1: PUSH 0x0
// 004e3fa3: PUSH 0xf8
// 004e3fa8: PUSH ESI
// 004e3fa9: PUSH 0x27f
// 004e3fae: PUSH 0x1c0
// 004e3fb3: MOV EAX,dword ptr [ESP + 0x54c]
//   XREF to: Stack[-0x1c] (READ)
// 004e3fba: PUSH EAX
// 004e3fbb: INC EDI
// 004e3fbc: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004e3fc1: ADD ESP,0x1c
// 004e3fc4: ADD EBX,0x100
//   XREF to: 02d7d7f0 (PARAM)
// 004e3fca: MOV EDX,dword ptr [ESP + 0x530]
//   XREF to: Stack[-0x20] (READ)
// 004e3fd1: MOV ECX,dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x24] (READ)
// 004e3fd8: ADD ESI,EDX
// 004e3fda: CMP EDI,ECX
// 004e3fdc: JL 0x004e3fa0
//   XREF to: 004e3fa0 (CONDITIONAL_JUMP)
// 004e3fde: MOV EAX,EAX
// 004e3fe0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_004e3fe0
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e3fe5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e3fea: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004e3fef: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e3ff4: PUSH 0x0
// 004e3ff6: LEA EAX,[ESP + 0x508]
//   XREF to: Stack[-0x4c] (DATA)
// 004e3ffd: PUSH EAX
// 004e3ffe: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 004e4003: ADD ESP,0x8
// 004e4006: MOV ESP,EBP
// 004e4008: POP EBP
// 004e4009: POP EDI
// 004e400a: POP ESI
// 004e400b: POP EBX
// 004e400c: RET
