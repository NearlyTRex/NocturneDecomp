// Name: FUN_00422120
// Address: 00422120
// Address Range: [[00422120, 0042214b]]
// Convention: unknown
// Signature: float FUN_00422120(float param_1,float param_2)

#include "nocturne.h"

float FUN_00422120(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return param_1;
  }
  return param_2;
}
