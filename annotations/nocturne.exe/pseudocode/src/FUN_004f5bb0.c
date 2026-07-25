// Name: FUN_004f5bb0
// Address: 004f5bb0
// Address Range: [[004f5bb0, 004f5bee]]
// Convention: unknown
// Signature: void FUN_004f5bb0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004f5bb0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  if ((char)in_stack_00000004[2] != '\0') {
    FUN_004f5c60();
    return;
  }
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(in_stack_00000004[1] + iVar2);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}
