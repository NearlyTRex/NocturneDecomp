// Name: FUN_005b37d0
// Address: 005b37d0
// Address Range: [[005b37d0, 005b37f0]]
// Convention: unknown
// Signature: void FUN_005b37d0(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

#include "nocturne.h"

void FUN_005b37d0(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  DWORD DStack_4;
  
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,&DStack_4);
  return;
}
