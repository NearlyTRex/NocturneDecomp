// Name: core_cloth.cpp_FUN_0043c330
// Address: 0043c330
// Address Range: [[0043c330, 0043c897]]
// Convention: unknown
// Signature: int core_cloth_cpp_FUN_0043c330(CKeyFramedModel *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_cloth_cpp_FUN_0043c330(CKeyFramedModel *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  _FILE *p_Var8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  byte *puVar13;
  int iVar14;
  byte *puVar15;
  char acStack_238 [256];
  byte local_138 [256];
  byte *local_38;
  byte *local_34;
  _FILE *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_30 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005b8fae);
  if (local_30 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0x9b;
    core_main_c_FUN_004e4330("CCloth::load - Unable to open file %s",param_2);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b8ff0,&param_1[0x105].field_0x128);
  if (3 < *(int *)&param_1[0x105].field_0x128) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0xa2;
    core_main_c_FUN_004e4330
              ("%s is version %d, this .EXE is old and can only handle up to version %d",param_2,*(int *)&param_1[0x105].field_0x128,3);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b904e,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550(param_1,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00461860(param_1);
  _fgets(local_138,0xff,p_Var8);
  local_38 = &param_1[0xf7].field_0x388;
  if (*(int *)&param_1[0x105].field_0x128 < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",&param_1[0xf7].field_0x374,&param_1[0xf7].field_0x378
               ,&param_1[0xf7].field_0x37c,&param_1[0xf7].field_0x380,&param_1[0xf7].field_0x384,
               local_38);
    uVar6 = _DAT_005dd3e0;
    uVar5 = _DAT_005dd3dc;
    uVar4 = _DAT_005dd3d8;
    uVar3 = _DAT_005dd3d4;
    uVar2 = _DAT_005dd3d0;
    uVar1 = _DAT_005dd3cc;
    *(uint *)&param_1[0xf7].field_0x374 = _DAT_005dd3c8;
    uVar7 = _DAT_005dd3e4;
    *(uint *)&param_1[0xf7].field_0x378 = uVar1;
    *(uint *)&param_1[0xf7].field_0x37c = uVar2;
    *(uint *)&param_1[0xf7].field_0x380 = uVar3;
    *(uint *)&param_1[0xf7].field_0x384 = uVar4;
    *(uint *)&param_1[0xf7].field_0x388 = uVar5;
    *(uint *)&param_1[0xf7].field_0x38c = uVar6;
    *(uint *)&param_1[0xf7].field_0x390 = uVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",&param_1[0xf7].field_0x374,
               &param_1[0xf7].field_0x378,&param_1[0xf7].field_0x37c,&param_1[0xf7].field_0x380,
               &param_1[0xf7].field_0x384,local_38,&param_1[0xf7].field_0x38c,
               &param_1[0xf7].field_0x390);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b907e,&param_1[0xf7].field_0x370);
  if (*(int *)&param_1[0x105].field_0x128 < 2) {
    *(uint *)&param_1[0xf8].field_0x8 = 0;
  }
  else {
    _fgets(local_138,0xff,p_Var8);
    _fscanf(p_Var8,&DAT_005b9082,&param_1[0xf8].field_0x8);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b9086,&param_1[0x101].field_0x150);
  core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0((CCloth *)param_1);
  iVar12 = 0;
  _fgets(local_138,0xff,p_Var8);
  if (0 < *(int *)&param_1[0x101].field_0x150) {
    puVar13 = &param_1[0x101].field_0x154;
    do {
      iVar12 = iVar12 + 1;
      _fscanf(local_30,&DAT_005b908a,puVar13);
      puVar13 = puVar13 + 4;
    } while (iVar12 < *(int *)&param_1[0x101].field_0x150);
  }
  core_cloth_cpp_FUN_0043c8a0((CCloth *)param_1);
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005b908e,&param_1[0xf8].field_0xc);
  iVar12 = 0;
  if (0 < *(int *)&param_1[0xf8].field_0xc) {
    local_34 = &param_1[0xf8].field_0x10;
    puVar13 = &param_1[0xf8].field_0x24;
    local_14 = &param_1[0xf8].field_0x28;
    local_18 = &param_1[0xf8].field_0x2c;
    local_20 = &param_1[0xf8].field_0x30;
    local_1c = &param_1[0xf8].field_0x34;
    local_24 = &param_1[0xf8].field_0x38;
    local_2c = &param_1[0xf8].field_0x40;
    local_28 = &param_1[0xf8].field_0x44;
    puVar15 = &param_1[0xf8].field_0x3c;
    do {
      iVar9 = iVar12 * 0xac;
      iVar12 = iVar12 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",local_34 + iVar9,puVar13,local_14,local_18,
                 local_20,local_1c,local_24,local_2c,puVar15,local_28);
      puVar13 = puVar13 + 0xac;
      local_14 = local_14 + 0xac;
      local_18 = local_18 + 0xac;
      local_20 = local_20 + 0xac;
      local_1c = local_1c + 0xac;
      local_24 = local_24 + 0xac;
      local_2c = local_2c + 0xac;
      local_28 = local_28 + 0xac;
      puVar15 = puVar15 + 0xac;
    } while (iVar12 < *(int *)&param_1[0xf8].field_0xc);
  }
  iVar9 = 0;
  iVar12 = _fclose(local_30);
  if (0 < *(int *)&param_1->field_0x104) {
    pfVar11 = (float *)&param_1[1].field_0xc0;
    iVar14 = 0;
    do {
      piVar10 = (int *)(*(int *)&param_1->field_0x10c + iVar14);
      iVar9 = iVar9 + 1;
      *pfVar11 = (float)*piVar10 * _DAT_005dd3b8;
      pfVar11[1] = (float)piVar10[1] * _DAT_005dd3b8;
      pfVar11[2] = (float)piVar10[2] * _DAT_005dd3b8;
      pfVar11 = pfVar11 + 0x47;
      iVar12 = *(int *)&param_1->field_0x104;
      iVar14 = iVar14 + 0xc;
    } while (iVar9 < iVar12);
  }
  return iVar12;
}
