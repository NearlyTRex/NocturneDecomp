// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0
// Address: 00466be0
// Address Range: [[00466be0, 00467151]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
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
  _fscanf(file,&DAT_005d938a,&local_44);
  if (local_44 < 5) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x128;
    core_main_c_FUN_005030e0("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 299;
    core_main_c_FUN_005030e0("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_FUN_00467650(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005d9426,&local_48);
  if (local_44 < 6) {
    this_ptr->transparent_pixel_flag = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005d942a,&this_ptr->transparent_pixel_flag);
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
    _fscanf(file,&DAT_005d942e,&this_ptr->disable_backface_culling);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005d9432,&local_2c);
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
      _fscanf(file,&DAT_005d9451);
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar2 = (uchar *)operator_new_array(this_ptr->poly_count);
    this_ptr->env_map_opac_list = puVar2;
    if (puVar2 == (uchar *)0x0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0x178;
      core_main_c_FUN_005030e0("Out of memory for envMapOpacList");
    }
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    iVar3 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fscanf(file,&DAT_005d9487,local_28);
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
    pcVar4 = this_ptr->texture_list[0].texture_name;
    do {
      _fscanf(file,"%[^\n]\n",pcVar4);
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < this_ptr->texture_count);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->part_count) {
    piVar5 = &this_ptr->part_list[0].poly_count;
    do {
      _fscanf(file,"%d,%d\n",this_ptr->part_list + iVar3,piVar5);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 < this_ptr->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x197;
    core_main_c_FUN_005030e0("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(this_ptr);
    return;
  }
  return;
}
