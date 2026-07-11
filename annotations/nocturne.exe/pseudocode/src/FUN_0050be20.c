// Name: FUN_0050be20
// Address: 0050be20
// Address Range: [[0050be20, 0050c001]]
// Convention: unknown
// Signature: void FUN_0050be20(undefined4 param_1,float *param_2,float *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050be20(uint param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float local_38;
  
  iVar4 = _DAT_01c7070c;
  iVar6 = 0;
  fVar9 = 0.0;
  fVar8 = 0.0;
  local_38 = 0.0;
  if (0 < _DAT_01fba9a4) {
    do {
      iVar1 = *(int *)(&DAT_01fba9a8 + iVar6);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar5 = *(float *)(iVar1 + 0x104) - (*param_2 + *param_3);
        fVar2 = *(float *)(iVar1 + 0x108) - (param_2[1] + param_3[1]);
        fVar3 = *(float *)(iVar1 + 0x10c) - (param_2[2] + param_3[2]);
        fVar5 = (float)(((int)(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) >> 1) + _DAT_01c7070c)
        ;
        if (fVar5 <= *(float *)(iVar1 + 0x11d4)) {
          fVar5 = 1.0 - fVar5 / *(float *)(iVar1 + 0x11d4);
          fVar9 = *(float *)(iVar1 + 0x11c4) * fVar5 + fVar9;
          fVar8 = *(float *)(iVar1 + 0x11c8) * fVar5 + fVar8;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar5 + local_38;
        }
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 < _DAT_01fba9a4 * 4);
  }
  if (_DAT_01fba9a4 == 0) {
    fVar8 = 128.0;
    local_38 = 128.0;
    fVar9 = 128.0;
  }
  if ((float)_DAT_0059064a < fVar9) {
    fVar9 = 255.0;
  }
  if ((float)_DAT_0059064a < fVar8) {
    fVar8 = 255.0;
  }
  if ((float)_DAT_0059064a < local_38) {
    local_38 = 255.0;
  }
  fVar7 = (float10)local_38;
  FUN_00563a30(fVar8,fVar9);
  iVar6 = FUN_00563a30();
  (&DAT_005c5034)[param_4 * 0xc] = iVar6 << 8;
  iVar6 = FUN_00563a30();
  (&DAT_005c5038)[param_4 * 0xc] = iVar6 << 8;
  (&DAT_005c503c)[param_4 * 0xc] = (int)ROUND(fVar7) << 8;
  _DAT_01c7070c = iVar4;
  return;
}
