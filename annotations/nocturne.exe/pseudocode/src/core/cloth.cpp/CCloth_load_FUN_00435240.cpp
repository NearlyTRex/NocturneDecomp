// Name: core_cloth.cpp_CCloth_load_FUN_00435240
// Address: 00435240
// Address Range: [[00435240, 004357a7]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte auStack_238 [256];
  byte local_138 [256];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = engine_dosio_cpp_getFile_FUN_00456a60("models",param_2,&DAT_0057acab);
  if (local_30 == 0) {
    _DAT_01cc4800 = "..\\core\\cloth.cpp";
    _DAT_01cc4804 = 0x9b;
    FUN_004c8440("CCloth::load - Unable to open file %s",param_2);
  }
  iVar12 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(iVar12,&DAT_0057aced,param_1 + 0x3ab20);
  if (3 < *(int *)(param_1 + 0x3ab20)) {
    _DAT_01cc4800 = "..\\core\\cloth.cpp";
    _DAT_01cc4804 = 0xa2;
    FUN_004c8440("%s is version %d, this .EXE is old and can only handle up to version %d",param_2,*(int *)(param_1 + 0x3ab20),3);
  }
  iVar12 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(iVar12,&DAT_0057ad4b,auStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(param_1,auStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00453950(param_1);
  _fgets(local_138,0xff,iVar12);
  local_38 = param_1 + 0x37b2c;
  if (*(int *)(param_1 + 0x3ab20) < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",param_1 + 0x37b18,param_1 + 0x37b1c,
               param_1 + 0x37b20,param_1 + 0x37b24,param_1 + 0x37b28,local_38);
    uVar6 = _DAT_0059b390;
    uVar5 = _DAT_0059b38c;
    uVar4 = _DAT_0059b388;
    uVar3 = _DAT_0059b384;
    uVar2 = _DAT_0059b380;
    uVar1 = _DAT_0059b37c;
    *(uint *)(param_1 + 0x37b18) = _DAT_0059b378;
    uVar7 = _DAT_0059b394;
    *(uint *)(param_1 + 0x37b1c) = uVar1;
    *(uint *)(param_1 + 0x37b20) = uVar2;
    *(uint *)(param_1 + 0x37b24) = uVar3;
    *(uint *)(param_1 + 0x37b28) = uVar4;
    *(uint *)(param_1 + 0x37b2c) = uVar5;
    *(uint *)(param_1 + 0x37b30) = uVar6;
    *(uint *)(param_1 + 0x37b34) = uVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",param_1 + 0x37b18,param_1 + 0x37b1c,
               param_1 + 0x37b20,param_1 + 0x37b24,param_1 + 0x37b28,local_38,param_1 + 0x37b30,
               param_1 + 0x37b34);
  }
  iVar12 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(iVar12,&DAT_0057ad7b,param_1 + 0x37b48);
  if (*(int *)(param_1 + 0x3ab20) < 2) {
    *(uint *)(param_1 + 0x37b44) = 0;
  }
  else {
    _fgets(local_138,0xff,iVar12);
    _fscanf(iVar12,&DAT_0057ad7f,param_1 + 0x37b44);
  }
  iVar12 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(iVar12,&DAT_0057ad83,param_1 + 0x39ce8);
  core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(param_1);
  iVar11 = 0;
  _fgets(local_138,0xff,iVar12);
  if (0 < *(int *)(param_1 + 0x39ce8)) {
    iVar12 = param_1 + 0x39cec;
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,&DAT_0057ad87,iVar12);
      iVar12 = iVar12 + 4;
    } while (iVar11 < *(int *)(param_1 + 0x39ce8));
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(param_1);
  iVar12 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(iVar12,&DAT_0057ad8b,param_1 + 0x37b4c);
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    local_34 = param_1 + 0x37b50;
    iVar11 = param_1 + 0x37b64;
    local_14 = param_1 + 0x37b68;
    local_18 = param_1 + 0x37b6c;
    local_20 = param_1 + 0x37b70;
    local_1c = param_1 + 0x37b74;
    local_24 = param_1 + 0x37b78;
    local_2c = param_1 + 0x37b80;
    local_28 = param_1 + 0x37b84;
    iVar13 = param_1 + 0x37b7c;
    do {
      iVar8 = iVar12 * 0xac;
      iVar12 = iVar12 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",iVar8 + local_34,iVar11,
                 local_14,local_18,local_20,local_1c,local_24,local_2c,iVar13,local_28);
      iVar11 = iVar11 + 0xac;
      local_14 = local_14 + 0xac;
      local_18 = local_18 + 0xac;
      local_20 = local_20 + 0xac;
      local_1c = local_1c + 0xac;
      local_24 = local_24 + 0xac;
      local_2c = local_2c + 0xac;
      local_28 = local_28 + 0xac;
      iVar13 = iVar13 + 0xac;
    } while (iVar12 < *(int *)(param_1 + 0x37b4c));
  }
  iVar11 = 0;
  iVar12 = _fclose(local_30);
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar10 = (float *)(param_1 + 0x458);
    iVar13 = 0;
    do {
      piVar9 = (int *)(*(int *)(param_1 + 0x10c) + iVar13);
      iVar11 = iVar11 + 1;
      *pfVar10 = (float)*piVar9 * _DAT_0059b368;
      pfVar10[1] = (float)piVar9[1] * _DAT_0059b368;
      pfVar10[2] = (float)piVar9[2] * _DAT_0059b368;
      pfVar10 = pfVar10 + 0x47;
      iVar12 = *(int *)(param_1 + 0x104);
      iVar13 = iVar13 + 0xc;
    } while (iVar11 < iVar12);
  }
  return iVar12;
}
