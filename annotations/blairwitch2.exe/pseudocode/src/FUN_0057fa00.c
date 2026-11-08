// Name: FUN_0057fa00
// Address: 0057fa00
// Address Range: [[0057fa00, 0057fbb9]]
// Convention: unknown
// Signature: void FUN_0057fa00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057fa00(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1038 [1003];
  float local_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(float *)(param_1 + 0x9c8) <= 0.0) {
    if (*(int *)(param_1 + 0x8dc) != 0) {
      pfVar1 = (float *)(param_1 + 0x9a8);
      iVar2 = FUN_0057f700(param_1,pfVar1,param_2 * (float)_DAT_005ed81c);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x8dc) + 0x2b0) + 0x24))(*(int *)(param_1 + 0x8dc))
        ;
        puVar3 = (uint *)&stack0xffffff98;
        puVar4 = &stack0xffffff80;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iStack_18 = 0;
        puVar3 = (uint *)(param_1 + 0x9ac + (uint)bVar5 * -8);
        fStack_38 = *(float *)(param_1 + 0x9a8);
        pfStack_1c = pfVar1;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8) = *puVar3;
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             puVar3[(uint)bVar5 * -2 + 1];
        while( true ) {
          fStack_2c = (float)FUN_0040cf60(0x3dcccccd,0x3f666666);
          *(float *)(param_1 + 0x9a8) = local_80 * fStack_2c + (1.0 - fStack_2c) * fStack_74;
          fStack_14 = fStack_2c;
          fStack_2c = (float)FUN_0040cf60(0x3dcccccd,0x3f666666);
          *(uint *)(param_1 + 0x9ac) = uStack_7c;
          *(float *)(param_1 + 0x9b0) = fStack_78 * fStack_2c + (1.0 - fStack_2c) * fStack_6c;
          fStack_14 = fStack_2c;
          FUN_00408d70(*(uint *)(param_1 + 0x8dc),pfVar1);
          fStack_50 = fStack_44;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (pfVar1 != &stack0xffffffb0) {
            *pfVar1 = fStack_50;
            *(uint *)(param_1 + 0x9ac) = uStack_4c;
            *(uint *)(param_1 + 0x9b0) = uStack_48;
          }
          if (_DAT_005ed824 <
              (pfStack_1c[2] - fStack_30) * (pfStack_1c[2] - fStack_30) +
              (pfStack_1c[1] - fStack_34) * (pfStack_1c[1] - fStack_34) +
              (*pfStack_1c - fStack_38) * (*pfStack_1c - fStack_38)) break;
          iStack_18 = iStack_18 + 1;
          if (4 < iStack_18) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)(param_1 + 0x45c) <= 0.0) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xec))(param_1);
  }
  return;
}
