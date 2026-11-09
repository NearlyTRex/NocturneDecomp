// Name: core_flies.cpp_FUN_004a6c30
// Address: 004a6c30
// Address Range: [[004a6c30, 004a6fdd]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004a6c30(CFlies *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flies_cpp_FUN_004a6c30(CFlies *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_105c [1011];
  ulonglong uStack_80;
  float fStack_78;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  double dStack_18;
  
  bVar6 = 0;
  if (*(int *)&param_1->field_0x2b78 != 0) {
    iVar5 = *(int *)&param_1->field_0x2b64;
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x70) != 1) {
        *(uint *)&param_1->field_0x70 = 2;
        return;
      }
      afStack_50[3] = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_40 = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_78 = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
      uStack_80 = __BITCAST_DOUBLE(CONCAT44(fStack_40,afStack_50[3]));
      fStack_3c = fStack_78;
      if (0.0 < SQRT(fStack_78 * fStack_78 + afStack_50[3] * afStack_50[3] + fStack_40 * fStack_40))
      {
        core_actor_cpp_FUN_00408d30(param_1,&uStack_80);
        afStack_70[2] = fStack_38;
        afStack_70[(uint)bVar6 * -2 + 3] = afStack_50[(uint)bVar6 * -2 + 7];
        afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
        fStack_2c = afStack_70[2] * _DAT_005d66d9;
        fStack_28 = afStack_70[3] * _DAT_005d66d9;
        fStack_24 = fStack_60 * _DAT_005d66d9;
        fStack_74 = afStack_70[2] * _DAT_005d66d9;
        afStack_70[(uint)bVar6 * -2] = afStack_50[(uint)bVar6 * -2 + 10];
        afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb];
        if ((float *)&uStack_80 != &fStack_74) {
          uStack_80 = __BITCAST_DOUBLE(CONCAT44(afStack_70[0],fStack_74));
          fStack_78 = afStack_70[1];
        }
        iVar5 = 0;
        if (0 < *(int *)&param_1->field_0x2c0) {
          pfVar3 = (float *)&param_1->field_0x2c8;
          pfVar4 = (float *)&param_1->field_0x2e0;
          do {
            *pfVar3 = *pfVar3 - (float)uStack_80;
            pfVar3[1] = pfVar3[1] - uStack_80._4_4_;
            pfVar3[2] = pfVar3[2] - fStack_78;
            pfVar3[3] = pfVar3[3] - (float)uStack_80;
            pfVar3[4] = pfVar3[4] - uStack_80._4_4_;
            pfVar3[5] = pfVar3[5] - fStack_78;
            *pfVar4 = *pfVar4 - (float)uStack_80;
            pfVar4[1] = pfVar4[1] - uStack_80._4_4_;
            pfVar4[2] = pfVar4[2] - fStack_78;
            pfVar4[3] = pfVar4[3] - (float)uStack_80;
            pfVar4[4] = pfVar4[4] - uStack_80._4_4_;
            iVar5 = iVar5 + 1;
            pfVar4[5] = pfVar4[5] - fStack_78;
            pfVar3 = pfVar3 + 0xd;
            pfVar4 = pfVar4 + 0xd;
          } while (iVar5 < *(int *)&param_1->field_0x2c0);
        }
      }
      iVar5 = *(int *)&param_1->field_0x2b64;
      *(uint *)&param_1->field_0x20 = *(uint *)(iVar5 + 0x20);
      *(uint *)&param_1->field_0x24 = *(uint *)(iVar5 + 0x24);
      *(uint *)&param_1->field_0x28 = *(uint *)(iVar5 + 0x28);
      *(uint *)&param_1->field_0x2c = *(uint *)(iVar5 + 0x2c);
    }
    if ((0 < *(int *)&param_1->field_0x2b68) &&
       (fVar1 = *(float *)&param_1->field_0x2b6c - param_2, *(float *)&param_1->field_0x2b6c = fVar1
       , fVar1 <= 0.0)) {
      if (*(int *)&param_1->field_0x2c0 < 200) {
        core_flies_cpp_FUN_004a7560(param_1,*(int *)&param_1->field_0x2c0);
        *(int *)&param_1->field_0x2c0 = *(int *)&param_1->field_0x2c0 + 1;
        *(uint *)&param_1->field_0x2b6c = *(uint *)&param_1->field_0x2b70;
        *(int *)&param_1->field_0x2b68 = *(int *)&param_1->field_0x2b68 + -1;
      }
      else {
        *(uint *)&param_1->field_0x2b68 = 0;
      }
    }
    fVar1 = (float)_DAT_005d66e1;
    iVar5 = 0;
    if (0 < *(int *)&param_1->field_0x2c0) {
      pfVar4 = (float *)&param_1->field_0x2c4;
      do {
        fVar2 = *pfVar4 + param_2 * fVar1;
        *pfVar4 = fVar2;
        uStack_80 = (double)fVar2;
        if (1.0 <= uStack_80) {
          dStack_18 = floor(uStack_80);
          *pfVar4 = *pfVar4 - (float)dStack_18;
          if (pfVar4 + 1 != pfVar4 + 4) {
            pfVar4[1] = pfVar4[4];
            pfVar4[2] = pfVar4[5];
            pfVar4[3] = pfVar4[6];
          }
          if (pfVar4 + 4 != pfVar4 + 7) {
            pfVar4[4] = pfVar4[7];
            pfVar4[5] = pfVar4[8];
            pfVar4[6] = pfVar4[9];
          }
          if (pfVar4 + 7 != pfVar4 + 10) {
            pfVar4[7] = pfVar4[10];
            pfVar4[8] = pfVar4[0xb];
            pfVar4[9] = pfVar4[0xc];
          }
          core_flies_cpp_FUN_004a7660(param_1,pfVar4 + 7);
          fStack_54 = afStack_50[2];
          afStack_50[(uint)bVar6 * -2] = afStack_50[(uint)bVar6 * -2 + 3];
          afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          if (pfVar4 + 10 != afStack_70 + 7) {
            pfVar4[10] = fStack_54;
            pfVar4[0xb] = afStack_50[0];
            pfVar4[0xc] = afStack_50[1];
          }
        }
        pfVar4 = pfVar4 + 0xd;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)&param_1->field_0x2c0);
    }
  }
  return;
}
