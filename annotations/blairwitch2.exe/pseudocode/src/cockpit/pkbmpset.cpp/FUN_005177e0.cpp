// Name: cockpit_pkbmpset.cpp_FUN_005177e0
// Address: 005177e0
// Address Range: [[005177e0, 00517a53]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_005177e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbmpset_cpp_FUN_005177e0(void)

{
  int iVar1;
  ulong size;
  uchar *bitmap_data;
  SIZE_T SVar2;
  int iVar3;
  CPackedBitmapSet *in_stack_00000004;
  char *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_00000024;
  char acStack_1a4 [4];
  char acStack_140 [100];
  char acStack_dc [100];
  char acStack_78 [100];
  _FILE *p_Stack_14;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(in_stack_00000004);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e1f1d,in_stack_0000000c);
  p_Stack_14 = engine_dosio_cpp_FUN_00460c70((char *)0x5e1f24,in_stack_0000000c,(char *)0x5e1f21);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(acStack_1a4,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0xba;
    core_main_c_FUN_004e4500(acStack_1a4);
  }
  size = in_stack_00000010 * in_stack_00000010;
  if (size * (iVar1 / (int)size) - iVar1 != 0) {
    _sprintf(acStack_140,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d046a4 = 199;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4500(acStack_140);
  }
  cockpit_pkbmpset_cpp_FUN_00517670();
  in_stack_00000004->height = in_stack_00000010;
  in_stack_00000004->width = in_stack_00000010;
  bitmap_data = (uchar *)malloc(size);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_dc,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0xd8;
    core_main_c_FUN_004e4500(acStack_dc);
  }
  iVar1 = 0;
  if (0 < in_stack_00000004->bitmap_count) {
    iVar3 = 0;
    do {
      SVar2 = _fread(bitmap_data,size,1,p_Stack_14);
      if (SVar2 != 1) {
        _sprintf(acStack_78,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d046a4 = 0xe2;
        core_main_c_FUN_004e4500(acStack_78);
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60
                ((CPackedBitmap *)(in_stack_00000004->bitmap_array->filename + iVar3),bitmap_data,
                 in_stack_00000004->width,in_stack_00000004->height,in_stack_00000018,
                 in_stack_00000010);
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < in_stack_00000004->bitmap_count);
  }
  FUN_005b86a0(bitmap_data);
  _fclose(p_Stack_14);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60
            (in_stack_00000004,in_stack_0000000c);
  if (in_stack_00000024 == 0) {
    return;
  }
  builtin_strncpy(acStack_1a4,"FzQ",4);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(in_stack_00000004);
  return;
}
