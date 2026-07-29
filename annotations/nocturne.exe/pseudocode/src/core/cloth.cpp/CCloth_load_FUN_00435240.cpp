// Name: core_cloth.cpp_CCloth_load_FUN_00435240
// Address: 00435240
// Address Range: [[00435240, 004357a7]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(CCloth *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(CCloth *this_ptr,char *filename)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _FILE *p_Var8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char acStack_238 [256];
  char local_138 [256];
  float *local_38;
  float *local_34;
  _FILE *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  CVector3f *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  local_30 = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rt");
  if (local_30 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x9b;
    core_main_c_FUN_004c8440("CCloth::load - Unable to open file %s",filename);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n");
  iVar11 = this_ptr->vertices[0x300].connected_indices[5];
  if (3 < iVar11) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0xa2;
    core_main_c_FUN_004c8440("%s is version %d, this .EXE is old and can only handle up to version %d",filename,iVar11,3);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%s\n");
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(&this_ptr->model,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(&this_ptr->model);
  _fgets(local_138,0xff,p_Var8);
  local_38 = &this_ptr->vertices[0x2d5].position.z;
  if (this_ptr->vertices[0x300].connected_indices[5] < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n");
    fVar6 = 0.05f;
    fVar5 = 0.5f;
    fVar4 = 0.5f;
    fVar3 = 0.005f;
    fVar2 = 0.9f;
    fVar1 = 32.0f;
    this_ptr->vertices[0x2d4].bone_weights[0] = 0.125f;
    fVar7 = 0.15f;
    this_ptr->vertices[0x2d4].bone_weights[1] = fVar1;
    this_ptr->vertices[0x2d4].bone_weights[2] = fVar2;
    this_ptr->vertices[0x2d5].position.x = fVar3;
    this_ptr->vertices[0x2d5].position.y = fVar4;
    this_ptr->vertices[0x2d5].position.z = fVar5;
    this_ptr->vertices[0x2d5].force.x = fVar6;
    this_ptr->vertices[0x2d5].force.y = fVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n");
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%f\n");
  if (this_ptr->vertices[0x300].connected_indices[5] < 2) {
    this_ptr->vertices[0x2d5].velocity.z = 0.0;
  }
  else {
    _fgets(local_138,0xff,p_Var8);
    _fscanf(p_Var8,"%d\n");
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n");
  core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(this_ptr);
  iVar11 = 0;
  _fgets(local_138,0xff,p_Var8);
  if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,"%d\n");
    } while (iVar11 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(this_ptr);
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n");
  iVar11 = 0;
  if (0 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y) {
    local_34 = &this_ptr->vertices[0x2d5].secondary_velocity.z;
    local_14 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 4);
    local_18 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 5);
    local_20 = (CVector3f *)(this_ptr->vertices[0x2d5].connected_indices + 6);
    local_1c = (float *)(this_ptr->vertices[0x2d5].connected_indices + 7);
    local_24 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 8);
    local_2c = (float *)(this_ptr->vertices[0x2d5].connected_indices + 10);
    local_28 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 0xb);
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n");
      local_14 = local_14 + 0x2b;
      local_18 = local_18 + 0x2b;
      local_20 = (CVector3f *)((int)(local_20 + 0xe) + 4);
      local_1c = local_1c + 0x2b;
      local_24 = local_24 + 0x2b;
      local_2c = local_2c + 0x2b;
      local_28 = local_28 + 0x2b;
    } while (iVar11 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y);
  }
  iVar13 = 0;
  iVar11 = _fclose(local_30);
  if (0 < (this_ptr->model).vertex_count) {
    piVar10 = &(this_ptr->model).texture_list[0xb].textures[1].base.count;
    iVar12 = 0;
    do {
      piVar9 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar12);
      iVar13 = iVar13 + 1;
      *piVar10 = (int)((float)*piVar9 * _DAT_0059b368);
      piVar10[1] = (int)((float)piVar9[1] * _DAT_0059b368);
      piVar10[2] = (int)((float)piVar9[2] * _DAT_0059b368);
      piVar10 = piVar10 + 0x47;
      iVar11 = (this_ptr->model).vertex_count;
      iVar12 = iVar12 + 0xc;
    } while (iVar13 < iVar11);
  }
  return iVar11;
}
