// Name: FUN_004f54c0
// Address: 004f54c0
// Address Range: [[004f54c0, 004f5733]]
// Convention: unknown
// Signature: void FUN_004f54c0(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f54c0(int *param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_1a8 [100];
  byte local_144 [100];
  byte local_e0 [100];
  byte local_7c [100];
  int local_18;
  int local_14;
  
  FUN_004f5320(param_1);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",param_2);
  local_18 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rb");
  if (local_18 == 0) {
    _sprintf(local_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",param_2);
    _DAT_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01cc4804 = 0xb9;
    FUN_004c8440(local_1a8);
  }
  local_14 = param_3 * param_4;
  iVar2 = iVar1 / local_14;
  if (local_14 * iVar2 - iVar1 != 0) {
    _sprintf(local_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",param_2,iVar1,param_3,param_4);
    _DAT_01cc4804 = 0xc6;
    _DAT_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    FUN_004c8440(local_144);
  }
  FUN_004f5350(param_1,iVar2);
  iVar1 = local_14;
  param_1[8] = param_4;
  param_1[7] = param_3;
  iVar2 = malloc(local_14);
  if (iVar2 == 0) {
    _sprintf(local_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",iVar1);
    _DAT_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01cc4804 = 0xd7;
    FUN_004c8440(local_e0);
  }
  iVar1 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      iVar3 = _fread(iVar2,local_14,1,local_18);
      if (iVar3 != 1) {
        _sprintf(local_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",param_2);
        _DAT_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01cc4804 = 0xe1;
        FUN_004c8440(local_7c);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
                (param_1[1] + iVar4,iVar2,param_1[7],param_1[8],param_5,param_3);
      iVar4 = iVar4 + 0x24;
    } while (iVar1 < *param_1);
  }
  FUN_005638d0(iVar2);
  _fclose(local_18);
  FUN_004f5c40(param_1,param_2);
  if (param_6 == 0) {
    return;
  }
  FUN_004f5c60(param_1);
  return;
}
