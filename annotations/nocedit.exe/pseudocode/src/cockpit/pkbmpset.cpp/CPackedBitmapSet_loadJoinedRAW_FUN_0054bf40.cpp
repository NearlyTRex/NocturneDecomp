// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
// Address: 0054bf40
// Address Range: [[0054bf40, 0054c1d1]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40(CPackedBitmapSet * this_ptr, char * filename, int bitmap_width, int bitmap_height, int total_bitmaps, int unknown_param)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
          (CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,
          int total_bitmaps,int unknown_param)

{
  int iVar1;
  int iVar2;
  uchar *bitmap_data;
  SIZE_T SVar3;
  char local_1a8 [100];
  char local_144 [100];
  char local_e0 [100];
  char local_7c [100];
  FILE *local_18;
  SIZE_T local_14;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("art",filename);
  local_18 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (local_18 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_1a8,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",filename);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xba;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1a8);
  }
  local_14 = bitmap_width * bitmap_height;
  iVar2 = iVar1 / (int)local_14;
  if (local_14 * iVar2 - iVar1 != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_144,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",filename,iVar1,bitmap_width,
               bitmap_height);
    g_CurrentLineNumber = 199;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_144);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,iVar2);
  SVar3 = local_14;
  this_ptr->base_path = bitmap_height;
  this_ptr->extension = bitmap_width;
  bitmap_data = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                          (local_14,"..\\cockpit\\pkbmpset.cpp",0xd3);
  if (bitmap_data == (uchar *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_e0,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",SVar3);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xd8;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_e0);
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      SVar3 = crt_stdio_c_fread_FUN_005fd990(bitmap_data,local_14,1,local_18);
      if (SVar3 != 1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_7c,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",filename);
        g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
        g_CurrentLineNumber = 0xe2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(local_7c);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),bitmap_data,
                 this_ptr->extension,this_ptr->base_path,total_bitmaps,(uchar)bitmap_width);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(bitmap_data,"..\\cockpit\\pkbmpset.cpp",0xec);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\cockpit\\pkbmpset.cpp",0xed);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,filename);
  if (unknown_param == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}
