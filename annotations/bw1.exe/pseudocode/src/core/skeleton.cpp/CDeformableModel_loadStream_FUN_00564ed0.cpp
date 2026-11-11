// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0
// Address: 00564ed0
// Address Range: [[00564ed0, 0056572b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00564ed0(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00564ed0(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  SPart *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  SVert *pSVar6;
  ushort *puVar7;
  uint local_8c;
  byte local_88 [4];
  byte local_84 [4];
  int local_80;
  byte local_7c [4];
  byte local_78 [4];
  ushort local_74 [2];
  byte local_70 [4];
  byte local_6c [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [4];
  byte local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  SInputFace *local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = _fscanf(file_handle,&DAT_005f2057,&local_64);
  if (iVar1 == 1) goto LAB_00564f34;
LAB_00564f11:
  do {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x4e0;
    core_main_c_FUN_005030e0("Deformable model file is corrupt");
LAB_00564f34:
    if (0x00000007 < local_64) {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0x4e3;
      core_main_c_FUN_005030e0("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_50,&local_4c,&local_48,&local_44,
                         &local_60,&local_40);
      if (iVar1 != 6) goto LAB_00564f11;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_005638c0(this_ptr,1,1,local_44,local_40);
      core_skeleton_cpp_FUN_005639e0(this_ptr,0,local_50,local_4c,local_48);
    }
    else {
      if (local_64 < 5) {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_5c,&local_54,&local_60,&local_68);
        if (iVar1 != 4) goto LAB_00564f11;
        local_58 = 1;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_5c,&local_58,&local_54,&local_60,
                           &local_68);
        if (iVar1 != 5) goto LAB_00564f11;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_005638c0
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_34,
                           this_ptr->lod_info + iVar1,&this_ptr->lod_info[iVar1].shadow_only_flag);
        if (iVar2 != 5) goto LAB_00564f11;
        core_skeleton_cpp_FUN_005639e0(this_ptr,iVar1,local_3c,local_38,local_34);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%[^\n]\n",this_ptr->model_name);
    if (iVar1 != 1) goto LAB_00564f11;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_64 < 3) {
      for (iVar1 = 0; iVar1 < this_ptr->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr->parts + iVar1;
        iVar2 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar3,pSVar3->tri_counts,
                           pSVar3->cap_tri_counts,&pSVar3->adj_part_count);
        if (iVar2 != 4) goto LAB_00564f11;
        for (iVar2 = 0; iVar2 < this_ptr->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          iVar4 = _fscanf(file_handle,&DAT_005f2173,this_ptr->parts[iVar1].adj_part_list + iVar2)
          ;
          if (iVar4 != 1) goto LAB_00564f11;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < this_ptr->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr->parts + iVar1;
        if (local_64 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n",pSVar3,&pSVar3->adj_part_count);
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n",pSVar3,&pSVar3->dominant_bone,
                     &pSVar3->adj_part_count);
        }
        for (iVar2 = 0; iVar2 < this_ptr->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          _fscanf(file_handle,&DAT_005f2156,this_ptr->parts[iVar1].adj_part_list + iVar2);
        }
        for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
          _fscanf(file_handle,"%d,%d\n",this_ptr->parts[iVar1].tri_counts + iVar2,
                     this_ptr->parts[iVar1].cap_tri_counts + iVar2);
        }
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_20 = 0; local_20 < this_ptr->num_lods; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_20]; local_18 = local_18 + 1) {
        pSVar6 = this_ptr->vertex_data_ptr[local_20] + local_18;
        iVar1 = _fscanf(file_handle,&DAT_005f2177,local_30);
        if (iVar1 != 1) goto LAB_00564f11;
        pSVar6->num_bone_influences = local_30[0];
        for (iVar1 = 0; iVar1 < (int)(uint)pSVar6->num_bone_influences; iVar1 = iVar1 + 1) {
          pCVar5 = pSVar6->bone_offsets + iVar1;
          iVar2 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",local_2c,pSVar6->bone_weights + iVar1,
                             pCVar5,&pCVar5->y,&pCVar5->z);
          if (iVar2 != 5) goto LAB_00564f11;
          pSVar6->bone_indices[iVar1] = local_2c[0];
        }
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_14 = 0; local_14 < this_ptr->num_lods; local_14 = local_14 + 1) {
      for (iVar1 = 0; iVar2 = local_14,
          iVar1 < this_ptr->tri_count[local_14] + this_ptr->cap_tri_count[local_14];
          iVar1 = iVar1 + 1) {
        local_1c = this_ptr->tri_data_ptr[local_14] + iVar1;
        iVar4 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_28,local_74,&local_80,
                           &local_8c,local_70,local_7c,local_88,local_6c,local_78,local_84);
        if (iVar4 != 10) goto LAB_00564f11;
        this_ptr->index_data_ptr[iVar2][iVar1] = local_28;
        iVar2 = 0;
        do {
          puVar7 = &(local_1c->vertex_indices).vertex_index_0 + iVar2;
          *puVar7 = local_74[iVar2 * 2];
          local_24 = *(int *)(local_7c + iVar2 * 4 + -4) >> 8;
          puVar7[3] = (ushort)((uint)*(int *)(local_7c + iVar2 * 4 + -4) >> 8);
          iVar4 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar7[6] = (ushort)((uint)*(uint *)(local_88 + iVar4 + -4) >> 8);
        } while (iVar2 < 3);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr->cap_tri_count[iVar1]; iVar2 = iVar2 + 1) {
        iVar4 = _fscanf(file_handle,&DAT_005f21aa,this_ptr->cap_index_ptr[iVar1] + iVar2);
        if (iVar4 != 1) goto LAB_00564f11;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr->num_texture_sets; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr->num_textures; iVar2 = iVar2 + 1) {
        iVar4 = _fscanf(file_handle,"%[^\n]\n",
                           this_ptr->texture_sets[iVar1].textures[iVar2].texture_name);
        if (iVar4 != 1) goto LAB_00564f11;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      pCVar5 = this_ptr->bone_origins + iVar1;
      iVar2 = _fscanf(file_handle,"%f,%f,%f\n",pCVar5,&pCVar5->y,&pCVar5->z);
      if (iVar2 != 3) goto LAB_00564f11;
    }
    if (local_64 < 2) {
      (this_ptr->model_scale).z = 1.0;
      (this_ptr->model_scale).y = (this_ptr->model_scale).z;
      (this_ptr->model_scale).x = (this_ptr->model_scale).y;
      break;
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->model_scale,
                       &(this_ptr->model_scale).y,&(this_ptr->model_scale).z);
  } while (iVar1 != 3);
  if (local_64 < 4) {
    (this_ptr->bias_used).z = 0.0;
    (this_ptr->bias_used).y = (this_ptr->bias_used).z;
    (this_ptr->bias_used).x = (this_ptr->bias_used).y;
  }
  else {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->bias_used,&(this_ptr->bias_used).y,
               &(this_ptr->bias_used).z);
  }
  if (6 < local_64) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      _fscanf(file_handle,&DAT_005f21d3,this_ptr->bone_to_part_map + iVar1);
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_00566a20(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x5af;
    core_main_c_FUN_005030e0("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
