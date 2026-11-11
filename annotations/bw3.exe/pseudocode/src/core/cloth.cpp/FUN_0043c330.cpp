// Name: core_cloth.cpp_FUN_0043c330
// Address: 0043c330
// Address Range: [[0043c330, 0043c897]]
// Convention: unknown
// Signature: int core_cloth_cpp_FUN_0043c330(CCloth *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_cloth_cpp_FUN_0043c330(CCloth *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
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
  byte local_138 [256];
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
  
  local_30 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005b8fae);
  if (local_30 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0x9b;
    core_main_c_FUN_004e4330("CCloth::load - Unable to open file %s",param_2);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b8ff0,&param_1->version_num);
  if (3 < param_1->version_num) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0xa2;
    core_main_c_FUN_004e4330("%s is version %d, this .EXE is old and can only handle up to version %d",param_2,param_1->version_num,3);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b904e,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(&param_1->model,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(&param_1->model);
  _fgets(local_138,0xff,p_Var8);
  local_38 = &param_1->wind_area;
  if (param_1->version_num < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",&param_1->gravity,&param_1->dampen,&param_1->spring,
               &param_1->body_friction,&param_1->floor_friction,local_38);
    fVar6 = _DAT_005dd3e0;
    fVar5 = _DAT_005dd3dc;
    fVar4 = _DAT_005dd3d8;
    fVar3 = _DAT_005dd3d4;
    fVar2 = _DAT_005dd3d0;
    fVar1 = _DAT_005dd3cc;
    param_1->gravity = _DAT_005dd3c8;
    uVar7 = _DAT_005dd3e4;
    param_1->dampen = fVar1;
    param_1->spring = fVar2;
    param_1->body_friction = fVar3;
    param_1->floor_friction = fVar4;
    param_1->wind_area = fVar5;
    param_1->mom_inert = fVar6;
    *(uint *)param_1->dead = uVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",&param_1->gravity,&param_1->dampen,
               &param_1->spring,&param_1->body_friction,&param_1->floor_friction,local_38,
               &param_1->mom_inert,param_1->dead);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b907e,&param_1->weight);
  if (param_1->version_num < 2) {
    param_1->transparency = 0.0;
  }
  else {
    _fgets(local_138,0xff,p_Var8);
    _fscanf(p_Var8,&DAT_005b9082,&param_1->transparency);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b9086,&param_1->locked_vertex_count);
  core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0(param_1);
  iVar11 = 0;
  _fgets(local_138,0xff,p_Var8);
  if (0 < param_1->locked_vertex_count) {
    piVar14 = param_1->locked_vertex_indices;
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,&DAT_005b908a,piVar14);
      piVar14 = piVar14 + 1;
    } while (iVar11 < param_1->locked_vertex_count);
  }
  core_cloth_cpp_FUN_0043c8a0(param_1);
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b908e,&param_1->collide_bone_count);
  iVar11 = 0;
  if (0 < param_1->collide_bone_count) {
    local_34 = param_1->collide_bones;
    pfVar12 = &param_1->collide_bones[0].radius1;
    local_14 = &param_1->collide_bones[0].radius2;
    local_18 = &param_1->collide_bones[0].euler1;
    local_20 = &param_1->collide_bones[0].euler1.y;
    local_1c = &param_1->collide_bones[0].euler1.z;
    local_24 = &param_1->collide_bones[0].euler2;
    local_2c = &param_1->collide_bones[0].euler2.z;
    local_28 = &param_1->collide_bones[0].length;
    pfVar15 = &param_1->collide_bones[0].euler2.y;
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
    } while (iVar11 < param_1->collide_bone_count);
  }
  iVar16 = 0;
  iVar11 = _fclose(local_30);
  if (0 < (param_1->model).vertex_count) {
    pCVar10 = &param_1->vertices[0].offset_pos;
    iVar13 = 0;
    do {
      piVar14 = (int *)((int)&((param_1->model).vertex_list)->x + iVar13);
      iVar16 = iVar16 + 1;
      pCVar10->x = (float)*piVar14 * _DAT_005dd3b8;
      pCVar10->y = (float)piVar14[1] * _DAT_005dd3b8;
      pCVar10->z = (float)piVar14[2] * _DAT_005dd3b8;
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x17) + 8);
      iVar11 = (param_1->model).vertex_count;
      iVar13 = iVar13 + 0xc;
    } while (iVar16 < iVar11);
  }
  return iVar11;
}
