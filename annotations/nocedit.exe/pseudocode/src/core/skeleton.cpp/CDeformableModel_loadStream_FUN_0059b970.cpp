// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// Address: 0059b970
// Address Range: [[0059b970, 0059c1ea]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970
          (CDeformableModel *this_ptr,FILE *file_handle)

{
  CDeformableModel *this_ptr_00;
  int iVar1;
  int iVar2;
  SPart *pSVar3;
  float *pfVar4;
  int iVar5;
  CVector3f *pCVar6;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  uchar unaff_BP;
  SVert *pSVar7;
  ushort *puVar8;
  int unaff_ESI;
  uchar unaff_DI;
  int in_stack_0000000c;
  int *local_70;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  int local_60;
  byte local_5c [4];
  int local_58;
  ushort local_54 [2];
  byte local_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  byte local_14 [4];
  
  this_ptr_00 = this_ptr;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",local_64);
  if (iVar1 == 1) goto LAB_0059b9d7;
LAB_0059b9b4:
  do {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x4c7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Deformable model file is corrupt");
LAB_0059b9d7:
    if (DAT_00681864 < local_60) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x4ca;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't load model of version %d, this .exe can only handle up to version %d",local_60,DAT_00681864);
    }
    if (local_60 < 3) {
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%d,%d,%d,%d,%d,%d\n",&local_48,&local_44,&local_40,&local_3c,
                         &local_58,&local_38);
      if (iVar1 != 6) goto LAB_0059b9b4;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr_00,1,1,local_38,local_34)
      ;
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                (this_ptr_00,0,local_40,local_3c,local_38);
    }
    else {
      if (local_60 < 5) {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)0x59bafd);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d\n",local_50,&local_48,local_54,local_5c);
        if (iVar1 != 4) goto LAB_0059b9b4;
        local_48 = 1;
      }
      else {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)0x59ba2b);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d\n",local_50,&local_4c,&local_48,local_54,
                           local_5c);
        if (iVar1 != 5) goto LAB_0059b9b4;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
                (this_ptr_00,local_4c,local_48,local_44,local_58);
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < this_ptr_00->num_lods; iVar1 = iVar1 + 1) {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d\n",local_28,&local_24,&local_20,
                           this_ptr_00->lod_info + iVar1,
                           &this_ptr_00->lod_info[iVar1].shadow_only_flag);
        if (iVar2 != 5) goto LAB_0059b9b4;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                  (this_ptr_00,iVar1,local_24,local_20,local_1c);
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n",this_ptr_00->model_name);
    if (iVar1 != 1) goto LAB_0059b9b4;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_44 < 3) {
      for (iVar1 = 0; iVar1 < this_ptr_00->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr_00->parts + iVar1;
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar3,pSVar3->tri_counts,
                           pSVar3->cap_tri_counts,&pSVar3->adj_part_count);
        if (iVar2 != 4) goto LAB_0059b9b4;
        for (iVar2 = 0; iVar2 < this_ptr_00->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (file_handle,"%d\n",
                             this_ptr_00->parts[iVar1].adj_part_list + iVar2);
          if (iVar5 != 1) goto LAB_0059b9b4;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < this_ptr_00->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr_00->parts + iVar1;
        if (local_48 < 6) {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%[^\"]\", %d\n",pSVar3,&pSVar3->adj_part_count);
        }
        else {
          crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"\"%[^\"]\", %d, %d\n",pSVar3,&pSVar3->dominant_bone,
                     &pSVar3->adj_part_count);
        }
        for (iVar2 = 0; iVar2 < this_ptr_00->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          local_70 = this_ptr_00->parts[iVar1].adj_part_list + iVar2;
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
        }
        for (iVar2 = 0; iVar2 < this_ptr_00->num_lods; iVar2 = iVar2 + 1) {
          crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"%d,%d\n",this_ptr_00->parts[iVar1].tri_counts + iVar2,
                     this_ptr_00->parts[iVar1].cap_tri_counts + iVar2);
        }
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (; unaff_EBX < this_ptr_00->num_lods; unaff_EBX = unaff_EBX + 1) {
      for (this_ptr = (CDeformableModel *)0x0; (int)this_ptr < this_ptr_00->vertex_count[unaff_EBX];
          this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1)) {
        pSVar7 = this_ptr_00->vertex_data_ptr[unaff_EBX] + (int)this_ptr;
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",local_14);
        if (iVar1 != 1) goto LAB_0059b9b4;
        pSVar7->num_bone_influences = unaff_BP;
        for (iVar1 = 0; iVar1 < (int)(uint)pSVar7->num_bone_influences; iVar1 = iVar1 + 1) {
          pfVar4 = pSVar7->bone_weights + iVar1 * 3 + 3;
          iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (file_handle,"%d,%f,%f,%f,%f\n",&stack0xfffffff0,
                             pSVar7->bone_weights + iVar1,pfVar4,pfVar4 + 1,pfVar4 + 2);
          if (iVar2 != 5) goto LAB_0059b9b4;
          pSVar7->bone_indices[iVar1] = unaff_DI;
        }
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (; in_stack_0000000c < this_ptr_00->num_lods; in_stack_0000000c = in_stack_0000000c + 1) {
      iVar1 = 0;
      while( true ) {
        if (this_ptr_00->tri_count[in_stack_0000000c] +
            this_ptr_00->cap_tri_count[in_stack_0000000c] <= iVar1) break;
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&stack0xfffffff4,&local_58,
                           local_64,&local_70,local_54,&local_60,local_6c,local_50,local_5c,local_68
                          );
        if (iVar2 != 10) goto LAB_0059b9b4;
        this_ptr_00->index_data_ptr[in_stack_0000000c][iVar1] = unaff_ESI;
        iVar2 = 0;
        do {
          puVar8 = (ushort *)((int)this_ptr->lod_info + iVar2 * 2 + -4);
          *puVar8 = local_54[iVar2 * 2];
          unaff_EBX = *(int *)(local_5c + iVar2 * 4 + -4) >> 8;
          puVar8[3] = (short)((uint)*(int *)(local_5c + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar8[6] = (short)((uint)*(uint *)(local_6c + iVar5 + -4) >> 8);
        } while (iVar2 < 3);
        iVar1 = iVar1 + 1;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr_00->num_lods; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr_00->cap_tri_count[iVar1]; iVar2 = iVar2 + 1) {
        iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d\n",this_ptr_00->cap_index_ptr[iVar1] + iVar2);
        if (iVar5 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr_00->num_texture_sets; iVar1 = iVar1 + 1) {
      while (0 < this_ptr_00->num_textures) {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%[^\n]\n",
                           this_ptr_00->texture_sets[iVar1].textures[0].texture_variants[0].
                           texture_name);
        if (iVar2 != 1) goto LAB_0059b9b4;
        in_stack_0000000c = in_stack_0000000c + 1;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_44; iVar1 = iVar1 + 1) {
      pCVar6 = this_ptr_00->vertex_pool + iVar1;
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%f,%f,%f\n",pCVar6,&pCVar6->y,&pCVar6->z);
      if (iVar2 != 3) goto LAB_0059b9b4;
    }
    if (local_48 < 2) {
      (this_ptr_00->model_scale).z = 1.0;
      (this_ptr_00->model_scale).y = (this_ptr_00->model_scale).z;
      (this_ptr_00->model_scale).x = (this_ptr_00->model_scale).y;
      break;
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (file_handle,"%f,%f,%f\n",&this_ptr_00->model_scale,
                       &(this_ptr_00->model_scale).y,&(this_ptr_00->model_scale).z);
  } while (iVar1 != 3);
  if (local_48 < 4) {
    this_ptr_00->bbox_pool[0].min.z = 0.0;
    this_ptr_00->bbox_pool[0].min.y = this_ptr_00->bbox_pool[0].min.z;
    this_ptr_00->bbox_pool[0].min.x = this_ptr_00->bbox_pool[0].min.y;
  }
  else {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%f,%f,%f\n",this_ptr_00->bbox_pool,&this_ptr_00->bbox_pool[0].min.y,
               &this_ptr_00->bbox_pool[0].min.z);
  }
  if (6 < local_48) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_44; iVar1 = iVar1 + 1) {
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%d\n",this_ptr_00->bone_to_part_map + iVar1);
    }
  }
  if (local_48 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(this_ptr_00);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x596;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
