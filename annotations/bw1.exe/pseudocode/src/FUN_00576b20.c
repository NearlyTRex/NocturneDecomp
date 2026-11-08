// Name: FUN_00576b20
// Address: 00576b20
// Address Range: [[00576b20, 00576c1f]]
// Convention: unknown
// Signature: void FUN_00576b20(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576b20(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fStack_20;
  float fStack_1c;
  
  if ((*(int *)(param_1 * 4 + 0x2c80698) == 0) || (_DAT_02c80668 < 1)) {
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
  }
  pfVar3 = *(float **)(param_1 * 4 + 0x2c80698);
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  FUN_00575d20();
  iVar2 = 0;
  if (0 < _DAT_02c80668) {
    do {
      fVar1 = ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
      fStack_20 = fStack_20 + fVar1;
      if (fStack_1c < fVar1) {
        fStack_1c = fVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < _DAT_02c80668);
  }
  FUN_00573e70();
  fStack_20 = fStack_20 / (float)_DAT_02c80668;
  if (1.0 < fStack_1c) {
    fStack_1c = 1.0;
  }
  if (1.0 < fStack_20) {
    fStack_20 = 1.0;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fStack_1c;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fStack_20;
    return;
  }
  return;
}
