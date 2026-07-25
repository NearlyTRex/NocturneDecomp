// Name: FUN_00574b01
// Address: 00574b01
// Address Range: [[00574b01, 00574b0b]]
// Convention: unknown
// Signature: void FUN_00574b01(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

#include "nocturne.h"

void FUN_00574b01(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FileTimeToDosDateTime(param_1,param_2,param_3);
  return;
}
