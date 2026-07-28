// Name: sound_mp3.cpp_CFileBitStream_reset_FUN_004e2850
// Address: 004e2850
// Address Range: [[004e2850, 004e2890]]
// Convention: unknown
// Signature: void sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(undefined4 *param_1)

#include "nocturne.h"

void sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(uint *param_1)

{
  _fseek((_FILE *)*param_1,param_1[8],0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = param_1[9];
  return;
}
