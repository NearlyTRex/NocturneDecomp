// Name: FUN_0042ef90
// Address: 0042ef90
// Address Range: [[0042ef90, 0042f255]]
// Convention: unknown
// Signature: void FUN_0042ef90(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ef90(int param_1,int param_2,float param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte extraout_CL;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  if ((((_DAT_01c35e48 <= param_1) && (param_1 <= _DAT_01c35e50)) && (_DAT_01c35e4c <= param_2)) &&
     ((param_2 <= _DAT_01c35e54 && (DAT_006141c0 != 8)))) {
    if (DAT_006141c0 == 0x10) {
      uVar1 = *(ushort *)(*(int *)(&DAT_01c2a38c + param_2 * 4) + param_1 * 2);
      uVar2 = (uint)(uVar1 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar3 = (uint)(uVar1 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar4 = (uint)(uVar1 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    else {
      puVar6 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c2a38c + param_2 * 4));
      uVar2 = (*puVar6 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar3 = (*puVar6 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar4 = (*puVar6 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    param_4 = param_4 * 3;
    fVar9 = (float10)1 - (float10)param_3;
    fVar10 = (float10)(byte)(&DAT_01c3583a)[param_4] * fVar9;
    fVar7 = (float10)(byte)(&DAT_01c35839)[param_4] * fVar9 +
            (float10)((float)(uVar3 & 0xff) * param_3);
    fVar8 = (float10)((float)(uVar4 & 0xff) * param_3);
    fVar12 = (float)((float10)(byte)(&DAT_01c35838)[param_4] * fVar9 +
                    (float10)((float)(uVar2 & 0xff) * param_3));
    fVar13 = (float)fVar7;
    fVar9 = (float10)fVar12;
    FUN_005b7ff0(fVar12,fVar13);
    FUN_005b7ff0();
    fVar10 = fVar10 + fVar8;
    uVar4 = (uint)(longlong)ROUND(fVar9) >> (extraout_CL & 0x1f);
    uVar11 = FUN_005b7ff0(fVar12,fVar13,(float)fVar10,(longlong)ROUND(fVar9),(longlong)ROUND(fVar7))
    ;
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    uVar3 = (uint)uVar11 >> (DAT_01c35828 & 0x1f);
    uVar2 = (uint)(longlong)ROUND(fVar10) >> (DAT_01c35834 & 0x1f);
    if (DAT_006141c0 != 0x10) {
      *(uint *)(iVar5 * 4 + *(int *)(&DAT_01c2a38c + param_2 * 4)) =
           uVar4 << (DAT_01c35814 & 0x1f) | uVar3 << (DAT_01c35820 & 0x1f) |
           uVar2 << (DAT_01c3582c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01c2a38c + param_2 * 4) + iVar5 * 2) =
         (ushort)(uVar3 << (DAT_01c35820 & 0x1f)) | (ushort)(uVar4 << (DAT_01c35814 & 0x1f)) |
         (ushort)(uVar2 << (DAT_01c3582c & 0x1f));
  }
  return;
}
