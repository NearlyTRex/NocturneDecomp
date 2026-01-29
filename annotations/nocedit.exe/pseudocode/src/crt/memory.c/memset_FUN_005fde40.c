// Name: crt_memory.c_memset_FUN_005fde40
// Address: 005fde40
// Address Range: [[005fde40, 005fde5f]]
// Convention: __cdecl
// Signature: void * __cdecl crt_memory_c_memset_FUN_005fde40(void *dest,int value,ulong count)

#include "nocturne.h"

void * __cdecl memset(void *dest,int value,ulong count)

{
  byte uVar1;
  uint unaff_EBX;
  
  uVar1 = (byte)value;
  __memfill
            (dest,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1),unaff_EBX);
  return dest;
}
