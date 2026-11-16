// Name: FUN_0044eeb0
// Address: 0044eeb0
// Address Range: [[0044eeb0, 0044ef1e]]
// Convention: unknown
// Signature: void FUN_0044eeb0(int param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044eeb0(int param_1,float param_2,float param_3,float param_4)

{
  CVector3i CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fStack_10 = param_2;
  fStack_c = param_3;
  fStack_8 = param_4;
  CStack_1c.x = (int)ROUND(param_2 * _DAT_005ddfbc);
  CStack_1c.y = (int)ROUND(param_3 * _DAT_005ddfbc);
  CStack_1c.z = (int)ROUND(param_4 * _DAT_005ddfbc);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            ((SProjectedVertex *)(param_1 * 0x30 + *DAT_005f2afc),&CStack_1c);
  return;
}
