// Name: FUN_0043c330
// Address: 0043c330
// Address Range: [[0043c330, 0043c897]]
// Convention: unknown
// Signature: int FUN_0043c330(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043c330(int param_1,uint param_2)

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
  
  local_30 = FUN_004659c0("models",param_2,&DAT_005b8fae);
  if (local_30 == 0) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0x9b;
    FUN_004e4330("CCloth::load - Unable to open file %s",param_2);
  }
  iVar12 = local_30;
  FUN_005a3f00(local_138,0xff,local_30);
  FUN_005a3230(iVar12,&DAT_005b8ff0,param_1 + 0x3ab20);
  if (3 < *(int *)(param_1 + 0x3ab20)) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0xa2;
    FUN_004e4330("%s is version %d, this .EXE is old and can only handle up to version %d",param_2,*(int *)(param_1 + 0x3ab20),3);
  }
  iVar12 = local_30;
  FUN_005a3f00(local_138,0xff,local_30);
  FUN_005a3230(iVar12,&DAT_005b904e,auStack_238);
  FUN_00460550(param_1,auStack_238);
  FUN_00461860(param_1);
  FUN_005a3f00(local_138,0xff,iVar12);
  local_38 = param_1 + 0x37b30;
  if (*(int *)(param_1 + 0x3ab20) < 3) {
    FUN_005a3230(local_30,"%f,%f,%f,%f,%f,%f\n",param_1 + 0x37b1c,param_1 + 0x37b20,
                 param_1 + 0x37b24,param_1 + 0x37b28,param_1 + 0x37b2c,local_38);
    uVar6 = _DAT_005dd3e0;
    uVar5 = _DAT_005dd3dc;
    uVar4 = _DAT_005dd3d8;
    uVar3 = _DAT_005dd3d4;
    uVar2 = _DAT_005dd3d0;
    uVar1 = _DAT_005dd3cc;
    *(uint *)(param_1 + 0x37b1c) = _DAT_005dd3c8;
    uVar7 = _DAT_005dd3e4;
    *(uint *)(param_1 + 0x37b20) = uVar1;
    *(uint *)(param_1 + 0x37b24) = uVar2;
    *(uint *)(param_1 + 0x37b28) = uVar3;
    *(uint *)(param_1 + 0x37b2c) = uVar4;
    *(uint *)(param_1 + 0x37b30) = uVar5;
    *(uint *)(param_1 + 0x37b34) = uVar6;
    *(uint *)(param_1 + 0x37b38) = uVar7;
  }
  else {
    FUN_005a3230(local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",param_1 + 0x37b1c,param_1 + 0x37b20,
                 param_1 + 0x37b24,param_1 + 0x37b28,param_1 + 0x37b2c,local_38,param_1 + 0x37b34,
                 param_1 + 0x37b38);
  }
  iVar12 = local_30;
  FUN_005a3f00(local_138,0xff,local_30);
  FUN_005a3230(iVar12,&DAT_005b907e,param_1 + 0x37b18);
  if (*(int *)(param_1 + 0x3ab20) < 2) {
    *(uint *)(param_1 + 0x37b48) = 0;
  }
  else {
    FUN_005a3f00(local_138,0xff,iVar12);
    FUN_005a3230(iVar12,&DAT_005b9082,param_1 + 0x37b48);
  }
  iVar12 = local_30;
  FUN_005a3f00(local_138,0xff,local_30);
  FUN_005a3230(iVar12,&DAT_005b9086,param_1 + 0x39ce8);
  FUN_0043c2a0(param_1);
  iVar11 = 0;
  FUN_005a3f00(local_138,0xff,iVar12);
  if (0 < *(int *)(param_1 + 0x39ce8)) {
    iVar12 = param_1 + 0x39cec;
    do {
      iVar11 = iVar11 + 1;
      FUN_005a3230(local_30,&DAT_005b908a,iVar12);
      iVar12 = iVar12 + 4;
    } while (iVar11 < *(int *)(param_1 + 0x39ce8));
  }
  FUN_0043c8a0(param_1);
  iVar12 = local_30;
  FUN_005a3f00(local_138,0xff,local_30);
  FUN_005a3230(iVar12,&DAT_005b908e,param_1 + 0x37b4c);
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
      FUN_005a3230(local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",iVar8 + local_34,iVar11,local_14,local_18,
                   local_20,local_1c,local_24,local_2c,iVar13,local_28);
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
  iVar12 = FUN_005a3a90(local_30);
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar10 = (float *)(param_1 + 0x458);
    iVar13 = 0;
    do {
      piVar9 = (int *)(*(int *)(param_1 + 0x10c) + iVar13);
      iVar11 = iVar11 + 1;
      *pfVar10 = (float)*piVar9 * _DAT_005dd3b8;
      pfVar10[1] = (float)piVar9[1] * _DAT_005dd3b8;
      pfVar10[2] = (float)piVar9[2] * _DAT_005dd3b8;
      pfVar10 = pfVar10 + 0x47;
      iVar12 = *(int *)(param_1 + 0x104);
      iVar13 = iVar13 + 0xc;
    } while (iVar11 < iVar12);
  }
  return iVar12;
}
