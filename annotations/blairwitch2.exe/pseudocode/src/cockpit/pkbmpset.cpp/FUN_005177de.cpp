// Name: cockpit_pkbmpset.cpp_FUN_005177de
// Address: 005177de
// Address Range: [[005177de, 00517a53]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_005177de(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_005177de(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,int param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uchar *bitmap_data;
  int iVar4;
  uint uStack_1a8;
  byte auStack_144 [100];
  byte auStack_e0 [100];
  byte auStack_7c [100];
  _FILE *p_Stack_18;
  ulong uStack_14;
  
  unkafter_pkbitmap_cpp_FUN_00517640(param_1);
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e1f1d,param_2);
  p_Stack_18 = engine_dosio_cpp_FUN_00460c70((char *)0x5e1f24,param_2,(char *)0x5e1f21);
  if (p_Stack_18 == (_FILE *)0x0) {
    FUN_005b7790(&uStack_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",param_2);
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0xba;
    core_main_c_FUN_004e4500(&uStack_1a8);
  }
  uStack_14 = param_3 * param_4;
  iVar3 = iVar2 / (int)uStack_14;
  if (uStack_14 * iVar3 - iVar2 != 0) {
    FUN_005b7790
              (auStack_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",param_2,iVar2,param_3,param_4);
    _DAT_01d046a4 = 199;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4500(auStack_144);
  }
  cockpit_pkbmpset_cpp_FUN_00517670(param_1,iVar3);
  uVar1 = uStack_14;
  *(int *)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x1c) = param_3;
  bitmap_data = FUN_005b8580(uStack_14);
  if (bitmap_data == (uchar *)0x0) {
    FUN_005b7790(auStack_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",uVar1);
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0xd8;
    core_main_c_FUN_004e4500(auStack_e0);
  }
  iVar2 = 0;
  if (0 < *(int *)param_1) {
    iVar3 = 0;
    do {
      iVar4 = _fread(bitmap_data,uStack_14,1,p_Stack_18);
      if (iVar4 != 1) {
        FUN_005b7790(auStack_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",param_2);
        _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d046a4 = 0xe2;
        core_main_c_FUN_004e4500(auStack_7c);
      }
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60
                ((CPackedBitmap *)(*(int *)(param_1 + 4) + iVar3),bitmap_data,
                 *(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),param_5,param_3);
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)param_1);
  }
  FUN_005b86a0(bitmap_data);
  _fclose(p_Stack_18);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(param_1,param_2);
  if (param_8 == 0) {
    return;
  }
  uStack_1a8 = 0x517a46;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(param_1);
  return;
}
