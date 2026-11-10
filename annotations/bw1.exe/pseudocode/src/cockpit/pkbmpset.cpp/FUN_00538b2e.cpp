// Name: cockpit_pkbmpset.cpp_FUN_00538b2e
// Address: 00538b2e
// Address Range: [[00538b2e, 00538da3]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00538b2e(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_00538b2e(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uchar *bitmap_data;
  int iVar3;
  char acStack_1a8 [4];
  char acStack_144 [100];
  char acStack_e0 [100];
  char acStack_7c [100];
  _FILE *p_Stack_18;
  ulong uStack_14;
  
  unkafter_pkbitmap_cpp_FUN_00538990(param_1);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00478fb0("art",param_2);
  p_Stack_18 = engine_dosio_cpp_FUN_00479180("art",param_2,"rb");
  if (p_Stack_18 == (_FILE *)0x0) {
    _sprintf(acStack_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d1d404 = 0xbc;
    core_main_c_FUN_005030e0(acStack_1a8);
  }
  uStack_14 = param_3 * param_4;
  iVar2 = iVar1 / (int)uStack_14;
  if (uStack_14 * iVar2 - iVar1 != 0) {
    _sprintf(acStack_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d404 = 0xc9;
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_005030e0(acStack_144);
  }
  cockpit_pkbmpset_cpp_FUN_005389c0(param_1,iVar2);
  param_1->height = param_4;
  param_1->width = param_3;
  bitmap_data = FUN_005c08d0(uStack_14);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d1d404 = 0xda;
    core_main_c_FUN_005030e0(acStack_e0);
  }
  iVar1 = 0;
  if (0 < param_1->bitmap_count) {
    iVar2 = 0;
    do {
      iVar3 = _fread(bitmap_data,uStack_14,1,p_Stack_18);
      if (iVar3 != 1) {
        _sprintf(acStack_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d1d404 = 0xe4;
        core_main_c_FUN_005030e0(acStack_7c);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00537db0
                ((CPackedBitmap *)(param_1->bitmap_array->filename + iVar2),bitmap_data,
                 param_1->width,param_1->height,param_5,param_3);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < param_1->bitmap_count);
  }
  FUN_005c09f0(bitmap_data);
  _fclose(p_Stack_18);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(param_1,param_2);
  if (param_8 == 0) {
    return;
  }
  acStack_1a8[0] = -0x6a;
  acStack_1a8[1] = -0x73;
  acStack_1a8[2] = 'S';
  acStack_1a8[3] = '\0';
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(param_1);
  return;
}
