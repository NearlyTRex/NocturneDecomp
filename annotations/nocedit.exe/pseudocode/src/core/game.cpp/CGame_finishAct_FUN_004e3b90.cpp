// Name: core_game.cpp_CGame_finishAct_FUN_004e3b90
// Address: 004e3b90
// Address Range: [[004e3b90, 004e400c]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_finishAct_FUN_004e3b90()

#include "nocturne.h"

/* Signature: int core_game.cpp_CGame_finishAct(CGame* param_1) */

void core_game_cpp_CGame_finishAct_FUN_004e3b90(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  CBitFont *pCVar8;
  char *pcVar9;
  int iVar10;
  byte bVar11;
  float10 fVar12;
  double dVar13;
  CGame *in_stack_00000004;
  CGame *in_stack_fffffab0;
  float fVar14;
  CGame *pCVar15;
  char local_54c [4];
  char local_14c [256];
  byte local_4c [16];
  CAlphaBitmap CStack_3c;
  uint local_28;
  int local_24;
  int local_20;
  CBitFont *local_1c;
  int local_18;
  
  bVar11 = 0;
  if (in_stack_00000004->field87_0x258 == 2) {
    pCVar8 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      pCVar8 = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar8,0x58);
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_00000004,in_stack_fffffab0);
    fVar14 = 5.0;
    while (0.0 < fVar14) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("To be continued...");
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (pCVar8,0,g_WindowWidth + -1,(g_WindowHeight - iVar2) / 2,0xf8,0,pcVar3);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      pCVar15 = in_stack_00000004;
      core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_00000004);
      fVar14 = (float)pCVar15 - in_stack_00000004->delta_time_float;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_game_cpp_CGame_rollCredits_FUN_004e4010(in_stack_00000004);
    return;
  }
  in_stack_00000004->player_pos_y =
       in_stack_00000004->player_rotation + in_stack_00000004->player_pos_y;
  in_stack_00000004->game_state_flags =
       in_stack_00000004->game_state_flags + (int)in_stack_00000004->player_pos_x;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)local_4c,"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)(local_4c + 4),0,0,0xffff);
  fVar12 = (float10)in_stack_00000004->player_pos_y;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * (float10)0.00027777777777777799));
  CStack_3c.height = (int)ROUND(dVar13);
  fVar12 = fVar12 - (float10)CStack_3c.height * (float10)3600;
  in_stack_00000004->player_pos_y = (float)fVar12;
  local_18 = CStack_3c.height;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * (float10)0.016666666666666701));
  CStack_3c.ptrOpa = (char *)(int)ROUND(dVar13);
  fVar12 = fVar12 - (float10)(int)CStack_3c.ptrOpa * (float10)60;
  in_stack_00000004->player_pos_y = (float)fVar12;
  local_1c = (CBitFont *)CStack_3c.ptrOpa;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  local_24 = (int)ROUND(dVar13);
  fVar14 = in_stack_00000004->player_pos_y - (float)local_24;
  in_stack_00000004->player_pos_y = fVar14;
  pcVar3 = (char *)0x4e3d9f;
  local_20 = local_24;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar14 * (float)100));
  CStack_3c.ptrRaw = (char *)(int)ROUND(dVar13);
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
  pcVar3 = local_54c;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = CStack_3c.height;
  pcVar4 = "\n\n";
  iVar5 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  uVar7 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_14c,"%2d:%2d:%2d.%2d\n\n",local_28,CStack_3c.width,local_18,iVar2);
  do {
    uVar6 = 0xffffffff;
    pcVar3 = local_14c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    if (local_14c[uVar7] == ' ') {
      local_14c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar9 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Total body count");
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "\n\n";
  iVar2 = -1;
  pcVar3 = local_54c;
  do {
    pcVar9 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar3 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_sprintf_FUN_005fdbd0(local_14c,"%d\n\n",in_stack_00000004->game_state_flags);
  pcVar3 = local_14c;
  iVar2 = -1;
  pcVar4 = local_54c;
  do {
    pcVar9 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_1c = g_ThemeFont;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  pCVar8 = local_1c;
  iVar2 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (local_1c,local_54c,&DAT_02d7d6f0,0x14,0x100,0xc0);
  iVar10 = 0;
  local_24 = iVar2;
  local_20 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar8,0x58);
  iVar5 = 0xf0;
  if (0 < iVar2) {
    pcVar3 = &DAT_02d7d6f0;
    do {
      iVar10 = iVar10 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (local_1c,0x1c0,0x27f,iVar5,0xf8,0,pcVar3);
      pcVar3 = pcVar3 + 0x100;
      iVar5 = iVar5 + local_20;
    } while (iVar10 < local_24);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_54c[0] = -0x11;
  local_54c[1] = '?';
  local_54c[2] = 'N';
  local_54c[3] = '\0';
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  builtin_strncpy(local_54c,"\x03@N",4);
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_3c);
  return;
}
