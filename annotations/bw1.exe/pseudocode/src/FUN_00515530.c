// Name: FUN_00515530
// Address: 00515530
// Address Range: [[00515530, 005155c2]]
// Convention: unknown
// Signature: void FUN_00515530(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515530(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)&DAT_01d247fc;
  iVar2 = 0;
  if (0 < _DAT_01d227f8) {
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
            goto LAB_0051555d;
          }
        }
        else {
          fVar1 = pfVar3[2];
        }
        *pfVar3 = fVar1;
      }
LAB_0051555d:
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0x10;
    } while (iVar2 < _DAT_01d227f8);
  }
  return;
}
