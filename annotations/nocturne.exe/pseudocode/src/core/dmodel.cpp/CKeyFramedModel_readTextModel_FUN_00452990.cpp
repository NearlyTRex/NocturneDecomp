// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
// Address: 00452990
// Address Range: [[00452990, 00452f01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00452b3a) */
/* WARNING: Removing unreachable block (ram,0x00452b41) */
/* WARNING: Removing unreachable block (ram,0x00452b4e) */
/* WARNING: Removing unreachable block (ram,0x00452b53) */
/* WARNING: Removing unreachable block (ram,0x00452b58) */
/* WARNING: Removing unreachable block (ram,0x00452ab4) */
/* WARNING: Removing unreachable block (ram,0x00452abb) */
/* WARNING: Removing unreachable block (ram,0x00452ac8) */
/* WARNING: Removing unreachable block (ram,0x00452acd) */
/* WARNING: Removing unreachable block (ram,0x00452ad2) */
/* WARNING: Removing unreachable block (ram,0x00452bcd) */
/* WARNING: Removing unreachable block (ram,0x00452af5) */
/* WARNING: Removing unreachable block (ram,0x00452afc) */
/* WARNING: Removing unreachable block (ram,0x00452b09) */
/* WARNING: Removing unreachable block (ram,0x00452b0e) */
/* WARNING: Removing unreachable block (ram,0x00452b13) */
/* WARNING: Removing unreachable block (ram,0x00452e3b) */
/* WARNING: Removing unreachable block (ram,0x00452ec6) */
/* WARNING: Removing unreachable block (ram,0x00452e5c) */
/* WARNING: Removing unreachable block (ram,0x00452e63) */
/* WARNING: Removing unreachable block (ram,0x00452e70) */
/* WARNING: Removing unreachable block (ram,0x00452e75) */
/* WARNING: Removing unreachable block (ram,0x00452e7a) */
/* WARNING: Removing unreachable block (ram,0x00452e8e) */
/* WARNING: Removing unreachable block (ram,0x00452ec1) */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(CKeyFramedModel *this_ptr,_FILE *file)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_20;
  int local_1c;
  
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d\n");
  g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
  g_INT_01cc4804 = 0x128;
  core_main_c_FUN_004c8440("KFM file is invalid version %d",0xffffffff);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n");
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0
            (this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar2 = _fgetc(file);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d\n");
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
      _fscanf(file,"\n");
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
    g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
    g_INT_01cc4804 = 0x197;
    core_main_c_FUN_004c8440("Error reading KFM model");
  }
  if (local_48 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(this_ptr);
  return;
}
