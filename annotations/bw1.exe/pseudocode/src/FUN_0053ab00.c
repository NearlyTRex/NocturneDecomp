// Name: FUN_0053ab00
// Address: 0053ab00
// Address Range: [[0053ab00, 0053ad4c]]
// Convention: unknown
// Signature: undefined4 FUN_0053ab00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053ab00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1038 [989];
  uint *puVar7;
  byte *puVar8;
  uint local_a8;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  byte auStack_44 [12];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float afStack_28 [4];
  float fStack_18;
  uint uStack_14;
  
  bVar6 = 0;
  if (param_2 != 0) {
    FUN_005593c0(&stack0xffffff58);
    local_a8 = 0;
    iVar1 = (**(code **)(*(int *)(param_2 + 0x154) + 0x3c))(param_2,&stack0xffffff58);
    if (iVar1 == 2) {
      uStack_14 = FUN_0040cd60(*(uint *)(param_1 + 0x30));
      *(uint *)(param_1 + 0x30) = uStack_14;
      uStack_14 = FUN_0040cd60(*(uint *)(param_1 + 0x38));
      *(uint *)(param_1 + 0x38) = uStack_14;
      if ((ABS(*(float *)(param_1 + 0x30)) <= (float)_DAT_005ed61b) &&
         (ABS(*(float *)(param_1 + 0x38)) <= (float)_DAT_005ed61b)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
        pfVar4 = (float *)&stack0xffffff80;
        pfVar5 = &stack0xffffff98;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
        }
        FUN_00408bb0(param_1,param_2 + 0x20);
        afStack_28[2] = fStack_50;
        afStack_28[(uint)bVar6 * -2 + 3] =
             *(float *)((int)&stack0xffffffb4 + (uint)bVar6 * 0xfffffffe * 4);
        afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
        if ((((fStack_68 <= afStack_28[2] + fStack_8c) && (afStack_28[2] - fStack_8c <= fStack_5c))
            && (fStack_60 <= fStack_18 + fStack_8c)) &&
           (((fStack_18 - fStack_8c <= fStack_54 && (fStack_64 <= afStack_28[3] + fStack_90)) &&
            (afStack_28[3] + fStack_94 <= fStack_58)))) {
          iVar1 = FUN_00468900(param_1 + 0x158);
          if (*(int *)(iVar1 + 0x358) != 0) {
            puVar8 = auStack_44;
            uStack_38 = 0;
            puVar7 = &uStack_38;
            uStack_30 = 0;
            fStack_2c = afStack_28[2];
            afStack_28[(uint)bVar6 * -2] = afStack_28[(uint)bVar6 * -2 + 3];
            afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            afStack_28[0] = fStack_90 + _DAT_005ed623 + afStack_28[0];
            uStack_34 = 0x3f800000;
            uVar2 = FUN_00468900(param_1 + 0x158,0,&fStack_2c,puVar7,puVar8);
            fVar3 = (float)FUN_00467c00(uVar2);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
