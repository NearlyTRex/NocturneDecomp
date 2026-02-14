// Name: crt_memory.c___memfill_FUN_00603b00
// Address: 00603b00
// Address Range: [[00603b00, 00603b30]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_memory_c___memfill_FUN_00603b00(void *dest,uint replicated_value,uint count)

#include "nocturne.h"

void __watcallRegister __memfill(void *dest,uint replicated_value,uint count)

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
    __stosd(dest,replicated_value,count);
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
