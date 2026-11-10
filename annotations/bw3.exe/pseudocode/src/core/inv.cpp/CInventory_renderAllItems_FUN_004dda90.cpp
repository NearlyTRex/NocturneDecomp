// Name: core_inv.cpp_CInventory_renderAllItems_FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004de609]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

{
  float fVar1;
  int iVar2;
  uint extraout_ECX;
  uint extraout_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  CAlphaBitmap *this_ptr_00;
  char *pcVar7;
  int alpha;
  float local_570;
  float local_56c;
  float local_568;
  char local_564 [256];
  char local_464 [256];
  char local_364 [256];
  char local_264 [256];
  char local_164 [256];
  int local_64;
  float local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  CBitFont *local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_20;
  int local_1c;
  CBitFont *local_18;
  int local_14;
  
  if (*(int *)&g_CGamePtr->field_0x24c != 0) {
    return;
  }
  if (*(int *)(this_ptr + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  if (*(int *)&g_CFieldNotesPtr->field_0x40 != 0) {
    *(uint *)(this_ptr + 0x344) = 0;
    *(uint *)(this_ptr + 0x34c) = 0;
    *(uint *)(this_ptr + 0x350) = 0;
    *(uint *)(this_ptr + 0x340) = 0;
  }
  if (DAT_005fba1c != _DAT_01d70a34) {
    core_inv_cpp_loadAssets_FUN_004da570();
  }
  local_58 = _DAT_01c6cee8;
  local_44 = _DAT_01549ab4;
  _DAT_01c6cee8 = 0;
  if ((DAT_005fba1c < 0x180) && (*(int *)(this_ptr + 0x454) == 0)) {
    local_44 = _DAT_01549abc;
  }
  if ((*(int *)(this_ptr + 0x338) == 0) || (*(float *)(this_ptr + 0x340) <= 0.0)) goto LAB_004ddcd0;
  iVar5 = 0x10;
  local_50 = 0x70;
  iVar3 = 0x00000060;
  iVar4 = 0x000000D0;
  if ((DAT_005fba1c < 0x180) && (*(int *)(this_ptr + 0x454) == 0)) {
    iVar4 = 0x000000D0 / 2;
    iVar3 = 0x00000060 / 2;
    iVar5 = 8;
    local_50 = 0x28;
  }
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c790
                    (*(CDemonActor **)(this_ptr + 0x338),"GCHolycross" + 1);
  if (iVar2 == 0) {
    if (*(int *)(*(int *)(this_ptr + 0x338) + 0x570) == 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(*(int *)(this_ptr + 0x338) + 0x304));
      if (iVar2 == 0) {
        pcVar7 = &DAT_005c661d;
        goto LAB_004de3dc;
      }
      if (*(int *)(*(int *)(this_ptr + 0x338) + 0x56c) == 10) {
        _sprintf(local_164,&DAT_005c6617);
      }
      else {
        _sprintf(local_164,&DAT_005c661a);
      }
    }
    else {
      pcVar7 = "infinite";
LAB_004de3dc:
      _sprintf(local_164,pcVar7);
    }
    local_14 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_164);
    engine_font_cpp_FUN_004b0a20
              (local_44,local_164,(DAT_005fba18 - iVar5) - iVar2,(DAT_005fba1c - iVar5) - local_14,
               0xf8);
  }
  if (*(int *)(this_ptr + 0x454) != 0) {
    iVar2 = core_inv_cpp_FUN_004dd310(this_ptr,*(uint *)(this_ptr + 0x338));
    if (iVar2 == 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0();
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(*(uint *)(this_ptr + 0x338));
      pcVar7 = "%s\n\n%s";
    }
    else {
      core_inv_cpp_getItemDescription_FUN_004d9eb0();
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(*(uint *)(this_ptr + 0x338));
      pcVar7 = "%s\n\n%s";
    }
    _sprintf(local_564,pcVar7);
    local_24 = local_44;
    local_60 = (float)engine_font_cpp_FUN_004b2e40(local_44,local_564,0x1d5be88,10,0x100);
    local_38 = local_60;
    local_34 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar3 = (DAT_005fba1c - iVar3) + iVar5;
    local_20 = (DAT_005fba18 - iVar4) + iVar5;
    iVar4 = 0;
    if (0 < (int)local_60) {
      iVar5 = 0x1d5be88;
      do {
        iVar4 = iVar4 + 1;
        engine_font_cpp_FUN_004b0a20(local_24,iVar5,local_20,iVar3,0xf8);
        iVar5 = iVar5 + 0x100;
        iVar3 = iVar3 + local_34;
      } while (iVar4 < (int)local_38);
    }
  }
LAB_004ddcd0:
  if ((*(int *)(this_ptr + 0x33c) != 0) && (0.0 < *(float *)(this_ptr + 0x344))) {
    iVar5 = 0x10;
    local_48 = 0x70;
    iVar3 = 0x00000060;
    iVar4 = 0x000000D0;
    if ((DAT_005fba1c < 0x180) && (*(int *)(this_ptr + 0x454) == 0)) {
      iVar4 = 0x000000D0 / 2;
      iVar3 = 0x00000060 / 2;
      iVar5 = 8;
      local_48 = 0x28;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)(this_ptr + 0x33c));
    if (iVar2 != 0) {
      _sprintf(local_364,"%d x%3.0f%%");
      local_60 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_364);
      engine_font_cpp_FUN_004b0a20
                (local_44,local_364,(DAT_005fba18 - iVar5) - iVar2,
                 (DAT_005fba1c - iVar5) - (int)local_60,0xf8);
    }
    if (*(int *)(this_ptr + 0x454) != 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0();
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(*(uint *)(this_ptr + 0x33c));
      _sprintf(local_264,"%s\n\n%s");
      local_28 = local_44;
      local_60 = (float)engine_font_cpp_FUN_004b2e40(local_44,local_264,0x1d5c888,10,0x100);
      local_3c = local_60;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar3 = (DAT_005fba1c - iVar3) + iVar5;
      local_30 = (DAT_005fba18 - iVar4) + iVar5;
      iVar4 = 0;
      if (0 < (int)local_60) {
        iVar5 = 0x1d5c888;
        do {
          iVar4 = iVar4 + 1;
          engine_font_cpp_FUN_004b0a20(local_28,iVar5,local_30,iVar3,0xf8);
          iVar5 = iVar5 + 0x100;
          iVar3 = iVar3 + local_40;
        } while (iVar4 < (int)local_3c);
      }
    }
  }
  if ((0.0 < *(float *)(this_ptr + 0x344)) || (0.0 < *(float *)(this_ptr + 0x348))) {
    local_56c = *(float *)(this_ptr + 0x348);
    if (local_56c < *(float *)(this_ptr + 0x344)) {
      local_56c = *(float *)(this_ptr + 0x344);
    }
    local_4c = 0xffff;
    if (local_56c < 1.0) {
      fVar6 = (float10)local_56c * (float10)_DAT_005c664b;
      round();
      local_4c = (int)ROUND(fVar6);
    }
    local_568 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) * (float)_DAT_005c664f;
    if (local_568 < 0.0) {
      local_568 = 0.0;
    }
    if (1.0 < local_568) {
      local_568 = 1.0;
    }
    iVar3 = 0x3f;
    local_5c = 0x30;
    if (DAT_005fba1c < 0x180) {
      iVar3 = 0x1f;
      local_5c = 0x18;
    }
    local_570 = (float)*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b80) *
                (float)_DAT_005c664f;
    iVar4 = (DAT_005fba18 + -4) - local_5c;
    if (local_570 < 0.0) {
      local_570 = 0.0;
    }
    if (1.0 < local_570) {
      local_570 = 1.0;
    }
    local_5c = local_5c + -1;
    local_60 = (float)iVar3;
    fVar6 = (float10)iVar3 - (float10)iVar3 * (float10)local_570;
    local_14 = iVar3;
    local_14 = round(iVar3);
    local_64 = (int)ROUND(fVar6);
    engine_alphabit_cpp_FUN_0040d8a0
              (&CAlphaBitmap_01d708b8,iVar4,local_64 + 4,0,local_64,extraout_ECX);
    fVar6 = (float10)local_60 - (float10)local_60 * (float10)local_568;
    round(iVar3);
    local_64 = (int)ROUND(fVar6);
    engine_alphabit_cpp_FUN_0040d8a0
              (&CAlphaBitmap_01d70890,iVar4,local_64 + 4,0,local_64,extraout_EDX);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708a4,iVar4,4,local_14);
    if (*(int *)&g_CGamePtr->field_0xe0 != 0) {
      iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if ((0x3f800000 < *(int *)(iVar5 + 0x2538)) || (*(float *)(iVar5 + 0x2538) <= 0.0)) {
        fVar6 = (float10)*(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538);
        round();
        local_14 = (int)ROUND(fVar6);
        _sprintf(local_464,&DAT_005c6640);
      }
      else {
        _sprintf(local_464,&DAT_005c6643);
      }
      engine_font_cpp_FUN_004b0a20(local_44,local_464,iVar4,iVar3 + -6,0xf9);
      _sprintf(local_464,&DAT_005c6645);
      engine_font_cpp_FUN_004b0a20(local_44,local_464,iVar4 + 0x1c,iVar3 + -6,0xfc);
    }
  }
  fVar1 = *(float *)(this_ptr + 0x34c);
  if (0.0 < fVar1) {
    local_54 = 0xffff;
    if (fVar1 < 1.0) {
      fVar6 = (float10)fVar1 * (float10)_DAT_005c6657;
      round();
      local_54 = (int)ROUND(fVar6);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(local_54);
    local_18 = _DAT_01549ab4;
    if (DAT_005fba1c < 0x180) {
      local_18 = _DAT_01549abc;
    }
    iVar3 = engine_font_cpp_FUN_004b2e40(local_18,this_ptr + 0x354,0x1d5d288,10,0x100);
    local_1c = iVar3;
    local_2c = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_18,0x58);
    iVar3 = (DAT_005fba1c + -4) - local_2c * iVar3;
    if (((_DAT_01549abc != local_18) || (_DAT_01dd4890 == 0)) && (iVar4 = 0, 0 < local_1c)) {
      iVar5 = 0x1d5d288;
      do {
        iVar4 = iVar4 + 1;
        engine_font_cpp_FUN_004b0a20(local_18,iVar5,4,iVar3,0xf8);
        iVar5 = iVar5 + 0x100;
        iVar3 = iVar3 + local_2c;
      } while (iVar4 < local_1c);
    }
  }
  if (((*(int *)(this_ptr + 0xc) != 0) && (*(int *)&g_CFieldNotesPtr->field_0x40 == 0)) &&
     (*(int *)&g_CGamePtr->field_0x24c == 0)) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708cc,2,2,0xffff);
    iVar3 = _DAT_01d70a20;
    if (_DAT_01d70a20 == -1) {
      alpha = 0xffff;
      iVar2 = 2;
      iVar5 = 2;
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0;
    }
    else {
      alpha = 0xffff;
      iVar2 = 2;
      iVar5 = 2;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0 + iVar3 * 4 + iVar4;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(this_ptr_00,iVar5,iVar2,alpha);
  }
  _DAT_01c6cee8 = local_58;
  return;
}
