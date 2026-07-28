// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
// Address: 00452990
// Address Range: [[00452990, 00452f01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(CKeyFramedModel *this_ptr,_FILE *file)

{
  SMRGLTextureBasic *pSVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uchar local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 1;
  local_44 = -1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d\n",&local_44);
  if (local_44 < 5) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x128;
    core_main_c_FUN_004c8440("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 299;
    core_main_c_FUN_004c8440("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0
            (this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d\n",&local_48);
  if (local_44 < 6) {
    pSVar1 = this_ptr->texture_list[7].textures;
    pSVar1[2].texture_name[8] = '\0';
    pSVar1[2].texture_name[9] = '\0';
    pSVar1[2].texture_name[10] = '\0';
    pSVar1[2].texture_name[0xb] = '\0';
  }
  else {
    iVar4 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,"%d\n",this_ptr->texture_list[7].textures[2].texture_name + 8);
  }
  if (local_44 < 8) {
    pSVar1 = this_ptr->texture_list[7].textures;
    pSVar1[2].texture_name[0xc] = '\0';
    pSVar1[2].texture_name[0xd] = '\0';
    pSVar1[2].texture_name[0xe] = '\0';
    pSVar1[2].texture_name[0xf] = '\0';
  }
  else {
    iVar4 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,"%d\n",this_ptr->texture_list[7].textures[2].texture_name + 0xc);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar4 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,"%d\n",&local_2c);
  }
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar2 = 0;
  for (iVar4 = 0; iVar4 < this_ptr->vertex_count * this_ptr->frame_count; iVar4 = iVar4 + 1) {
    iVar6 = (int)&this_ptr->vertex_list->x + iVar2;
    iVar2 = iVar2 + 0xc;
    _fscanf(file,"%d,%d,%d\n",iVar6,iVar6 + 4,iVar6 + 8);
  }
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                       base.type + local_20;
      _fscanf(file,"%d,%d",(int)this_ptr->poly_texture_index_list + local_24,local_14 + 4)
      ;
      iVar4 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        iVar2 = local_14 + 0x1c;
        iVar6 = local_14 + 0x20;
        do {
          _fscanf(file,", %d,%d,%d",iVar4 * 0xc + local_18,iVar2,iVar6);
          iVar6 = iVar6 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 0xc;
        } while (iVar4 < *(int *)(local_14 + 4));
      }
      _fscanf(file,"\n");
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->poly_count);
    this_ptr->env_map_opac_list = puVar3;
    if (puVar3 == (uchar *)0x0) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0x178;
      core_main_c_FUN_004c8440("Out of memory for envMapOpacList");
    }
    iVar4 = 1;
    do {
      iVar2 = _fgetc(file);
      if (iVar2 < 0) break;
    } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fscanf(file,"%d\n",local_28);
        this_ptr->env_map_opac_list[iVar4] = local_28[0];
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->poly_count);
    }
  }
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar5 = this_ptr->texture_list[0].textures[0].texture_name;
    do {
      _fscanf(file,"%[^\n]\n",pcVar5);
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x48;
    } while (iVar4 < this_ptr->texture_count);
  }
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_list[4].textures[0].base.type) {
    pcVar5 = this_ptr->texture_list[4].textures[0].texture_name;
    do {
      _fscanf(file,"%d,%d\n",
                 this_ptr->texture_list[4].textures[0].texture_name + iVar4 * 8 + -4,pcVar5);
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 8;
    } while (iVar4 < this_ptr->texture_list[4].textures[0].base.type);
  }
  if ((file->_flag & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x197;
    core_main_c_FUN_004c8440("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(this_ptr);
    return;
  }
  return;
}
