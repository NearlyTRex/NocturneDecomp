// Name: cockpit_pkbmpset.cpp_FUN_00538b30
// Address: 00538b30
// Address Range: [[00538b30, 00538da3]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00538b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbmpset_cpp_FUN_00538b30(void)

{
  int iVar1;
  int iVar2;
  uchar *bitmap_data;
  SIZE_T SVar3;
  ulong unaff_ESI;
  _FILE *unaff_EDI;
  CPackedBitmapSet *in_stack_00000004;
  char *in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_0000002c;
  char acStack_140 [108];
  char acStack_d4 [100];
  char acStack_70 [92];
  _FILE *p_Stack_14;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(in_stack_00000004);
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00478fb0("art",in_stack_0000000c);
  p_Stack_14 = engine_dosio_cpp_FUN_00479180("art",in_stack_0000000c,"rb");
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(&stack0xfffffe5c,"Unable to open %s in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d1d404 = 0xbc;
    core_main_c_FUN_005030e0(&stack0xfffffe5c);
  }
  iVar2 = iVar1 / (in_stack_00000010 * in_stack_00000010);
  if (in_stack_00000010 * in_stack_00000010 * iVar2 - iVar1 != 0) {
    _sprintf(acStack_140,"Size of %s is %lu, must be a multiple of frame size %ux%u in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d404 = 0xc9;
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_005030e0(acStack_140);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005389c0(in_stack_00000004,iVar2);
  in_stack_00000004->height = in_stack_00000010;
  in_stack_00000004->width = in_stack_00000018;
  bitmap_data = (uchar *)malloc(unaff_ESI);
  if (bitmap_data == (uchar *)0x0) {
    _sprintf(acStack_d4,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW");
    _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d1d404 = 0xda;
    core_main_c_FUN_005030e0();
  }
  iVar1 = 0;
  if (0 < in_stack_00000004->bitmap_count) {
    iVar2 = 0;
    do {
      SVar3 = _fread(bitmap_data,unaff_ESI,1,unaff_EDI);
      if (SVar3 != 1) {
        _sprintf(acStack_70,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW");
        _DAT_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
        _DAT_01d1d404 = 0xe4;
        core_main_c_FUN_005030e0();
      }
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00537db0
                ((CPackedBitmap *)(in_stack_00000004->bitmap_array->filename + iVar2),bitmap_data,
                 in_stack_00000004->width,in_stack_00000004->height,in_stack_00000020,
                 in_stack_00000018);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < in_stack_00000004->bitmap_count);
  }
  FUN_005c09f0();
  _fclose();
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0
            (in_stack_00000004,in_stack_00000014);
  if (in_stack_0000002c == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(in_stack_00000004);
  return;
}
