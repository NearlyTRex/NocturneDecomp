// Name: FUN_00574a5f
// Address: 00574a5f
// Address Range: [[00574a5f, 00574a69]]
// Convention: unknown
// Signature: void FUN_00574a5f(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)

#include "nocturne.h"

void FUN_00574a5f(HWAVEOUT param_1,LPWAVEHDR param_2,UINT param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  waveOutUnprepareHeader(param_1,param_2,param_3);
  return;
}
