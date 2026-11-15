// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00517a60
// Address: 00517a60
// Address Range: [[00517a60, 00517c31]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00517a60(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00517a60(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

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
  
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_00460c70
                         ((char *)0x5e20a0,this_ptr->filename,(char *)0x5e209d);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(acStack_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW");
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0x108;
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_e4);
  }
  size = this_ptr->width * this_ptr->height;
  puStack_18 = (uchar *)malloc(size);
  if (puStack_18 == (uchar *)0x0) {
    _sprintf(acStack_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d046a4 = 0x115;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_148);
  }
  iVar2 = 0;
  if (0 < this_ptr->bitmap_count) {
    pcStack_1c = this_ptr->filename;
    iVar3 = 0;
    do {
      if ((bitmap_index < 0) || (iVar2 == bitmap_index)) {
        SVar1 = _fread(puStack_18,size,1,p_Stack_14);
        if (SVar1 != 1) {
          _sprintf(acStack_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
          _DAT_01d046a4 = 0x128;
          _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),puStack_18,
                   this_ptr->width);
      }
      else {
        _fseek(p_Stack_14,size,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  FUN_005b86a0(puStack_18);
  _fclose(p_Stack_14);
  if (apply_palette_flag == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(this_ptr);
  return;
}
