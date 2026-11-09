// Name: core_dmodel.cpp_FUN_00466be0
// Address: 00466be0
// Address Range: [[00466be0, 00467151]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
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
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005d938a,&local_44);
  if (local_44 < 5) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x128;
    core_main_c_FUN_005030e0("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 299;
    core_main_c_FUN_005030e0("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_FUN_00467650(this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  _fscanf(file,&DAT_005d9426,&local_48);
  if (local_44 < 6) {
    *(uint *)&this_ptr->field_0x35c = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005d942a,&this_ptr->field_0x35c);
  }
  if (local_44 < 8) {
    *(uint *)&this_ptr->field_0x360 = 0;
  }
  else {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005d942e,&this_ptr->field_0x360);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    _fscanf(file,&DAT_005d9432,&local_2c);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < *(int *)&this_ptr->field_0x104 * *(int *)&this_ptr->field_0x100;
      iVar3 = iVar3 + 1) {
    iVar2 = *(int *)&this_ptr->field_0x10c + iVar1;
    iVar1 = iVar1 + 0xc;
    _fscanf(file,"%d,%d,%d\n",iVar2,iVar2 + 4,iVar2 + 8);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  local_1c = 0;
  if (0 < *(int *)&this_ptr->field_0x110) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = local_20 + *(int *)&this_ptr->field_0x114;
      _fscanf(file,"%d,%d",*(int *)&this_ptr->field_0x118 + local_24,local_14 + 4);
      iVar3 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        iVar1 = local_14 + 0x1c;
        iVar2 = local_14 + 0x20;
        do {
          _fscanf(file,", %d,%d,%d",iVar3 * 0xc + local_18,iVar1,iVar2);
          iVar2 = iVar2 + 0xc;
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0xc;
        } while (iVar3 < *(int *)(local_14 + 4));
      }
      _fscanf(file,&DAT_005d9451);
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)&this_ptr->field_0x110);
  }
  if (local_2c != 0) {
    iVar3 = FUN_005c1268(*(uint *)&this_ptr->field_0x110);
    *(int *)&this_ptr->field_0x11c = iVar3;
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0x178;
      core_main_c_FUN_005030e0("Out of memory for envMapOpacList");
    }
    iVar3 = 1;
    do {
      iVar1 = _fgetc(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0x110) {
      do {
        _fscanf(file,&DAT_005d9487,local_28);
        *(byte *)(*(int *)&this_ptr->field_0x11c + iVar3) = local_28[0];
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)&this_ptr->field_0x110);
    }
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x120) {
    puVar4 = &this_ptr->field_0x12c;
    do {
      _fscanf(file,"%[^\n]\n",puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x48;
    } while (iVar3 < *(int *)&this_ptr->field_0x120);
  }
  iVar3 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x244) {
    puVar4 = &this_ptr->field_0x24c;
    do {
      _fscanf(file,"%d,%d\n",&this_ptr->field_0x248 + iVar3 * 8,puVar4)
      ;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar3 < *(int *)&this_ptr->field_0x244);
  }
  if (((byte)file[0xc] & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0x197;
    core_main_c_FUN_005030e0("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(this_ptr);
    return;
  }
  return;
}
