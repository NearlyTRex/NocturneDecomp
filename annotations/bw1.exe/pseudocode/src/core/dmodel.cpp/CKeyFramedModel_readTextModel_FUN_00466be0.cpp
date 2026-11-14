// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0
// Address: 00466be0
// Address Range: [[00466be0, 00467151]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00466d8a) */
/* WARNING: Removing unreachable block (ram,0x00466d91) */
/* WARNING: Removing unreachable block (ram,0x00466d9e) */
/* WARNING: Removing unreachable block (ram,0x00466da3) */
/* WARNING: Removing unreachable block (ram,0x00466da8) */
/* WARNING: Removing unreachable block (ram,0x00466d04) */
/* WARNING: Removing unreachable block (ram,0x00466d0b) */
/* WARNING: Removing unreachable block (ram,0x00466d18) */
/* WARNING: Removing unreachable block (ram,0x00466d1d) */
/* WARNING: Removing unreachable block (ram,0x00466d22) */
/* WARNING: Removing unreachable block (ram,0x00466e1d) */
/* WARNING: Removing unreachable block (ram,0x00466d45) */
/* WARNING: Removing unreachable block (ram,0x00466d4c) */
/* WARNING: Removing unreachable block (ram,0x00466d59) */
/* WARNING: Removing unreachable block (ram,0x00466d5e) */
/* WARNING: Removing unreachable block (ram,0x00466d63) */
/* WARNING: Removing unreachable block (ram,0x0046708b) */
/* WARNING: Removing unreachable block (ram,0x00467116) */
/* WARNING: Removing unreachable block (ram,0x004670ac) */
/* WARNING: Removing unreachable block (ram,0x004670b3) */
/* WARNING: Removing unreachable block (ram,0x004670c0) */
/* WARNING: Removing unreachable block (ram,0x004670c5) */
/* WARNING: Removing unreachable block (ram,0x004670ca) */
/* WARNING: Removing unreachable block (ram,0x004670de) */
/* WARNING: Removing unreachable block (ram,0x00467111) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  int iVar3;
  int local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_20;
  int local_1c;
  
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005d938a);
  _DAT_01d1d400 = "..\\core\\dmodel.cpp";
  _DAT_01d1d404 = 0x128;
  core_main_c_FUN_005030e0("KFM file is invalid version %d",0xffffffff);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n");
  core_dmodel_cpp_FUN_00467650(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005d9426);
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  for (iVar3 = 0; iVar3 < this_ptr->vertex_count * this_ptr->frame_count; iVar3 = iVar3 + 1) {
    _fscanf(file,"%d,%d,%d\n");
  }
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    do {
      pSVar1 = this_ptr->poly_vert_list;
      _fscanf(file,"%d,%d");
      iVar3 = 0;
      if (0 < *(int *)((int)pSVar1->vertices + local_20 + -0x14)) {
        do {
          _fscanf(file,", %d,%d,%d");
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)pSVar1->vertices + local_20 + -0x14));
      }
      _fscanf(file,&DAT_005d9451);
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    do {
      _fscanf(file,"%[^\n]\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->texture_count);
  }
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->part_count) {
    do {
      _fscanf(file,"%d,%d\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x197;
    core_main_c_FUN_005030e0("Error reading KFM model");
  }
  if (local_48 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(this_ptr);
  return;
}
