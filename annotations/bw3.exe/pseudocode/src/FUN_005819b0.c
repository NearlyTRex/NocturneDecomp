// Name: FUN_005819b0
// Address: 005819b0
// Address Range: [[005819b0, 005819d0]]
// Convention: unknown
// Signature: void FUN_005819b0(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

#include "nocturne.h"

void FUN_005819b0(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  DWORD DStack_4;
  
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,&DStack_4);
  return;
}
