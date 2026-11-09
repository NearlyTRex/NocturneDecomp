// Name: engine_mini3d.cpp_FUN_004f36fe
// Address: 004f36fe
// Address Range: [[004f36fe, 004f37d9]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f36fe(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f36fe(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  
  pfVar4 = _DAT_01d7f4f4;
  fVar5 = (float)engine_mini3d_cpp_FUN_004f3af0();
  fVar3 = _DAT_01d76cc4;
  fVar1 = _DAT_01d76cc4 * (float)param_1;
  fVar2 = (float)param_2 * _DAT_01d76cc4;
  pfVar4[2] = fVar5;
  pfVar4[3] = 1.0 / fVar5;
  pfVar4[4] = _DAT_01d7a6c4;
  pfVar4[5] = 0.0;
  pfVar4[6] = 0.5;
  pfVar4[7] = 0.5;
  pfVar4[0xd] = 0.0;
  pfVar4[0xe] = 0.5;
  pfVar4[0xf] = 0.5;
  *pfVar4 = fVar1;
  pfVar4[1] = fVar2;
  pfVar4[10] = fVar5;
  pfVar4[8] = (float)param_3 * fVar3;
  pfVar4[0xb] = 1.0 / fVar5;
  fVar1 = _DAT_01d7a6c4;
  pfVar4[9] = (float)param_4 * fVar3;
  pfVar4[0xc] = fVar1;
  engine_mini3d_cpp_FUN_004ee9f0(pfVar4,2);
  return;
}
