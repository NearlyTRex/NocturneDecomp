// Name: engine_font.cpp_FUN_004c18c0
// Address: 004c18c0
// Address Range: [[004c18c0, 004c1d66]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004c18c0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004c18c0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  CBitFont *pCVar6;
  byte *pbVar7;
  char local_16c [300];
  int *local_40;
  CBitFont *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  CBitFont *local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  
  local_40 = (int *)FUN_005c1268(param_4 * 4);
  if (local_40 == (int *)0x0) {
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0x2cb;
    core_main_c_FUN_005030e0("Out of memory");
  }
  iVar3 = 0;
  pbVar4 = *(byte **)(param_1 + param_2 * 4 + 0x194);
  local_20 = *(uint *)(param_1 + 0x4208);
  if (0 < param_3 * param_4) {
    do {
      local_20 = (uint)*pbVar4;
      if (local_20 != *(uint *)(param_1 + 0x4208)) break;
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      local_20 = *(uint *)(param_1 + 0x4208);
    } while (iVar3 < param_3 * param_4);
  }
  if (local_20 == *(uint *)(param_1 + 0x4208)) {
    _sprintf(local_16c,"No character markers found in font file (%s).");
    _DAT_01d1d404 = 0x2e0;
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    core_main_c_FUN_005030e0(local_16c);
  }
  iVar3 = 0;
  pbVar4 = *(byte **)(param_1 + param_2 * 4 + 0x194);
  local_34 = 0;
  piVar2 = local_40;
  if (0 < param_4) {
    do {
      iVar5 = 0;
      pbVar7 = pbVar4;
      if (0 < param_3) {
        do {
          if (*pbVar7 == local_20) {
            local_34 = local_34 + 1;
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            break;
          }
          iVar5 = iVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while (iVar5 < param_3);
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + param_3;
    } while (iVar3 < param_4);
  }
  local_34 = local_34 + -1;
  local_38 = 0;
  iVar3 = param_5;
  if (0 < local_34) {
    local_2c = param_1 + param_2 * 0x50 + 4;
    local_3c = param_1 + param_2 * 4;
    local_30 = local_40;
    do {
      local_18 = 0;
      local_14 = (byte *)(*(int *)(local_3c + 0x194) + *local_30 * param_3);
      local_24 = local_30;
      local_1c = local_14 + param_3;
      pCVar6 = param_1 + iVar3 * 4;
      for (iVar5 = 0; iVar1 = iVar5 - local_28, iVar5 < param_3; iVar5 = iVar5 + 1) {
        if (local_18 == 0) {
          if (*local_14 == local_20) {
            local_18 = 1;
            local_28 = iVar5;
            if (0xff < iVar3) {
              _sprintf(local_16c,"Too many chars: fontfile %s, chars %d");
              _DAT_01d1d404 = 0x314;
              _DAT_01d1d400 = "..\\engine\\font.cpp";
              core_main_c_FUN_005030e0(local_16c);
            }
            *(byte **)(pCVar6 + 0x1de8) = local_1c;
          }
        }
        else if (*local_14 != local_20) {
          *(int *)(pCVar6 + 0x35e8) = iVar1;
          local_18 = 0;
          if (*(int *)(param_1 + 0x41e8) < iVar1) {
            *(int *)(param_1 + 0x41e8) = iVar1;
          }
          iVar1 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70
                            (param_1,*(uchar **)(pCVar6 + 0x1de8),*(int *)(pCVar6 + 0x35e8),
                             local_24[1] - (*local_24 + 1),param_3);
          *(int *)(pCVar6 + 0x39e8) = iVar1;
          if (*(int *)(param_1 + 0x41ec) < iVar1) {
            *(int *)(param_1 + 0x41ec) = iVar1;
          }
          iVar3 = iVar3 + 1;
          pCVar6 = pCVar6 + 4;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (local_18 == 1) {
        *(int *)(pCVar6 + 0x35e8) = iVar1;
        if (*(int *)(param_1 + 0x41e8) < iVar1) {
          *(int *)(param_1 + 0x41e8) = iVar1;
        }
        iVar5 = engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70
                          (param_1,*(uchar **)(param_1 + iVar3 * 4 + 0x1de8),
                           *(int *)(param_1 + iVar3 * 4 + 0x35e8),local_30[1] - (*local_30 + 1),
                           param_3);
        *(int *)(param_1 + iVar3 * 4 + 0x39e8) = iVar5;
        if (*(int *)(param_1 + 0x41ec) < iVar5) {
          *(int *)(param_1 + 0x41ec) = iVar5;
        }
        iVar3 = iVar3 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  if (param_5 < iVar3) {
    pCVar6 = param_1 + param_5 * 4;
    do {
      param_5 = param_5 + 1;
      *(int *)(pCVar6 + 0x21e8) = param_2;
      pCVar6 = pCVar6 + 4;
    } while (param_5 < iVar3);
  }
  *(uint *)(param_1 + 0x41f0) = *(uint *)(param_1 + 0x41ec);
  FUN_005c0336(local_40);
  return;
}
