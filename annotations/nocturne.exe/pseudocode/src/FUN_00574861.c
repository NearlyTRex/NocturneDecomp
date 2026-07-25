// Name: FUN_00574861
// Address: 00574861
// Address Range: [[00574861, 0057486b]]
// Convention: unknown
// Signature: void FUN_00574861(HANDLE param_1,LONG param_2,PLONG param_3,DWORD param_4)

#include "nocturne.h"

void FUN_00574861(HANDLE param_1,LONG param_2,PLONG param_3,DWORD param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00574866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetFilePointer(param_1,param_2,param_3,param_4);
  return;
}
