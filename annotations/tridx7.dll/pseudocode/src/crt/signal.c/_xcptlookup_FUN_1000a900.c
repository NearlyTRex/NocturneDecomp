// Name: crt_signal.c__xcptlookup_FUN_1000a900
// Address: 1000a900
// Address Range: [[1000a900, 1000a92e]]
// Convention: __cdecl
// Signature: void * __cdecl crt_signal_c__xcptlookup_FUN_1000a900(void *table,int xcpt_num)

#include "nocturne.h"

void * __cdecl _xcptlookup(void *table,int xcpt_num)

{
  int *piVar1;
  
  piVar1 = (int *)xcpt_num;
  do {
    if ((void *)*piVar1 == table) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < (int *)(xcpt_num + 0x0000000A * 0xc));
  return (void *)(-(uint)((void *)*piVar1 == table) & (uint)piVar1);
}
