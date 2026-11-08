// Name: FUN_0044b4a0
// Address: 0044b4a0
// Address Range: [[0044b4a0, 0044bafa]]
// Convention: unknown
// Signature: int FUN_0044b4a0(undefined4 param_1,int *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044b4a0(uint param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_18;
  
  if (*(int *)(param_3 + 0x1cd0) == 0) {
    iVar6 = *param_2 - *(int *)(param_3 + 0x16c);
    iVar7 = param_2[1] - *(int *)(param_3 + 0x170);
    iVar4 = param_2[2] - *(int *)(param_3 + 0x174);
    lVar1 = (longlong)*(int *)(param_3 + 0x180) * (longlong)iVar6;
    lVar2 = (longlong)*(int *)(param_3 + 0x18c) * (longlong)iVar7;
    lVar3 = (longlong)*(int *)(param_3 + 0x198) * (longlong)iVar4;
    _DAT_02d26208 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (((_DAT_02d26208 < 1) ||
        (lVar1 = (longlong)*(int *)(param_3 + 0x178) * (longlong)iVar6,
        lVar2 = (longlong)*(int *)(param_3 + 0x184) * (longlong)iVar7,
        lVar3 = (longlong)*(int *)(param_3 + 400) * (longlong)iVar4,
        _DAT_02d26200 =
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
        _DAT_02d26208 <= _DAT_02d26200)) ||
       ((_DAT_02d26200 <= -_DAT_02d26208 ||
        ((lVar1 = (longlong)*(int *)(param_3 + 0x17c) * (longlong)iVar6,
         lVar2 = (longlong)*(int *)(param_3 + 0x188) * (longlong)iVar7,
         lVar3 = (longlong)*(int *)(param_3 + 0x194) * (longlong)iVar4,
         _DAT_02d26204 =
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
         _DAT_02d26208 <= _DAT_02d26204 || (_DAT_02d26204 <= -_DAT_02d26208)))))) {
      piVar5 = (int *)&DAT_014a02f0;
    }
    else {
      _DAT_02d26200 =
           (int)(((longlong)_DAT_02d26200 * (longlong)*(int *)(param_3 + 0x1c0)) /
                (longlong)_DAT_02d26208) + *(int *)(param_3 + 0x1c8);
      _DAT_02d26204 =
           (int)(((longlong)_DAT_02d26204 * (longlong)*(int *)(param_3 + 0x1c4)) /
                (longlong)_DAT_02d26208) + *(int *)(param_3 + 0x1cc);
      piVar5 = (int *)&DAT_02d26200;
    }
    if (((0 < piVar5[2]) &&
        (*(short *)(*(int *)(param_3 + 0x2f94) +
                   ((*piVar5 >> 0x10) + *(int *)(param_3 + 0x1cc0) * (piVar5[1] >> 0x10)) * 2) != 0)
        ) && ((float)piVar5[2] * (float)_DAT_005b9d8e < *(float *)(param_3 + 0x140))) {
      return (int)ROUND((float)param_4 *
                        ((*(float *)(param_3 + 0x140) - (float)piVar5[2] * (float)_DAT_005b9d8e) /
                        *(float *)(param_3 + 0x140)));
    }
    return 0;
  }
  iVar6 = *param_2 - *(int *)(param_3 + 0x16c);
  iVar7 = param_2[1] - *(int *)(param_3 + 0x170);
  iVar4 = param_2[2] - *(int *)(param_3 + 0x174);
  lVar1 = (longlong)*(int *)(param_3 + 0x180) * (longlong)iVar6;
  lVar2 = (longlong)*(int *)(param_3 + 0x18c) * (longlong)iVar7;
  lVar3 = (longlong)*(int *)(param_3 + 0x198) * (longlong)iVar4;
  _DAT_02d26208 =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  if ((((_DAT_02d26208 < 1) ||
       (lVar1 = (longlong)*(int *)(param_3 + 0x178) * (longlong)iVar6,
       lVar2 = (longlong)*(int *)(param_3 + 0x184) * (longlong)iVar7,
       lVar3 = (longlong)*(int *)(param_3 + 400) * (longlong)iVar4,
       _DAT_02d26200 =
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
       _DAT_02d26208 <= _DAT_02d26200)) || (_DAT_02d26200 <= -_DAT_02d26208)) ||
     ((lVar1 = (longlong)*(int *)(param_3 + 0x17c) * (longlong)iVar6,
      lVar2 = (longlong)*(int *)(param_3 + 0x188) * (longlong)iVar7,
      lVar3 = (longlong)*(int *)(param_3 + 0x194) * (longlong)iVar4,
      _DAT_02d26204 =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
      _DAT_02d26208 <= _DAT_02d26204 || (_DAT_02d26204 <= -_DAT_02d26208)))) {
    piVar5 = (int *)&DAT_014a02f0;
  }
  else {
    _DAT_02d26200 =
         (int)(((longlong)_DAT_02d26200 * (longlong)*(int *)(param_3 + 0x1c0)) /
              (longlong)_DAT_02d26208) + *(int *)(param_3 + 0x1c8);
    _DAT_02d26204 =
         (int)(((longlong)_DAT_02d26204 * (longlong)*(int *)(param_3 + 0x1c4)) /
              (longlong)_DAT_02d26208) + *(int *)(param_3 + 0x1cc);
    piVar5 = (int *)&DAT_02d26200;
  }
  if (piVar5[2] < 1) {
    return 0;
  }
  local_18 = 1;
  uVar8 = 0;
  if (piVar5[2] <
      (int)(*(ushort *)
             (((*piVar5 >> 0x10) + *(int *)(param_3 + 0x1cc0) * (piVar5[1] >> 0x10)) * 2 +
             *(int *)(param_3 + 0x2f94)) + 0x90)) {
    lVar1 = (longlong)
            (int)((uint)*(byte *)(*(int *)(param_3 + 0x1c54) +
                                 ((piVar5[1] >> (*(byte *)(param_3 + 0x1ccc) & 0x1f) &
                                  *(uint *)(param_3 + 0x1c68)) <<
                                 (*(byte *)(param_3 + 0x1c60) & 0x1f)) +
                                 (*(uint *)(param_3 + 0x1c68) &
                                 *piVar5 >> (*(byte *)(param_3 + 0x1cc8) & 0x1f))) << 10) *
            (longlong)param_4;
    uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (*piVar5 >> 0x10 < *(int *)(param_3 + 0x1cc0)) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)(param_3 + 0x2f94) +
               ((*piVar5 >> 0x10) + (piVar5[1] >> 0x10) * *(int *)(param_3 + 0x1cc0)) * 2) + 0x90))
    {
      lVar1 = (longlong)
              (int)((uint)*(byte *)((*(uint *)(param_3 + 0x1c68) &
                                    *piVar5 >> (*(byte *)(param_3 + 0x1cc8) & 0x1f)) +
                                    ((piVar5[1] >> (*(byte *)(param_3 + 0x1ccc) & 0x1f) &
                                     *(uint *)(param_3 + 0x1c68)) <<
                                    (*(byte *)(param_3 + 0x1c60) & 0x1f)) +
                                   *(int *)(param_3 + 0x1c54)) << 10) * (longlong)param_4;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar4 = *piVar5 + -0x20000 >> 0x10;
  *piVar5 = *piVar5 + -0x20000;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(*(ushort *)
               ((iVar4 + (piVar5[1] >> 0x10) * *(int *)(param_3 + 0x1cc0)) * 2 +
               *(int *)(param_3 + 0x2f94)) + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)(*(int *)(param_3 + 0x1c54) +
                                   ((piVar5[1] >> (*(byte *)(param_3 + 0x1ccc) & 0x1f) &
                                    *(uint *)(param_3 + 0x1c68)) <<
                                   (*(byte *)(param_3 + 0x1c60) & 0x1f)) +
                                   (*(uint *)(param_3 + 0x1c68) &
                                   *piVar5 >> (*(byte *)(param_3 + 0x1cc8) & 0x1f))) << 10) *
              (longlong)param_4;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (piVar5[1] >> 0x10 < *(int *)(param_3 + 0x1cc4)) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)(param_3 + 0x2f94) +
               ((*piVar5 >> 0x10) + *(int *)(param_3 + 0x1cc0) * (piVar5[1] >> 0x10)) * 2) + 0x90))
    {
      lVar1 = (longlong)
              (int)((uint)*(byte *)(*(int *)(param_3 + 0x1c54) +
                                   ((piVar5[1] >> (*(byte *)(param_3 + 0x1ccc) & 0x1f) &
                                    *(uint *)(param_3 + 0x1c68)) <<
                                   (*(byte *)(param_3 + 0x1c60) & 0x1f)) +
                                   (*(uint *)(param_3 + 0x1c68) &
                                   *piVar5 >> (*(byte *)(param_3 + 0x1cc8) & 0x1f))) << 10) *
              (longlong)param_4;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar4 = piVar5[1] + -0x20000;
  piVar5[1] = iVar4;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)(param_3 + 0x2f94) +
               ((*piVar5 >> 0x10) + (iVar4 >> 0x10) * *(int *)(param_3 + 0x1cc0)) * 2) + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)((*(uint *)(param_3 + 0x1c68) &
                                    *piVar5 >> (*(byte *)(param_3 + 0x1cc8) & 0x1f)) +
                                    ((piVar5[1] >> (*(byte *)(param_3 + 0x1ccc) & 0x1f) &
                                     *(uint *)(param_3 + 0x1c68)) <<
                                    (*(byte *)(param_3 + 0x1c60) & 0x1f)) +
                                   *(int *)(param_3 + 0x1c54)) << 10) * (longlong)param_4;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar8 / local_18;
}
