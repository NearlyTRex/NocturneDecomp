// Name: FUN_00559c50
// Address: 00559c50
// Address Range: [[00559c50, 00559c70]]
// Convention: unknown
// Signature: void FUN_00559c50(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

#include "nocturne.h"

void FUN_00559c50(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  DWORD DStack_4;
  
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,&DStack_4);
  return;
}
