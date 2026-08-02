// Name: crt_unknown.c_FUN_00574ab3
// Address: 00574ab3
// Address Range: [[00574ab3, 00574abd]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574ab3(LPCWSTR param_1,LPCWSTR param_2)

#include "nocturne.h"

void FUN_00574ab3(LPCWSTR param_1,LPCWSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00574ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEnvironmentVariableW(param_1,param_2);
  return;
}
