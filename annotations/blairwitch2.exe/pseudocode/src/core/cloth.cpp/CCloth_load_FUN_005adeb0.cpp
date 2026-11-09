// Name: core_cloth.cpp_CCloth_load_FUN_005adeb0
// Address: 005adeb0
// Address Range: [[005adeb0, 005ae417]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_load_FUN_005adeb0(CCloth *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_load_FUN_005adeb0(CCloth *this_ptr,char *filename)

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
  int iVar11;
  CCloth *pCVar12;
  int iVar13;
  CCloth *pCVar14;
  char acStack_238 [256];
  byte local_138 [256];
  CCloth *local_38;
  CCloth *local_34;
  _FILE *local_30;
  CCloth *local_2c;
  CCloth *local_28;
  CCloth *local_24;
  CCloth *local_20;
  CCloth *local_1c;
  CCloth *local_18;
  CCloth *local_14;
  
  local_30 = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005f0f71);
  if (local_30 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x9b;
    core_main_c_FUN_004e4500("CCloth::load - Unable to open file %s",filename);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005f0fb3,this_ptr + 0x3ab20);
  if (3 < *(int *)(this_ptr + 0x3ab20)) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0xa2;
    core_main_c_FUN_004e4500
              ("%s is version %d, this .EXE is old and can only handle up to version %d",filename,*(int *)(this_ptr + 0x3ab20),3);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005f1011,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0((CKeyFramedModel *)this_ptr,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_0044efe0((CKeyFramedModel *)this_ptr);
  _fgets(local_138,0xff,p_Var8);
  local_38 = this_ptr + 0x37b2c;
  if (*(int *)(this_ptr + 0x3ab20) < 3) {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f\n",this_ptr + 0x37b18,this_ptr + 0x37b1c,
               this_ptr + 0x37b20,this_ptr + 0x37b24,this_ptr + 0x37b28,local_38);
    uVar6 = _DAT_006011d0;
    uVar5 = _DAT_006011cc;
    uVar4 = _DAT_006011c8;
    uVar3 = _DAT_006011c4;
    uVar2 = _DAT_006011c0;
    uVar1 = _DAT_006011bc;
    *(uint *)(this_ptr + 0x37b18) = _DAT_006011b8;
    uVar7 = _DAT_006011d4;
    *(uint *)(this_ptr + 0x37b1c) = uVar1;
    *(uint *)(this_ptr + 0x37b20) = uVar2;
    *(uint *)(this_ptr + 0x37b24) = uVar3;
    *(uint *)(this_ptr + 0x37b28) = uVar4;
    *(uint *)(this_ptr + 0x37b2c) = uVar5;
    *(uint *)(this_ptr + 0x37b30) = uVar6;
    *(uint *)(this_ptr + 0x37b34) = uVar7;
  }
  else {
    _fscanf(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",this_ptr + 0x37b18,this_ptr + 0x37b1c,
               this_ptr + 0x37b20,this_ptr + 0x37b24,this_ptr + 0x37b28,local_38,this_ptr + 0x37b30,
               this_ptr + 0x37b34);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005f1041,this_ptr + 0x37b48);
  if (*(int *)(this_ptr + 0x3ab20) < 2) {
    *(uint *)(this_ptr + 0x37b44) = 0;
  }
  else {
    _fgets(local_138,0xff,p_Var8);
    _fscanf(p_Var8,&DAT_005f1045,this_ptr + 0x37b44);
  }
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005f1049,this_ptr + 0x39ce8);
  core_cloth_cpp_CCloth_allocMemory_FUN_005ade20(this_ptr);
  iVar11 = 0;
  _fgets(local_138,0xff,p_Var8);
  if (0 < *(int *)(this_ptr + 0x39ce8)) {
    pCVar12 = this_ptr + 0x39cec;
    do {
      iVar11 = iVar11 + 1;
      _fscanf(local_30,&DAT_005f104d,pCVar12);
      pCVar12 = pCVar12 + 4;
    } while (iVar11 < *(int *)(this_ptr + 0x39ce8));
  }
  core_cloth_cpp_FUN_005ae420(this_ptr);
  p_Var8 = local_30;
  _fgets(local_138,0xff,local_30);
  _fscanf(p_Var8,&DAT_005f1051,this_ptr + 0x37b4c);
  iVar11 = 0;
  if (0 < *(int *)(this_ptr + 0x37b4c)) {
    local_34 = this_ptr + 0x37b50;
    pCVar12 = this_ptr + 0x37b64;
    local_14 = this_ptr + 0x37b68;
    local_18 = this_ptr + 0x37b6c;
    local_20 = this_ptr + 0x37b70;
    local_1c = this_ptr + 0x37b74;
    local_24 = this_ptr + 0x37b78;
    local_2c = this_ptr + 0x37b80;
    local_28 = this_ptr + 0x37b84;
    pCVar14 = this_ptr + 0x37b7c;
    do {
      iVar9 = iVar11 * 0xac;
      iVar11 = iVar11 + 1;
      _fscanf(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",local_34 + iVar9,pCVar12,local_14,local_18,
                 local_20,local_1c,local_24,local_2c,pCVar14,local_28);
      pCVar12 = pCVar12 + 0xac;
      local_14 = local_14 + 0xac;
      local_18 = local_18 + 0xac;
      local_20 = local_20 + 0xac;
      local_1c = local_1c + 0xac;
      local_24 = local_24 + 0xac;
      local_2c = local_2c + 0xac;
      local_28 = local_28 + 0xac;
      pCVar14 = pCVar14 + 0xac;
    } while (iVar11 < *(int *)(this_ptr + 0x37b4c));
  }
  iVar9 = 0;
  iVar11 = _fclose(local_30);
  if (0 < *(int *)(this_ptr + 0x104)) {
    pCVar12 = this_ptr + 0x458;
    iVar13 = 0;
    do {
      piVar10 = (int *)(*(int *)(this_ptr + 0x10c) + iVar13);
      iVar9 = iVar9 + 1;
      *(float *)pCVar12 = (float)*piVar10 * _DAT_006011a8;
      *(float *)(pCVar12 + 4) = (float)piVar10[1] * _DAT_006011a8;
      *(float *)(pCVar12 + 8) = (float)piVar10[2] * _DAT_006011a8;
      pCVar12 = pCVar12 + 0x11c;
      iVar11 = *(int *)(this_ptr + 0x104);
      iVar13 = iVar13 + 0xc;
    } while (iVar9 < iVar11);
  }
  return iVar11;
}
