// Name: cockpit_ckptutil.c_applyColorPalette_FUN_0042d200
// Address: 0042d200
// Address Range: [[0042d200, 0042d23e]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_applyColorPalette_FUN_0042d200(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_applyColorPalette_FUN_0042d200(void)

{
  char *in_stack_00000004;
  void *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (in_stack_00000008 == (void *)0x0) {
    return;
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}
