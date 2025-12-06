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
  FILE *pFVar2;
  int iVar3;
  uchar *bitmap_data;
  SIZE_T SVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  uchar in_stack_0000002c;
  char *in_stack_00000034;
  int in_stack_00000048;
  char acStack_134 [4];
  char acStack_130 [108];
  char acStack_c4 [4];
  char acStack_c0 [92];
  char acStack_64 [4];
  char acStack_60 [80];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("art",(char *)bitmap_width);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("art",(char *)bitmap_height,"rb");
  if (pFVar2 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffe64,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW",total_bitmaps);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xba;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe68);
  }
  iVar3 = iVar1 / (in_stack_00000020 * bitmap_height);
  if (in_stack_00000020 * bitmap_height * iVar3 - iVar1 != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_130,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW",in_stack_0000001c,iVar1);
    g_CurrentLineNumber = 199;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_134);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,iVar3);
  this_ptr->base_path = bitmap_height;
  this_ptr->extension = in_stack_00000024;
  bitmap_data = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                   ((int)this_ptr,"..\\cockpit\\pkbmpset.cpp",0xd3);
  if (bitmap_data == (uchar *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0xd8;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_c0);
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar3 = 0;
    do {
      SVar4 = crt_stdio_c_fread_FUN_005fd990(bitmap_data,bitmap_height,1,(FILE *)bitmap_width);
      if (SVar4 != 1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_64,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
        g_CurrentLineNumber = 0xe2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_60);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),bitmap_data,
                 this_ptr->extension,this_ptr->base_path,(int)in_stack_00000034,in_stack_0000002c);
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(bitmap_data,"..\\cockpit\\pkbmpset.cpp",0xec);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            ((FILE *)bitmap_height,"..\\cockpit\\pkbmpset.cpp",0xed);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,in_stack_00000034);
  if (in_stack_00000048 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}
