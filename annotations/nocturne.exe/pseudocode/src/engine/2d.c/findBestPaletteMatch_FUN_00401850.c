// Name: engine_2d.c_findBestPaletteMatch_FUN_00401850
// Address: 00401850
// Address Range: [[00401850, 00401983]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401850(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401850(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int unaff_EDI;
  float local_20;
  
  pbVar5 = &DAT_01c00648 + param_4 * 3;
  local_20 = 1e+30;
  if (param_4 <= param_5) {
    iVar7 = param_4 << 2;
    do {
      uVar6 = (int)(param_1 - (uint)*pbVar5) >> 0x1f;
      fVar1 = (float)(int)((param_1 - (uint)*pbVar5 ^ uVar6) - uVar6);
      uVar6 = (int)(param_2 - (uint)pbVar5[1]) >> 0x1f;
      fVar2 = (float)(int)((param_2 - (uint)pbVar5[1] ^ uVar6) - uVar6);
      uVar6 = (int)(param_3 - (uint)pbVar5[2]) >> 0x1f;
      fVar3 = ABS(SQRT((float)param_3 * (float)param_3 +
                       (float)param_2 * (float)param_2 + (float)param_1 * (float)param_1) *
                  (float)_DAT_0057712c - *(float *)((int)&DAT_006af638 + iVar7));
      fVar4 = (float)(int)((param_3 - (uint)pbVar5[2] ^ uVar6) - uVar6);
      fVar1 = fVar3 * fVar3 * (float)_DAT_0057714c +
              fVar4 * fVar4 * (float)_DAT_00577144 +
              fVar2 * fVar2 * (float)_DAT_0057713c + fVar1 * fVar1 * (float)_DAT_00577134;
      if (fVar1 < local_20) {
        unaff_EDI = param_4;
        local_20 = fVar1;
      }
      pbVar5 = pbVar5 + 3;
      param_4 = param_4 + 1;
      iVar7 = iVar7 + 4;
    } while (param_4 <= param_5);
  }
  return unaff_EDI;
}
