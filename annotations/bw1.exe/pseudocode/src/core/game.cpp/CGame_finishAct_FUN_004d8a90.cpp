// Name: core_game.cpp_CGame_finishAct_FUN_004d8a90
// Address: 004d8a90
// Address Range: [[004d8a90, 004d8e40]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004d8a90(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_finishAct_FUN_004d8a90(CGame *this_ptr)

{
  float fVar1;
  char cVar2;
  CBitFont *this_ptr_00;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int y;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  char *pcVar11;
  char acStack_14c [256];
  byte auStack_4c [36];
  int iStack_28;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  bVar9 = 0;
  if (this_ptr->act_completion_state == 2) {
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_game_cpp_CGame_rollCredits_FUN_004d8e50(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(auStack_4c + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            ((CAlphaBitmap *)(auStack_4c + 0x10),"stats",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            ((CAlphaBitmap *)(auStack_4c + 0x10),0,0,0xffff);
  fVar1 = this_ptr->total_game_time;
  dVar10 = round((double)(fVar1 * (float)0.00027777777777777799));
  local_20 = (int)ROUND(dVar10);
  fVar1 = fVar1 - (float)local_20 * (float)3600;
  local_c = local_20;
  dVar10 = round((double)(fVar1 * (float)0.016666666666666701));
  iStack_28 = (int)ROUND(dVar10);
  fVar1 = fVar1 - (float)iStack_28 * (float)60;
  this_ptr->total_game_time = fVar1;
  local_10 = iStack_28;
  dVar10 = round((double)fVar1);
  local_20 = (int)ROUND(dVar10);
  fVar1 = this_ptr->total_game_time - (float)local_20;
  this_ptr->total_game_time = fVar1;
  pcVar11 = (char *)0x4d8bcc;
  local_14 = local_20;
  dVar10 = round((double)(fVar1 * (float)100));
  iStack_28 = (int)ROUND(dVar10);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar11);
  pcVar11 = &stack0xfffffab4;
  do {
    cVar2 = *pcVar3;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  pcVar3 = "\n\n";
  iVar4 = -1;
  pcVar11 = &stack0xfffffab4;
  do {
    pcVar8 = pcVar11;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar11 + (uint)bVar9 * -2 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  _sprintf(acStack_14c,"%2d:%2d:%2d.%2d\n\n");
  do {
    uVar5 = 0xffffffff;
    pcVar11 = acStack_14c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar9 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar5 - 1 <= uVar7) break;
    if (acStack_14c[uVar7] == ' ') {
      acStack_14c[uVar7] = '0';
    }
    uVar7 = uVar7 + 1;
  } while( true );
  pcVar11 = acStack_14c;
  iVar4 = -1;
  pcVar3 = &stack0xfffffab4;
  do {
    pcVar8 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar3 + (uint)bVar9 * -2 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar11;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Total body count");
  iVar4 = -1;
  pcVar11 = &stack0xfffffab4;
  do {
    pcVar8 = pcVar11;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar11 + (uint)bVar9 * -2 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar3 = "\n\n";
  iVar4 = -1;
  pcVar11 = &stack0xfffffab4;
  do {
    pcVar8 = pcVar11;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar11 + (uint)bVar9 * -2 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  _sprintf(acStack_14c,"%d\n\n");
  this_ptr_00 = g_ThemeFont;
  pcVar11 = acStack_14c;
  iVar4 = -1;
  pcVar3 = &stack0xfffffab4;
  do {
    pcVar8 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar3 + (uint)bVar9 * -2 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar11;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  iVar4 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                    (this_ptr_00,&stack0xfffffab4,g_ActStatsTextBuffer2,0x14,0x100,0xc0);
  iVar6 = 0;
  local_1c = iVar4;
  local_20 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar4) {
    pcVar11 = g_ActStatsTextBuffer2;
    do {
      iVar6 = iVar6 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + local_20;
    } while (iVar6 < local_1c);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0((CAlphaBitmap *)auStack_4c,0);
  return;
}
