// Name: FUN_00574b25
// Address: 00574b25
// Address Range: [[00574b25, 00574b2f]]
// Convention: unknown
// Signature: void FUN_00574b25(LPVOID param_1,SIZE_T param_2,DWORD param_3)

#include "nocturne.h"

void FUN_00574b25(LPVOID param_1,SIZE_T param_2,DWORD param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00574b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(param_1,param_2,param_3);
  return;
}
