// Name: cockpit_pkbmpset.cpp_FUN_004f5740
// Address: 004f5740
// Address Range: [[004f5740, 004f5911]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_004f5740(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_004f5740(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_148 [100];
  byte local_e4 [100];
  byte local_80 [100];
  int *local_1c;
  int local_18;
  int local_14;
  
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1 + 2,"rb");
  if (local_14 == 0) {
    _sprintf(local_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",param_1 + 2);
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    INT_01cc4804 = 0x107;
    core_main_c_FUN_004c8440(local_e4);
  }
  iVar3 = param_1[7] * param_1[8];
  local_18 = malloc(iVar3);
  if (local_18 == 0) {
    _sprintf(local_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",iVar3);
    INT_01cc4804 = 0x114;
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004c8440(local_148);
  }
  iVar2 = 0;
  if (0 < *param_1) {
    local_1c = param_1 + 2;
    iVar4 = 0;
    do {
      if ((param_3 < 0) || (iVar2 == param_3)) {
        iVar1 = _fread(local_18,iVar3,1,local_14);
        if (iVar1 != 1) {
          _sprintf(local_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",local_1c);
          INT_01cc4804 = 0x127;
          PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_FUN_004c8440(local_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
                  (param_1[1] + iVar4,local_18,param_1[7]);
      }
      else {
        _fseek(local_14,iVar3,1);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x24;
    } while (iVar2 < *param_1);
  }
  FUN_005638d0(local_18);
  _fclose(local_14);
  if (param_2 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_FUN_004f5c60(param_1);
  return;
}
