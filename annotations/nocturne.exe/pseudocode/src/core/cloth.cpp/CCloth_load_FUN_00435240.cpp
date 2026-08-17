// Name: core_cloth.cpp_CCloth_load_FUN_00435240
// Address: 00435240
// Address Range: [[00435240, 004357a7]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(CCloth *this_ptr,char *filename)

#include "nocturne.h"

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
  SClothBone *pSVar9;
  CVector3f *pCVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  char acStack_238 [256];
  char local_138 [256];
  float *local_38;
  SClothBone *local_34;
  _FILE *local_30;
  float *local_2c;
  float *local_28;
  CVector3f *local_24;
  float *local_20;
  float *local_1c;
  CVector3f *local_18;
  float *local_14;
  
  local_30 = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rt");
  if (local_30 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 155;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CCloth::load - Unable to open file %s",filename);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n",&this_ptr->version_num);
  if (3 < this_ptr->version_num) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 162;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("%s is version %d, this .EXE is old and can only handle up to version %d",filename,this_ptr->version_num,3);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%s\n",acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(&this_ptr->model,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(&this_ptr->model);
  _fgets(local_138,0xff,p_Var8);
  local_38 = &this_ptr->floor_friction;
  if (this_ptr->version_num < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",&this_ptr->weight,&this_ptr->gravity,
               &this_ptr->dampen,&this_ptr->spring,&this_ptr->body_friction,local_38);
    fVar6 = 0.05f;
    fVar5 = 0.5f;
    fVar4 = 0.5f;
    fVar3 = 0.005f;
    fVar2 = 0.9f;
    fVar1 = 32.0f;
    this_ptr->weight = 0.125f;
    fVar7 = 0.15f;
    this_ptr->gravity = fVar1;
    this_ptr->dampen = fVar2;
    this_ptr->spring = fVar3;
    this_ptr->body_friction = fVar4;
    this_ptr->floor_friction = fVar5;
    this_ptr->wind_area = fVar6;
    this_ptr->mom_inert = fVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",&this_ptr->weight,&this_ptr->gravity,
               &this_ptr->dampen,&this_ptr->spring,&this_ptr->body_friction,local_38,
               &this_ptr->wind_area,&this_ptr->mom_inert);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%f\n",&this_ptr->transparency);
  if (this_ptr->version_num < 2) {
    this_ptr->double_sided = 0;
  }
  else {
    _fgets(local_138,0xff,p_Var8);
    _fscanf(p_Var8,"%d\n",&this_ptr->double_sided);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n",&this_ptr->locked_vertex_count);
  core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(this_ptr);
  iVar11 = 0;
  _fgets(local_138,0xff,p_Var8);
  if (0 < this_ptr->locked_vertex_count) {
    piVar14 = this_ptr->locked_vertex_indices;
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,"%d\n",piVar14);
      piVar14 = piVar14 + 1;
    } while (iVar11 < this_ptr->locked_vertex_count);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(this_ptr);
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,"%d\n",&this_ptr->collide_bone_count);
  iVar11 = 0;
  if (0 < this_ptr->collide_bone_count) {
    local_34 = this_ptr->collide_bones;
    pfVar12 = &this_ptr->collide_bones[0].radius1;
    local_14 = &this_ptr->collide_bones[0].radius2;
    local_18 = &this_ptr->collide_bones[0].euler1;
    local_20 = &this_ptr->collide_bones[0].euler1.y;
    local_1c = &this_ptr->collide_bones[0].euler1.z;
    local_24 = &this_ptr->collide_bones[0].euler2;
    local_2c = &this_ptr->collide_bones[0].euler2.z;
    local_28 = &this_ptr->collide_bones[0].length;
    pfVar15 = &this_ptr->collide_bones[0].euler2.y;
    do {
      pSVar9 = local_34 + iVar11;
      iVar11 = iVar11 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",pSVar9,pfVar12,local_14,local_18,local_20,
                 local_1c,local_24,local_2c,pfVar15,local_28);
      pfVar12 = pfVar12 + 0x2b;
      local_14 = local_14 + 0x2b;
      local_18 = (CVector3f *)((int)(local_18 + 0xe) + 4);
      local_20 = local_20 + 0x2b;
      local_1c = local_1c + 0x2b;
      local_24 = (CVector3f *)((int)(local_24 + 0xe) + 4);
      local_2c = local_2c + 0x2b;
      local_28 = local_28 + 0x2b;
      pfVar15 = pfVar15 + 0x2b;
    } while (iVar11 < this_ptr->collide_bone_count);
  }
  iVar16 = 0;
  iVar11 = _fclose(local_30);
  if (0 < (this_ptr->model).vertex_count) {
    pCVar10 = &this_ptr->vertices[0].offset_pos;
    iVar13 = 0;
    do {
      piVar14 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar13);
      iVar16 = iVar16 + 1;
      pCVar10->x = (float)*piVar14 * _DAT_0059b368;
      pCVar10->y = (float)piVar14[1] * _DAT_0059b368;
      pCVar10->z = (float)piVar14[2] * _DAT_0059b368;
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x17) + 8);
      iVar11 = (this_ptr->model).vertex_count;
      iVar13 = iVar13 + 0xc;
    } while (iVar16 < iVar11);
  }
  return iVar11;
}
