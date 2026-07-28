// Name: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_004e27f0
// Address: 004e27f0
// Address Range: [[004e27f0, 004e284f]]
// Convention: unknown
// Signature: void sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_004e27f0(undefined4 *param_1)

#include "nocturne.h"

void sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_004e27f0(uint *param_1)

{
  SIZE_T SVar1;
  void *buffer;
  int iVar2;
  
  iVar2 = (param_1[2] + -2) - param_1[4];
  do {
    if (iVar2 < 0) {
      return;
    }
    while( true ) {
      if (param_1[6] != 0) {
        return;
      }
      SVar1 = 0;
      if (0 < (int)param_1[10]) {
        buffer = (void *)(param_1[1] + iVar2);
        iVar2 = iVar2 + -1;
        SVar1 = _fread(buffer,1,1,(_FILE *)*param_1);
      }
      if (SVar1 == 1) break;
      param_1[6] = iVar2 + 1;
      if (iVar2 < 0) {
        return;
      }
    }
    param_1[10] = param_1[10] + -1;
  } while( true );
}
