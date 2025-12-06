// Name: crt_memory.c_memset_FUN_005fde40
// Address: 005fde40
// Address Range: [[005fde40, 005fde5f]]
// Convention: __cdecl
// Signature: void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)

#include "nocturne.h"

void * __cdecl crt_memory_c_memset_FUN_005fde40(void *dest,int value,ulong count)

{
  byte uVar1;
  uint unaff_EBX;
  void *unaff_retaddr;
  
  uVar1 = (byte)value;
  crt_memory_c_OptimizedMemFill_FUN_00603b00
            (dest,CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar1,uVar1),uVar1),uVar1),unaff_EBX);
  return unaff_retaddr;
}
