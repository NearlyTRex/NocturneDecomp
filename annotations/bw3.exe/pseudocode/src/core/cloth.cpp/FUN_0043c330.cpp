// Name: core_cloth.cpp_FUN_0043c330
// Address: 0043c330
// Address Range: [[0043c330, 0043c897]]
// Convention: unknown
// Signature: int core_cloth_cpp_FUN_0043c330(CKeyFramedModel *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_cloth_cpp_FUN_0043c330(CKeyFramedModel *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _FILE *p_Var13;
  int iVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  byte *puVar19;
  char *pcVar20;
  char acStack_238 [256];
  byte local_138 [256];
  CVector3f *local_38;
  char *local_34;
  _FILE *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  local_30 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005b8fae);
  if (local_30 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0x9b;
    core_main_c_FUN_004e4330("CCloth::load - Unable to open file %s",param_2);
  }
  p_Var13 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var13,&DAT_005b8ff0,&param_1[0x105].field_0x128);
  if (3 < *(int *)&param_1[0x105].field_0x128) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0xa2;
    core_main_c_FUN_004e4330
              ("%s is version %d, this .EXE is old and can only handle up to version %d",param_2,*(int *)&param_1[0x105].field_0x128,3);
  }
  p_Var13 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var13,&DAT_005b904e,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(param_1,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(param_1);
  pfVar1 = &param_1[0xf7].rotation_matrix_workspace.m[0].y;
  _fgets(local_138,0xff,p_Var13);
  pfVar2 = &param_1[0xf7].rotation_matrix_workspace.m[0].z;
  pCVar3 = param_1[0xf7].rotation_matrix_workspace.m + 1;
  pfVar4 = &param_1[0xf7].rotation_matrix_workspace.m[1].y;
  pfVar5 = &param_1[0xf7].rotation_matrix_workspace.m[1].z;
  local_38 = param_1[0xf7].rotation_matrix_workspace.m + 2;
  if (*(int *)&param_1[0x105].field_0x128 < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",pfVar1,pfVar2,pCVar3,pfVar4,pfVar5,local_38);
    fVar11 = _DAT_005dd3e0;
    fVar10 = _DAT_005dd3dc;
    fVar9 = _DAT_005dd3d8;
    fVar8 = _DAT_005dd3d4;
    fVar7 = _DAT_005dd3d0;
    fVar6 = _DAT_005dd3cc;
    param_1[0xf7].rotation_matrix_workspace.m[0].y = _DAT_005dd3c8;
    fVar12 = _DAT_005dd3e4;
    param_1[0xf7].rotation_matrix_workspace.m[0].z = fVar6;
    param_1[0xf7].rotation_matrix_workspace.m[1].x = fVar7;
    param_1[0xf7].rotation_matrix_workspace.m[1].y = fVar8;
    param_1[0xf7].rotation_matrix_workspace.m[1].z = fVar9;
    param_1[0xf7].rotation_matrix_workspace.m[2].x = fVar10;
    param_1[0xf7].rotation_matrix_workspace.m[2].y = fVar11;
    param_1[0xf7].rotation_matrix_workspace.m[2].z = fVar12;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",pfVar1,pfVar2,pCVar3,pfVar4,pfVar5,local_38,
               &param_1[0xf7].rotation_matrix_workspace.m[2].y,
               &param_1[0xf7].rotation_matrix_workspace.m[2].z);
  }
  p_Var13 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var13,&DAT_005b907e,&param_1[0xf7].rotation_matrix_workspace);
  if (*(int *)&param_1[0x105].field_0x128 < 2) {
    param_1[0xf8].model_filename[8] = '\0';
    param_1[0xf8].model_filename[9] = '\0';
    param_1[0xf8].model_filename[10] = '\0';
    param_1[0xf8].model_filename[0xb] = '\0';
  }
  else {
    _fgets(local_138,0xff,p_Var13);
    _fscanf(p_Var13,&DAT_005b9082,param_1[0xf8].model_filename + 8);
  }
  p_Var13 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var13,&DAT_005b9086,&param_1[0x101].field_0x150);
  core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0((CCloth *)param_1);
  iVar16 = 0;
  _fgets(local_138,0xff,p_Var13);
  if (0 < *(int *)&param_1[0x101].field_0x150) {
    puVar19 = &param_1[0x101].field_0x154;
    do {
      iVar16 = iVar16 + 1;
      _fscanf(local_30,&DAT_005b908a,puVar19);
      puVar19 = puVar19 + 4;
    } while (iVar16 < *(int *)&param_1[0x101].field_0x150);
  }
  core_cloth_cpp_FUN_0043c8a0((CCloth *)param_1);
  p_Var13 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var13,&DAT_005b908e,param_1[0xf8].model_filename + 0xc);
  iVar16 = 0;
  if (0 < *(int *)(param_1[0xf8].model_filename + 0xc)) {
    local_34 = param_1[0xf8].model_filename + 0x10;
    pcVar17 = param_1[0xf8].model_filename + 0x24;
    local_14 = param_1[0xf8].model_filename + 0x28;
    local_18 = param_1[0xf8].model_filename + 0x2c;
    local_20 = param_1[0xf8].model_filename + 0x30;
    local_1c = param_1[0xf8].model_filename + 0x34;
    local_24 = param_1[0xf8].model_filename + 0x38;
    local_2c = param_1[0xf8].model_filename + 0x40;
    local_28 = param_1[0xf8].model_filename + 0x44;
    pcVar20 = param_1[0xf8].model_filename + 0x3c;
    do {
      iVar14 = iVar16 * 0xac;
      iVar16 = iVar16 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",local_34 + iVar14,pcVar17,local_14,local_18,
                 local_20,local_1c,local_24,local_2c,pcVar20,local_28);
      pcVar17 = pcVar17 + 0xac;
      local_14 = local_14 + 0xac;
      local_18 = local_18 + 0xac;
      local_20 = local_20 + 0xac;
      local_1c = local_1c + 0xac;
      local_24 = local_24 + 0xac;
      local_2c = local_2c + 0xac;
      local_28 = local_28 + 0xac;
      pcVar20 = pcVar20 + 0xac;
    } while (iVar16 < *(int *)(param_1[0xf8].model_filename + 0xc));
  }
  iVar14 = 0;
  iVar16 = _fclose(local_30);
  if (0 < param_1->vertex_count) {
    pcVar17 = param_1[1].model_filename + 0xc0;
    iVar18 = 0;
    do {
      piVar15 = (int *)((int)&param_1->vertex_list->x + iVar18);
      iVar14 = iVar14 + 1;
      *(float *)pcVar17 = (float)*piVar15 * _DAT_005dd3b8;
      *(float *)(pcVar17 + 4) = (float)piVar15[1] * _DAT_005dd3b8;
      *(float *)(pcVar17 + 8) = (float)piVar15[2] * _DAT_005dd3b8;
      pcVar17 = pcVar17 + 0x11c;
      iVar16 = param_1->vertex_count;
      iVar18 = iVar18 + 0xc;
    } while (iVar14 < iVar16);
  }
  return iVar16;
}
