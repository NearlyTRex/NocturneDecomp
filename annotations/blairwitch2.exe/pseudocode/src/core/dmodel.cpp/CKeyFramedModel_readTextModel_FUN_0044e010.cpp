// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_0044e010
// Address: 0044e010
// Address Range: [[0044e010, 0044e581]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(CKeyFramedModel *this_ptr,_FILE *file)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  byte *puVar5;
  SMRGLPrimitiveQuad *pSVar6;
  CKeyFramedModelPart *pCVar7;
  SMRGLPrimitiveQuad *pSVar8;
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
  SMRGLPrimitiveQuad *local_18;
  SMRGLPrimitiveQuad *local_14;
  
  iVar4 = 1;
  local_44 = -1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,&DAT_005cf66d,&local_44);
  if (local_44 < 5) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x128;
    core_main_c_FUN_004e4500("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 299;
    core_main_c_FUN_004e4500("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_FUN_0044ea80(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,&DAT_005cf709,&local_48);
  if (local_44 < 6) {
    this_ptr->transparent_pixel_flag = 0;
  }
  else {
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,&DAT_005cf70d,&this_ptr->transparent_pixel_flag);
  }
  if (local_44 < 8) {
    this_ptr->disable_backface_culling = 0;
  }
  else {
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,&DAT_005cf711,&this_ptr->disable_backface_culling);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    _fscanf(file,&DAT_005cf715,&local_2c);
  }
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar1 = 0;
  for (iVar4 = 0; iVar4 < this_ptr->vertex_count * this_ptr->frame_count; iVar4 = iVar4 + 1) {
    iVar2 = (int)&this_ptr->vertex_list->x + iVar1;
    iVar1 = iVar1 + 0xc;
    _fscanf(file,"%d,%d,%d\n",iVar2,iVar2 + 4,iVar2 + 8);
  }
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = this_ptr->poly_vert_list + local_20;
      _fscanf(file,"%d,%d",(int)this_ptr->poly_texture_index_list + local_24,local_14 + 4)
      ;
      iVar4 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        pSVar6 = local_14 + 0x1c;
        pSVar8 = local_14 + 0x20;
        do {
          _fscanf(file,", %d,%d,%d",local_18 + iVar4 * 0xc,pSVar6,pSVar8);
          pSVar8 = pSVar8 + 0xc;
          iVar4 = iVar4 + 1;
          pSVar6 = pSVar6 + 0xc;
        } while (iVar4 < *(int *)(local_14 + 4));
      }
      _fscanf(file,&DAT_005cf734);
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar3 = (uchar *)FUN_005b8df8(this_ptr->poly_count);
    this_ptr->env_map_opac_list = puVar3;
    if (puVar3 == (uchar *)0x0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0x178;
      core_main_c_FUN_004e4500("Out of memory for envMapOpacList");
    }
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fscanf(file,&DAT_005cf76a,local_28);
        this_ptr->env_map_opac_list[iVar4] = local_28[0];
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->poly_count);
    }
  }
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_count) {
    puVar5 = &this_ptr->field_0x12c;
    do {
      _fscanf(file,"%[^\n]\n",puVar5);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x48;
    } while (iVar4 < this_ptr->texture_count);
  }
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->part_count) {
    pCVar7 = this_ptr->part_list + 4;
    do {
      _fscanf(file,"%d,%d\n",this_ptr->part_list + iVar4 * 8,pCVar7);
      iVar4 = iVar4 + 1;
      pCVar7 = pCVar7 + 8;
    } while (iVar4 < this_ptr->part_count);
  }
  if (((byte)file[0xc] & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x197;
    core_main_c_FUN_004e4500("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(this_ptr);
    return;
  }
  return;
}
