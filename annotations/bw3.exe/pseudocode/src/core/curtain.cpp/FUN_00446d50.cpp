// Name: core_curtain.cpp_FUN_00446d50
// Address: 00446d50
// Address Range: [[00446d50, 00447826]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_FUN_00446d50(CCurtain *this_ptr,SCurtainVertex *vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_curtain_cpp_FUN_00446d50(CCurtain *this_ptr,SCurtainVertex *vertex)

{
  byte *puVar1;
  byte *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte *puVar10;
  byte *puVar11;
  int iVar12;
  float afStack_19c [21];
  float afStack_148 [18];
  float afStack_100 [9];
  float afStack_dc [2];
  float fStack_d4;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  SCurtainVertex *pSStack_44;
  float *pfStack_34;
  int iStack_28;
  int iStack_1c;
  int iStack_14;
  
  if ((*(int *)&this_ptr->field_0x65b2c != 0) &&
     (*(float *)&vertex->field_0x24 < *(float *)&this_ptr->field_0x65b28)) {
    *(uint *)&vertex->field_0x34 = 0;
    *(uint *)&vertex->field_0x30 = *(uint *)&vertex->field_0x34;
    *(uint *)&vertex->field_0x2c = *(uint *)&vertex->field_0x30;
    *(uint *)&vertex->field_0x24 = *(uint *)&this_ptr->field_0x65b28;
    *(uint *)&vertex->field_0x6c = 1;
  }
  iStack_1c = 0;
  if (0 < _DAT_007f8fcc) {
    puVar1 = &vertex->field_0x20;
    puVar10 = &this_ptr->field_0x1c728;
    puVar2 = &vertex->field_0x2c;
    iStack_28 = 0;
    pfStack_34 = (float *)0x7f949c;
    do {
      if ((float)_DAT_005b9a69 <= *(float *)&vertex->field_0x30) {
LAB_00447357:
        if (*(float *)(iStack_28 + 0x7f8fd4) <= *(float *)&vertex->field_0x24) {
          fVar6 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
          if (*(float *)&vertex->field_0x24 <= fVar6) {
            afStack_dc[0] = *(float *)&vertex->field_0x20 - *(float *)(iStack_28 + 0x7f8fd0);
            fStack_d4 = *(float *)&vertex->field_0x28 - *(float *)(iStack_28 + 0x7f8fd8);
            fVar5 = SQRT(afStack_dc[0] * afStack_dc[0] + fStack_d4 * fStack_d4);
            if (fVar5 <= *(float *)(iStack_1c * 0x28 + 0x7f949c)) {
              if (*(float *)&vertex->field_0x3c < fVar6) {
                if (*(float *)(iStack_28 + 0x7f8fd4) < *(float *)&vertex->field_0x3c) {
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
                  fVar6 = *(float *)puVar10;
                  fVar5 = *(float *)puVar10;
                  *(float *)puVar2 =
                       *(float *)puVar2 + (fVar3 - *(float *)puVar1) * *(float *)puVar10;
                  *(float *)&vertex->field_0x30 =
                       *(float *)&vertex->field_0x30 +
                       (*(float *)&vertex->field_0x24 - *(float *)&vertex->field_0x24) * fVar6;
                  *(float *)&vertex->field_0x34 =
                       *(float *)&vertex->field_0x34 +
                       (fVar4 - *(float *)&vertex->field_0x28) * fVar5;
                  if ((float *)puVar1 != afStack_dc) {
                    *(float *)puVar1 = fVar3;
                    *(float *)&vertex->field_0x24 = *(float *)&vertex->field_0x24;
                    *(float *)&vertex->field_0x28 = fVar4;
                  }
                  *(uint *)&vertex->field_0x6c = 1;
                }
                else {
                  fVar3 = *(float *)(iStack_28 + 0x7f8fd4);
                  fVar6 = *(float *)puVar10;
                  fVar5 = *(float *)puVar10;
                  *(float *)puVar2 =
                       *(float *)puVar2 +
                       (*(float *)&vertex->field_0x20 - *(float *)puVar1) * *(float *)puVar10;
                  *(float *)&vertex->field_0x30 =
                       *(float *)&vertex->field_0x30 +
                       (fVar3 - *(float *)&vertex->field_0x24) * fVar6;
                  *(float *)&vertex->field_0x34 =
                       *(float *)&vertex->field_0x34 +
                       (*(float *)&vertex->field_0x28 - *(float *)&vertex->field_0x28) * fVar5;
                  if ((float *)puVar1 != afStack_19c) {
                    *(float *)puVar1 = *(float *)&vertex->field_0x20;
                    *(float *)&vertex->field_0x24 = fVar3;
                    *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28;
                  }
                }
              }
              else {
                fVar5 = *(float *)puVar10;
                fVar3 = *(float *)puVar10;
                *(float *)puVar2 =
                     *(float *)puVar2 +
                     (*(float *)&vertex->field_0x20 - *(float *)puVar1) * *(float *)puVar10;
                *(float *)&vertex->field_0x30 =
                     *(float *)&vertex->field_0x30 + (fVar6 - *(float *)&vertex->field_0x24) * fVar5
                ;
                *(float *)&vertex->field_0x34 =
                     *(float *)&vertex->field_0x34 +
                     (*(float *)&vertex->field_0x28 - *(float *)&vertex->field_0x28) * fVar3;
                if ((float *)puVar1 != afStack_100) {
                  *(float *)puVar1 = *(float *)&vertex->field_0x20;
                  *(float *)&vertex->field_0x24 = fVar6;
                  *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28;
                }
              }
            }
          }
        }
      }
      else {
        fVar6 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
        if ((fVar6 <= *(float *)&vertex->field_0x24) ||
           (*(float *)&vertex->field_0x24 <= *(float *)(iStack_28 + 0x7f8fd4))) goto LAB_00447357;
        fVar5 = *(float *)&vertex->field_0x20 - *(float *)(iStack_28 + 0x7f8fd0);
        fVar3 = *(float *)&vertex->field_0x28 - *(float *)(iStack_28 + 0x7f8fd8);
        if (*(float *)(iStack_1c * 0x28 + 0x7f949c) <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))
        goto LAB_00447357;
        *(uint *)&vertex->field_0x30 = 0;
        *(uint *)&vertex->field_0x6c = 1;
        *(float *)&vertex->field_0x24 = fVar6;
      }
      iStack_28 = iStack_28 + 0xc;
      pfStack_34 = pfStack_34 + 10;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < _DAT_007f8fcc);
  }
  iStack_14 = 0;
  if (0 < *(int *)&vertex->field_0x44) {
    puVar10 = &this_ptr->field_0x65b1c;
    puVar11 = &this_ptr->field_0x1c728;
    puVar1 = &vertex->field_0x20;
    puVar2 = &vertex->field_0x2c;
    pSStack_44 = vertex;
    do {
      iVar12 = *(int *)&pSStack_44->field_0x48 * 0x74;
      if (&fStack_94 != afStack_148) {
        fStack_94 = *(float *)puVar1 - *(float *)(&this_ptr->field_0x228 + iVar12);
        fStack_90 = *(float *)&vertex->field_0x24 - *(float *)(&this_ptr->field_0x22c + iVar12);
        fStack_8c = *(float *)&vertex->field_0x28 - *(float *)(&this_ptr->field_0x230 + iVar12);
      }
      fVar5 = SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
      fVar6 = *(float *)&pSStack_44->field_0x58;
      if (fVar6 < fVar5) {
        fVar3 = fVar5 - fVar6;
        fVar7 = 1.0 / fVar5;
        fVar8 = fStack_94 * fVar3 * fVar7;
        fVar9 = fStack_90 * fVar3 * fVar7;
        fVar7 = fStack_8c * fVar3 * fVar7;
        *(float *)puVar1 = *(float *)puVar1 - fVar8;
        *(float *)&vertex->field_0x24 = *(float *)&vertex->field_0x24 - fVar9;
        *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28 - fVar7;
        fVar3 = *(float *)puVar11;
        fVar4 = *(float *)puVar11;
        *(float *)puVar2 = *(float *)puVar2 - fVar8 * *(float *)puVar11;
        *(float *)&vertex->field_0x30 = *(float *)&vertex->field_0x30 - fVar9 * fVar3;
        *(float *)&vertex->field_0x34 = *(float *)&vertex->field_0x34 - fVar7 * fVar4;
      }
      if ((fVar5 < fVar6) && ((float)_DAT_005b9a71 < fVar5)) {
        fVar6 = fVar6 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = fStack_94 * fVar6 * fVar5 * *(float *)puVar10;
        fVar4 = fStack_90 * fVar6 * fVar5 * *(float *)puVar10;
        fVar7 = fStack_8c * fVar6 * fVar5 * *(float *)puVar10;
        *(float *)puVar1 = *(float *)puVar1 + fVar3;
        *(float *)&vertex->field_0x24 = *(float *)&vertex->field_0x24 + fVar4;
        *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28 + fVar7;
        fVar6 = *(float *)puVar11;
        fVar5 = *(float *)puVar11;
        *(float *)puVar2 = *(float *)puVar2 + fVar3 * *(float *)puVar11;
        *(float *)&vertex->field_0x30 = *(float *)&vertex->field_0x30 + fVar4 * fVar6;
        *(float *)&vertex->field_0x34 = *(float *)&vertex->field_0x34 + fVar7 * fVar5;
      }
      pSStack_44 = (SCurtainVertex *)&pSStack_44->field_0x4;
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < *(int *)&vertex->field_0x44);
  }
  return;
}
