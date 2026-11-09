// Name: core_chain.cpp_FUN_00435820
// Address: 00435820
// Address Range: [[00435820, 004359dc]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_00435820(CDemonActor *param_1)

#include "nocturne.h"

void core_chain_cpp_FUN_00435820(CDemonActor *param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1040 [1017];
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  core_actor_cpp_FUN_00408850(param_1);
  if (*(int *)&param_1[1].field_0xc != 0) {
    core_chain_cpp_FUN_004357a0(param_1);
    fStack_40 = fStack_58;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    fStack_28 = fStack_40 - *(float *)&param_1->field_0x20;
    fStack_24 = fStack_3c - *(float *)&param_1->field_0x24;
    fStack_20 = fStack_38 - *(float *)&param_1->field_0x28;
    fStack_4c = fStack_28;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar6 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 0x24);
    fStack_34 = *(float *)&param_1->field_0x20;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8) = *puVar6;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         puVar6[(uint)bVar7 * -2 + 1];
    fVar1 = 1.0 / (float)(*(int *)(param_1 + 1) + -1);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 1)) {
      puVar6 = (uint *)&param_1[1].field_0x14c;
      puVar4 = (uint *)&param_1[1].field_0x140;
      do {
        pfVar5 = (float *)(&param_1[1].field_0x134 + iVar3 * 0x24);
        if (pfVar5 != &stack0xffffffcc) {
          *pfVar5 = fStack_34;
          pfVar5[1] = fStack_30;
          pfVar5[2] = fStack_2c;
        }
        fStack_34 = fStack_34 + fStack_4c * fVar1;
        fStack_30 = fStack_30 + fStack_48 * fVar1;
        fStack_2c = fStack_2c + fStack_44 * fVar1;
        puVar4[2] = 0;
        puVar4[1] = puVar4[2];
        puVar2 = (uint *)(&param_1[1].field_0x134 + iVar3 * 0x24);
        *puVar4 = puVar4[1];
        if (puVar6 != puVar2) {
          puVar4[3] = *puVar2;
          puVar4[4] = puVar2[1];
          puVar4[5] = puVar2[2];
        }
        puVar6 = puVar6 + 9;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 9;
      } while (iVar3 < *(int *)(param_1 + 1));
    }
  }
  iVar3 = *(int *)(param_1 + 1);
  fVar1 = *(float *)&param_1[1].field_0x4;
  *(uint *)&param_1[1].field_0xc0 = 0;
  *(uint *)&param_1[1].field_0x128 = 0;
  *(uint *)&param_1[1].field_0x12c = 0;
  *(uint *)&param_1[4].field_0xc = 0xc61c3f9a;
  *(uint *)&param_1[4].field_0x14 = 0;
  *(float *)&param_1[1].field_0x8 = fVar1 / (float)(iVar3 + -1);
  return;
}
