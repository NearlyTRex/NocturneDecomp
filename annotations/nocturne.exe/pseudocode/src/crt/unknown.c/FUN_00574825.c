// Name: crt_unknown.c_FUN_00574825
// Address: 00574825
// Address Range: [[00574825, 0057482f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574825(SYSTEMTIME *param_1,LPFILETIME param_2)

#include "nocturne.h"

void FUN_00574825(SYSTEMTIME *param_1,LPFILETIME param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0057482a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SystemTimeToFileTime(param_1,param_2);
  return;
}
