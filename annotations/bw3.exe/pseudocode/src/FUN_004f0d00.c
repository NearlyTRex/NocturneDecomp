// Name: FUN_004f0d00
// Address: 004f0d00
// Address Range: [[004f0d00, 004f0d92]]
// Convention: unknown
// Signature: void FUN_004f0d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0d00(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)&DAT_01d78f7c;
  iVar2 = 0;
  if (0 < _DAT_01d76f78) {
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
            goto LAB_004f0d2d;
          }
        }
        else {
          fVar1 = pfVar3[2];
        }
        *pfVar3 = fVar1;
      }
LAB_004f0d2d:
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x10;
    } while (iVar2 < _DAT_01d76f78);
  }
  return;
}
