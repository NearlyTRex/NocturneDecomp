// Name: FUN_004ec180
// Address: 004ec180
// Address Range: [[004ec180, 004ec4ff]]
// Convention: unknown
// Signature: void FUN_004ec180(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ec180(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  float local_158;
  float local_154;
  float local_150;
  uint local_14c;
  byte local_148;
  int local_147;
  char local_143 [259];
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  
  iVar2 = FUN_00558a30();
  iVar2 = iVar2 / 0x12;
  _DAT_01cea3f4 = iVar2 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  local_38 = 0;
  _DAT_01cea3f4 = iVar2;
  if (0 < _DAT_01d06610) {
    local_40 = param_1 + 0x20;
    local_3c = (int *)&DAT_01d06614;
    do {
      local_2c = local_3c;
      local_18 = _DAT_01cea3f8 - *local_3c;
      local_154 = (float)local_18 * (float)ram0x0058c2fa;
      local_30 = 1;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)_DAT_0058c30a < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)_DAT_0058c312) && (local_28 = 0, 0 < *(int *)(param_1 + 0x1c))) {
        local_34 = local_3c + 5;
        local_20 = local_3c;
        local_24 = param_1;
        local_1c = local_40 + 0x1c;
        piVar3 = local_3c;
        do {
          if ((char)local_20[2] == '\0') {
            local_150 = *(float *)(local_24 + 0x48) * (float)_DAT_0058c302;
            local_30 = 0;
            if (local_150 < (float)_DAT_0058c31a) {
              local_150 = 2.0;
            }
            if ((float)_DAT_0058c322 < local_150) {
              local_150 = 5.0;
            }
            local_18 = _DAT_01cea3f8 - piVar3[3];
            local_158 = (float)local_18 * (float)ram0x0058c2fa;
            if (local_158 < 0.0) {
              local_158 = 0.0;
            }
            if ((float)_DAT_0058c30a < local_158) {
              local_158 = 30.0;
            }
            if (local_150 < local_158) {
              local_14c = 0x109;
              local_148 = 6;
              pcVar5 = local_143;
              local_147 = local_2c[1];
              piVar4 = local_34;
              do {
                iVar2 = *piVar4;
                *pcVar5 = (char)iVar2;
                if ((char)iVar2 == '\0') break;
                cVar1 = *(char *)((int)piVar4 + 1);
                piVar4 = (int *)((int)piVar4 + 2);
                pcVar5[1] = cVar1;
                pcVar5 = pcVar5 + 2;
              } while (cVar1 != '\0');
              FUN_004eb3c0(param_1,local_1c,&local_14c);
              piVar3[3] = _DAT_01cea3f8;
            }
          }
          piVar3 = piVar3 + 1;
          local_20 = (int *)((int)local_20 + 1);
          local_24 = local_24 + 0x78;
          local_1c = local_1c + 0x78;
          local_28 = local_28 + 1;
        } while (local_28 < *(int *)(param_1 + 0x1c));
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 0x45;
      }
      else {
        if ((local_38 < 0) || (_DAT_01d06610 <= local_38)) {
          _DAT_01cc4800 = ">@..\\core\\netgame.cpp" + 2;
          _DAT_01cc4804 = 0x107;
          FUN_004c8440("removeChatOut - invalid index");
        }
        _DAT_01d06610 = _DAT_01d06610 + -1;
        FUN_00566170(&DAT_01d06614 + iVar2 * 0x114,&DAT_01d06614 + (iVar2 + 1) * 0x114,
                     (_DAT_01d06610 - iVar2) * 0x114);
      }
    } while (local_38 < _DAT_01d06610);
  }
  return;
}
