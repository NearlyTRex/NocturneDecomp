// Name: sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0
// Address: 004e77d0
// Address Range: [[004e77d0, 004e78ab]]
// Convention: unknown
// Signature: int sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

int sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(int *param_1,uint param_2,uint param_3,int param_4)

{
  double dVar1;
  int unaff_retaddr;
  int iStack_14;
  
  dVar1 = round
                    ((double)(*(int *)(&DAT_005bbd00 + param_1[3] * 4 + *param_1 * 0xb4) * 0x90) /
                     *(double *)(&DAT_005bbc48 + param_1[4] * 8 + *param_1 * 0x20));
  iStack_14 = (int)ROUND(dVar1);
  if (*param_1 == 0) {
    if (param_4 == 1) {
      iStack_14 = iStack_14 / 2 + -9;
    }
    else {
      iStack_14 = iStack_14 / 2 + -0x11;
    }
  }
  else if (param_4 == 1) {
    iStack_14 = iStack_14 + -0x11;
  }
  else {
    iStack_14 = iStack_14 + -0x20;
  }
  if (*(int *)(unaff_retaddr + 0x14) != 0) {
    iStack_14 = iStack_14 + 1;
  }
  if (*(int *)(unaff_retaddr + 8) == 0) {
    return iStack_14 + -4;
  }
  return iStack_14 + -6;
}
