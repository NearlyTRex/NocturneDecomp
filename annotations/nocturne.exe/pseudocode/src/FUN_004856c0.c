// Name: FUN_004856c0
// Address: 004856c0
// Address Range: [[004856c0, 004858e7]]
// Convention: unknown
// Signature: void FUN_004856c0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004856c0(float *param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  float10 fVar3;
  float fVar4;
  byte local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_18;
  int local_14;
  
  local_60 = param_1[3] - *param_1;
  local_5c = param_1[4] - param_1[1];
  local_58 = param_1[5] - param_1[2];
  fVar4 = param_1[6];
  local_6c = *(float *)((int)fVar4 + 0x344) - *(float *)((int)fVar4 + 0x338);
  local_68 = *(float *)((int)fVar4 + 0x348) - *(float *)((int)fVar4 + 0x33c);
  local_64 = *(float *)((int)fVar4 + 0x34c) - *(float *)((int)fVar4 + 0x340);
  fVar4 = SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) - local_64;
  if (0.0 < fVar4) {
    local_20 = 2;
    if (0.0 < param_1[7]) {
      fVar3 = (float10)fVar4 / (float10)param_1[7];
      FUN_00563a30();
      iVar2 = (int)ROUND(fVar3);
      local_20 = extraout_EDX;
      if ((extraout_EDX <= iVar2) && (local_20 = iVar2, 100 < iVar2)) {
        local_20 = 100;
      }
    }
    local_14 = local_20;
    local_24 = (float)local_20;
    local_4c = 1.0 / local_24;
    local_54 = local_60 * local_4c;
    local_50 = local_5c * local_4c;
    local_4c = local_58 * local_4c;
    FUN_0054e4a0(local_78,&local_60);
    iVar2 = 0;
    if (0 < local_20) {
      iVar1 = local_20 + -1;
      do {
        while( true ) {
          local_18 = (float)iVar2;
          fVar4 = ((float)iVar2 * _DAT_0058115c) / (float)iVar1;
          if (fVar4 <= (float)_DAT_00581164) break;
          local_30 = local_54 * local_18;
          local_2c = local_50 * local_18;
          local_28 = local_4c * local_18;
          local_3c = *param_1 + local_30;
          local_38 = param_1[1] + local_2c;
          local_34 = param_1[2] + local_28;
          local_14 = iVar1;
          FUN_00460a00(DAT_005ae704,&local_3c,fVar4);
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          FUN_00460aa0(DAT_005ae704,local_78,&local_48);
          fVar3 = (float10)fVar4;
          FUN_00563a30();
          local_14 = (int)ROUND(fVar3);
          FUN_00453040(param_1[6],0,0,local_14);
          thunk_FUN_004cdbc0(DAT_005ae704);
          iVar2 = iVar2 + 1;
          if (local_20 <= iVar2) {
            return;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20);
    }
  }
  return;
}
