// Name: FUN_00574b19
// Address: 00574b19
// Address Range: [[00574b19, 00574b23]]
// Convention: unknown
// Signature: void FUN_00574b19(HANDLE param_1,PINPUT_RECORD param_2,DWORD param_3,LPDWORD param_4)

#include "nocturne.h"

void FUN_00574b19(HANDLE param_1,PINPUT_RECORD param_2,DWORD param_3,LPDWORD param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00574b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReadConsoleInputA(param_1,param_2,param_3,param_4);
  return;
}
