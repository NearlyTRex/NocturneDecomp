// Name: FUN_00553f40
// Address: 00553f40
// Address Range: [[00553f40, 005540c9]]
// Convention: unknown
// Signature: void FUN_00553f40(int param_1)

#include "nocturne.h"

void FUN_00553f40(int param_1)

{
  float *pfVar1;
  double *pdVar2;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    pfVar1 = *(float **)(param_1 + 0x1c);
    if (((*pfVar1 != (float)*(double *)(param_1 + 4)) ||
        (pfVar1[1] != (float)*(double *)(param_1 + 0xc))) ||
       (pfVar1[2] != (float)*(double *)(param_1 + 0x14))) {
      *(double *)(param_1 + 4) = (double)**(float **)(param_1 + 0x1c);
      *(double *)(param_1 + 0xc) = (double)*(float *)(*(int *)(param_1 + 0x1c) + 4);
      *(double *)(param_1 + 0x14) = (double)*(float *)(*(int *)(param_1 + 0x1c) + 8);
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 2;
    }
  }
  else if ((*(int *)(param_1 + 0x20) == 2) &&
          (((pdVar2 = *(double **)(param_1 + 0x1c), *(double *)(param_1 + 4) != *pdVar2 ||
            (*(double *)(param_1 + 0xc) != pdVar2[1])) || (*(double *)(param_1 + 0x14) != pdVar2[2])
           ))) {
    *(ulonglong *)(param_1 + 4) = **(ulonglong **)(param_1 + 0x1c);
    *(ulonglong *)(param_1 + 0xc) = *(ulonglong *)(*(int *)(param_1 + 0x1c) + 8);
    *(uint *)(param_1 + 0x14) = *(uint *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(uint *)(param_1 + 0x18) = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 2;
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    pfVar1 = *(float **)(param_1 + 0x30);
    if (((*(float *)(param_1 + 0x24) == *pfVar1) && (*(float *)(param_1 + 0x28) == pfVar1[1])) &&
       (*(float *)(param_1 + 0x2c) == pfVar1[2])) {
      return;
    }
    *(uint *)(param_1 + 0x24) = **(uint **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x28) = *(uint *)(*(int *)(param_1 + 0x30) + 4);
    *(uint *)(param_1 + 0x2c) = *(uint *)(*(int *)(param_1 + 0x30) + 8);
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 4;
  }
  else if (*(int *)(param_1 + 0x34) == 2) {
    pdVar2 = *(double **)(param_1 + 0x30);
    if (((*(float *)(param_1 + 0x24) == (float)*pdVar2) &&
        (*(float *)(param_1 + 0x28) == (float)pdVar2[1])) &&
       (*(float *)(param_1 + 0x2c) == (float)pdVar2[2])) {
      return;
    }
    *(float *)(param_1 + 0x24) = (float)**(double **)(param_1 + 0x30);
    *(float *)(param_1 + 0x28) = (float)*(double *)(*(int *)(param_1 + 0x30) + 8);
    *(float *)(param_1 + 0x2c) = (float)*(double *)(*(int *)(param_1 + 0x30) + 0x10);
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 4;
    return;
  }
  return;
}
