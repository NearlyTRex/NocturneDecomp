// Name: FUN_005526d0
// Address: 005526d0
// Address Range: [[005526d0, 00552848]]
// Convention: unknown
// Signature: void FUN_005526d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005526d0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = _DAT_02cf28b8 * 8;
  if (DAT_0060422c != 2) {
    if (0 < DAT_0060422c) {
      uVar4 = *(uint *)(&DAT_02cf2828 + iVar11);
      uVar5 = *(uint *)(iVar11 + 0x2cf282c);
      uVar6 = *(uint *)(&DAT_02cf2838 + iVar11);
      uVar7 = *(uint *)(iVar11 + 0x2cf283c);
      uVar8 = *(uint *)(&DAT_02cf2848 + iVar11);
      uVar9 = *(uint *)(iVar11 + 0x2cf284c);
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 8;
        *(uint *)(&DAT_02cf3340 + iVar11) = uVar4;
        *(uint *)(iVar11 + 0x2cf3344) = uVar5;
        *(uint *)(&DAT_02cf3380 + iVar11) = uVar6;
        *(uint *)(iVar11 + 0x2cf3384) = uVar7;
        *(uint *)(&DAT_02cf33c0 + iVar11) = uVar8;
        *(uint *)(iVar11 + 0x2cf33c4) = uVar9;
        iVar11 = iVar12;
      } while (iVar12 < DAT_0060422c * 8);
    }
    return;
  }
  fVar10 = _DAT_00604244 * _DAT_005d2a12;
  dVar1 = (double)(*(float *)(_DAT_02cf28b8 * 4 + 0x2cf2870) * fVar10);
  dVar2 = (double)(*(float *)(_DAT_02cf28b8 * 4 + 0x2cf2878) * fVar10);
  dVar3 = (double)(*(float *)(_DAT_02cf28b8 * 4 + 0x2cf2880) * fVar10);
  _DAT_02cf3340 = *(double *)(&DAT_02cf2828 + iVar11) - dVar1;
  _DAT_02cf3380 = *(double *)(&DAT_02cf2838 + iVar11) - dVar2;
  _DAT_02cf33c0 = *(double *)(&DAT_02cf2848 + iVar11) - dVar3;
  _DAT_02cf3348 = *(double *)(&DAT_02cf2828 + iVar11) + dVar1;
  _DAT_02cf3388 = *(double *)(&DAT_02cf2838 + iVar11) + dVar2;
  _DAT_02cf33c8 = *(double *)(&DAT_02cf2848 + iVar11) + dVar3;
  return;
}
