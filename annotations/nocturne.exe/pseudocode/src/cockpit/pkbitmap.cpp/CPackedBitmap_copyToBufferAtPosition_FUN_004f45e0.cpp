// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0
// Address: 004f45e0
// Address Range: [[004f45e0, 004f4626]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0(void)

{
  int iVar1;
  CPackedBitmap *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (in_stack_00000008 == 0) {
    return;
  }
  iVar1 = in_stack_00000010 * in_stack_00000014 >> 0x1f;
  cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_004f44d0
            (in_stack_00000004,
             (uchar *)(((int)((in_stack_00000010 * in_stack_00000014 + iVar1 * -8) -
                             (uint)(iVar1 << 2 < 0)) >> 3) +
                      in_stack_00000008 + in_stack_0000000c * in_stack_00000018),in_stack_0000000c,
             in_stack_00000010);
  return;
}
