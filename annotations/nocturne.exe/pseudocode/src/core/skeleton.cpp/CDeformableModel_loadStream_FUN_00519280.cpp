// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
// Address Range: [[00519280, 00519adb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SVert *pSVar5;
  ushort *puVar6;
  int local_8c [6];
  ushort local_74 [6];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uchar local_30;
  uchar local_2c;
  int local_28;
  int local_24;
  int local_20;
  SInputFace *local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = _fscanf(file_handle,"%d\n");
  if (iVar2 == 1) goto LAB_005192e4;
LAB_005192c1:
  do {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x4c7;
    core_main_c_FUN_004c8440("Deformable model file is corrupt");
LAB_005192e4:
    if (0x00000007 < local_64) {
      g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
      g_INT_01cc4804 = 0x4ca;
      core_main_c_FUN_004c8440("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n");
      if (iVar2 != 6) goto LAB_005192c1;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(this_ptr,1,1,local_44,local_40);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                (this_ptr,0,local_50,local_4c,local_48);
    }
    else {
      if (local_64 < 5) {
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d\n");
        if (iVar2 != 4) goto LAB_005192c1;
        local_58 = 1;
      }
      else {
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
        if (iVar2 != 5) goto LAB_005192c1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
        if (iVar3 != 5) goto LAB_005192c1;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                  (this_ptr,iVar2,local_3c,local_38,local_34);
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    iVar2 = _fscanf(file_handle,"%[^\n]\n");
    if (iVar2 != 1) goto LAB_005192c1;
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    if (local_64 < 3) {
      for (iVar2 = 0; iVar2 < this_ptr->num_parts; iVar2 = iVar2 + 1) {
        iVar3 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n");
        if (iVar3 != 4) goto LAB_005192c1;
        for (iVar3 = 0; iVar3 < this_ptr->parts[iVar2].adj_part_count; iVar3 = iVar3 + 1) {
          iVar4 = _fscanf(file_handle,"%d\n");
          if (iVar4 != 1) goto LAB_005192c1;
        }
      }
    }
    else {
      for (iVar2 = 0; iVar2 < this_ptr->num_parts; iVar2 = iVar2 + 1) {
        if (local_64 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n");
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n");
        }
        for (iVar3 = 0; iVar3 < this_ptr->parts[iVar2].adj_part_count; iVar3 = iVar3 + 1) {
          _fscanf(file_handle,"%d\n");
        }
        for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
          _fscanf(file_handle,"%d,%d\n");
        }
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (local_20 = 0; local_20 < this_ptr->num_lods; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_20]; local_18 = local_18 + 1) {
        pSVar5 = this_ptr->vertex_data_ptr[local_20] + local_18;
        iVar2 = _fscanf(file_handle,"%d\n");
        if (iVar2 != 1) goto LAB_005192c1;
        pSVar5->num_bone_influences = local_30;
        for (iVar2 = 0; iVar2 < (int)(uint)pSVar5->num_bone_influences; iVar2 = iVar2 + 1) {
          iVar3 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n");
          if (iVar3 != 5) goto LAB_005192c1;
          pSVar5->bone_indices[iVar2] = local_2c;
        }
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (local_14 = 0; local_14 < this_ptr->num_lods; local_14 = local_14 + 1) {
      for (iVar2 = 0; iVar3 = local_14,
          iVar2 < this_ptr->tri_count[local_14] + this_ptr->cap_tri_count[local_14];
          iVar2 = iVar2 + 1) {
        local_1c = this_ptr->tri_data_ptr[local_14] + iVar2;
        iVar4 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n");
        if (iVar4 != 10) goto LAB_005192c1;
        this_ptr->index_data_ptr[iVar3][iVar2] = local_28;
        iVar3 = 0;
        do {
          puVar6 = &(local_1c->vertex_indices).vertex_index_0 + iVar3;
          *puVar6 = local_74[iVar3 * 2];
          local_24 = local_8c[iVar3 + 3] >> 8;
          puVar6[3] = (ushort)((uint)local_8c[iVar3 + 3] >> 8);
          piVar1 = local_8c + iVar3;
          iVar3 = iVar3 + 1;
          puVar6[6] = (ushort)((uint)*piVar1 >> 8);
        } while (iVar3 < 3);
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < this_ptr->cap_tri_count[iVar2]; iVar3 = iVar3 + 1) {
        iVar4 = _fscanf(file_handle,"%d\n");
        if (iVar4 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < this_ptr->num_texture_sets; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < this_ptr->num_textures; iVar3 = iVar3 + 1) {
        iVar4 = _fscanf(file_handle,"%[^\n]\n");
        if (iVar4 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < local_60; iVar2 = iVar2 + 1) {
      iVar3 = _fscanf(file_handle,"%f,%f,%f\n");
      if (iVar3 != 3) goto LAB_005192c1;
    }
    if (local_64 < 2) {
      (this_ptr->model_scale).z = 1.0;
      (this_ptr->model_scale).y = (this_ptr->model_scale).z;
      (this_ptr->model_scale).x = (this_ptr->model_scale).y;
      break;
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    iVar2 = _fscanf(file_handle,"%f,%f,%f\n");
  } while (iVar2 != 3);
  if (local_64 < 4) {
    this_ptr->bbox_pool[0].min.z = 0.0;
    this_ptr->bbox_pool[0].min.y = this_ptr->bbox_pool[0].min.z;
    this_ptr->bbox_pool[0].min.x = this_ptr->bbox_pool[0].min.y;
  }
  else {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,"%f,%f,%f\n");
  }
  if (6 < local_64) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < local_60; iVar2 = iVar2 + 1) {
      _fscanf(file_handle,"%d\n");
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x596;
    core_main_c_FUN_004c8440("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
