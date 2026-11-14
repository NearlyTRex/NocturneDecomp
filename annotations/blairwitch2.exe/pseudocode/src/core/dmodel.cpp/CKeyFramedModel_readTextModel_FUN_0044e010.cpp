// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_0044e010
// Address: 0044e010
// Address Range: [[0044e010, 0044e581]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0044e1ba) */
/* WARNING: Removing unreachable block (ram,0x0044e1c1) */
/* WARNING: Removing unreachable block (ram,0x0044e1ce) */
/* WARNING: Removing unreachable block (ram,0x0044e1d3) */
/* WARNING: Removing unreachable block (ram,0x0044e1d8) */
/* WARNING: Removing unreachable block (ram,0x0044e134) */
/* WARNING: Removing unreachable block (ram,0x0044e13b) */
/* WARNING: Removing unreachable block (ram,0x0044e148) */
/* WARNING: Removing unreachable block (ram,0x0044e14d) */
/* WARNING: Removing unreachable block (ram,0x0044e152) */
/* WARNING: Removing unreachable block (ram,0x0044e24d) */
/* WARNING: Removing unreachable block (ram,0x0044e175) */
/* WARNING: Removing unreachable block (ram,0x0044e17c) */
/* WARNING: Removing unreachable block (ram,0x0044e189) */
/* WARNING: Removing unreachable block (ram,0x0044e18e) */
/* WARNING: Removing unreachable block (ram,0x0044e193) */
/* WARNING: Removing unreachable block (ram,0x0044e4bb) */
/* WARNING: Removing unreachable block (ram,0x0044e546) */
/* WARNING: Removing unreachable block (ram,0x0044e4dc) */
/* WARNING: Removing unreachable block (ram,0x0044e4e3) */
/* WARNING: Removing unreachable block (ram,0x0044e4f0) */
/* WARNING: Removing unreachable block (ram,0x0044e4f5) */
/* WARNING: Removing unreachable block (ram,0x0044e4fa) */
/* WARNING: Removing unreachable block (ram,0x0044e50e) */
/* WARNING: Removing unreachable block (ram,0x0044e541) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(CKeyFramedModel *this_ptr,_FILE *file)

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
  _fscanf(file,&DAT_005cf66d);
  _DAT_01d046a0 = "..\\core\\dmodel.cpp";
  _DAT_01d046a4 = 0x128;
  core_main_c_FUN_004e4500("KFM file is invalid version %d",0xffffffff);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n");
  core_dmodel_cpp_FUN_0044ea80(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005cf709);
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
      _fscanf(file,&DAT_005cf734);
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
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0x197;
    core_main_c_FUN_004e4500("Error reading KFM model");
  }
  if (local_48 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(this_ptr);
  return;
}
