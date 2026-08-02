// Name: crt_unknown.c_FUN_00574891
// Address: 00574891
// Address Range: [[00574891, 0057489b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574891(LPCSTR param_1,DWORD param_2,LPSTR param_3,LPSTR *param_4)

#include "nocturne.h"

void FUN_00574891(LPCSTR param_1,DWORD param_2,LPSTR param_3,LPSTR *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00574896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetFullPathNameA(param_1,param_2,param_3,param_4);
  return;
}
