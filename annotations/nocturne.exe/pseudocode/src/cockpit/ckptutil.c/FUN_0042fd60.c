// Name: cockpit_ckptutil.c_FUN_0042fd60
// Address: 0042fd60
// Address Range: [[0042fd60, 00430130]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  uint uStack_4c;
  uint uStack_44;
  uint uStack_40;
  short sStack_2c;
  
  bVar2 = DAT_01c0062c;
  if ((((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) && (_DAT_01c00c5c <= param_2)) &&
     (param_2 <= _DAT_01c00c64)) {
    iVar1 = param_2 * 4;
    if (DAT_005b7624 == 8) {
      iVar4 = *(int *)(&DAT_01bd2fa0 + iVar1);
      fVar8 = (float10)param_3;
      bVar2 = *(byte *)((uint)*(byte *)(iVar4 + param_1) * 3 + 0x1c0064a);
      bVar3 = *(byte *)(param_4 * 3 + 0x1c00649);
      fVar9 = (float10)round();
      iVar1 = (int)ROUND(fVar9);
      fVar9 = (float10)round
                                 ((float10)bVar2 * ((float10)1 - fVar8) + (float10)bVar3 * fVar8);
      iVar6 = (int)ROUND(fVar9) >> 0x1f;
      sStack_2c = (short)iVar1;
      fVar8 = (float10)round
                                 ((float10)bVar3 * ((float10)1 - fVar8) + (float10)sStack_2c * fVar8
                                 );
      iVar7 = (int)ROUND(fVar8) >> 0x1f;
      *(byte *)(iVar4 + param_1) =
           (&DAT_01bf7720)
           [((int)(((int)ROUND(fVar8) + iVar7 * -8) - (uint)(iVar7 << 2 < 0)) >> 3) +
            ((int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3) * 0x400
            + ((int)(((int)ROUND(fVar9) + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3) * 0x20];
      return;
    }
    if (DAT_005b7624 == 0x10) {
      uVar5 = (uint)(*(ushort *)(*(int *)(&DAT_01bd2fa0 + iVar1) + param_1 * 2) >>
                    (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
    }
    else {
      uVar5 = (*(uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + iVar1)) >> (DAT_01c00624 & 0x1f)) <<
              (DAT_01c0062c & 0x1f);
    }
    fVar8 = (float10)round
                               ((float10)((float)(byte)(&DAT_01c00648)[param_4 * 3] *
                                          (1.0 - param_3) + (float)(uVar5 & 0xff) * param_3));
    fVar9 = (float10)round();
    uStack_44 = (uint)(longlong)ROUND(fVar8);
    uStack_4c = (uint)(longlong)ROUND(fVar9);
    uStack_44 = uStack_44 >> (bVar2 & 0x1f);
    fVar8 = (float10)round();
    uStack_40 = (uint)(longlong)ROUND(fVar8);
    uStack_4c = uStack_4c >> (DAT_01c00638 & 0x1f);
    uStack_40 = uStack_40 >> (DAT_01c00644 & 0x1f);
    if (DAT_005b7624 != 0x10) {
      *(uint *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 4) =
           uStack_44 << (DAT_01c00624 & 0x1f) | uStack_4c << (DAT_01c00630 & 0x1f) |
           uStack_40 << (DAT_01c0063c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 2) =
         (ushort)(uStack_4c << (DAT_01c00630 & 0x1f)) | (ushort)(uStack_44 << (DAT_01c00624 & 0x1f))
         | (ushort)(uStack_40 << (DAT_01c0063c & 0x1f));
  }
  return;
}
