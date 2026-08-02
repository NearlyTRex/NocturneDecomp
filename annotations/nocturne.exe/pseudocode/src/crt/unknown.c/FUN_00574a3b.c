// Name: crt_unknown.c_FUN_00574a3b
// Address: 00574a3b
// Address Range: [[00574a3b, 00574a45]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574a3b(UINT_PTR param_1,LPWAVEOUTCAPSA param_2,UINT param_3)

#include "nocturne.h"

void FUN_00574a3b(UINT_PTR param_1,LPWAVEOUTCAPSA param_2,UINT param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  waveOutGetDevCapsA(param_1,param_2,param_3);
  return;
}
