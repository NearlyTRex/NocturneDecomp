// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00460890
// Address: 00460890
// Address Range: [[00460890, 00460e01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00460890(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00460a3a) */
/* WARNING: Removing unreachable block (ram,0x00460a41) */
/* WARNING: Removing unreachable block (ram,0x00460a4e) */
/* WARNING: Removing unreachable block (ram,0x00460a53) */
/* WARNING: Removing unreachable block (ram,0x00460a58) */
/* WARNING: Removing unreachable block (ram,0x004609b4) */
/* WARNING: Removing unreachable block (ram,0x004609bb) */
/* WARNING: Removing unreachable block (ram,0x004609c8) */
/* WARNING: Removing unreachable block (ram,0x004609cd) */
/* WARNING: Removing unreachable block (ram,0x004609d2) */
/* WARNING: Removing unreachable block (ram,0x00460acd) */
/* WARNING: Removing unreachable block (ram,0x004609f5) */
/* WARNING: Removing unreachable block (ram,0x004609fc) */
/* WARNING: Removing unreachable block (ram,0x00460a09) */
/* WARNING: Removing unreachable block (ram,0x00460a0e) */
/* WARNING: Removing unreachable block (ram,0x00460a13) */
/* WARNING: Removing unreachable block (ram,0x00460d3b) */
/* WARNING: Removing unreachable block (ram,0x00460dc6) */
/* WARNING: Removing unreachable block (ram,0x00460d5c) */
/* WARNING: Removing unreachable block (ram,0x00460d63) */
/* WARNING: Removing unreachable block (ram,0x00460d70) */
/* WARNING: Removing unreachable block (ram,0x00460d75) */
/* WARNING: Removing unreachable block (ram,0x00460d7a) */
/* WARNING: Removing unreachable block (ram,0x00460d8e) */
/* WARNING: Removing unreachable block (ram,0x00460dc1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00460890(CKeyFramedModel *this_ptr,_FILE *file)

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
  _fscanf(file,&DAT_005bb6a2);
  _DAT_01d71de0 = "..\\core\\dmodel.cpp";
  _DAT_01d71de4 = 0x128;
  core_main_c_FUN_004e4330("KFM file is invalid version %d",0xffffffff);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n");
  core_dmodel_cpp_FUN_00461300(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005bb73e);
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
      _fscanf(file,&DAT_005bb769);
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
    _DAT_01d71de0 = "..\\core\\dmodel.cpp";
    _DAT_01d71de4 = 0x197;
    core_main_c_FUN_004e4330("Error reading KFM model");
  }
  if (local_48 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(this_ptr);
  return;
}
