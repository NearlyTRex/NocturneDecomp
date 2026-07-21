// Name: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548709]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(int param_1)

{
  double dVar1;
  float *pfVar2;
  byte auStack_30 [24];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  switch(*(uint *)(param_1 + 0x16c)) {
  case 0:
  case 1:
    pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_30);
    fStack_18 = pfVar2[3] - *pfVar2;
    fStack_14 = pfVar2[4] - pfVar2[1];
    fStack_10 = pfVar2[5] - pfVar2[2];
    dVar1 = (double)ceil
                              ((double)(SQRT(fStack_10 * fStack_10 +
                                             fStack_18 * fStack_18 + fStack_14 * fStack_14) +
                                       (float)_DAT_00596b17));
    *(float *)(param_1 + 0x150) = (float)dVar1;
  }
  return;
}
