// Name: FUN_00574b49
// Address: 00574b49
// Address Range: [[00574b49, 00574b53]]
// Convention: unknown
// Signature: void FUN_00574b49(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

#include "nocturne.h"

void FUN_00574b49(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00574b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}
