// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0
// Address: 004f54c0
// Address Range: [[004f54c0, 004f5733]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uchar *bitmap_data;
  SIZE_T SVar4;
  char local_1a8 [100];
  char local_144 [100];
  char local_e0 [100];
  char local_7c [100];
  _FILE *local_18;
  ulong local_14;
  
  cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5320(this_ptr);
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",filename);
  local_18 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (local_18 == (_FILE *)0x0) {
    _sprintf(local_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",filename);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 185;
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_1a8);
  }
  local_14 = bitmap_width * bitmap_height;
  iVar3 = iVar2 / (int)local_14;
  if (local_14 * iVar3 - iVar2 != 0) {
    _sprintf(local_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",filename,iVar2,bitmap_width,
               bitmap_height);
    g_CurrentLineNumber = 198;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_144);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(this_ptr,iVar3);
  uVar1 = local_14;
  this_ptr->height = bitmap_height;
  this_ptr->width = bitmap_width;
  bitmap_data = (uchar *)malloc(local_14);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(local_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",uVar1);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 215;
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_e0);
  }
  iVar2 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar3 = 0;
    do {
      SVar4 = _fread(bitmap_data,local_14,1,local_18);
      if (SVar4 != 1) {
        _sprintf(local_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",filename);
        g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
        g_CurrentLineNumber = 225;
        core_main_c_displayErrorAndQuit_FUN_004c8440(local_7c);
      }
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),bitmap_data,
                 this_ptr->width,this_ptr->height,transparency_color,bitmap_width);
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  free(bitmap_data);
  _fclose(local_18);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(this_ptr,filename);
  if (apply_palette_flag == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(this_ptr);
  return;
}
