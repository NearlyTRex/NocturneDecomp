// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50
// Address: 005b6a50
// Address Range: [[005b6a50, 005b6c82]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_005b6a50(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_005b6a50(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  CVector3i *input;
  byte bVar4;
  float afStackY_1058 [1011];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  bVar4 = 0;
  if (2000 < *(int *)&this_ptr->field_0x54) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x1f8;
    core_main_c_FUN_004e4500("CMorphModel::rotatePoints - too many points!");
  }
  local_28 = 0;
  local_18 = 0xff;
  local_24 = 0;
  local_1c = 1.0 - blend_factor;
  if (0 < *(int *)&this_ptr->field_0x54) {
    input = (CVector3i *)&DAT_0267a38c;
    local_20 = 0;
    local_14 = 0;
    do {
      piVar3 = (int *)(*(int *)&this_ptr->field_0x58 + local_20);
      iVar1 = *piVar3;
      local_34 = *(float *)(ref_points + iVar1 * 0x10 + 4) * local_1c;
      local_30 = *(float *)(ref_points + iVar1 * 0x10 + 8) * local_1c;
      local_2c = *(float *)(ref_points + iVar1 * 0x10 + 0xc) * local_1c;
      local_64 = *(float *)(ref_points + iVar1 * 0x10 + 4) * local_1c;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_40 = (float)piVar3[1] * blend_factor;
      local_3c = (float)piVar3[2] * blend_factor;
      local_38 = (float)piVar3[3] * blend_factor;
      local_70 = (float)piVar3[1] * blend_factor;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_4c = local_70 + local_64;
      local_48 = local_6c + local_60;
      local_44 = local_68 + local_5c;
      local_58 = local_70 + local_64;
      *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      *(int *)input = (int)ROUND(local_58 * _DAT_006013a0);
      *(int *)(input + 4) = (int)ROUND(local_54 * _DAT_006013a0);
      *(int *)(input + 8) = (int)ROUND(local_50 * _DAT_006013a0);
      engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*(int *)DAT_0060b280 + local_14),input);
      uVar2 = *(uint *)(*(int *)DAT_0060b280 + local_14 + 0x10);
      if ((uVar2 & 0x80000000) == 0) {
        local_18 = 0;
      }
      else {
        local_28 = 1;
        local_18 = local_18 & uVar2;
      }
      input = input + 0xc;
      local_24 = local_24 + 1;
      local_14 = local_14 + 0x30;
      local_20 = local_20 + 0x10;
    } while (local_24 < *(int *)&this_ptr->field_0x54);
  }
  if (local_18 != 0) {
    return;
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x54);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x54,*(int *)&this_ptr->field_0x5c,
             *(void **)&this_ptr->field_0x60,(CVector3i *)&DAT_0267a38c,3,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,local_28);
  return;
}
