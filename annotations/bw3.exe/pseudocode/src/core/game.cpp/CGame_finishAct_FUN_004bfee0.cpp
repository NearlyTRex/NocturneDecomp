// Name: core_game.cpp_CGame_finishAct_FUN_004bfee0
// Address: 004bfee0
// Address Range: [[004bfee0, 004c0290]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_finishAct_FUN_004bfee0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_finishAct_FUN_004bfee0(CGame *this_ptr)

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
    core_game_cpp_CGame_rollCredits_FUN_004c02a0(this_ptr);
    return;
  }
  this_ptr->total_game_time = this_ptr->total_play_time + this_ptr->total_game_time;
  this_ptr->total_kill_count = this_ptr->total_kill_count + this_ptr->damageable_enemy_count;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(auStack_4c + 0x10));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            ((CAlphaBitmap *)(auStack_4c + 0x10),"stats",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_00560d70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            ((CAlphaBitmap *)(auStack_4c + 0x10),0,0,0xffff);
  fVar1 = this_ptr->total_game_time;
  dVar10 = round((double)(fVar1 * (float)_DAT_005c3b60));
  local_20 = (int)ROUND(dVar10);
  fVar1 = fVar1 - (float)local_20 * (float)_DAT_005c3b68;
  local_c = local_20;
  dVar10 = round((double)(fVar1 * (float)_DAT_005c3b70));
  iStack_28 = (int)ROUND(dVar10);
  fVar1 = fVar1 - (float)iStack_28 * (float)_DAT_005c3b78;
  this_ptr->total_game_time = fVar1;
  local_10 = iStack_28;
  dVar10 = round((double)fVar1);
  local_20 = (int)ROUND(dVar10);
  fVar1 = this_ptr->total_game_time - (float)local_20;
  this_ptr->total_game_time = fVar1;
  pcVar11 = (char *)0x4c001c;
  local_14 = local_20;
  dVar10 = round((double)(fVar1 * (float)_DAT_005c3b80));
  iStack_28 = (int)ROUND(dVar10);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar11);
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
  pcVar3 = &DAT_005c3b2b;
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
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Total body count");
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
  pcVar3 = &DAT_005c3b51;
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
  _sprintf(acStack_14c,&DAT_005c3b54);
  this_ptr_00 = _DAT_01549aa8;
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
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  iVar4 = engine_font_cpp_FUN_004b2e40(this_ptr_00,&stack0xfffffab4,0x1d1cf20,0x14,0x100,0xc0);
  iVar6 = 0;
  local_1c = iVar4;
  local_20 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar4) {
    pcVar11 = (char *)0x1d1cf20;
    do {
      iVar6 = iVar6 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + local_20;
    } while (iVar6 < local_1c);
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_00580790();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300((CAlphaBitmap *)auStack_4c,0);
  return;
}
