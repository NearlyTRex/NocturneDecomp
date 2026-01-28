// Name: crt_memory.c_BulkDwordFill_FUN_00603b37
// Address: 00603b37
// Address Range: [[00603b37, 00603ba2]]
// Convention: __watcallRegister
// Signature: void crt_memory_c_BulkDwordFill_FUN_00603b37(void *dest,uint replicated_value,uint dword_count)

#include "nocturne.h"

void crt_memory_c_BulkDwordFill_FUN_00603b37(void *dest,uint replicated_value,uint dword_count)

{
  uint *puVar1;
  uint in_ECX;
  int iVar2;
  uint uVar3;
  
  if (in_ECX != 0) {
    do {
      if (((uint)dest & 0x1f) == 0) break;
      *(uint *)dest = replicated_value;
      dest = (void *)((int)dest + 4);
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    if (in_ECX >> 2 != 0) {
      iVar2 = (in_ECX >> 2) - 1;
      if (iVar2 != 0) {
        do {
          puVar1 = dest;
          *puVar1 = replicated_value;
          puVar1[1] = replicated_value;
          puVar1[2] = replicated_value;
          puVar1[3] = replicated_value;
          if (iVar2 == 1) goto LAB_00603b76;
          puVar1[4] = replicated_value;
          puVar1[5] = replicated_value;
          iVar2 = iVar2 + -2;
          puVar1[6] = replicated_value;
          puVar1[7] = replicated_value;
          dest = puVar1 + 8;
        } while (iVar2 != 0);
        puVar1 = puVar1 + 4;
LAB_00603b76:
        dest = puVar1 + 4;
      }
      *(uint *)dest = replicated_value;
      *(uint *)((int)dest + 4) = replicated_value;
      *(uint *)((int)dest + 8) = replicated_value;
      *(uint *)((int)dest + 0xc) = replicated_value;
      dest = (void *)((int)dest + 0x10);
    }
    uVar3 = in_ECX & 3;
    if (uVar3 != 0) {
      *(uint *)dest = replicated_value;
      if (uVar3 != 1) {
        *(uint *)((int)dest + 4) = replicated_value;
        if (uVar3 != 2) {
          *(uint *)((int)dest + 8) = replicated_value;
        }
      }
    }
  }
  return;
}
