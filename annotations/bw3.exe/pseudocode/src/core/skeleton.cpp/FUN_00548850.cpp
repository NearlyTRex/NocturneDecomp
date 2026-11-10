// Name: core_skeleton.cpp_FUN_00548850
// Address: 00548850
// Address Range: [[00548850, 00548a2a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00548850(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_FUN_00548850(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

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
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  bVar3 = 0;
  local_28 = output_buffer;
  local_2c = lod_index << 2;
  local_20 = 0;
  for (local_24 = 0; local_24 < *(int *)((int)this_ptr->vertex_count + local_2c);
      local_24 = local_24 + 1) {
    pfVar1 = (float *)(local_20 + *(int *)((int)this_ptr->vertex_data_ptr + local_2c));
    local_1c = pfVar1;
    if (*(char *)pfVar1 == '\x01') {
      core_xform_cpp_FUN_00583260(pfVar1 + 4,bone_matrices + *(byte *)((int)pfVar1 + 1));
      local_50 = local_5c;
      (&stack0xffffffb4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffffbc != &stack0xffffffb0) {
        local_44 = local_50;
        local_40 = local_4c;
        local_3c = local_48;
      }
    }
    else {
      local_40 = 0.0;
      local_44 = 0.0;
      local_3c = 0.0;
      local_18 = pfVar1;
      local_14 = pfVar1 + 4;
      for (iVar2 = 0; pfVar1 = pfVar1 + 1, iVar2 < (int)(uint)*(byte *)local_1c; iVar2 = iVar2 + 1)
      {
        core_xform_cpp_FUN_00583260(local_14,bone_matrices + *(byte *)((int)local_18 + 1));
        local_80 = local_38;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_68 = local_80 * *pfVar1;
        local_64 = local_7c * *pfVar1;
        local_60 = local_78 * *pfVar1;
        local_74 = local_80 * *pfVar1;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_44 = local_44 + local_74;
        local_40 = local_40 + local_70;
        local_3c = local_3c + local_6c;
        local_14 = local_14 + 3;
        local_18 = (float *)((int)local_18 + 1);
      }
    }
    *local_28 = (int)ROUND(local_44 * _DAT_005e4758);
    local_28[1] = (int)ROUND(local_40 * _DAT_005e4758);
    local_28[2] = (int)ROUND(local_3c * _DAT_005e4758);
    local_28 = local_28 + 3;
    local_20 = local_20 + 0x34;
  }
  return;
}
