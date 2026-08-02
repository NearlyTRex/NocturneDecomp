// Name: crt_unknown.c_FUN_005748fd
// Address: 005748fd
// Address Range: [[005748fd, 00574907]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005748fd(LPSECURITY_ATTRIBUTES param_1,BOOL param_2,LPCSTR param_3)

#include "nocturne.h"

void FUN_005748fd(LPSECURITY_ATTRIBUTES param_1,BOOL param_2,LPCSTR param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateMutexA(param_1,param_2,param_3);
  return;
}
