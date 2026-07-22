// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
// Address: 00452990
// Address Range: [[00452990, 00452f01]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = 1;
  local_44 = -1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(param_2,"%d\n",&local_44);
  if (local_44 < 5) {
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 0x128;
    FUN_004c8440("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 299;
    FUN_004c8440("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(param_2,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0
            (param_1,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(param_2,"%d\n",&local_48);
  if (local_44 < 6) {
    *(uint *)(param_1 + 0x35c) = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(param_2,"%d\n",param_1 + 0x35c);
  }
  if (local_44 < 8) {
    *(uint *)(param_1 + 0x360) = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(param_2,"%d\n",param_1 + 0x360);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(param_2,"%d\n",&local_2c);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x100); iVar3 = iVar3 + 1)
  {
    iVar2 = *(int *)(param_1 + 0x10c) + iVar1;
    iVar1 = iVar1 + 0xc;
    _fscanf(param_2,"%d,%d,%d\n",iVar2,iVar2 + 4,iVar2 + 8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x110)) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = local_20 + *(int *)(param_1 + 0x114);
      _fscanf(param_2,"%d,%d",*(int *)(param_1 + 0x118) + local_24,local_14 + 4);
      iVar3 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        iVar1 = local_14 + 0x1c;
        iVar2 = local_14 + 0x20;
        do {
          _fscanf(param_2,", %d,%d,%d",iVar3 * 0xc + local_18,iVar1,iVar2);
          iVar2 = iVar2 + 0xc;
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0xc;
        } while (iVar3 < *(int *)(local_14 + 4));
      }
      _fscanf(param_2,"\n");
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x110));
  }
  if (local_2c != 0) {
    iVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(*(uint *)(param_1 + 0x110));
    *(int *)(param_1 + 0x11c) = iVar3;
    if (iVar3 == 0) {
      _DAT_01cc4800 = "..\\core\\dmodel.cpp";
      _DAT_01cc4804 = 0x178;
      FUN_004c8440("Out of memory for envMapOpacList");
    }
    iVar3 = 1;
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x110)) {
      do {
        _fscanf(param_2,"%d\n",local_28);
        *(byte *)(*(int *)(param_1 + 0x11c) + iVar3) = local_28[0];
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x110));
    }
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar1 = param_1 + 300;
    do {
      _fscanf(param_2,"%[^\n]\n",iVar1);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar3 < *(int *)(param_1 + 0x120));
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x244)) {
    iVar1 = param_1 + 0x24c;
    do {
      _fscanf(param_2,"%d,%d\n",iVar3 * 8 + param_1 + 0x248,iVar1);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x244));
  }
  iVar3 = param_1;
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 0x197;
    iVar3 = FUN_004c8440("Error reading KFM model");
  }
  if (local_48 != 0) {
    iVar3 = core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(param_1);
    return iVar3;
  }
  return iVar3;
}
