// Name: FUN_00446d50
// Address: 00446d50
// Address Range: [[00446d50, 00447826]]
// Convention: unknown
// Signature: void FUN_00446d50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446d50(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float afStack_19c [21];
  float afStack_148 [18];
  float afStack_100 [9];
  float afStack_dc [2];
  float fStack_d4;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_44;
  float *pfStack_34;
  int iStack_28;
  int iStack_1c;
  int iStack_14;
  
  if ((*(int *)(param_1 + 0x65b2c) != 0) &&
     (*(float *)(param_2 + 0x24) < *(float *)(param_1 + 0x65b28))) {
    *(uint *)(param_2 + 0x34) = 0;
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x34);
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x24) = *(uint *)(param_1 + 0x65b28);
    *(uint *)(param_2 + 0x6c) = 1;
  }
  iStack_1c = 0;
  if (0 < _DAT_007f8fcc) {
    pfVar1 = (float *)(param_2 + 0x20);
    pfVar10 = (float *)(param_1 + 0x1c728);
    pfVar2 = (float *)(param_2 + 0x2c);
    iStack_28 = 0;
    pfStack_34 = (float *)0x7f949c;
    do {
      if ((float)_DAT_005b9a69 <= *(float *)(param_2 + 0x30)) {
LAB_00447357:
        if (*(float *)(iStack_28 + 0x7f8fd4) <= *(float *)(param_2 + 0x24)) {
          fVar6 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
          if (*(float *)(param_2 + 0x24) <= fVar6) {
            afStack_dc[0] = *(float *)(param_2 + 0x20) - *(float *)(iStack_28 + 0x7f8fd0);
            fStack_d4 = *(float *)(param_2 + 0x28) - *(float *)(iStack_28 + 0x7f8fd8);
            fVar5 = SQRT(afStack_dc[0] * afStack_dc[0] + fStack_d4 * fStack_d4);
            if (fVar5 <= *(float *)(iStack_1c * 0x28 + 0x7f949c)) {
              if (*(float *)(param_2 + 0x3c) < fVar6) {
                if (*(float *)(iStack_28 + 0x7f8fd4) < *(float *)(param_2 + 0x3c)) {
                  if (fVar5 <= 0.0) {
                    afStack_dc[0] = 0.0;
                    fStack_d4 = 0.0;
                  }
                  else {
                    afStack_dc[0] = afStack_dc[0] * (1.0 / fVar5);
                    fStack_d4 = fStack_d4 * (1.0 / fVar5);
                  }
                  fVar3 = afStack_dc[0] * *pfStack_34 + *(float *)(iStack_28 + 0x7f8fd0);
                  fVar4 = fStack_d4 * *pfStack_34 + *(float *)(iStack_28 + 0x7f8fd8);
                  fVar6 = *pfVar10;
                  fVar5 = *pfVar10;
                  *pfVar2 = *pfVar2 + (fVar3 - *pfVar1) * *pfVar10;
                  *(float *)(param_2 + 0x30) =
                       *(float *)(param_2 + 0x30) +
                       (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x24)) * fVar6;
                  *(float *)(param_2 + 0x34) =
                       *(float *)(param_2 + 0x34) + (fVar4 - *(float *)(param_2 + 0x28)) * fVar5;
                  if (pfVar1 != afStack_dc) {
                    *pfVar1 = fVar3;
                    *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24);
                    *(float *)(param_2 + 0x28) = fVar4;
                  }
                  *(uint *)(param_2 + 0x6c) = 1;
                }
                else {
                  fVar3 = *(float *)(iStack_28 + 0x7f8fd4);
                  fVar6 = *pfVar10;
                  fVar5 = *pfVar10;
                  *pfVar2 = *pfVar2 + (*(float *)(param_2 + 0x20) - *pfVar1) * *pfVar10;
                  *(float *)(param_2 + 0x30) =
                       *(float *)(param_2 + 0x30) + (fVar3 - *(float *)(param_2 + 0x24)) * fVar6;
                  *(float *)(param_2 + 0x34) =
                       *(float *)(param_2 + 0x34) +
                       (*(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x28)) * fVar5;
                  if (pfVar1 != afStack_19c) {
                    *pfVar1 = *(float *)(param_2 + 0x20);
                    *(float *)(param_2 + 0x24) = fVar3;
                    *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28);
                  }
                }
              }
              else {
                fVar5 = *pfVar10;
                fVar3 = *pfVar10;
                *pfVar2 = *pfVar2 + (*(float *)(param_2 + 0x20) - *pfVar1) * *pfVar10;
                *(float *)(param_2 + 0x30) =
                     *(float *)(param_2 + 0x30) + (fVar6 - *(float *)(param_2 + 0x24)) * fVar5;
                *(float *)(param_2 + 0x34) =
                     *(float *)(param_2 + 0x34) +
                     (*(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x28)) * fVar3;
                if (pfVar1 != afStack_100) {
                  *pfVar1 = *(float *)(param_2 + 0x20);
                  *(float *)(param_2 + 0x24) = fVar6;
                  *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28);
                }
              }
            }
          }
        }
      }
      else {
        fVar6 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
        if ((fVar6 <= *(float *)(param_2 + 0x24)) ||
           (*(float *)(param_2 + 0x24) <= *(float *)(iStack_28 + 0x7f8fd4))) goto LAB_00447357;
        fVar5 = *(float *)(param_2 + 0x20) - *(float *)(iStack_28 + 0x7f8fd0);
        fVar3 = *(float *)(param_2 + 0x28) - *(float *)(iStack_28 + 0x7f8fd8);
        if (*(float *)(iStack_1c * 0x28 + 0x7f949c) <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))
        goto LAB_00447357;
        *(uint *)(param_2 + 0x30) = 0;
        *(uint *)(param_2 + 0x6c) = 1;
        *(float *)(param_2 + 0x24) = fVar6;
      }
      iStack_28 = iStack_28 + 0xc;
      pfStack_34 = pfStack_34 + 10;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < _DAT_007f8fcc);
  }
  iStack_14 = 0;
  if (0 < *(int *)(param_2 + 0x44)) {
    pfVar10 = (float *)(param_1 + 0x65b1c);
    pfVar11 = (float *)(param_1 + 0x1c728);
    pfVar1 = (float *)(param_2 + 0x20);
    pfVar2 = (float *)(param_2 + 0x2c);
    iStack_44 = param_2;
    do {
      iVar12 = *(int *)(iStack_44 + 0x48) * 0x74 + param_1 + 0x208;
      if (&fStack_94 != afStack_148) {
        fStack_94 = *pfVar1 - *(float *)(iVar12 + 0x20);
        fStack_90 = *(float *)(param_2 + 0x24) - *(float *)(iVar12 + 0x24);
        fStack_8c = *(float *)(param_2 + 0x28) - *(float *)(iVar12 + 0x28);
      }
      fVar5 = SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
      fVar6 = *(float *)(iStack_44 + 0x58);
      if (fVar6 < fVar5) {
        fVar3 = fVar5 - fVar6;
        fVar7 = 1.0 / fVar5;
        fVar8 = fStack_94 * fVar3 * fVar7;
        fVar9 = fStack_90 * fVar3 * fVar7;
        fVar7 = fStack_8c * fVar3 * fVar7;
        *pfVar1 = *pfVar1 - fVar8;
        *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) - fVar9;
        *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) - fVar7;
        fVar3 = *pfVar11;
        fVar4 = *pfVar11;
        *pfVar2 = *pfVar2 - fVar8 * *pfVar11;
        *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) - fVar9 * fVar3;
        *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) - fVar7 * fVar4;
      }
      if ((fVar5 < fVar6) && ((float)_DAT_005b9a71 < fVar5)) {
        fVar6 = fVar6 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = fStack_94 * fVar6 * fVar5 * *pfVar10;
        fVar4 = fStack_90 * fVar6 * fVar5 * *pfVar10;
        fVar7 = fStack_8c * fVar6 * fVar5 * *pfVar10;
        *pfVar1 = *pfVar1 + fVar3;
        *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) + fVar4;
        *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + fVar7;
        fVar6 = *pfVar11;
        fVar5 = *pfVar11;
        *pfVar2 = *pfVar2 + fVar3 * *pfVar11;
        *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar4 * fVar6;
        *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + fVar7 * fVar5;
      }
      iStack_44 = iStack_44 + 4;
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < *(int *)(param_2 + 0x44));
  }
  return;
}
