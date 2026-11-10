// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00460890
// Address: 00460890
// Address Range: [[00460890, 00460e01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00460890(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00460890(CKeyFramedModel *this_ptr,_FILE *file)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  byte *puVar4;
  CKeyFramedModelPart *pCVar5;
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
  
  iVar3 = 1;
  local_44 = -1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005bb6a2,&local_44);
  if (local_44 < 5) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x128;
    core_main_c_FUN_004e4330("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 299;
    core_main_c_FUN_004e4330("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_FUN_00461300(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005bb73e,&local_48);
  if (local_44 < 6) {
    this_ptr->transparent_pixel_flag = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005bb742,&this_ptr->transparent_pixel_flag);
  }
  if (local_44 < 8) {
    this_ptr->disable_backface_culling = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005bb746,&this_ptr->disable_backface_culling);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005bb74a,&local_2c);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < this_ptr->vertex_count * this_ptr->frame_count; iVar3 = iVar3 + 1) {
    iVar6 = (int)&this_ptr->vertex_list->x + iVar1;
    iVar1 = iVar1 + 0xc;
    _fscanf(file,"%d,%d,%d\n",iVar6,iVar6 + 4,iVar6 + 8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                       base.type + local_20;
      _fscanf(file,"%d,%d",(int)this_ptr->poly_texture_index_list + local_24,local_14 + 4)
      ;
      iVar3 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        iVar1 = local_14 + 0x1c;
        iVar6 = local_14 + 0x20;
        do {
          _fscanf(file,", %d,%d,%d",iVar3 * 0xc + local_18,iVar1,iVar6);
          iVar6 = iVar6 + 0xc;
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0xc;
        } while (iVar3 < *(int *)(local_14 + 4));
      }
      _fscanf(file,&DAT_005bb769);
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar2 = (uchar *)FUN_005a40df(this_ptr->poly_count);
    this_ptr->env_map_opac_list = puVar2;
    if (puVar2 == (uchar *)0x0) {
      _DAT_01d71de0 = "..\\core\\dmodel.cpp";
      _DAT_01d71de4 = 0x178;
      core_main_c_FUN_004e4330("Out of memory for envMapOpacList");
    }
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    iVar3 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fscanf(file,&DAT_005bb79f,local_28);
        this_ptr->env_map_opac_list[iVar3] = local_28[0];
        iVar3 = iVar3 + 1;
      } while (iVar3 < this_ptr->poly_count);
    }
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    puVar4 = &this_ptr->field_0x12c;
    do {
      _fscanf(file,"%[^\n]\n",puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x48;
    } while (iVar3 < this_ptr->texture_count);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->part_count) {
    pCVar5 = this_ptr->part_list + 4;
    do {
      _fscanf(file,"%d,%d\n",this_ptr->part_list + iVar3 * 8,pCVar5);
      iVar3 = iVar3 + 1;
      pCVar5 = pCVar5 + 8;
    } while (iVar3 < this_ptr->part_count);
  }
  if (((byte)file[0xc] & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x197;
    core_main_c_FUN_004e4330("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(this_ptr);
    return;
  }
  return;
}
