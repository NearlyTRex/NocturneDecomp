// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
// Address Range: [[00519280, 00519adb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  SMRGLTextureLod *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SVert *pSVar6;
  ushort *puVar7;
  int local_8c [6];
  ushort local_74 [6];
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
  uchar local_30;
  uchar local_2c;
  int local_28;
  int local_24;
  int local_20;
  SInputFace *local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = _fscanf(file_handle,"%d\n");
  if (iVar3 == 1) goto LAB_005192e4;
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
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n");
      if (iVar3 != 6) goto LAB_005192c1;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(this_ptr,1,1,local_44,local_40);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                (this_ptr,0,local_50,local_4c,local_48);
    }
    else {
      if (local_64 < 5) {
        do {
          iVar3 = _fgetc(file_handle);
          if (iVar3 < 0) break;
        } while (iVar3 != 10);
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d\n");
        if (iVar3 != 4) goto LAB_005192c1;
        local_58 = 1;
      }
      else {
        do {
          iVar3 = _fgetc(file_handle);
          if (iVar3 < 0) break;
        } while (iVar3 != 10);
        iVar3 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
        if (iVar3 != 5) goto LAB_005192c1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
        iVar4 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
        if (iVar4 != 5) goto LAB_005192c1;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                  (this_ptr,iVar3,local_3c,local_38,local_34);
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = _fscanf(file_handle,"%[^\n]\n");
    if (iVar3 != 1) goto LAB_005192c1;
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    if (local_64 < 3) {
      for (iVar3 = 0; iVar3 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type;
          iVar3 = iVar3 + 1) {
        iVar4 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n");
        if (iVar4 != 4) goto LAB_005192c1;
        for (iVar4 = 0;
            iVar4 < *(int *)((int)this_ptr->texture_sets[0].textures + iVar3 * 0x60 + 0xb8c);
            iVar4 = iVar4 + 1) {
          iVar5 = _fscanf(file_handle,"%d\n");
          if (iVar5 != 1) goto LAB_005192c1;
        }
      }
    }
    else {
      for (iVar3 = 0; iVar3 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type;
          iVar3 = iVar3 + 1) {
        if (local_64 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n");
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n");
        }
        for (iVar4 = 0;
            iVar4 < *(int *)((int)this_ptr->texture_sets[0].textures + iVar3 * 0x60 + 0xb8c);
            iVar4 = iVar4 + 1) {
          _fscanf(file_handle,"%d\n");
        }
        for (iVar4 = 0; iVar4 < this_ptr->num_lods; iVar4 = iVar4 + 1) {
          _fscanf(file_handle,"%d,%d\n");
        }
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (local_20 = 0; local_20 < this_ptr->num_lods; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_20]; local_18 = local_18 + 1) {
        pSVar6 = this_ptr->vertex_data_ptr[local_20] + local_18;
        iVar3 = _fscanf(file_handle,"%d\n");
        if (iVar3 != 1) goto LAB_005192c1;
        pSVar6->num_bone_influences = local_30;
        for (iVar3 = 0; iVar3 < (int)(uint)pSVar6->num_bone_influences; iVar3 = iVar3 + 1) {
          iVar4 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n");
          if (iVar4 != 5) goto LAB_005192c1;
          pSVar6->bone_indices[iVar3] = local_2c;
        }
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (local_14 = 0; local_14 < this_ptr->num_lods; local_14 = local_14 + 1) {
      for (iVar3 = 0; iVar4 = local_14,
          iVar3 < this_ptr->tri_count[local_14] + this_ptr->cap_tri_count[local_14];
          iVar3 = iVar3 + 1) {
        local_1c = this_ptr->tri_data_ptr[local_14] + iVar3;
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n");
        if (iVar5 != 10) goto LAB_005192c1;
        this_ptr->index_data_ptr[iVar4][iVar3] = local_28;
        iVar4 = 0;
        do {
          puVar7 = &(local_1c->vertex_indices).vertex_index_0 + iVar4;
          *puVar7 = local_74[iVar4 * 2];
          local_24 = local_8c[iVar4 + 3] >> 8;
          puVar7[3] = (ushort)((uint)local_8c[iVar4 + 3] >> 8);
          piVar1 = local_8c + iVar4;
          iVar4 = iVar4 + 1;
          puVar7[6] = (ushort)((uint)*piVar1 >> 8);
        } while (iVar4 < 3);
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < this_ptr->num_lods; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < this_ptr->cap_tri_count[iVar3]; iVar4 = iVar4 + 1) {
        iVar5 = _fscanf(file_handle,"%d\n");
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < this_ptr->num_texture_sets; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < this_ptr->num_textures; iVar4 = iVar4 + 1) {
        iVar5 = _fscanf(file_handle,"%[^\n]\n");
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < local_60; iVar3 = iVar3 + 1) {
      iVar4 = _fscanf(file_handle,"%f,%f,%f\n");
      if (iVar4 != 3) goto LAB_005192c1;
    }
    if (local_64 < 2) {
      pSVar2 = this_ptr->texture_sets[1].textures;
      pSVar2->textures[0].texture_name[4] = '\0';
      pSVar2->textures[0].texture_name[5] = '\0';
      pSVar2->textures[0].texture_name[6] = -0x80;
      pSVar2->textures[0].texture_name[7] = '?';
      *(uint *)this_ptr->texture_sets[1].textures[0].textures[0].texture_name =
           *(uint *)(this_ptr->texture_sets[1].textures[0].textures[0].texture_name + 4);
      this_ptr->texture_sets[1].textures[0].textures[0].base.count =
           *(int *)this_ptr->texture_sets[1].textures[0].textures[0].texture_name;
      break;
    }
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = _fscanf(file_handle,"%f,%f,%f\n");
  } while (iVar3 != 3);
  if (local_64 < 4) {
    this_ptr->texture_sets[1].textures[0x11].textures[0].base.type = 0;
    *(int *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 0xc) =
         this_ptr->texture_sets[1].textures[0x11].textures[0].base.type;
    *(uint *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 8) =
         *(uint *)(this_ptr->texture_sets[1].textures[0x10].textures[2].texture_name + 0xc);
  }
  else {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    _fscanf(file_handle,"%f,%f,%f\n");
  }
  if (6 < local_64) {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    for (iVar3 = 0; iVar3 < local_60; iVar3 = iVar3 + 1) {
      _fscanf(file_handle,"%d\n");
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
