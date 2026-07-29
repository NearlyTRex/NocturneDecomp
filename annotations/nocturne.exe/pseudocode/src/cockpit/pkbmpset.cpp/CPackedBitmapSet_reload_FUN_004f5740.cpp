// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740
// Address: 004f5740
// Address Range: [[004f5740, 004f5911]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_004f5740(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_004f5740(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  SIZE_T SVar1;
  int iVar2;
  ulong size;
  int iVar3;
  byte local_148 [100];
  byte local_e4 [100];
  byte local_80 [100];
  char *local_1c;
  uchar *local_18;
  _FILE *local_14;
  
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",this_ptr->filename,"rb");
  if (local_14 == (_FILE *)0x0) {
    _sprintf(local_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",this_ptr->filename);
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    INT_01cc4804 = 0x107;
    core_main_c_FUN_004c8440(local_e4);
  }
  size = this_ptr->width * this_ptr->height;
  local_18 = (uchar *)malloc(size);
  if (local_18 == (uchar *)0x0) {
    _sprintf(local_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",size);
    INT_01cc4804 = 0x114;
    PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004c8440(local_148);
  }
  iVar2 = 0;
  if (0 < this_ptr->bitmap_count) {
    local_1c = this_ptr->filename;
    iVar3 = 0;
    do {
      if ((bitmap_index < 0) || (iVar2 == bitmap_index)) {
        SVar1 = _fread(local_18,size,1,local_14);
        if (SVar1 != 1) {
          _sprintf(local_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",local_1c);
          INT_01cc4804 = 0x127;
          PTR_01cc4800 = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_FUN_004c8440(local_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),local_18,
                   this_ptr->width);
      }
      else {
        _fseek(local_14,size,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  FUN_005638d0(local_18);
  _fclose(local_14);
  if (apply_palette_flag == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(this_ptr);
  return;
}
