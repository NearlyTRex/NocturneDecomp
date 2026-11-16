// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_00510810
// Address: 00510810
// Address Range: [[00510810, 00510a83]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_00510810(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_00510810(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)

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
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00510670(this_ptr);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cbfe0,(char *)bitmap_width);
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_004659c0
                         ((char *)0x5cbfe7,(char *)bitmap_width,(char *)0x5cbfe4);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(&stack0xfffffe5c,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d71de4 = 0xbc;
    core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xfffffe5c);
  }
  iVar2 = iVar1 / (bitmap_height * bitmap_height);
  if (bitmap_height * bitmap_height * iVar2 - iVar1 != 0) {
    _sprintf(acStack_140,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de4 = 0xc9;
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_140);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005106a0(this_ptr,iVar2);
  this_ptr->height = bitmap_height;
  this_ptr->width = apply_palette_flag;
  bitmap_data = (uchar *)malloc(unaff_ESI);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_d4,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d71de4 = 0xda;
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_d4);
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      SVar3 = _fread(bitmap_data,unaff_ESI,1,unaff_EDI);
      if (SVar3 != 1) {
        _sprintf(acStack_70,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d71de4 = 0xe4;
        core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_70);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),bitmap_data,
                 this_ptr->width,this_ptr->height,in_stack_00000020,apply_palette_flag);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  debugFree(bitmap_data);
  _fclose(unaff_EDI);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00510f90
            (this_ptr,(char *)transparency_color);
  if (in_stack_0000002c == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(this_ptr);
  return;
}
