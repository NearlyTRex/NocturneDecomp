// Name: FUN_00574849
// Address: 00574849
// Address Range: [[00574849, 00574853]]
// Convention: unknown
// Signature: void FUN_00574849(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)

#include "nocturne.h"

void FUN_00574849(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0057484e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteFile(param_1,param_2,param_3,param_4,param_5);
  return;
}
