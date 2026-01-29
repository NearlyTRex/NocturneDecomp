// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// Address: 0059b970
// Address Range: [[0059b970, 0059c1ea]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970 (CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970
          (CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  SPart *pSVar3;
  float *pfVar4;
  int iVar5;
  CVector3f *pCVar6;
  SVert *pSVar7;
  ushort *puVar8;
  uint local_90;
  byte local_8c [4];
  byte local_88 [4];
  int local_84;
  byte local_80 [4];
  byte local_7c [4];
  ushort local_78 [2];
  byte local_74 [4];
  byte local_70 [4];
  int local_6c;
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
  byte local_34 [4];
  byte local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  SInputFace *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = _fscanf(file_handle,"%d\n",&local_68);
  if (iVar1 == 1) goto LAB_0059b9d7;
LAB_0059b9b4:
  do {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x4c7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Deformable model file is corrupt");
LAB_0059b9d7:
    if (INT_00681864 < local_68) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x4ca;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't load model of version %d, this .exe can only handle up to version %d",local_68,INT_00681864);
    }
    if (local_68 < 3) {
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_54,&local_50,&local_4c,&local_48,
                         &local_64,&local_44);
      if (iVar1 != 6) goto LAB_0059b9b4;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr,1,1,local_48,local_44);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                (this_ptr,0,local_54,local_50,local_4c);
    }
    else {
      if (local_68 < 5) {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_60,&local_58,&local_64,&local_6c);
        if (iVar1 != 4) goto LAB_0059b9b4;
        local_5c = 1;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_60,&local_5c,&local_58,&local_64,
                           &local_6c);
        if (iVar1 != 5) goto LAB_0059b9b4;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
                (this_ptr,local_60,local_5c,local_58,local_6c);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,
                           this_ptr->lod_info + iVar1,&this_ptr->lod_info[iVar1].shadow_only_flag);
        if (iVar2 != 5) goto LAB_0059b9b4;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                  (this_ptr,iVar1,local_40,local_3c,local_38);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%[^\n]\n",this_ptr->model_name);
    if (iVar1 != 1) goto LAB_0059b9b4;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_68 < 3) {
      for (iVar1 = 0; iVar1 < this_ptr->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr->parts + iVar1;
        iVar2 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar3,pSVar3->tri_counts,
                           pSVar3->cap_tri_counts,&pSVar3->adj_part_count);
        if (iVar2 != 4) goto LAB_0059b9b4;
        for (iVar2 = 0; iVar2 < this_ptr->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          iVar5 = _fscanf(file_handle,"%d\n",this_ptr->parts[iVar1].adj_part_list + iVar2);
          if (iVar5 != 1) goto LAB_0059b9b4;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < this_ptr->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr->parts + iVar1;
        if (local_68 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n",pSVar3,&pSVar3->adj_part_count);
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n",pSVar3,&pSVar3->dominant_bone,
                     &pSVar3->adj_part_count);
        }
        for (iVar2 = 0; iVar2 < this_ptr->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          _fscanf(file_handle,"%d\n",this_ptr->parts[iVar1].adj_part_list + iVar2);
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
    for (local_24 = 0; local_24 < this_ptr->num_lods; local_24 = local_24 + 1) {
      for (local_1c = 0; local_1c < this_ptr->vertex_count[local_24]; local_1c = local_1c + 1) {
        pSVar7 = this_ptr->vertex_data_ptr[local_24] + local_1c;
        iVar1 = _fscanf(file_handle,"%d\n",local_34);
        if (iVar1 != 1) goto LAB_0059b9b4;
        pSVar7->num_bone_influences = local_34[0];
        for (iVar1 = 0; iVar1 < (int)(uint)pSVar7->num_bone_influences; iVar1 = iVar1 + 1) {
          pfVar4 = pSVar7->bone_weights + iVar1 * 3 + 3;
          iVar2 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",local_30,pSVar7->bone_weights + iVar1,
                             pfVar4,pfVar4 + 1,pfVar4 + 2);
          if (iVar2 != 5) goto LAB_0059b9b4;
          pSVar7->bone_indices[iVar1] = local_30[0];
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
        local_20 = this_ptr->tri_data_ptr[local_14] + iVar1;
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_2c,local_78,&local_84,
                           &local_90,local_74,local_80,local_8c,local_70,local_7c,local_88);
        if (iVar5 != 10) goto LAB_0059b9b4;
        this_ptr->index_data_ptr[iVar2][iVar1] = local_2c;
        iVar2 = 0;
        do {
          puVar8 = &(local_20->vertex_indices).vertex_index_0 + iVar2;
          *puVar8 = local_78[iVar2 * 2];
          local_28 = *(int *)(local_80 + iVar2 * 4 + -4) >> 8;
          puVar8[3] = (ushort)((uint)*(int *)(local_80 + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar8[6] = (ushort)((uint)*(uint *)(local_8c + iVar5 + -4) >> 8);
        } while (iVar2 < 3);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr->cap_tri_count[iVar1]; iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(file_handle,"%d\n",this_ptr->cap_index_ptr[iVar1] + iVar2);
        if (iVar5 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr->num_texture_sets; iVar1 = iVar1 + 1) {
      for (local_18 = 0; local_18 < this_ptr->num_textures; local_18 = local_18 + 1) {
        iVar2 = _fscanf(file_handle,"%[^\n]\n",
                           this_ptr->texture_sets[iVar1].textures[local_18].texture_variants[0].
                           texture_name);
        if (iVar2 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_64; iVar1 = iVar1 + 1) {
      pCVar6 = this_ptr->vertex_pool + iVar1;
      iVar2 = _fscanf(file_handle,"%f,%f,%f\n",pCVar6,&pCVar6->y,&pCVar6->z);
      if (iVar2 != 3) goto LAB_0059b9b4;
    }
    if (local_68 < 2) {
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
  if (local_68 < 4) {
    this_ptr->bbox_pool[0].min.z = 0.0;
    this_ptr->bbox_pool[0].min.y = this_ptr->bbox_pool[0].min.z;
    this_ptr->bbox_pool[0].min.x = this_ptr->bbox_pool[0].min.y;
  }
  else {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    _fscanf(file_handle,"%f,%f,%f\n",this_ptr->bbox_pool,&this_ptr->bbox_pool[0].min.y,
               &this_ptr->bbox_pool[0].min.z);
  }
  if (6 < local_68) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_64; iVar1 = iVar1 + 1) {
      _fscanf(file_handle,"%d\n",this_ptr->bone_to_part_map + iVar1);
    }
  }
  if (local_68 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x596;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
