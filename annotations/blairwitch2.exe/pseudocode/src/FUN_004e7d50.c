// Name: FUN_004e7d50
// Address: 004e7d50
// Address Range: [[004e7d50, 004e7e73]]
// Convention: unknown
// Signature: void FUN_004e7d50(int param_1)

#include "nocturne.h"

void FUN_004e7d50(int param_1)

{
  int *piVar1;
  int iVar2;
  byte auStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  *(uint *)(param_1 + 0x2e4) = 0x461c3f9a;
  *(uint *)(param_1 + 0x2e8) = 0x461c3f9a;
  *(uint *)(param_1 + 0x2ec) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f0) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f4) = 0xc61c3f9a;
  piVar1 = (int *)(param_1 + 0x300);
  *(uint *)(param_1 + 0x2e0) = 0x461c3f9a;
  iVar2 = 0;
  if (*piVar1 < 1) {
    return;
  }
  do {
    fStack_14 = (float)iVar2;
    iStack_10 = iVar2;
    FUN_00438c40(piVar1,fStack_14,&fStack_20,auStack_2c);
    if (fStack_20 < *(float *)(param_1 + 0x2e0)) {
      *(float *)(param_1 + 0x2e0) = fStack_20;
    }
    if (*(float *)(param_1 + 0x2ec) < fStack_20) {
      *(float *)(param_1 + 0x2ec) = fStack_20;
    }
    if (fStack_1c < *(float *)(param_1 + 0x2e4)) {
      *(float *)(param_1 + 0x2e4) = fStack_1c;
    }
    if (*(float *)(param_1 + 0x2f0) < fStack_1c) {
      *(float *)(param_1 + 0x2f0) = fStack_1c;
    }
    if (fStack_18 < *(float *)(param_1 + 0x2e8)) {
      *(float *)(param_1 + 0x2e8) = fStack_18;
    }
    if (*(float *)(param_1 + 0x2f4) < fStack_18) {
      *(float *)(param_1 + 0x2f4) = fStack_18;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *piVar1);
  return;
}
