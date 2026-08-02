// Name: crt_unknown.c_FUN_005748e5
// Address: 005748e5
// Address Range: [[005748e5, 005748ef]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005748e5(HKEY param_1,LPCSTR param_2,DWORD param_3,REGSAM param_4,PHKEY param_5)

#include "nocturne.h"

void FUN_005748e5(HKEY param_1,LPCSTR param_2,DWORD param_3,REGSAM param_4,PHKEY param_5)

{
                    /* WARNING: Could not recover jumptable at 0x005748ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegOpenKeyExA(param_1,param_2,param_3,param_4,param_5);
  return;
}
