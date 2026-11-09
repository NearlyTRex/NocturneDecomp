// Name: cockpit_pkbitmap.cpp_FUN_0051668e
// Address: 0051668e
// Address Range: [[0051668e, 0051674f]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0051668e(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0051668e(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int width;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  if ((((*(int *)&param_1->field_0x20 != 0) && (*(int *)&param_1->field_0x14 != 0)) &&
      (param_2 <= param_6)) && (param_3 <= param_7)) {
    iVar2 = *(int *)&param_1->field_0x18 + param_2 + -1;
    iVar1 = *(int *)&param_1->field_0x1c + param_3 + -1;
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
      width = *(int *)&param_1->field_0x18 + -1;
      if (param_6 < iVar2) {
        width = width - (iVar2 - param_6);
      }
      iVar2 = *(int *)&param_1->field_0x1c + -1;
      if (param_7 < iVar1) {
        iVar2 = iVar2 - (iVar1 - param_7);
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590
                (param_1,param_2,param_3,iStack_18,iStack_14,width,iVar2);
    }
  }
  return;
}
