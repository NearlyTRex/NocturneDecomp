// Name: core_flies.cpp_FUN_004ad950
// Address: 004ad950
// Address Range: [[004ad950, 004adcfd]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004ad950(CFlies *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flies_cpp_FUN_004ad950(CFlies *param_1,float param_2)

{
  double input_value;
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_105c [1011];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [5];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  double dStack_20;
  int iStack_18;
  float *pfStack_14;
  
  bVar6 = 0;
  if (*(int *)&param_1->field_0x2a1c != 0) {
    iVar5 = *(int *)&param_1->field_0x2a08;
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x70) != 1) {
        *(uint *)&param_1->field_0x70 = 2;
        return;
      }
      fStack_80 = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_7c = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_78 = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
      fStack_44 = fStack_80;
      fStack_40 = fStack_7c;
      fStack_3c = fStack_78;
      if (0.0 < SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c)) {
        core_actor_cpp_FUN_00408b40(param_1,&stack0xffffff80);
        fStack_68 = fStack_38;
        *(float *)((int)&stack0xffffff9c + (uint)bVar6 * -8) = afStack_34[(uint)bVar6 * 0xfffffffe];
        *(float *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_34[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
        afStack_34[2] = fStack_68 * _DAT_005c1c41;
        afStack_34[3] = fStack_64 * _DAT_005c1c41;
        fStack_24 = fStack_60 * _DAT_005c1c41;
        fStack_74 = fStack_68 * _DAT_005c1c41;
        (&stack0xffffff90)[(uint)bVar6 * 0xfffffffe] = afStack_34[(uint)bVar6 * 0xfffffffe + 3];
        *(float *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_34[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
        if (&stack0xffffff80 != &stack0xffffff8c) {
          fStack_80 = fStack_74;
          fStack_7c = fStack_70;
          fStack_78 = fStack_6c;
        }
        iVar5 = 0;
        if (0 < *(int *)&param_1->field_0x164) {
          pfVar3 = (float *)&param_1->field_0x16c;
          pfVar4 = (float *)&param_1->field_0x184;
          do {
            *pfVar3 = *pfVar3 - fStack_80;
            pfVar3[1] = pfVar3[1] - fStack_7c;
            pfVar3[2] = pfVar3[2] - fStack_78;
            pfVar3[3] = pfVar3[3] - fStack_80;
            pfVar3[4] = pfVar3[4] - fStack_7c;
            pfVar3[5] = pfVar3[5] - fStack_78;
            *pfVar4 = *pfVar4 - fStack_80;
            pfVar4[1] = pfVar4[1] - fStack_7c;
            pfVar4[2] = pfVar4[2] - fStack_78;
            pfVar4[3] = pfVar4[3] - fStack_80;
            pfVar4[4] = pfVar4[4] - fStack_7c;
            iVar5 = iVar5 + 1;
            pfVar4[5] = pfVar4[5] - fStack_78;
            pfVar3 = pfVar3 + 0xd;
            pfVar4 = pfVar4 + 0xd;
          } while (iVar5 < *(int *)&param_1->field_0x164);
        }
      }
      iVar5 = *(int *)&param_1->field_0x2a08;
      *(uint *)&param_1->field_0x20 = *(uint *)(iVar5 + 0x20);
      *(uint *)&param_1->field_0x24 = *(uint *)(iVar5 + 0x24);
      *(uint *)&param_1->field_0x28 = *(uint *)(iVar5 + 0x28);
      *(uint *)&param_1->field_0x2c = *(uint *)(iVar5 + 0x2c);
    }
    if ((0 < *(int *)&param_1->field_0x2a0c) &&
       (fVar1 = *(float *)&param_1->field_0x2a10 - param_2, *(float *)&param_1->field_0x2a10 = fVar1
       , fVar1 <= 0.0)) {
      if (*(int *)&param_1->field_0x164 < 200) {
        core_flies_cpp_FUN_004ae280(param_1,*(int *)&param_1->field_0x164);
        *(int *)&param_1->field_0x164 = *(int *)&param_1->field_0x164 + 1;
        *(uint *)&param_1->field_0x2a10 = *(uint *)&param_1->field_0x2a14;
        *(int *)&param_1->field_0x2a0c = *(int *)&param_1->field_0x2a0c + -1;
      }
      else {
        *(uint *)&param_1->field_0x2a0c = 0;
      }
    }
    fVar1 = (float)_DAT_005c1c49;
    iStack_18 = 0;
    if (0 < *(int *)&param_1->field_0x164) {
      pfVar4 = (float *)&param_1->field_0x168;
      do {
        fVar2 = *pfVar4 + param_2 * fVar1;
        *pfVar4 = fVar2;
        input_value = (double)fVar2;
        if (1.0 <= input_value) {
          pfStack_14 = pfVar4;
          dStack_20 = floor(input_value);
          *pfVar4 = *pfVar4 - (float)dStack_20;
          if (pfVar4 + 1 != pfVar4 + 4) {
            pfVar4[1] = pfVar4[4];
            pfVar4[2] = pfVar4[5];
            pfVar4[3] = pfVar4[6];
          }
          if (pfStack_14 + 4 != pfStack_14 + 7) {
            pfStack_14[4] = pfStack_14[7];
            pfStack_14[5] = pfStack_14[8];
            pfStack_14[6] = pfStack_14[9];
          }
          if (pfStack_14 + 7 != pfStack_14 + 10) {
            pfStack_14[7] = pfStack_14[10];
            pfStack_14[8] = pfStack_14[0xb];
            pfStack_14[9] = pfStack_14[0xc];
          }
          core_flies_cpp_FUN_004ae380(param_1,pfStack_14 + 7);
          fStack_5c = afStack_58[2];
          *(float *)((int)afStack_58 + (uint)bVar6 * -8) = afStack_58[(uint)bVar6 * 0xfffffffe + 3];
          afStack_58[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
               afStack_58[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
          if (pfStack_14 + 10 != &fStack_5c) {
            pfStack_14[10] = fStack_5c;
            pfStack_14[0xb] = afStack_58[0];
            pfStack_14[0xc] = afStack_58[1];
          }
        }
        pfVar4 = pfVar4 + 0xd;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < *(int *)&param_1->field_0x164);
    }
  }
  return;
}
