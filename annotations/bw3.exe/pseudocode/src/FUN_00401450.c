// Name: FUN_00401450
// Address: 00401450
// Address Range: [[00401450, 0040158c]]
// Convention: unknown
// Signature: undefined8 FUN_00401450(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00401450(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  float local_20;
  
  pbVar5 = &DAT_01c6af98 + param_4 * 3;
  local_20 = 1e+30;
  iVar7 = 0x7149f2ca;
  if (param_4 <= param_5) {
    iVar8 = param_4 << 2;
    do {
      uVar6 = (int)(param_1 - (uint)*pbVar5) >> 0x1f;
      fVar1 = (float)(int)((param_1 - (uint)*pbVar5 ^ uVar6) - uVar6);
      uVar6 = (int)(param_2 - (uint)pbVar5[1]) >> 0x1f;
      fVar2 = (float)(int)((param_2 - (uint)pbVar5[1] ^ uVar6) - uVar6);
      uVar6 = (int)(param_3 - (uint)pbVar5[2]) >> 0x1f;
      fVar3 = ABS(SQRT((float)param_3 * (float)param_3 +
                       (float)param_2 * (float)param_2 + (float)param_1 * (float)param_1) *
                  (float)_DAT_005b5034 - *(float *)((int)&DAT_0072ffb8 + iVar8));
      fVar4 = (float)(int)((param_3 - (uint)pbVar5[2] ^ uVar6) - uVar6);
      fVar1 = fVar3 * fVar3 * (float)_DAT_005b5054 +
              fVar4 * fVar4 * (float)_DAT_005b504c +
              fVar2 * fVar2 * (float)_DAT_005b5044 + fVar1 * fVar1 * (float)_DAT_005b503c;
      if (fVar1 < local_20) {
        unaff_EDI = param_4;
        local_20 = fVar1;
      }
      pbVar5 = pbVar5 + 3;
      param_4 = param_4 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = param_5;
    } while (param_4 <= param_5);
  }
  return CONCAT44(iVar7,unaff_EDI);
}
