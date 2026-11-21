// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_005177e0
// Address: 005177e0
// Address Range: [[005177e0, 00517a53]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_005177e0(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_005177e0(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

{
  int iVar1;
  int iVar2;
  uchar *bitmap_data;
  SIZE_T SVar3;
  ulong unaff_ESI;
  _FILE *unaff_EDI;
  int in_stack_00000020;
  int in_stack_0000002c;
  char acStack_140 [108];
  char acStack_d4 [100];
  char acStack_70 [92];
  _FILE *p_Stack_14;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0("art",(char *)bitmap_width);
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_00460c70
                         ("art",(char *)bitmap_width,"rb");
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(&stack0xfffffe5c,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 186;
    core_main_c_displayErrorAndQuit_FUN_004e4500(&stack0xfffffe5c);
  }
  iVar2 = iVar1 / (bitmap_height * bitmap_height);
  if (bitmap_height * bitmap_height * iVar2 - iVar1 != 0) {
    _sprintf(acStack_140,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentLineNumber = 199;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_140);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670(this_ptr,iVar2);
  this_ptr->height = bitmap_height;
  this_ptr->width = apply_palette_flag;
  bitmap_data = (uchar *)malloc(unaff_ESI);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_d4,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 216;
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_d4);
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      SVar3 = _fread(bitmap_data,unaff_ESI,1,unaff_EDI);
      if (SVar3 != 1) {
        _sprintf(acStack_70,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
        g_CurrentLineNumber = 226;
        core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_70);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),bitmap_data,
                 this_ptr->width,this_ptr->height,in_stack_00000020,apply_palette_flag);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  debugFree(bitmap_data);
  _fclose(unaff_EDI);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60
            (this_ptr,(char *)transparency_color);
  if (in_stack_0000002c == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(this_ptr);
  return;
}
