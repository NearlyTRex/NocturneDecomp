// Name: FUN_004416b0
// Address: 004416b0
// Address Range: [[004416b0, 0044171e]]
// Convention: unknown
// Signature: void FUN_004416b0(int param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004416b0(int param_1,float param_2,float param_3,float param_4)

{
  CVector3i CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fStack_10 = param_2;
  fStack_c = param_3;
  fStack_8 = param_4;
  CStack_1c.x = (int)ROUND(param_2 * _DAT_005f4dcc);
  CStack_1c.y = (int)ROUND(param_3 * _DAT_005f4dcc);
  CStack_1c.z = (int)ROUND(param_4 * _DAT_005f4dcc);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            ((SProjectedVertex *)(param_1 * 0x30 + *DAT_0060b280),&CStack_1c);
  return;
}
