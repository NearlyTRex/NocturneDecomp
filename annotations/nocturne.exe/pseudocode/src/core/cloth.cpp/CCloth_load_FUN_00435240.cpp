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
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _FILE *p_Var11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  CVector3f *pCVar15;
  int iVar16;
  float *pfVar17;
  CVector3f *pCVar18;
  int iVar19;
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
  p_Var11 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var11,"%d\n",this_ptr->vertices[0x300].connected_indices + 5);
  iVar14 = this_ptr->vertices[0x300].connected_indices[5];
  if (3 < iVar14) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0xa2;
    core_main_c_FUN_004c8440("%s is version %d, this .EXE is old and can only handle up to version %d",filename,iVar14,3);
  }
  p_Var11 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var11,"%s\n",acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(&this_ptr->model,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(&this_ptr->model);
  pfVar17 = this_ptr->vertices[0x2d4].bone_weights;
  _fgets(local_138,0xff,p_Var11);
  pfVar1 = this_ptr->vertices[0x2d4].bone_weights + 1;
  pfVar2 = this_ptr->vertices[0x2d4].bone_weights + 2;
  pfVar3 = &this_ptr->vertices[0x2d5].position.y;
  local_38 = &this_ptr->vertices[0x2d5].position.z;
  if (this_ptr->vertices[0x300].connected_indices[5] < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",pfVar17,pfVar1,pfVar2,this_ptr->vertices + 0x2d5,
               pfVar3,local_38);
    fVar9 = 0.05f;
    fVar8 = 0.5f;
    fVar7 = 0.5f;
    fVar6 = 0.005f;
    fVar5 = 0.9f;
    fVar4 = 32.0f;
    this_ptr->vertices[0x2d4].bone_weights[0] = 0.125f;
    fVar10 = 0.15f;
    this_ptr->vertices[0x2d4].bone_weights[1] = fVar4;
    this_ptr->vertices[0x2d4].bone_weights[2] = fVar5;
    this_ptr->vertices[0x2d5].position.x = fVar6;
    this_ptr->vertices[0x2d5].position.y = fVar7;
    this_ptr->vertices[0x2d5].position.z = fVar8;
    this_ptr->vertices[0x2d5].force.x = fVar9;
    this_ptr->vertices[0x2d5].force.y = fVar10;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",pfVar17,pfVar1,pfVar2,this_ptr->vertices + 0x2d5,
               pfVar3,local_38,&this_ptr->vertices[0x2d5].force,&this_ptr->vertices[0x2d5].force.y);
  }
  p_Var11 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var11,"%f\n",&this_ptr->vertices[0x2d5].secondary_velocity);
  if (this_ptr->vertices[0x300].connected_indices[5] < 2) {
    this_ptr->vertices[0x2d5].velocity.z = 0.0;
  }
  else {
    _fgets(local_138,0xff,p_Var11);
    _fscanf(p_Var11,"%d\n",&this_ptr->vertices[0x2d5].velocity.z);
  }
  p_Var11 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var11,"%d\n",this_ptr->vertices[0x2f3].rest_lengths + 1);
  core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(this_ptr);
  iVar14 = 0;
  _fgets(local_138,0xff,p_Var11);
  if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
    pfVar17 = this_ptr->vertices[0x2f3].rest_lengths + 2;
    do {
      iVar14 = iVar14 + 1;
      _fscanf(local_30,"%d\n",pfVar17);
      pfVar17 = pfVar17 + 1;
    } while (iVar14 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(this_ptr);
  p_Var11 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var11,"%d\n",&this_ptr->vertices[0x2d5].secondary_velocity.y);
  iVar14 = 0;
  if (0 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y) {
    local_34 = &this_ptr->vertices[0x2d5].secondary_velocity.z;
    pCVar15 = (CVector3f *)(this_ptr->vertices[0x2d5].connected_indices + 3);
    local_14 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 4);
    local_18 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 5);
    local_20 = (CVector3f *)(this_ptr->vertices[0x2d5].connected_indices + 6);
    local_1c = (float *)(this_ptr->vertices[0x2d5].connected_indices + 7);
    local_24 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 8);
    local_2c = (float *)(this_ptr->vertices[0x2d5].connected_indices + 10);
    local_28 = (float *)(this_ptr->vertices[0x2d5].connected_indices + 0xb);
    pCVar18 = (CVector3f *)(this_ptr->vertices[0x2d5].connected_indices + 9);
    do {
      iVar19 = iVar14 * 0x2b;
      iVar14 = iVar14 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",local_34 + iVar19,pCVar15,local_14,local_18,
                 local_20,local_1c,local_24,local_2c,pCVar18,local_28);
      pCVar15 = (CVector3f *)((int)(pCVar15 + 0xe) + 4);
      local_14 = local_14 + 0x2b;
      local_18 = local_18 + 0x2b;
      local_20 = (CVector3f *)((int)(local_20 + 0xe) + 4);
      local_1c = local_1c + 0x2b;
      local_24 = local_24 + 0x2b;
      local_2c = local_2c + 0x2b;
      local_28 = local_28 + 0x2b;
      pCVar18 = (CVector3f *)((int)(pCVar18 + 0xe) + 4);
    } while (iVar14 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y);
  }
  iVar19 = 0;
  iVar14 = _fclose(local_30);
  if (0 < (this_ptr->model).vertex_count) {
    piVar13 = &(this_ptr->model).texture_list[0xb].textures[1].base.count;
    iVar16 = 0;
    do {
      piVar12 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar16);
      iVar19 = iVar19 + 1;
      *piVar13 = (int)((float)*piVar12 * _DAT_0059b368);
      piVar13[1] = (int)((float)piVar12[1] * _DAT_0059b368);
      piVar13[2] = (int)((float)piVar12[2] * _DAT_0059b368);
      piVar13 = piVar13 + 0x47;
      iVar14 = (this_ptr->model).vertex_count;
      iVar16 = iVar16 + 0xc;
    } while (iVar19 < iVar14);
  }
  return iVar14;
}
