// Name: core_vehicle.cpp_FUN_00583c40
// Address: 00583c40
// Address Range: [[00583c40, 00583f19]]
// Convention: unknown
// Signature: void core_vehicle_cpp_FUN_00583c40(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vehicle_cpp_FUN_00583c40(CDemonActor *param_1)

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
  core_actor_cpp_FUN_00408a80(param_1);
  iVar7 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  if (0 < *(int *)&param_1[3].field_0x278) {
    this_ptr = (CKeyFramedModelInstance *)&param_1[3].field_0x290;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr);
      iVar7 = iVar7 + 1;
      this_ptr = (CKeyFramedModelInstance *)&this_ptr[1].field_0x38;
    } while (iVar7 < *(int *)&param_1[3].field_0x278);
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
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
  if ((float *)&param_1[3].field_0x26c != &stack0xffffffe4) {
    *(float *)&param_1[3].field_0x26c = fStack_1c;
    *(uint *)&param_1[3].field_0x270 = uStack_18;
    *(uint *)&param_1[3].field_0x274 = uStack_14;
  }
  fVar1 = *(float *)&param_1[3].field_0x258 * (float)_DAT_005edc77;
  *(float *)&param_1[3].field_0x25c = fVar1;
  fVar2 = (float)_DAT_005edc7f;
  *(float *)&param_1[3].field_0x260 =
       fVar1 * fVar2 *
       (*(float *)&param_1[3].field_0x274 * *(float *)&param_1[3].field_0x274 +
       *(float *)&param_1[3].field_0x270 * *(float *)&param_1[3].field_0x270);
  *(float *)&param_1[3].field_0x264 =
       *(float *)&param_1[3].field_0x25c * fVar2 *
       (*(float *)&param_1[3].field_0x274 * *(float *)&param_1[3].field_0x274 +
       *(float *)&param_1[3].field_0x26c * *(float *)&param_1[3].field_0x26c);
  *(float *)&param_1[3].field_0x268 =
       (*(float *)&param_1[3].field_0x270 * *(float *)&param_1[3].field_0x270 +
       *(float *)&param_1[3].field_0x26c * *(float *)&param_1[3].field_0x26c) *
       *(float *)&param_1[3].field_0x25c * fVar2;
  *(uint *)&param_1[3].field_0x230 = 0;
  *(uint *)&param_1[3].field_0x22c = *(uint *)&param_1[3].field_0x230;
  *(uint *)&param_1[3].field_0x228 = *(uint *)&param_1[3].field_0x22c;
  *(uint *)&param_1[3].field_0x254 = 0;
  *(uint *)&param_1[3].field_0x250 = *(uint *)&param_1[3].field_0x254;
  *(uint *)&param_1[3].field_0x24c = *(uint *)&param_1[3].field_0x250;
  *(uint *)&param_1[3].field_0x218 = 0;
  *(uint *)&param_1[3].field_0x214 = *(uint *)&param_1[3].field_0x218;
  *(uint *)&param_1[3].field_0x210 = *(uint *)&param_1[3].field_0x214;
  *(uint *)&param_1[3].field_0x23c = 0;
  *(uint *)&param_1[3].field_0x238 = *(uint *)&param_1[3].field_0x23c;
  *(uint *)&param_1[3].field_0x234 = *(uint *)&param_1[3].field_0x238;
  *(uint *)&param_1[3].field_0x224 = 0;
  *(uint *)&param_1[3].field_0x220 = *(uint *)&param_1[3].field_0x224;
  *(uint *)&param_1[3].field_0x21c = *(uint *)&param_1[3].field_0x220;
  *(uint *)&param_1[3].field_0x248 = 0;
  *(uint *)&param_1[3].field_0x244 = *(uint *)&param_1[3].field_0x248;
  *(uint *)&param_1[3].field_0x240 = *(uint *)&param_1[3].field_0x244;
  *(uint *)&param_1[3].field_0x20c = 0;
  *(uint *)&param_1[3].field_0x208 = *(uint *)&param_1[3].field_0x20c;
  *(uint *)&param_1[3].field_0x204 = *(uint *)&param_1[3].field_0x208;
  iVar7 = 0;
  if (0 < *(int *)&param_1[3].field_0x278) {
    puVar6 = (uint *)&param_1[4].field_0x164;
    puVar4 = (uint *)&param_1[4].field_0x158;
    do {
      puVar5 = (uint *)(&param_1[3].field_0x27c + iVar7 * 0x1b4);
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
    } while (iVar7 < *(int *)&param_1[3].field_0x278);
  }
  *(uint *)&param_1[6].field_0x130 = 0;
  *(uint *)&param_1[6].field_0x134 = 0x3f800000;
  *(uint *)&param_1[6].field_0x138 = 0;
  *(uint *)&param_1[6].field_0x13c = 0;
  core_course_cpp_CCourse_load_FUN_00438af0
            ((CCourse *)&param_1[6].field_0x144,&param_1[6].field_0x158);
  *(uint *)&param_1[6].field_0x190 = 1;
  *(uint *)&param_1[6].field_0x178 = 0;
  *(uint *)&param_1[6].field_0x17c = 0;
  *(uint *)&param_1[6].field_0x180 = 0;
  return;
}
