// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
// Address Range: [[00519280, 00519adb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

{
  SMRGLTextureLod *pSVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  char *pcVar6;
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
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = _fscanf(file_handle,"%d\n",&local_64);
  if (iVar2 == 1) goto LAB_005192e4;
LAB_005192c1:
  do {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x4c7;
    core_main_c_FUN_004c8440("Deformable model file is corrupt");
LAB_005192e4:
    if (0x00000007 < local_64) {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0x4ca;
      core_main_c_FUN_004c8440("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_50,&local_4c,&local_48,&local_44,
                         &local_60,&local_40);
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
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_5c,&local_54,&local_60,&local_68);
        if (iVar2 != 4) goto LAB_005192c1;
        local_58 = 1;
      }
      else {
        do {
          iVar2 = _fgetc(file_handle);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_5c,&local_58,&local_54,&local_60,
                           &local_68);
        if (iVar2 != 5) goto LAB_005192c1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar2 = _fgetc(file_handle);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_34,
                           this_ptr->lod_info + iVar2,&this_ptr->lod_info[iVar2].shadow_only_flag);
        if (iVar3 != 5) goto LAB_005192c1;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                  (this_ptr,iVar2,local_3c,local_38,local_34);
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    iVar2 = _fscanf(file_handle,"%[^\n]\n",
                       &this_ptr->texture_sets[1].textures[0x43].textures[0].base.count);
    if (iVar2 != 1) goto LAB_005192c1;
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    if (local_64 < 3) {
      for (iVar2 = 0; iVar2 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type;
          iVar2 = iVar2 + 1) {
        iVar3 = (int)this_ptr->texture_sets[0].textures + iVar2 * 0x60 + 0xb44;
        iVar3 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",iVar3,iVar3 + 0x20,iVar3 + 0x34,iVar3 + 0x48
                          );
        if (iVar3 != 4) goto LAB_005192c1;
        for (iVar3 = 0;
            iVar3 < *(int *)((int)this_ptr->texture_sets[0].textures + iVar2 * 0x60 + 0xb8c);
            iVar3 = iVar3 + 1) {
          iVar5 = _fscanf(file_handle,"%d\n",
                             (int)this_ptr->texture_sets[0].textures +
                             iVar3 * 4 + iVar2 * 0x60 + 0xb90);
          if (iVar5 != 1) goto LAB_005192c1;
        }
      }
    }
    else {
      for (iVar2 = 0; iVar2 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type;
          iVar2 = iVar2 + 1) {
        iVar3 = (int)this_ptr->texture_sets[0].textures + iVar2 * 0x60 + 0xb44;
        if (local_64 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n",iVar3,iVar3 + 0x48);
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n",iVar3,iVar3 + 0x5c,iVar3 + 0x48);
        }
        for (iVar3 = 0;
            iVar3 < *(int *)((int)this_ptr->texture_sets[0].textures + iVar2 * 0x60 + 0xb8c);
            iVar3 = iVar3 + 1) {
          _fscanf(file_handle,"%d\n",
                     (int)this_ptr->texture_sets[0].textures + iVar3 * 4 + iVar2 * 0x60 + 0xb90);
        }
        for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
          _fscanf(file_handle,"%d,%d\n",
                     (int)this_ptr->texture_sets[0].textures + iVar3 * 4 + iVar2 * 0x60 + 0xb64,
                     (int)this_ptr->texture_sets[0].textures + iVar3 * 4 + iVar2 * 0x60 + 0xb78);
        }
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (local_20 = 0; local_20 < this_ptr->num_lods; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_20]; local_18 = local_18 + 1) {
        pSVar7 = this_ptr->vertex_data_ptr[local_20] + local_18;
        iVar2 = _fscanf(file_handle,"%d\n",local_30);
        if (iVar2 != 1) goto LAB_005192c1;
        pSVar7->num_bone_influences = local_30[0];
        for (iVar2 = 0; iVar2 < (int)(uint)pSVar7->num_bone_influences; iVar2 = iVar2 + 1) {
          pfVar4 = pSVar7->bone_weights + iVar2 * 3 + 3;
          iVar3 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",local_2c,pSVar7->bone_weights + iVar2,
                             pfVar4,pfVar4 + 1,pfVar4 + 2);
          if (iVar3 != 5) goto LAB_005192c1;
          pSVar7->bone_indices[iVar2] = local_2c[0];
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
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_28,local_74,&local_80,
                           &local_8c,local_70,local_7c,local_88,local_6c,local_78,local_84);
        if (iVar5 != 10) goto LAB_005192c1;
        this_ptr->index_data_ptr[iVar3][iVar2] = local_28;
        iVar3 = 0;
        do {
          puVar8 = &(local_1c->vertex_indices).vertex_index_0 + iVar3;
          *puVar8 = local_74[iVar3 * 2];
          local_24 = *(int *)(local_7c + iVar3 * 4 + -4) >> 8;
          puVar8[3] = (ushort)((uint)*(int *)(local_7c + iVar3 * 4 + -4) >> 8);
          iVar5 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          puVar8[6] = (ushort)((uint)*(uint *)(local_88 + iVar5 + -4) >> 8);
        } while (iVar3 < 3);
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < this_ptr->cap_tri_count[iVar2]; iVar3 = iVar3 + 1) {
        iVar5 = _fscanf(file_handle,"%d\n",this_ptr->cap_index_ptr[iVar2] + iVar3);
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < this_ptr->num_texture_sets; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < this_ptr->num_textures; iVar3 = iVar3 + 1) {
        iVar5 = _fscanf(file_handle,"%[^\n]\n",
                           this_ptr->texture_sets[0].textures[iVar2 * 8 + iVar3].textures[0].
                           texture_name);
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < local_60; iVar2 = iVar2 + 1) {
      pcVar6 = this_ptr->texture_sets[1].textures[0].textures[0].texture_name + iVar2 * 0xc + 8;
      iVar3 = _fscanf(file_handle,"%f,%f,%f\n",pcVar6,pcVar6 + 4,pcVar6 + 8);
      if (iVar3 != 3) goto LAB_005192c1;
    }
    if (local_64 < 2) {
      pSVar1 = this_ptr->texture_sets[1].textures;
      pSVar1->textures[0].texture_name[4] = '\0';
      pSVar1->textures[0].texture_name[5] = '\0';
      pSVar1->textures[0].texture_name[6] = -0x80;
      pSVar1->textures[0].texture_name[7] = '?';
      *(uint *)this_ptr->texture_sets[1].textures[0].textures[0].texture_name =
           *(uint *)(this_ptr->texture_sets[1].textures[0].textures[0].texture_name + 4);
      this_ptr->texture_sets[1].textures[0].textures[0].base.count =
           *(int *)this_ptr->texture_sets[1].textures[0].textures[0].texture_name;
      break;
    }
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    iVar2 = _fscanf(file_handle,"%f,%f,%f\n",
                       &this_ptr->texture_sets[1].textures[0].textures[0].base.count,
                       this_ptr->texture_sets[1].textures[0].textures[0].texture_name,
                       this_ptr->texture_sets[1].textures[0].textures[0].texture_name + 4);
  } while (iVar2 != 3);
  if (local_64 < 4) {
    this_ptr->texture_sets[1].textures[0x11].textures[0].base.type = 0;
    *(int *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 0xc) =
         this_ptr->texture_sets[1].textures[0x11].textures[0].base.type;
    *(uint *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 8) =
         *(uint *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 0xc);
  }
  else {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,"%f,%f,%f\n",
               this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 8,
               this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 0xc,
               this_ptr->texture_sets[1].textures + 0x11);
  }
  if (6 < local_64) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    for (iVar2 = 0; iVar2 < local_60; iVar2 = iVar2 + 1) {
      _fscanf(file_handle,"%d\n",
                 this_ptr->texture_sets[1].textures[0x37].textures[2].texture_name + iVar2 * 4 + 0xc
                );
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x596;
    core_main_c_FUN_004c8440("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
