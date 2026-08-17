// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
// Address Range: [[00519280, 00519adb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  SPart *pSVar3;
  float *pfVar4;
  int iVar5;
  CVector3f *pCVar6;
  SVert *pSVar7;
  ushort *puVar8;
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
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
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
  iVar1 = _fscanf(file_handle,"%d\n",&local_64);
  if (iVar1 == 1) goto LAB_005192e4;
LAB_005192c1:
  do {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1223;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Deformable model file is corrupt");
LAB_005192e4:
    if (0x00000007 < local_64) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 1226;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_50,&local_4c,&local_48,&local_44,
                         &local_60,&local_40);
      if (iVar1 != 6) goto LAB_005192c1;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(this_ptr,1,1,local_44,local_40);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                (this_ptr,0,local_50,local_4c,local_48);
    }
    else {
      if (local_64 < 5) {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_5c,&local_54,&local_60,&local_68);
        if (iVar1 != 4) goto LAB_005192c1;
        local_58 = 1;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_5c,&local_58,&local_54,&local_60,
                           &local_68);
        if (iVar1 != 5) goto LAB_005192c1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_34,
                           this_ptr->lod_info + iVar1,&this_ptr->lod_info[iVar1].shadow_only_flag);
        if (iVar2 != 5) goto LAB_005192c1;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                  (this_ptr,iVar1,local_3c,local_38,local_34);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%[^\n]\n",this_ptr->model_name);
    if (iVar1 != 1) goto LAB_005192c1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_64 < 3) {
      for (iVar1 = 0; iVar1 < this_ptr->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr->parts + iVar1;
        iVar2 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar3,pSVar3->tri_counts,
                           pSVar3->cap_tri_counts,&pSVar3->adj_part_count);
        if (iVar2 != 4) goto LAB_005192c1;
        for (iVar2 = 0; iVar2 < this_ptr->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          iVar5 = _fscanf(file_handle,"%d\n",this_ptr->parts[iVar1].adj_part_list + iVar2);
          if (iVar5 != 1) goto LAB_005192c1;
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
    for (local_20 = 0; local_20 < this_ptr->num_lods; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_20]; local_18 = local_18 + 1) {
        pSVar7 = this_ptr->vertex_data_ptr[local_20] + local_18;
        iVar1 = _fscanf(file_handle,"%d\n",local_30);
        if (iVar1 != 1) goto LAB_005192c1;
        pSVar7->num_bone_influences = local_30[0];
        for (iVar1 = 0; iVar1 < (int)(uint)pSVar7->num_bone_influences; iVar1 = iVar1 + 1) {
          pfVar4 = pSVar7->bone_weights + iVar1 * 3 + 3;
          iVar2 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",local_2c,pSVar7->bone_weights + iVar1,
                             pfVar4,pfVar4 + 1,pfVar4 + 2);
          if (iVar2 != 5) goto LAB_005192c1;
          pSVar7->bone_indices[iVar1] = local_2c[0];
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
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_28,local_74,&local_80,
                           &local_8c,local_70,local_7c,local_88,local_6c,local_78,local_84);
        if (iVar5 != 10) goto LAB_005192c1;
        this_ptr->index_data_ptr[iVar2][iVar1] = local_28;
        iVar2 = 0;
        do {
          puVar8 = &(local_1c->vertex_indices).vertex_index_0 + iVar2;
          *puVar8 = local_74[iVar2 * 2];
          local_24 = *(int *)(local_7c + iVar2 * 4 + -4) >> 8;
          puVar8[3] = (ushort)((uint)*(int *)(local_7c + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar8[6] = (ushort)((uint)*(uint *)(local_88 + iVar5 + -4) >> 8);
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
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr->num_texture_sets; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr->num_textures; iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(file_handle,"%[^\n]\n",
                           this_ptr->texture_sets[iVar1].textures[iVar2].textures[0].texture_name);
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      pCVar6 = this_ptr->vertex_pool + iVar1;
      iVar2 = _fscanf(file_handle,"%f,%f,%f\n",pCVar6,&pCVar6->y,&pCVar6->z);
      if (iVar2 != 3) goto LAB_005192c1;
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
  if (6 < local_64) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      _fscanf(file_handle,"%d\n",this_ptr->bone_to_part_map + iVar1);
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1430;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
