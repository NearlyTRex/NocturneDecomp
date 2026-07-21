// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
// Address: 004c6d90
// Address Range: [[004c6d90, 004c6dc1]]
// Convention: unknown
// Signature: void engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int param_1,undefined4 *param_2)

#include "nocturne.h"

void engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = engine_light_cpp_calculatePhongLighting_FUN_004c6a70(*param_2,param_2[1],param_2[2]);
  (&DAT_005c5034)[param_1 * 0xc] = uVar1;
  return;
}
