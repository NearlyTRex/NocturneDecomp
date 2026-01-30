// Name: cockpit_ckptutil.c_FUN_004338f0
// Address: 004338f0
// Address Range: [[004338f0, 004339b6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_FUN_004338f0(void)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_FUN_004338f0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int row_index;
  int base_color;
  int iVar4;
  int iVar5;
  CPackedBitmap *in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((in_stack_00000004->width != 0) && (iVar5 = 0, 0 < in_stack_0000000c)) {
    do {
      sVar1 = *in_stack_00000008;
      sVar2 = in_stack_00000008[1];
      sVar3 = in_stack_00000008[2];
      row_index = (int)((short)(in_stack_00000008[3] * 2) >> 1);
      base_color = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                             (in_stack_00000004,(int)sVar1,(int)sVar2);
      iVar4 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (in_stack_00000004,(int)sVar3,row_index);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (sVar1 + in_stack_00000010,sVar2 + in_stack_00000014,sVar3 + in_stack_00000010,
                 row_index + in_stack_00000014,base_color,(uchar)iVar4,
                 (uint)((ushort)in_stack_00000008[3] >> 0xf));
      iVar5 = iVar5 + 1;
      in_stack_00000008 = in_stack_00000008 + 4;
    } while (iVar5 < in_stack_0000000c);
  }
  return;
}
