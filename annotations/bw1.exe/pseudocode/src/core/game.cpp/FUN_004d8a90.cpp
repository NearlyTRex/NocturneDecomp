// Name: core_game.cpp_FUN_004d8a90
// Address: 004d8a90
// Address Range: [[004d8a90, 004d8e40]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d8a90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d8a90(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int y;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  char *pcVar11;
  char local_53c [1024];
  char local_13c [256];
  CAlphaBitmap local_3c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar8 = 0;
  if (*(int *)&this_ptr->field_0x27c == 2) {
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_game_cpp_CGame_rollCredits_FUN_004d8e50(this_ptr);
    return;
  }
  *(float *)&this_ptr->field_0x268 =
       *(float *)&this_ptr->field_0x270 + *(float *)&this_ptr->field_0x268;
  *(int *)&this_ptr->field_0x274 = *(int *)&this_ptr->field_0x274 + *(int *)&this_ptr->field_0x26c;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_3c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_3c,"stats",0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_3c,0,0,0xffff);
  fVar9 = (float10)*(float *)&this_ptr->field_0x268;
  fVar10 = fVar9 * (float10)_DAT_005e355c;
  round();
  local_1c = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)local_1c * (float10)_DAT_005e3564;
  fVar10 = fVar9 * (float10)_DAT_005e356c;
  local_8 = local_1c;
  round();
  local_20 = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)local_20 * (float10)_DAT_005e3574;
  *(float *)&this_ptr->field_0x268 = (float)fVar9;
  local_8 = local_20;
  round();
  local_14 = (int)ROUND(fVar9);
  fVar10 = (float10)*(float *)&this_ptr->field_0x268 - (float10)local_14;
  *(float *)&this_ptr->field_0x268 = (float)fVar10;
  fVar10 = fVar10 * (float10)_DAT_005e357c;
  pcVar11 = "Mission time";
  local_8 = local_14;
  round();
  local_18 = (int)ROUND(fVar10);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar11);
  pcVar11 = local_53c;
  do {
    cVar1 = *pcVar2;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  iVar5 = local_18;
  pcVar2 = &DAT_005e3527;
  iVar3 = -1;
  pcVar11 = local_53c;
  do {
    pcVar7 = pcVar11;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar6 = 0;
  FUN_005bfb40(local_13c,"%2d:%2d:%2d.%2d\n\n",local_1c,local_20,local_14,iVar5);
  do {
    uVar4 = 0xffffffff;
    pcVar11 = local_13c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar6) break;
    if (local_13c[uVar6] == ' ') {
      local_13c[uVar6] = '0';
    }
    uVar6 = uVar6 + 1;
  } while( true );
  pcVar11 = local_13c;
  iVar5 = -1;
  pcVar2 = local_53c;
  do {
    pcVar7 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar2 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar11;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Total body count");
  iVar5 = -1;
  pcVar11 = local_53c;
  do {
    pcVar7 = pcVar11;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_005e354d;
  iVar5 = -1;
  pcVar11 = local_53c;
  do {
    pcVar7 = pcVar11;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  FUN_005bfb40(local_13c,&DAT_005e3550,*(uint *)&this_ptr->field_0x274);
  this_ptr_00 = _DAT_0152d244;
  pcVar11 = local_13c;
  iVar5 = -1;
  pcVar2 = local_53c;
  do {
    pcVar7 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar2 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar11;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  iVar5 = engine_font_cpp_FUN_004c4260(this_ptr_00,local_53c,0x1ccafb0,0x14,0x100,0xc0);
  iVar3 = 0;
  local_c = iVar5;
  local_10 = engine_font_cpp_FUN_004c4510(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar5) {
    pcVar11 = (char *)0x1ccafb0;
    do {
      iVar3 = iVar3 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + local_10;
    } while (iVar3 < local_c);
  }
  wincore_wddvmem_cpp_FUN_005acff0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_3c,0);
  return;
}
