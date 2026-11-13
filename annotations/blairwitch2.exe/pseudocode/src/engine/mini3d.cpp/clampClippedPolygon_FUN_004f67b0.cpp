// Name: engine_mini3d.cpp_clampClippedPolygon_FUN_004f67b0
// Address: 004f67b0
// Address Range: [[004f67b0, 004f6842]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clampClippedPolygon_FUN_004f67b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clampClippedPolygon_FUN_004f67b0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)&DAT_01d0bb98;
  iVar2 = 0;
  if (0 < _DAT_01d09b94) {
    do {
      if (ABS(pfVar3[2]) == 0.0) {
        *pfVar3 = 0.0;
        pfVar3[1] = 0.0;
        pfVar3[2] = 1.0;
      }
      else {
        if (*pfVar3 <= pfVar3[2]) {
          fVar1 = -pfVar3[2];
          if (fVar1 <= *pfVar3) {
            if (pfVar3[1] <= pfVar3[2]) {
              if (pfVar3[1] < fVar1) {
                pfVar3[1] = fVar1;
              }
            }
            else {
              pfVar3[1] = pfVar3[2];
            }
            goto LAB_004f67dd;
          }
        }
        else {
          fVar1 = pfVar3[2];
        }
        *pfVar3 = fVar1;
      }
LAB_004f67dd:
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x10;
    } while (iVar2 < _DAT_01d09b94);
  }
  return;
}
