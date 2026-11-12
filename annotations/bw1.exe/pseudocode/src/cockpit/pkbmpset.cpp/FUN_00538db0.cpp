// Name: cockpit_pkbmpset.cpp_FUN_00538db0
// Address: 00538db0
// Address Range: [[00538db0, 00538f81]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00538db0(CPackedBitmapSet *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_00538db0(CPackedBitmapSet *param_1,int param_2,int param_3)

{
  SIZE_T SVar1;
  int iVar2;
  ulong size;
  int iVar3;
  char acStack_148 [100];
  char acStack_e4 [100];
  char acStack_80 [100];
  char *pcStack_1c;
  uchar *puStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_FUN_00479180("art",param_1->filename,"rb");
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(acStack_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW");
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d1d404 = 0x10a;
    core_main_c_FUN_005030e0(acStack_e4);
  }
  size = param_1->width * param_1->height;
  puStack_18 = (uchar *)malloc(size);
  if (puStack_18 == (uchar *)0x0) {
    _sprintf(acStack_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d404 = 0x117;
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_005030e0(acStack_148);
  }
  iVar2 = 0;
  if (0 < param_1->bitmap_count) {
    pcStack_1c = param_1->filename;
    iVar3 = 0;
    do {
      if ((param_3 < 0) || (iVar2 == param_3)) {
        SVar1 = _fread(puStack_18,size,1,p_Stack_14);
        if (SVar1 != 1) {
          _sprintf(acStack_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
          _DAT_01d1d404 = 0x12a;
          _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_FUN_005030e0(acStack_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_00537d00
                  ((CPackedBitmap *)(param_1->bitmap_array->filename + iVar3),puStack_18,
                   param_1->width);
      }
      else {
        _fseek(p_Stack_14,size,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < param_1->bitmap_count);
  }
  FUN_005c09f0(puStack_18);
  _fclose(p_Stack_14);
  if (param_2 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(param_1);
  return;
}
