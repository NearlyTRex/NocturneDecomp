// Name: FUN_00506200
// Address: 00506200
// Address Range: [[00506200, 0050620c]]
// Convention: unknown
// Signature: int FUN_00506200(undefined4 param_1,int param_2)

#include "nocturne.h"

int FUN_00506200(uint param_1,int param_2)

{
  param_2 = param_2 + 1;
  if (0xb < param_2) {
    param_2 = 0;
  }
  return param_2;
}
