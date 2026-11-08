// Name: FUN_0058fd20
// Address: 0058fd20
// Address Range: [[0058fd20, 0058fd40]]
// Convention: unknown
// Signature: void FUN_0058fd20(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

#include "nocturne.h"

void FUN_0058fd20(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  DWORD DStack_4;
  
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,&DStack_4);
  return;
}
