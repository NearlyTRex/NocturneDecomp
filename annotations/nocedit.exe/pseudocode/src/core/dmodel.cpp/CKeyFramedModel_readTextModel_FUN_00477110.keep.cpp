// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// Address: 00477110
// MANUAL RECONSTRUCTION
// Address Range: [[00477110, 0047768b]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel *this_ptr,_FILE *file)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar1;
  int iVar2;
  uchar *puVar2;
  int iVar3;
  int iVar5;
  char *pcVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  iVar3 = 1;
  local_44 = -1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d\n",&local_44);
  if (local_44 < 5) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 296;
    core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  _fscanf(file,"%d\n",&local_48);
  if (local_44 < 6) {
    this_ptr->transparent_pixel_flag = 0;
  }
  else {
    iVar5 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
    _fscanf(file,"%d\n",&this_ptr->transparent_pixel_flag);
  }
  if (local_44 < 8) {
    this_ptr->disable_backface_culling = 0;
  }
  else {
    iVar5 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
    _fscanf(file,"%d\n",&this_ptr->disable_backface_culling);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar5 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
    _fscanf(file,"%d\n",&local_2c);
  }
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  for (iVar5 = 0; iVar5 < this_ptr->vertex_count * this_ptr->frame_count; iVar5 = iVar5 + 1) {
    CVector3i *vertex = &this_ptr->vertex_list[iVar5];
    _fscanf(file,"%d,%d,%d\n",&vertex->x,&vertex->y,&vertex->z);
  }
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    do {
      pSVar1 = this_ptr->poly_vert_list;
      _fscanf(file,"%d,%d",&this_ptr->poly_texture_index_list[local_1c],
                 &pSVar1[local_1c].base.base.count);
      iVar5 = 0;
      if (0 < pSVar1[local_1c].base.base.count) {
        do {
          _fscanf(file,", %d,%d,%d",&pSVar1[local_1c].vertices[iVar5].vertex_index,
                     &pSVar1[local_1c].vertices[iVar5].texture_u,
                     &pSVar1[local_1c].vertices[iVar5].texture_v);
          iVar5 = iVar5 + 1;
        } while (iVar5 < pSVar1[local_1c].base.base.count);
      }
      _fscanf(file,"\n");
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar2 = (uchar *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                       (this_ptr->poly_count,"..\\core\\dmodel.cpp",375);
    this_ptr->env_map_opac_list = puVar2;
    if (puVar2 == (uchar *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 376;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    iVar5 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
    iVar5 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fscanf(file,"%d\n",&local_28);
        this_ptr->env_map_opac_list[iVar5] = (uchar)local_28;
        iVar5 = iVar5 + 1;
      } while (iVar5 < this_ptr->poly_count);
    }
  }
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar4 = this_ptr->texture_list[0].textures[0].texture_name;
    do {
      _fscanf(file,"%[^\n]\n",pcVar4);
      iVar5 = iVar5 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar5 < this_ptr->texture_count);
  }
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->part_count) {
    do {
      _fscanf(file,"%d,%d\n",&this_ptr->part_list[iVar5].vertex_count,
              &this_ptr->part_list[iVar5].poly_count);
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 407;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
    return;
  }
  return;
}
