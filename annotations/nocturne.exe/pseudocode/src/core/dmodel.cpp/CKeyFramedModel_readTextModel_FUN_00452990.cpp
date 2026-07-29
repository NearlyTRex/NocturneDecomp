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
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  int iVar4;
  int local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_20;
  int local_1c;
  
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d\n");
  PTR_01cc4800 = "..\\core\\dmodel.cpp";
  INT_01cc4804 = 0x128;
  core_main_c_FUN_004c8440("KFM file is invalid version %d",0xffffffff);
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d,%d,%d,%d,%d\n");
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0
            (this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  _fscanf(file,"%d\n");
  pSVar2 = this_ptr->texture_list[7].textures;
  pSVar2[2].texture_name[8] = '\0';
  pSVar2[2].texture_name[9] = '\0';
  pSVar2[2].texture_name[10] = '\0';
  pSVar2[2].texture_name[0xb] = '\0';
  pSVar2 = this_ptr->texture_list[7].textures;
  pSVar2[2].texture_name[0xc] = '\0';
  pSVar2[2].texture_name[0xd] = '\0';
  pSVar2[2].texture_name[0xe] = '\0';
  pSVar2[2].texture_name[0xf] = '\0';
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  for (iVar4 = 0; iVar4 < this_ptr->vertex_count * this_ptr->frame_count; iVar4 = iVar4 + 1) {
    _fscanf(file,"%d,%d,%d\n");
  }
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    do {
      pSVar1 = this_ptr->poly_vert_list;
      _fscanf(file,"%d,%d");
      iVar4 = 0;
      if (0 < *(int *)((int)pSVar1->vertices + local_20 + -0x14)) {
        do {
          _fscanf(file,", %d,%d,%d");
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)pSVar1->vertices + local_20 + -0x14));
      }
      _fscanf(file,"\n");
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_count) {
    do {
      _fscanf(file,"%[^\n]\n");
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->texture_count);
  }
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_list[4].textures[0].base.type) {
    do {
      _fscanf(file,"%d,%d\n");
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->texture_list[4].textures[0].base.type);
  }
  if ((file->_flag & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0x197;
    core_main_c_FUN_004c8440("Error reading KFM model");
  }
  if (local_48 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(this_ptr);
  return;
}
