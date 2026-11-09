// Name: engine_light.cpp_calculateAndStoreVertexLight_FUN_004e2980
// Address: 004e2980
// Address Range: [[004e2980, 004e29b1]]
// Convention: __cdecl
// Signature: void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004e2980(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004e2980(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_004e2660(*param_2,param_2[1],param_2[2]);
  (&DAT_00622034)[param_1 * 0xc] = iVar1;
  return;
}
