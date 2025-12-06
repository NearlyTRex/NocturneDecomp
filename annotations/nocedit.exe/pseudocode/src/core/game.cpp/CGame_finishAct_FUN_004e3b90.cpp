// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// Address Range: [[004e3b90, 004e400c]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_finishAct_FUN_004e3b90()

#include "nocturne.h"

/* Signature: int core_game.cpp_CGame_finishAct(CGame* param_1) */

void core_game_cpp_CGame_finishAct_FUN_004e3b90
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CGame *param_5,uint param_6,int param_7,uint param_8,uint param_9,
               CBitFont *param_10,uint param_11,CBitFont *param_12)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
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
  byte local_4c [12];
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
  fVar12 = fVar11 * (float10)0.00027777777777777799;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,param_5));
  local_14 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_14 * (float10)3600;
  param_5->player_pos_y = (float)fVar11;
  fVar12 = fVar11 * (float10)0.016666666666666701;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),param_5))
  ;
  local_18 = (int)ROUND(fVar12);
  fVar11 = fVar11 - (float10)local_18 * (float10)60;
  *(float *)(local_18 + 0x248) = (float)fVar11;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),local_18));
  iVar2 = (int)ROUND(fVar11);
  fVar12 = (float10)*(float *)(iVar2 + 0x248) - (float10)iVar2;
  *(float *)(iVar2 + 0x248) = (float)fVar12;
  fVar12 = fVar12 * (float10)100;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),iVar2));
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
