// Name: engine_mini3d.cpp_FUN_004f8ffe
// Address: 004f8ffe
// Address Range: [[004f8ffe, 004f90c5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f8ffe(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f8ffe(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = _DAT_01d12114;
  fVar2 = (float)engine_mini3d_cpp_FUN_004f93d0();
  pfVar1[5] = 0.0;
  pfVar1[6] = 0.5;
  pfVar1[7] = 0.5;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.5;
  pfVar1[0xf] = 0.5;
  pfVar1[2] = fVar2;
  *pfVar1 = (float)param_1;
  pfVar1[3] = 1.0 / fVar2;
  pfVar1[4] = _DAT_01d0d2e4;
  pfVar1[1] = (float)param_2;
  pfVar1[8] = (float)param_3;
  pfVar1[10] = fVar2;
  pfVar1[0xb] = 1.0 / fVar2;
  fVar2 = _DAT_01d0d2e4;
  pfVar1[9] = (float)param_4;
  pfVar1[0xc] = fVar2;
  engine_mini3d_cpp_FUN_004f44d0(pfVar1,2);
  return;
}
