// Name: cockpit_ckptutil.c_drawLineListFromBitmap_FUN_0042f260
// Address: 0042f260
// Address Range: [[0042f260, 0042f326]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_drawLineListFromBitmap_FUN_0042f260(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_drawLineListFromBitmap_FUN_0042f260(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uchar blend_color;
  int iVar4;
  int base_color;
  int iVar5;
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((*(int *)(in_stack_00000004 + 0x18) != 0) && (iVar5 = 0, 0 < in_stack_0000000c)) {
    do {
      sVar1 = *in_stack_00000008;
      sVar2 = in_stack_00000008[1];
      sVar3 = in_stack_00000008[2];
      iVar4 = (int)((short)(in_stack_00000008[3] * 2) >> 1);
      base_color = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0
                             (in_stack_00000004,(int)sVar1,(int)sVar2);
      blend_color = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0
                              (in_stack_00000004,(int)sVar3,iVar4);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042f330
                (sVar1 + in_stack_00000010,sVar2 + in_stack_00000014,sVar3 + in_stack_00000010,
                 iVar4 + in_stack_00000014,base_color,blend_color,
                 (uint)((ushort)in_stack_00000008[3] >> 0xf));
      iVar5 = iVar5 + 1;
      in_stack_00000008 = in_stack_00000008 + 4;
    } while (iVar5 < in_stack_0000000c);
  }
  return;
}
