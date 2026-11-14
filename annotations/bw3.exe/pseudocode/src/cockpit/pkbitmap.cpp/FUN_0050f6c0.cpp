// Name: cockpit_pkbitmap.cpp_FUN_0050f6c0
// Address: 0050f6c0
// Address Range: [[0050f6c0, 0050f77f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0050f6c0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbitmap_cpp_FUN_0050f6c0(void)

{
  int iVar1;
  int width;
  int iVar2;
  CPackedBitmap *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int iStack_18;
  int iStack_14;
  
  if ((((in_stack_00000004->row_offsets != (int *)0x0) &&
       (in_stack_00000004->packed_data != (ushort *)0x0)) &&
      (in_stack_00000008 <= in_stack_00000018)) && (in_stack_0000000c <= in_stack_0000001c)) {
    iVar2 = in_stack_00000004->width + in_stack_00000008 + -1;
    iVar1 = in_stack_00000004->height + in_stack_0000000c + -1;
    if ((in_stack_00000010 <= iVar2) && (in_stack_00000014 <= iVar1)) {
      iStack_18 = 0;
      if (in_stack_00000008 < in_stack_00000010) {
        iStack_18 = in_stack_00000010 - in_stack_00000008;
        in_stack_00000008 = in_stack_00000010;
      }
      iStack_14 = 0;
      if (in_stack_0000000c < in_stack_00000014) {
        iStack_14 = in_stack_00000014 - in_stack_0000000c;
        in_stack_0000000c = in_stack_00000014;
      }
      width = in_stack_00000004->width + -1;
      if (in_stack_00000018 < iVar2) {
        width = width - (iVar2 - in_stack_00000018);
      }
      iVar2 = in_stack_00000004->height + -1;
      if (in_stack_0000001c < iVar1) {
        iVar2 = iVar2 - (iVar1 - in_stack_0000001c);
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0
                (in_stack_00000004,in_stack_00000008,in_stack_0000000c,iStack_18,iStack_14,width,
                 iVar2);
    }
  }
  return;
}
