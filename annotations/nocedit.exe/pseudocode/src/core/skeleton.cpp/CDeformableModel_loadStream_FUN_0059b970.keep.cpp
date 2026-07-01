// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// Address: 0059b970
// MANUAL RECONSTRUCTION
// Address Range: [[0059b970, 0059c1ea]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar3;
  int iVar2;
  SPart *pSVar3;
  SPart *pSVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar6;
  int iVar7;
  SVert *pSVar7;
  int vi[3];
  int u[3];
  int v[3];
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
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  SInputFace *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar3 = _fscanf(file_handle,"%d\n",&local_68);
  if (iVar3 == 1) goto LAB_0059b9d7;
LAB_0059b9b4:
  do {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1223;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Deformable model file is corrupt");
LAB_0059b9d7:
    if (INT_00681864 < local_68) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 1226;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't load model of version %d, this .exe can only handle up to version %d",local_68,INT_00681864);
    }
    if (local_68 < 3) {
      do {
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_54,&local_50,&local_4c,&local_48,
                         &local_64,&local_44);
      if (iVar3 != 6) goto LAB_0059b9b4;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr,1,1,local_48,local_44);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                (this_ptr,0,local_54,local_50,local_4c);
    }
    else {
      if (local_68 < 5) {
        do {
          iVar3 = _fgetc(file_handle);
          if (iVar3 < 0) break;
        } while (iVar3 != 10);
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_60,&local_58,&local_64,&local_6c);
        if (iVar3 != 4) goto LAB_0059b9b4;
        local_5c = 1;
      }
      else {
        do {
          iVar3 = _fgetc(file_handle);
          if (iVar3 < 0) break;
        } while (iVar3 != 10);
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_60,&local_5c,&local_58,&local_64,
                           &local_6c);
        if (iVar3 != 5) goto LAB_0059b9b4;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
                (this_ptr,local_60,local_5c,local_58,local_6c);
      do {
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,
                           &this_ptr->lod_info[iVar3].pixel_height,&this_ptr->lod_info[iVar3].shadow_only_flag);
        if (iVar2 != 5) goto LAB_0059b9b4;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                  (this_ptr,iVar3,local_40,local_3c,local_38);
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = _fscanf(file_handle,"%[^\n]\n",this_ptr->model_name);
    if (iVar3 != 1) goto LAB_0059b9b4;
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    if (local_68 < 3) {
      for (iVar3 = 0; iVar3 < this_ptr->num_parts; iVar3 = iVar3 + 1) {
        pSVar4 = this_ptr->parts + iVar3;
        iVar7 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar4->part_name,pSVar4->tri_counts,
                           pSVar4->cap_tri_counts,&pSVar4->adj_part_count);
        if (iVar7 != 4) goto LAB_0059b9b4;
        for (iVar7 = 0; iVar7 < this_ptr->parts[iVar3].adj_part_count; iVar7 = iVar7 + 1) {
          iVar6 = _fscanf(file_handle,"%d\n",this_ptr->parts[iVar3].adj_part_list + iVar7);
          if (iVar6 != 1) goto LAB_0059b9b4;
        }
      }
    }
    else {
      for (iVar3 = 0; iVar3 < this_ptr->num_parts; iVar3 = iVar3 + 1) {
        pSVar3 = this_ptr->parts + iVar3;
        if (local_68 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n",pSVar3->part_name,&pSVar3->adj_part_count);
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n",pSVar3->part_name,&pSVar3->dominant_bone,
                     &pSVar3->adj_part_count);
        }
        for (iVar7 = 0; iVar7 < this_ptr->parts[iVar3].adj_part_count; iVar7 = iVar7 + 1) {
          _fscanf(file_handle,"%d\n",this_ptr->parts[iVar3].adj_part_list + iVar7);
        }
        for (iVar7 = 0; iVar7 < this_ptr->num_lods; iVar7 = iVar7 + 1) {
          _fscanf(file_handle,"%d,%d\n",this_ptr->parts[iVar3].tri_counts + iVar7,
                     this_ptr->parts[iVar3].cap_tri_counts + iVar7);
        }
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (local_24 = 0; local_24 < this_ptr->num_lods; local_24 = local_24 + 1) {
      for (local_1c = 0; local_1c < this_ptr->vertex_count[local_24]; local_1c = local_1c + 1) {
        pSVar7 = this_ptr->vertex_data_ptr[local_24] + local_1c;
        iVar3 = _fscanf(file_handle,"%d\n",&local_34);
        if (iVar3 != 1) goto LAB_0059b9b4;
        pSVar7->num_bone_influences = (uchar)local_34;
        for (iVar3 = 0; iVar3 < (int)(uint)pSVar7->num_bone_influences; iVar3 = iVar3 + 1) {
          pCVar6 = (&pSVar7->position) + iVar3;
          iVar7 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",&local_30,&pSVar7->bone_weights[iVar3],
                             &pCVar6->x,&pCVar6->y,&pCVar6->z);
          if (iVar7 != 5) goto LAB_0059b9b4;
          pSVar7->bone_indices[iVar3] = (uchar)local_30;
        }
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (local_14 = 0; local_14 < this_ptr->num_lods; local_14 = local_14 + 1) {
      for (iVar3 = 0; iVar7 = local_14,
          iVar3 < this_ptr->tri_count[local_14] + this_ptr->cap_tri_count[local_14];
          iVar3 = iVar3 + 1) {
        local_20 = this_ptr->tri_data_ptr[local_14] + iVar3;
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_2c,
                           &vi[0],&u[0],&v[0],&vi[1],&u[1],&v[1],&vi[2],&u[2],&v[2]);
        if (iVar5 != 10) goto LAB_0059b9b4;
        this_ptr->index_data_ptr[iVar7][iVar3] = local_2c;
        local_20->vertex_indices.vertex_index_0 = (ushort)vi[0];
        local_20->vertex_indices.vertex_index_1 = (ushort)vi[1];
        local_20->vertex_indices.vertex_index_2 = (ushort)vi[2];
        local_20->u_coord_0 = (ushort)((uint)u[0] >> 8);
        local_20->u_coord_1 = (ushort)((uint)u[1] >> 8);
        local_20->u_coord_2 = (ushort)((uint)u[2] >> 8);
        local_20->v_coord_0 = (ushort)((uint)v[0] >> 8);
        local_20->v_coord_1 = (ushort)((uint)v[1] >> 8);
        local_20->v_coord_2 = (ushort)((uint)v[2] >> 8);
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
      for (iVar7 = 0; iVar7 < this_ptr->cap_tri_count[iVar3]; iVar7 = iVar7 + 1) {
        iVar6 = _fscanf(file_handle,"%d\n",this_ptr->cap_index_ptr[iVar3] + iVar7);
        if (iVar6 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < this_ptr->num_texture_sets; iVar3 = iVar3 + 1) {
      for (local_18 = 0; local_18 < this_ptr->num_textures; local_18 = local_18 + 1) {
        iVar7 = _fscanf(file_handle,"%[^\n]\n",
                           this_ptr->texture_sets[iVar3].textures[local_18].textures[0].texture_name
                          );
        if (iVar7 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < local_64; iVar3 = iVar3 + 1) {
      pCVar6 = this_ptr->vertex_pool + iVar3;
      iVar7 = _fscanf(file_handle,"%f,%f,%f\n",&pCVar6->x,&pCVar6->y,&pCVar6->z);
      if (iVar7 != 3) goto LAB_0059b9b4;
    }
    if (local_68 < 2) {
      (this_ptr->model_scale).z = 1.0;
      (this_ptr->model_scale).y = (this_ptr->model_scale).z;
      (this_ptr->model_scale).x = (this_ptr->model_scale).y;
      break;
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->model_scale).x,
                       &(this_ptr->model_scale).y,&(this_ptr->model_scale).z);
  } while (iVar3 != 3);
  if (local_68 < 4) {
    this_ptr->bbox_pool[0].min.x = 0.0f;
    this_ptr->bbox_pool[0].min.y = 0.0f;
    this_ptr->bbox_pool[0].min.z = 0.0f;
  }
  else {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->bbox_pool[0].min.x,&this_ptr->bbox_pool[0].min.y,
               &this_ptr->bbox_pool[0].min.z);
  }
  if (6 < local_68) {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < local_64; iVar3 = iVar3 + 1) {
      _fscanf(file_handle,"%d\n",this_ptr->bone_to_part_map + iVar3);
    }
  }
  if (local_68 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1430;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
