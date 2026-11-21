// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00510a90
// Address: 00510a90
// Address Range: [[00510a90, 00510c61]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00510a90(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00510a90(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

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
  
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_004659c0
                         ("art",this_ptr->filename,"rb");
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(acStack_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW");
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 266;
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_e4);
  }
  size = this_ptr->width * this_ptr->height;
  puStack_18 = (uchar *)malloc(size);
  if (puStack_18 == (uchar *)0x0) {
    _sprintf(acStack_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentLineNumber = 279;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_148);
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
          g_CurrentLineNumber = 298;
          g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0050f9e0
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
  debugFree(puStack_18);
  _fclose(p_Stack_14);
  if (apply_palette_flag == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(this_ptr);
  return;
}
