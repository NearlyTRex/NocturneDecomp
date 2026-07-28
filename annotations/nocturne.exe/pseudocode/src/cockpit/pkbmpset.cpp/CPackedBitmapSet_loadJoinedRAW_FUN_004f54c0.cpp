// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0
// Address: 004f54c0
// Address Range: [[004f54c0, 004f5733]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  void *buffer;
  SIZE_T SVar4;
  byte local_1a8 [100];
  byte local_144 [100];
  byte local_e0 [100];
  byte local_7c [100];
  _FILE *local_18;
  ulong local_14;
  
  cockpit_pkbitmap_cpp_FUN_004f5320(param_1);
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",param_2);
  local_18 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rb");
  if (local_18 == (_FILE *)0x0) {
    _sprintf(local_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",param_2);
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    INT_01cc4804 = 0xb9;
    core_main_c_FUN_004c8440(local_1a8);
  }
  local_14 = param_3 * param_4;
  iVar3 = iVar2 / (int)local_14;
  if (local_14 * iVar3 - iVar2 != 0) {
    _sprintf(local_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",param_2,iVar2,param_3,param_4);
    INT_01cc4804 = 0xc6;
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004c8440(local_144);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(param_1,iVar3);
  uVar1 = local_14;
  param_1->height = param_4;
  param_1->width = param_3;
  buffer = malloc(local_14);
  if (buffer == (void *)0x0) {
    _sprintf(local_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",uVar1);
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    INT_01cc4804 = 0xd7;
    core_main_c_FUN_004c8440(local_e0);
  }
  iVar2 = 0;
  if (0 < param_1->bitmap_count) {
    iVar3 = 0;
    do {
      SVar4 = _fread(buffer,local_14,1,local_18);
      if (SVar4 != 1) {
        _sprintf(local_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",param_2);
        PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
        INT_01cc4804 = 0xe1;
        core_main_c_FUN_004c8440(local_7c);
      }
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
                (param_1->bitmap_array->filename + iVar3,buffer,param_1->width,param_1->height,
                 param_5,param_3);
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < param_1->bitmap_count);
  }
  FUN_005638d0(buffer);
  _fclose(local_18);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(param_1,param_2);
  if (param_6 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(param_1);
  return;
}
