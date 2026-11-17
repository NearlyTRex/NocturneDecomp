// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_00548850
// Address: 00548850
// Address Range: [[00548850, 00548a2a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_00548850(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_00548850(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1068 [1016];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c [5];
  CVector3f local_38;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  CVector3f *local_14;
  
  bVar3 = 0;
  local_28 = output_buffer;
  local_2c = lod_index << 2;
  local_20 = 0;
  for (local_24 = 0; local_24 < *(int *)((int)this_ptr->vertex_count + local_2c);
      local_24 = local_24 + 1) {
    pfVar1 = (float *)(local_20 + *(int *)((int)this_ptr->vertex_data_ptr + local_2c));
    local_1c = pfVar1;
    if (*(char *)pfVar1 == '\x01') {
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)(pfVar1 + 4),bone_matrices + *(byte *)((int)pfVar1 + 1),&local_5c);
      local_50 = local_5c.x;
      local_4c[(uint)bVar3 * -2] = *(float *)((int)&local_5c + (uint)bVar3 * -8 + 4);
      local_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&local_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (local_4c + 2 != &local_50) {
        local_4c[2] = local_50;
        local_4c[3] = local_4c[0];
        local_4c[4] = local_4c[1];
      }
    }
    else {
      local_4c[3] = 0.0;
      local_4c[2] = 0.0;
      local_4c[4] = 0.0;
      local_18 = pfVar1;
      local_14 = (CVector3f *)(pfVar1 + 4);
      for (iVar2 = 0; pfVar1 = pfVar1 + 1, iVar2 < (int)(uint)*(byte *)local_1c; iVar2 = iVar2 + 1)
      {
        core_xform_cpp_transformVector3x4_FUN_00583260
                  (local_14,bone_matrices + *(byte *)((int)local_18 + 1),&local_38);
        local_80 = local_38.x;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8) =
             *(uint *)((int)&local_38 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        local_68 = local_80 * *pfVar1;
        local_64 = local_7c * *pfVar1;
        local_60 = local_78 * *pfVar1;
        local_74 = local_80 * *pfVar1;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_4c[2] = local_4c[2] + local_74;
        local_4c[3] = local_4c[3] + local_70;
        local_4c[4] = local_4c[4] + local_6c;
        local_14 = local_14 + 1;
        local_18 = (float *)((int)local_18 + 1);
      }
    }
    *local_28 = (int)ROUND(local_4c[2] * 256.0f);
    local_28[1] = (int)ROUND(local_4c[3] * 256.0f);
    local_28[2] = (int)ROUND(local_4c[4] * 256.0f);
    local_28 = local_28 + 3;
    local_20 = local_20 + 0x34;
  }
  return;
}
