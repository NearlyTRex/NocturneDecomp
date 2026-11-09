// Name: unkafter_basicene.cpp_FUN_0059f660
// Address: 0059f660
// Address Range: [[0059f660, 0059f69f]]
// Convention: unknown
// Signature: ushort unkafter_basicene_cpp_FUN_0059f660(int param_1,float param_2)

#include "nocturne.h"

ushort unkafter_basicene_cpp_FUN_0059f660(int param_1,float param_2)

{
  float fVar1;
  ushort in_AX;
  
  if (*(int *)(param_1 + 0x113d0) != 0) {
    param_2 = *(float *)(param_1 + 0x11404) + param_2;
    *(float *)(param_1 + 0x11404) = param_2;
    fVar1 = *(float *)(param_1 + 0x11400);
    in_AX = (ushort)(param_2 < fVar1) << 8 | (ushort)(NAN(param_2) || NAN(fVar1)) << 10 |
            (ushort)(param_2 == fVar1) << 0xe;
    if (param_2 >= fVar1 && (param_2 == fVar1) == 0) {
      *(uint *)(param_1 + 0x113d0) = 0;
      *(uint *)(param_1 + 0x11404) = 0;
      return in_AX;
    }
  }
  return in_AX;
}
