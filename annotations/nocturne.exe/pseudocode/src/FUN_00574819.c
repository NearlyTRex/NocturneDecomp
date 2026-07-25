// Name: FUN_00574819
// Address: 00574819
// Address Range: [[00574819, 00574823]]
// Convention: unknown
// Signature: void FUN_00574819(HANDLE param_1,FILETIME *param_2,FILETIME *param_3,FILETIME *param_4)

#include "nocturne.h"

void FUN_00574819(HANDLE param_1,FILETIME *param_2,FILETIME *param_3,FILETIME *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0057481e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetFileTime(param_1,param_2,param_3,param_4);
  return;
}
