// Name: core_game.cpp_FUN_004d8700
// Address: 004d8700
// Address Range: [[004d8700, 004d8a8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d8700(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d8700(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  uint uVar3;
  uint extraout_EDX;
  int iVar4;
  uint uVar5;
  int y;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  char *pcVar11;
  char local_548 [1024];
  char local_148 [256];
  CAlphaBitmap local_48;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_48,"stats",0x280,0x1e0);
  pcVar6 = local_548;
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_48,0,0,0xffff);
  *(float *)&this_ptr->field_0x268 =
       *(float *)&this_ptr->field_0x270 + *(float *)&this_ptr->field_0x268;
  fVar9 = (float10)*(float *)&this_ptr->field_0x270;
  fVar10 = fVar9 * (float10)_DAT_005e34ec;
  round();
  local_20 = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)local_20 * (float10)_DAT_005e34f4;
  fVar10 = fVar9 * (float10)_DAT_005e34fc;
  local_14 = local_20;
  round();
  local_2c = (int)ROUND(fVar10);
  fVar9 = fVar9 - (float10)local_2c * (float10)_DAT_005e3504;
  *(float *)(extraout_ECX + 0x270) = (float)fVar9;
  local_14 = local_2c;
  round();
  local_28 = (int)ROUND(fVar9);
  fVar10 = (float10)*(float *)(extraout_ECX_00 + 0x270) - (float10)local_28;
  *(float *)(extraout_ECX_00 + 0x270) = (float)fVar10;
  fVar10 = fVar10 * (float10)_DAT_005e350c;
  pcVar11 = "Level time";
  *(uint *)(extraout_ECX_00 + 0x274) = extraout_EDX;
  local_14 = local_28;
  round();
  local_24 = (int)ROUND(fVar10);
  pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar11);
  do {
    cVar1 = *pcVar11;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = &DAT_005e34bd;
  iVar2 = -1;
  pcVar11 = local_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  FUN_005bfb40(local_148,"%2d:%2d:%2d.%2d\n\n",local_20,local_2c,local_28,local_24)
  ;
  do {
    uVar3 = 0xffffffff;
    pcVar11 = local_148;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= uVar5) break;
    if (local_148[uVar5] == ' ') {
      local_148[uVar5] = '0';
    }
    uVar5 = uVar5 + 1;
  } while( true );
  pcVar11 = local_148;
  iVar2 = -1;
  pcVar6 = local_548;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
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
  pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Body count");
  iVar2 = -1;
  pcVar11 = local_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = "\n\n";
  iVar2 = -1;
  pcVar11 = local_548;
  do {
    pcVar7 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar11 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  FUN_005bfb40(local_148,&DAT_005e34e0,*(uint *)&this_ptr->field_0x26c);
  this_ptr_00 = _DAT_0152d244;
  pcVar11 = local_148;
  iVar2 = -1;
  pcVar6 = local_548;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
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
  iVar2 = engine_font_cpp_FUN_004c4260(this_ptr_00,local_548,0x1cc9bb0,0x14,0x100,0xc0);
  iVar4 = 0;
  local_18 = iVar2;
  local_1c = engine_font_cpp_FUN_004c4510(this_ptr_00,0x58);
  y = 0xf0;
  if (0 < iVar2) {
    pcVar11 = (char *)0x1cc9bb0;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                (this_ptr_00,0x1c0,0x27f,y,0xf8,0,pcVar11);
      pcVar11 = pcVar11 + 0x100;
      y = y + local_1c;
    } while (iVar4 < local_18);
  }
  *(uint *)&this_ptr->field_0x270 = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_48,0);
  return;
}
