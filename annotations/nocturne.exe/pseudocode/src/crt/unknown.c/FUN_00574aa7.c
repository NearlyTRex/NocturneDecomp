// Name: crt_unknown.c_FUN_00574aa7
// Address: 00574aa7
// Address Range: [[00574aa7, 00574ab1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574aa7(HANDLE param_1,LPWIN32_FIND_DATAA param_2)

#include "nocturne.h"

void FUN_00574aa7(HANDLE param_1,LPWIN32_FIND_DATAA param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00574aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FindNextFileA(param_1,param_2);
  return;
}
