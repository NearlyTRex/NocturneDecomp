// Name: core_game.cpp_FUN_004b32c0
// Address: 004b32c0
// Address Range: [[004b32c0, 004b3810]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b32c0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b32c0(CGame *this_ptr)

{
  float fVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CBitFont *this_ptr_00;
  float10 fVar7;
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
  
  local_60 = DAT_006141b8;
  local_5c = DAT_006141bc;
  local_64 = DAT_006141bc;
  if ((*(uint *)&this_ptr->field_0x3a4 & 0x7fffffff) != 0) {
    if (1.0 <= *(float *)&this_ptr->field_0x3a4) {
      iVar3 = 0xffff;
    }
    else {
      fVar7 = (float10)*(float *)&this_ptr->field_0x3a4 * (float10)_DAT_005d7313;
      round();
      iVar3 = (int)ROUND(fVar7);
      local_14 = iVar3;
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(iVar3);
    local_38 = _DAT_01511cc0;
    if ((int)g_CDemonCameraInstance._324_4_ < 0x1e0) {
      local_38 = _DAT_01511cc4;
    }
    iVar3 = engine_font_cpp_FUN_004ab2b0
                      (local_38,&this_ptr->field_0x2a4,0x1cb0710,10,0x100,
                       (g_CDemonCameraInstance._324_4_ * 9) / 10);
    local_48 = iVar3;
    iVar5 = engine_font_cpp_FUN_004ab560(local_38,0x58);
    iVar3 = DAT_006141bc - iVar3 * iVar5;
    local_54 = iVar5;
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = (iVar3 - iVar4) - iVar5;
    if (_DAT_01511cc4 == local_38) {
      iVar5 = iVar5 + -7;
    }
    iVar3 = 0;
    if (0 < local_48) {
      iVar4 = 0x1cb0710;
      local_4c = DAT_006141b8 + -1;
      do {
        iVar6 = engine_font_cpp_FUN_004aaf00(local_38,iVar4);
        iVar3 = iVar3 + 1;
        engine_font_cpp_FUN_004a8df0(local_38,iVar4,(local_4c - iVar6) / 2,iVar5,0xf8,0);
        iVar4 = iVar4 + 0x100;
        iVar5 = iVar5 + local_54;
      } while (iVar3 < local_48);
    }
  }
  if (0.0 < _DAT_01cb807c) {
    this_ptr_00 = _DAT_01511cb8;
    if ((DAT_006141bc < 0x1e0) && (this_ptr_00 = _DAT_01511cbc, DAT_006141bc < 0x180)) {
      this_ptr_00 = _DAT_01511cc4;
    }
    iVar3 = engine_font_cpp_FUN_004ab560(this_ptr_00,0x58);
    iVar4 = engine_font_cpp_FUN_004ab530(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = DAT_006141bc - iVar5;
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    FUN_005b7790(local_164,"?%d - %s" + 1,_DAT_01cb8078,&DAT_01cb7f78);
    engine_font_cpp_FUN_004a8df0(this_ptr_00,local_164,iVar4 * 2,(iVar5 - iVar3) - iVar4,0xf8,0);
  }
  if ((*(int *)&this_ptr->field_0x244 == 0) && (0 < *(int *)&this_ptr->field_0x3ac)) {
    iVar4 = local_60 >> 0x1f;
    iVar3 = local_60 + iVar4 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_01511cc4;
    if (0x280 < DAT_006141b8) {
      local_40 = _DAT_01511cbc;
    }
    if (800 < DAT_006141b8) {
      local_40 = _DAT_01511cb8;
    }
    iVar5 = engine_font_cpp_FUN_004ab560(local_40,0x58);
    if (local_44 < iVar5) {
      local_44 = engine_font_cpp_FUN_004ab560(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2);
    iVar3 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x3ac) {
      local_1c = &this_ptr->field_0x3b0;
      local_50 = (local_44 * 3) / 2;
      local_18 = this_ptr;
      do {
        iVar4 = local_3c;
        local_34 = iVar3 - local_44;
        local_28 = local_58;
        iVar5 = 2;
        fVar1 = *(float *)&local_18->field_0x8b0;
        if (fVar1 < (float)_DAT_005d731b) {
          iVar5 = 0xfb;
        }
        if (fVar1 < (float)_DAT_005d7323) {
          iVar5 = 1;
        }
        local_30 = local_34;
        local_24 = iVar3;
        engine_2d_c_fillRectWithBorder_FUN_00403250(local_3c,local_34,local_58,iVar3,0,0);
        local_14 = (local_28 - iVar4) + 1;
        fVar7 = (float10)local_14 * (float10)fVar1;
        round();
        local_2c = (int)ROUND(fVar7);
        if (0 < local_2c) {
          engine_2d_c_fillRectColor_FUN_004031c0(iVar4,local_34,local_2c + iVar4,local_24,iVar5);
        }
        puVar2 = local_1c;
        engine_font_cpp_FUN_004a8df0(local_40,local_1c,local_3c,local_30,0xf8,0);
        local_1c = puVar2 + 0x100;
        local_18 = (CGame *)&local_18->field_0x4;
        iVar3 = iVar3 - local_50;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)&this_ptr->field_0x3ac);
    }
  }
  return;
}
