// Name: cockpit_ckptutil.c_FUN_004338f0
// Address: 004338f0
// Address Range: [[004338f0, 004339b6]]
// Convention: unknown
// Signature: undefined cockpit_ckptutil.c_FUN_004338f0()

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_004338f0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  CPackedBitmap *pCVar6;
  int unaff_ESI;
  int iVar7;
  CPackedBitmap *in_stack_00000004;
  CPackedBitmap *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000018;
  int in_stack_0000001c;
  int local_c;
  
  if ((in_stack_00000004->width != 0) &&
     (iVar7 = 0, pCVar6 = in_stack_00000008, 0 < in_stack_0000000c)) {
    do {
      sVar1 = *(short *)pCVar6->filename;
      sVar2 = *(short *)(pCVar6->filename + 2);
      sVar3 = *(short *)(pCVar6->filename + 6);
      iVar4 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (in_stack_00000004,(int)sVar1,(int)sVar2);
      iVar5 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (in_stack_00000008,(int)((short)(sVar3 * 2) >> 1),local_c);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (sVar1 + in_stack_00000018,sVar2 + in_stack_0000001c,local_c + in_stack_00000018,
                 iVar4 + in_stack_0000001c,unaff_ESI,(uchar)iVar5,
                 (uint)(*(ushort *)(pCVar6->filename + 6) >> 0xf));
      iVar7 = iVar7 + 1;
      pCVar6 = (CPackedBitmap *)(pCVar6->filename + 8);
    } while (iVar7 < in_stack_00000018);
  }
  return;
}
