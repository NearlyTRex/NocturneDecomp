// Name: core_vehicle.cpp_FUN_005a7870
// Address: 005a7870
// Address Range: [[005a7870, 005a7b49]]
// Convention: unknown
// Signature: void core_vehicle_cpp_FUN_005a7870(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vehicle_cpp_FUN_005a7870(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  CKeyFramedModelInstance *this_ptr;
  int iVar7;
  byte bVar8;
  float afStackY_1010 [1010];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  core_actor_cpp_FUN_00408850(param_1);
  iVar7 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)(param_1 + 1));
  if (0 < *(int *)&param_1[6].field_0x128) {
    this_ptr = (CKeyFramedModelInstance *)&param_1[6].field_0x140;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(this_ptr);
      iVar7 = iVar7 + 1;
      this_ptr = (CKeyFramedModelInstance *)&this_ptr[1].field_0x38;
    } while (iVar7 < *(int *)&param_1[6].field_0x128);
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  puVar6 = *(uint **)&pCVar3->field_0x350;
  puVar4 = &stack0xffffffc0;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
  }
  fStack_28 = fStack_34 - fStack_40;
  fStack_24 = fStack_30 - fStack_3c;
  fStack_20 = fStack_2c - fStack_38;
  fStack_1c = fStack_34 - fStack_40;
  (&stack0xffffffe8)[(uint)bVar8 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  if ((float *)&param_1[6].field_0x11c != &stack0xffffffe4) {
    *(float *)&param_1[6].field_0x11c = fStack_1c;
    *(uint *)&param_1[6].field_0x120 = uStack_18;
    *(uint *)&param_1[6].field_0x124 = uStack_14;
  }
  fVar1 = *(float *)&param_1[6].field_0x108 * (float)_DAT_005f8fd3;
  *(float *)&param_1[6].field_0x10c = fVar1;
  fVar2 = (float)_DAT_005f8fdb;
  *(float *)&param_1[6].field_0x110 =
       fVar1 * fVar2 *
       (*(float *)&param_1[6].field_0x124 * *(float *)&param_1[6].field_0x124 +
       *(float *)&param_1[6].field_0x120 * *(float *)&param_1[6].field_0x120);
  *(float *)&param_1[6].field_0x114 =
       *(float *)&param_1[6].field_0x10c * fVar2 *
       (*(float *)&param_1[6].field_0x124 * *(float *)&param_1[6].field_0x124 +
       *(float *)&param_1[6].field_0x11c * *(float *)&param_1[6].field_0x11c);
  *(float *)&param_1[6].field_0x118 =
       (*(float *)&param_1[6].field_0x120 * *(float *)&param_1[6].field_0x120 +
       *(float *)&param_1[6].field_0x11c * *(float *)&param_1[6].field_0x11c) *
       *(float *)&param_1[6].field_0x10c * fVar2;
  *(uint *)&param_1[6].field_0xe0 = 0;
  *(uint *)&param_1[6].field_0xdc = *(uint *)&param_1[6].field_0xe0;
  *(uint *)&param_1[6].field_0xd8 = *(uint *)&param_1[6].field_0xdc;
  *(uint *)&param_1[6].field_0x104 = 0;
  *(uint *)&param_1[6].field_0x100 = *(uint *)&param_1[6].field_0x104;
  *(uint *)&param_1[6].field_0xfc = *(uint *)&param_1[6].field_0x100;
  *(uint *)&param_1[6].field_0xc8 = 0;
  *(uint *)&param_1[6].field_0xc4 = *(uint *)&param_1[6].field_0xc8;
  *(uint *)&param_1[6].field_0xc0 = *(uint *)&param_1[6].field_0xc4;
  *(uint *)&param_1[6].field_0xec = 0;
  *(uint *)&param_1[6].field_0xe8 = *(uint *)&param_1[6].field_0xec;
  *(uint *)&param_1[6].field_0xe4 = *(uint *)&param_1[6].field_0xe8;
  *(uint *)&param_1[6].field_0xd4 = 0;
  *(uint *)&param_1[6].field_0xd0 = *(uint *)&param_1[6].field_0xd4;
  *(uint *)&param_1[6].field_0xcc = *(uint *)&param_1[6].field_0xd0;
  *(uint *)&param_1[6].field_0xf8 = 0;
  *(uint *)&param_1[6].field_0xf4 = *(uint *)&param_1[6].field_0xf8;
  *(uint *)&param_1[6].field_0xf0 = *(uint *)&param_1[6].field_0xf4;
  *(uint *)&param_1[6].field_0xbc = 0;
  *(uint *)&param_1[6].field_0xb8 = *(uint *)&param_1[6].field_0xbc;
  *(uint *)&param_1[6].field_0xb4 = *(uint *)&param_1[6].field_0xb8;
  iVar7 = 0;
  if (0 < *(int *)&param_1[6].field_0x128) {
    puVar6 = (uint *)&param_1[8].field_0x18;
    puVar4 = (uint *)&param_1[8].field_0xc;
    do {
      puVar5 = (uint *)((int)param_1 + iVar7 * 0x1b4 + 0x93c);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      puVar4[2] = 0;
      puVar6 = puVar6 + 0x6d;
      puVar4[8] = 0;
      iVar7 = iVar7 + 1;
      puVar4[1] = puVar4[2];
      puVar4[7] = puVar4[8];
      *puVar4 = puVar4[1];
      puVar4[6] = puVar4[8];
      puVar4 = puVar4 + 0x6d;
    } while (iVar7 < *(int *)&param_1[6].field_0x128);
  }
  *(uint *)&param_1[0xb].field_0x144 = 0;
  *(uint *)&param_1[0xb].field_0x148 = 0x3f800000;
  *(uint *)&param_1[0xb].field_0x14c = 0;
  *(uint *)&param_1[0xb].field_0x150 = 0;
  core_course_cpp_CCourse_load_FUN_00447db0((CCourse *)(param_1 + 0xc),&param_1[0xc].field_0x14);
  *(uint *)&param_1[0xc].field_0x4c = 1;
  *(uint *)&param_1[0xc].field_0x34 = 0;
  *(uint *)&param_1[0xc].field_0x38 = 0;
  *(uint *)&param_1[0xc].field_0x3c = 0;
  return;
}
