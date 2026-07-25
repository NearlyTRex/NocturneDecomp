// Name: FUN_00574a9b
// Address: 00574a9b
// Address Range: [[00574a9b, 00574aa5]]
// Convention: unknown
// Signature: void FUN_00574a9b(FILETIME *param_1,LPFILETIME param_2)

#include "nocturne.h"

void FUN_00574a9b(FILETIME *param_1,LPFILETIME param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00574aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FileTimeToLocalFileTime(param_1,param_2);
  return;
}
