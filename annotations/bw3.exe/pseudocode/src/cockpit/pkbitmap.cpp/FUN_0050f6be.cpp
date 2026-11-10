// Name: cockpit_pkbitmap.cpp_FUN_0050f6be
// Address: 0050f6be
// Address Range: [[0050f6be, 0050f77f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0050f6be(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0050f6be(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int width;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  if ((((param_1->row_offsets != (int *)0x0) && (param_1->packed_data != (ushort *)0x0)) &&
      (param_2 <= param_6)) && (param_3 <= param_7)) {
    iVar2 = param_1->width + param_2 + -1;
    iVar1 = param_1->height + param_3 + -1;
    if ((param_4 <= iVar2) && (param_5 <= iVar1)) {
      iStack_18 = 0;
      if (param_2 < param_4) {
        iStack_18 = param_4 - param_2;
        param_2 = param_4;
      }
      iStack_14 = 0;
      if (param_3 < param_5) {
        iStack_14 = param_5 - param_3;
        param_3 = param_5;
      }
      width = param_1->width + -1;
      if (param_6 < iVar2) {
        width = width - (iVar2 - param_6);
      }
      iVar2 = param_1->height + -1;
      if (param_7 < iVar1) {
        iVar2 = iVar2 - (iVar1 - param_7);
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0
                (param_1,param_2,param_3,iStack_18,iStack_14,width,iVar2);
    }
  }
  return;
}
