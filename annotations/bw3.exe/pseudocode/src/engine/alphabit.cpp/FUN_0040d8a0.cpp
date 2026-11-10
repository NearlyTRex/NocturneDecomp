// Name: engine_alphabit.cpp_FUN_0040d8a0
// Address: 0040d8a0
// Address Range: [[0040d8a0, 0040da72]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040d8a0(CAlphaBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void engine_alphabit_cpp_FUN_0040d8a0(CAlphaBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uchar *srcIndices;
  uchar *srcAlpha;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = (param_6 - param_4) + 1;
  iVar2 = (param_7 - param_5) + 1;
  if ((((param_2 < DAT_005fba18) && (param_3 < DAT_005fba1c)) &&
      (iVar1 = param_2 + local_1c, -1 < iVar1)) && (-1 < param_3 + iVar2)) {
    if (param_2 < 0) {
      param_4 = param_4 - param_2;
      param_2 = 0;
      local_1c = iVar1;
    }
    if (param_3 < 0) {
      iVar2 = iVar2 + param_3;
      param_5 = param_5 - param_3;
      param_3 = 0;
    }
    if (DAT_005fba18 <= param_2 + local_1c) {
      local_1c = local_1c - ((param_2 + local_1c) - DAT_005fba18);
    }
    if (DAT_005fba1c <= param_3 + iVar2) {
      iVar2 = iVar2 - ((param_3 + iVar2) - DAT_005fba1c);
    }
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(param_1);
    param_4 = param_4 + param_5 * param_1->width;
    srcIndices = (uchar *)(param_1->raw + param_4);
    srcAlpha = (uchar *)(param_1->opa + param_4);
    local_18 = param_3 * 4;
    iVar1 = iVar2 * 4 + local_18;
    if (DAT_005fba20 == 0x20) {
      if (0 < iVar2) {
        local_14 = local_18;
        do {
          engine_special_cpp_renderAlphaRow32_FUN_005630a3
                    ((uint *)(*(int *)(&DAT_01c5faec + local_14) + param_2 * 4),srcIndices,srcAlpha,
                     param_8,local_1c);
          srcIndices = srcIndices + param_1->width;
          local_14 = local_14 + 4;
          srcAlpha = srcAlpha + param_1->width;
        } while (local_14 < iVar1);
      }
    }
    else if (0 < iVar2) {
      do {
        engine_special_cpp_renderAlphaRow16_FUN_0056313e
                  ((ushort *)(*(int *)(&DAT_01c5faec + local_18) + param_2 * 2),srcIndices,srcAlpha,
                   param_8,local_1c);
        srcIndices = srcIndices + param_1->width;
        local_18 = local_18 + 4;
        srcAlpha = srcAlpha + param_1->width;
      } while (local_18 < iVar1);
      return;
    }
  }
  return;
}
