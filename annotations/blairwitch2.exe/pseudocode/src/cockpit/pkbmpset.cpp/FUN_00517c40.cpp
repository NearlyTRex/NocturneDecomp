// Name: cockpit_pkbmpset.cpp_FUN_00517c40
// Address: 00517c40
// Address Range: [[00517c40, 00517ce0]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00517c40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbmpset_cpp_FUN_00517c40(void)

{
  int iVar1;
  CPackedBitmapSet *in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000018;
  int in_stack_00000024;
  char acStack_64 [84];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(in_stack_00000004);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_005175b0(in_stack_00000004);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670
            (in_stack_00000004,(in_stack_00000010 - in_stack_0000000c) + 1);
  if (in_stack_0000000c <= in_stack_00000010) {
    iVar1 = 0;
    do {
      _sprintf(acStack_64,in_stack_00000018);
      in_stack_0000000c = in_stack_0000000c + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00517130
                ((CPackedBitmap *)(in_stack_00000004->bitmap_array->filename + iVar1),acStack_64,
                 in_stack_00000024);
      iVar1 = iVar1 + 0x24;
    } while (in_stack_0000000c <= in_stack_00000010);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_005175e0(in_stack_00000004);
  return;
}
