// Name: crt_memory.c_OptimizedMemFill_FUN_00603b00
// Address: 00603b00
// Address Range: [[00603b00, 00603b30]]
// Convention: __watcallRegister
// Signature: void crt_memory_c_OptimizedMemFill_FUN_00603b00(void *dest,uint replicated_value,uint count)

#include "nocturne.h"

void crt_memory_c_OptimizedMemFill_FUN_00603b00(void *dest,uint replicated_value,uint count)

{
  byte *extraout_EAX;
  uint in_ECX;
  uint uVar1;
  
  if (in_ECX != 0) {
    do {
      if (((uint)dest & 3) == 0) break;
      *(char *)dest = (char)replicated_value;
      dest = (void *)((int)dest + 1);
      replicated_value = replicated_value >> 8 | replicated_value << 0x18;
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    crt_memory_c_BulkDwordFill_FUN_00603b37(dest,replicated_value,count);
    uVar1 = in_ECX & 3;
    if (uVar1 != 0) {
      *extraout_EAX = (char)replicated_value;
      if ((uVar1 != 1) && (extraout_EAX[1] = (char)(replicated_value >> 8), uVar1 != 2)) {
        extraout_EAX[2] = (char)replicated_value;
      }
    }
  }
  return;
}
