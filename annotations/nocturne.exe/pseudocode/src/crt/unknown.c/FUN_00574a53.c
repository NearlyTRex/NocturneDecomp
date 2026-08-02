// Name: crt_unknown.c_FUN_00574a53
// Address: 00574a53
// Address Range: [[00574a53, 00574a5d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574a53(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)

#include "nocturne.h"

void FUN_00574a53(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  waveOutWrite(param_1,param_2,param_3);
  return;
}
