// Name: cockpit_ckptutil.c_FUN_0042d180
// Address: 0042d180
// Address Range: [[0042d180, 0042d1f3]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_FUN_0042d180(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * cockpit_ckptutil_c_FUN_0042d180(void)

{
  void *bitmap_buffer;
  ulong size;
  char *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  void *in_stack_00000014;
  int in_stack_00000018;
  
  size = in_stack_00000008 * in_stack_0000000c;
  if (in_stack_00000014 == (void *)0x0) {
    in_stack_00000014 = malloc(size);
    if (in_stack_00000014 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  bitmap_buffer =
       cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(in_stack_00000004,in_stack_00000014,size);
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370
            (in_stack_00000004,bitmap_buffer,size,in_stack_00000018);
  if (in_stack_00000010 != 0) {
    cockpit_ckptutil_c_FUN_00431260(bitmap_buffer);
  }
  return bitmap_buffer;
}
