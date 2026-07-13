// Name: FUN_10002340
// Address: 10002340
// Address Range: [[10002340, 10002365]]
// Convention: unknown
// Signature: void FUN_10002340(LPCSTR param_1)

#include "nocturne.h"

void FUN_10002340(LPCSTR param_1)

{
  APIDLLkill();
  MessageBoxA(DAT_10138fb8,param_1,"DirectX6 3D Driver error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
