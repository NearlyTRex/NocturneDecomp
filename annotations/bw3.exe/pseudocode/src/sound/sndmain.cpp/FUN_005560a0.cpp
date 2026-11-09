// Name: sound_sndmain.cpp_FUN_005560a0
// Address: 005560a0
// Address Range: [[005560a0, 0055622a]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005560a0(undefined1 *param_1,int param_2,int param_3,byte param_4)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005560a0(byte *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = FUN_005a28c0();
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 1) != 0) {
    iVar1 = FUN_005a28c0();
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 2) != 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      iVar1 = FUN_005a28c0
                        (param_1,0x5d3779,*(uint *)(param_3 + 4),*(uint *)(param_3 + 8),
                         *(uint *)(param_3 + 0xc),*(uint *)(param_3 + 0x10),
                         *(uint *)(param_3 + 0x14),*(uint *)(param_3 + 0x18));
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x20) == 1) {
      iVar1 = FUN_005a28c0();
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x20) == 2) {
      iVar1 = FUN_005a28c0();
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 4) != 0) {
    if (*(int *)(param_3 + 0x34) == 0) {
      iVar1 = FUN_005a28c0
                        (param_1,0x5d37ab,(double)*(float *)(param_3 + 0x24),
                         (double)*(float *)(param_3 + 0x28),(double)*(float *)(param_3 + 0x2c));
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x34) == 1) {
      iVar1 = FUN_005a28c0();
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x34) == 2) {
      iVar1 = FUN_005a28c0();
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 8) != 0) {
    iVar1 = FUN_005a28c0(param_1,0x5d37dd,(double)*(float *)(param_3 + 0x38));
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x10) != 0) {
    iVar1 = FUN_005a28c0(param_1,0x5d37e5,(double)*(float *)(param_3 + 0x3c));
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x20) == 0) {
    return;
  }
  FUN_005a28c0(param_1," delay=%lg",(double)*(float *)(param_3 + 0x40));
  return;
}
