// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90
// Address: 00522b90
// Address Range: [[00522b90, 00522dc2]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_00522b90(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_00522b90(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)

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
  if (2000 < this_ptr->num_points) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x1f8;
    core_main_c_FUN_005030e0("CMorphModel::rotatePoints - too many points!");
  }
  local_28 = 0;
  local_18 = 0xff;
  local_24 = 0;
  local_1c = 1.0 - blend_factor;
  if (0 < this_ptr->num_points) {
    input = (CVector3i *)&DAT_01d33f70;
    local_20 = 0;
    local_14 = 0;
    do {
      piVar3 = (int *)((int)&this_ptr->points->vertex_index + local_20);
      iVar1 = *piVar3;
      local_34 = ref_points[iVar1].position.x * local_1c;
      local_30 = ref_points[iVar1].position.y * local_1c;
      local_2c = ref_points[iVar1].position.z * local_1c;
      local_64 = local_34;
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
      input->x = (int)ROUND(local_58 * _DAT_00604260);
      input->y = (int)ROUND(local_54 * _DAT_00604260);
      input->z = (int)ROUND(local_50 * _DAT_00604260);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)
                 ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + local_14
                 ),input);
      uVar2 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                       local_14);
      if ((uVar2 & 0x80000000) == 0) {
        local_18 = 0;
      }
      else {
        local_28 = 1;
        local_18 = local_18 & uVar2;
      }
      input = input + 1;
      local_24 = local_24 + 1;
      local_14 = local_14 + 0x30;
      local_20 = local_20 + 0x10;
    } while (local_24 < this_ptr->num_points);
  }
  if (local_18 != 0) {
    return;
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(g_CDemonSetPtr,this_ptr->num_points);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
            (g_CDemonSetPtr,this_ptr->num_points,this_ptr->num_faces,this_ptr->faces,
             (CVector3i *)&DAT_01d33f70,3,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,local_28);
  return;
}
