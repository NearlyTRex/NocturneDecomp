// Name: FUN_00574885
// Address: 00574885
// Address Range: [[00574885, 0057488f]]
// Convention: unknown
// Signature: void FUN_00574885(LPCSTR param_1,LPSECURITY_ATTRIBUTES param_2)

#include "nocturne.h"

void FUN_00574885(LPCSTR param_1,LPSECURITY_ATTRIBUTES param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0057488a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateDirectoryA(param_1,param_2);
  return;
}
