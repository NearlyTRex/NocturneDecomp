// Name: cockpit_pkbmpset.cpp_FUN_0051080e
// Address: 0051080e
// Address Range: [[0051080e, 00510a83]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_0051080e(CPackedBitmapSet *param_1,char *param_2,int param_3,char *param_4,int param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_0051080e(CPackedBitmapSet *param_1,char *param_2,int param_3,char *param_4,int param_5,uint param_6,int param_7,uint param_8,uint param_9,int param_10)

{
  int iVar1;
  int iVar2;
  uchar *bitmap_data;
  int iVar3;
  ulong unaff_EDI;
  char acStack_144 [108];
  char acStack_d8 [100];
  char acStack_74 [92];
  _FILE *p_Stack_18;
  int iStack_14;
  
  cockpit_pkbitmap_cpp_FUN_00510670(param_1);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cbfe0,param_2);
  p_Stack_18 = engine_dosio_cpp_FUN_004659c0((char *)0x5cbfe7,param_2,(char *)0x5cbfe4);
  if (p_Stack_18 == (_FILE *)0x0) {
    _sprintf(&stack0xfffffe58,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d71de4 = 0xbc;
    core_main_c_FUN_004e4330(&stack0xfffffe58);
  }
  iStack_14 = param_3 * (int)param_4;
  iVar2 = iVar1 / iStack_14;
  if (iStack_14 * iVar2 - iVar1 != 0) {
    _sprintf(acStack_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de4 = 0xc9;
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4330(acStack_144);
  }
  cockpit_pkbmpset_cpp_FUN_005106a0(param_1,iVar2);
  param_1->height = (int)param_4;
  param_1->width = param_5;
  bitmap_data = (uchar *)malloc(unaff_EDI);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_d8,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d71de4 = 0xda;
    core_main_c_FUN_004e4330();
  }
  iVar1 = 0;
  if (0 < param_1->bitmap_count) {
    iVar2 = 0;
    do {
      iVar3 = _fread(bitmap_data,unaff_EDI);
      if (iVar3 != 1) {
        _sprintf(acStack_74,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d71de4 = 0xe4;
        core_main_c_FUN_004e4330();
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90
                ((CPackedBitmap *)(param_1->bitmap_array->filename + iVar2),bitmap_data,
                 param_1->width,param_1->height,param_7,param_5);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < param_1->bitmap_count);
  }
  FUN_005a3770();
  _fclose();
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00510f90(param_1,param_4);
  if (param_10 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(param_1);
  return;
}
