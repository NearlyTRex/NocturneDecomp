// Name: crt_unknown.c_FUN_005748c1
// Address: 005748c1
// Address Range: [[005748c1, 005748cb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005748c1(UINT_PTR param_1,LPJOYCAPSA param_2,UINT param_3)

#include "nocturne.h"

void FUN_005748c1(UINT_PTR param_1,LPJOYCAPSA param_2,UINT param_3)

{
                    /* WARNING: Could not recover jumptable at 0x005748c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  joyGetDevCapsA(param_1,param_2,param_3);
  return;
}
