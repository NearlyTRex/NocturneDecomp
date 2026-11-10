// Name: core_setutil.cpp_C3DSLight_load_FUN_005421c0
// Address: 005421c0
// Address Range: [[005421c0, 0054293b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_load_FUN_005421c0(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_005421c0(C3DSLight *this_ptr,_FILE *file_handle)

{
  byte *puVar1;
  byte *puVar2;
  C3DSLight *pCVar3;
  int iVar4;
  byte local_148 [256];
  int local_48;
  byte local_44 [4];
  byte local_40 [4];
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  C3DSLight *local_18;
  byte *local_14;
  
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%[^\n]\n",&this_ptr->field_0x4);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x104,&this_ptr->field_0x108,
             &this_ptr->field_0x10c);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x110,&this_ptr->field_0x118,
             &this_ptr->field_0x114);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005d0eb5,&this_ptr->field_0x11c);
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x15) {
    *(uint *)&this_ptr->field_0x120 = 0x3f800000;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,&DAT_005d0eb9,&this_ptr->field_0x120);
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x16) {
    *(uint *)&this_ptr->field_0x124 = 0x3f800000;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,&DAT_005d0ebd,&this_ptr->field_0x124);
  }
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005d0ec1,this_ptr);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f,%f,%f\n",&this_ptr->field_0x11c4,&this_ptr->field_0x11c8,
             &this_ptr->field_0x11cc,&this_ptr->field_0x11d0,&this_ptr->field_0x11d4);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d,%d\n",&this_ptr->field_0x1808,&this_ptr->field_0x180c);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005d0edc,&this_ptr->field_0x11ec);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 9) {
    *(uint *)&this_ptr->field_0x11f0 = 1;
  }
  else {
    _fscanf(file_handle,&DAT_005d0ee0,&this_ptr->field_0x11f0);
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x11ec) {
    local_28 = &this_ptr->field_0x1774;
    puVar2 = &this_ptr->field_0x16f4;
    local_14 = &this_ptr->field_0x11f4;
    local_18 = this_ptr;
    do {
      local_1c = iVar4 * 4;
      if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x10) {
        _fscanf(file_handle,"%f,%s\n",puVar2,local_14);
        *(uint *)(&this_ptr->field_0x1774 + local_1c) = 0;
      }
      else {
        _fscanf(file_handle,"%f,%d,%s\n",puVar2,local_28 + local_1c,local_14);
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + 1;
      local_14 = local_14 + 0x28;
      puVar1 = &local_18->field_0x4;
      *(uint *)&local_18->field_0x1810 = 0;
      local_18 = (C3DSLight *)puVar1;
    } while (iVar4 < *(int *)&this_ptr->field_0x11ec);
  }
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005d0ef5,&this_ptr->field_0x1890);
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x13) {
    *(uint *)&this_ptr->field_0x17f8 = 0;
    *(uint *)&this_ptr->field_0x17fc = 0;
    *(uint *)&this_ptr->field_0x1800 = 0;
    *(uint *)&this_ptr->field_0x1804 = 0;
    *(uint *)&this_ptr->field_0x17f4 = 0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&this_ptr->field_0x17f4,&this_ptr->field_0x17f8,
               &this_ptr->field_0x17fc,&this_ptr->field_0x1800,&this_ptr->field_0x1804);
  }
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f\n",&this_ptr->field_0x11e0,&this_ptr->field_0x11e4);
  _fgets(local_148,0xff,file_handle);
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0xb) {
    local_20 = 100;
    if (6 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
      if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x1a) {
        local_20 = 200;
      }
      else {
        local_20 = 0xfa;
      }
    }
    if (local_20 != 0) {
      local_24 = &this_ptr->field_0x224;
      local_20 = local_20 << 4;
      iVar4 = 0;
      pCVar3 = this_ptr;
      do {
        if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 2) {
          _fscanf(file_handle,&DAT_005d0f10,local_44);
          pCVar3->field_0x128 = local_44[0];
          *(uint *)(&this_ptr->field_0x224 + iVar4) = 1;
          *(uint *)(&this_ptr->field_0x228 + iVar4) = 0x13e;
          *(uint *)(&this_ptr->field_0x22c + iVar4) = 1;
          *(uint *)(&this_ptr->field_0x230 + iVar4) = 0xee;
        }
        else {
          puVar2 = local_24 + iVar4;
          _fscanf(file_handle,"%d,%d,%d,%d,%d\n",local_40,puVar2,puVar2 + 4,puVar2 + 8,
                     puVar2 + 0xc);
          pCVar3->field_0x128 = local_40[0];
        }
        iVar4 = iVar4 + 0x10;
        pCVar3 = (C3DSLight *)&pCVar3->field_0x1;
      } while (iVar4 < local_20);
    }
  }
  else {
    memset(&this_ptr->field_0x128,0,0xfa);
    memset(&this_ptr->field_0x224,0,4000);
    _fscanf(file_handle,&DAT_005d0f24,&local_48);
    iVar4 = 0;
    if (0 < local_48) {
      do {
        _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_30,&local_34,
                   &local_2c);
        if (0xf9 < local_3c) {
          _DAT_01d71de0 = "..\\core\\setutil.cpp";
          _DAT_01d71de4 = 0x2d8;
          core_main_c_FUN_004e4330("Invalid camera number in visiblilty list!");
        }
        (&this_ptr->field_0x128)[local_3c] = 1;
        *(uint *)(&this_ptr->field_0x224 + local_3c * 0x10) = local_38;
        *(uint *)(&this_ptr->field_0x228 + local_3c * 0x10) = local_30;
        *(uint *)(&this_ptr->field_0x22c + local_3c * 0x10) = local_34;
        *(uint *)(&this_ptr->field_0x230 + local_3c * 0x10) = local_2c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_48);
    }
  }
  *(float *)&this_ptr->field_0x11d8 =
       *(float *)&this_ptr->field_0x11d4 * *(float *)&this_ptr->field_0x11d4;
  *(float *)&this_ptr->field_0x11dc = 1.0 / *(float *)&this_ptr->field_0x11d4;
  return;
}
