// Name: core_game.cpp_FUN_004cc2b0
// Address: 004cc2b0
// Address Range: [[004cc2b0, 004cc800]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004cc2b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004cc2b0(CGame *this_ptr)

{
  float fVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CBitFont *this_ptr_00;
  char *text;
  float10 fVar6;
  byte local_164 [256];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  CBitFont *local_40;
  int local_3c;
  CBitFont *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  CGame *local_18;
  int local_14;
  
  local_60 = DAT_0061b498;
  local_5c = DAT_0061b49c;
  local_64 = DAT_0061b49c;
  if ((*(uint *)&this_ptr->field_0x3b4 & 0x7fffffff) != 0) {
    if (1.0 <= *(float *)&this_ptr->field_0x3b4) {
      iVar3 = 0xffff;
    }
    else {
      fVar6 = (float10)*(float *)&this_ptr->field_0x3b4 * (float10)_DAT_005e13a4;
      round();
      iVar3 = (int)ROUND(fVar6);
      local_14 = iVar3;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(iVar3);
    local_38 = _DAT_0152d244;
    if ((int)g_CDemonCameraInstance._324_4_ < 0x1e0) {
      local_38 = _DAT_0152d248;
    }
    iVar3 = engine_font_cpp_FUN_004c4260
                      (local_38,&this_ptr->field_0x2b4,0x1cc91a0,10,0x100,
                       (g_CDemonCameraInstance._324_4_ * 9) / 10);
    local_48 = iVar3;
    iVar5 = engine_font_cpp_FUN_004c4510(local_38,0x58);
    iVar3 = DAT_0061b49c - iVar3 * iVar5;
    local_54 = iVar5;
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr);
    iVar5 = (iVar3 - iVar4) - iVar5;
    if (_DAT_0152d248 == local_38) {
      iVar5 = iVar5 + -7;
    }
    iVar3 = 0;
    if (0 < local_48) {
      text = (char *)0x1cc91a0;
      local_4c = DAT_0061b498 + -1;
      do {
        iVar4 = engine_font_cpp_FUN_004c3ea0(local_38,text);
        iVar3 = iVar3 + 1;
        engine_font_cpp_FUN_004c1dd0(local_38,text,(local_4c - iVar4) / 2,iVar5,0xf8,0);
        text = text + 0x100;
        iVar5 = iVar5 + local_54;
      } while (iVar3 < local_48);
    }
  }
  if (0.0 < _DAT_01cd0aec) {
    this_ptr_00 = _DAT_0152d23c;
    if ((DAT_0061b49c < 0x1e0) && (this_ptr_00 = _DAT_0152d240, DAT_0061b49c < 0x180)) {
      this_ptr_00 = _DAT_0152d248;
    }
    iVar3 = engine_font_cpp_FUN_004c4510(this_ptr_00,0x58);
    iVar4 = engine_font_cpp_FUN_004c44e0(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr);
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr);
    iVar5 = DAT_0061b49c - iVar5;
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    FUN_005bfb40(local_164,"?%d - %s" + 1,_DAT_01cd0ae8,&DAT_01cd09e8);
    engine_font_cpp_FUN_004c1dd0(this_ptr_00,local_164,iVar4 * 2,(iVar5 - iVar3) - iVar4,0xf8,0);
  }
  if ((*(int *)&this_ptr->field_0x244 == 0) && (0 < *(int *)&this_ptr->field_0x3bc)) {
    iVar4 = local_60 >> 0x1f;
    iVar3 = local_60 + iVar4 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_0152d248;
    if (0x280 < DAT_0061b498) {
      local_40 = _DAT_0152d240;
    }
    if (800 < DAT_0061b498) {
      local_40 = _DAT_0152d23c;
    }
    iVar5 = engine_font_cpp_FUN_004c4510(local_40,0x58);
    if (local_44 < iVar5) {
      local_44 = engine_font_cpp_FUN_004c4510(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2);
    iVar3 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x3bc) {
      local_1c = &this_ptr->field_0x3c0;
      local_50 = (local_44 * 3) / 2;
      local_18 = this_ptr;
      do {
        iVar4 = local_3c;
        local_34 = iVar3 - local_44;
        local_28 = local_58;
        iVar5 = 2;
        fVar1 = *(float *)&local_18->field_0x8c0;
        if (fVar1 < (float)_DAT_005e13ac) {
          iVar5 = 0xfb;
        }
        if (fVar1 < (float)_DAT_005e13b4) {
          iVar5 = 1;
        }
        local_30 = local_34;
        local_24 = iVar3;
        engine_2d_c_fillRectWithBorder_FUN_00403250(local_3c,local_34,local_58,iVar3,0,0);
        local_14 = (local_28 - iVar4) + 1;
        fVar6 = (float10)local_14 * (float10)fVar1;
        round();
        local_2c = (int)ROUND(fVar6);
        if (0 < local_2c) {
          engine_2d_c_fillRectColor_FUN_004031c0(iVar4,local_34,local_2c + iVar4,local_24,iVar5);
        }
        puVar2 = local_1c;
        engine_font_cpp_FUN_004c1dd0(local_40,local_1c,local_3c,local_30,0xf8,0);
        local_1c = puVar2 + 0x100;
        local_18 = (CGame *)&local_18->field_0x4;
        iVar3 = iVar3 - local_50;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)&this_ptr->field_0x3bc);
    }
  }
  return;
}
