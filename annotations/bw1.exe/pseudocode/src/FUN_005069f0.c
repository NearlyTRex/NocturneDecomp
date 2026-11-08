// Name: FUN_005069f0
// Address: 005069f0
// Address Range: [[005069f0, 00506b13]]
// Convention: unknown
// Signature: void FUN_005069f0(int param_1)

#include "nocturne.h"

void FUN_005069f0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte auStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  *(uint *)(param_1 + 0x188) = 0x461c3f9a;
  *(uint *)(param_1 + 0x18c) = 0x461c3f9a;
  *(uint *)(param_1 + 400) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x194) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x198) = 0xc61c3f9a;
  piVar1 = (int *)(param_1 + 0x1a4);
  *(uint *)(param_1 + 0x184) = 0x461c3f9a;
  iVar2 = 0;
  if (*piVar1 < 1) {
    return;
  }
  do {
    fStack_14 = (float)iVar2;
    iStack_10 = iVar2;
    FUN_00447f00(piVar1,fStack_14,&fStack_20,auStack_2c);
    if (fStack_20 < *(float *)(param_1 + 0x184)) {
      *(float *)(param_1 + 0x184) = fStack_20;
    }
    if (*(float *)(param_1 + 400) < fStack_20) {
      *(float *)(param_1 + 400) = fStack_20;
    }
    if (fStack_1c < *(float *)(param_1 + 0x188)) {
      *(float *)(param_1 + 0x188) = fStack_1c;
    }
    if (*(float *)(param_1 + 0x194) < fStack_1c) {
      *(float *)(param_1 + 0x194) = fStack_1c;
    }
    if (fStack_18 < *(float *)(param_1 + 0x18c)) {
      *(float *)(param_1 + 0x18c) = fStack_18;
    }
    if (*(float *)(param_1 + 0x198) < fStack_18) {
      *(float *)(param_1 + 0x198) = fStack_18;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *piVar1);
  return;
}
