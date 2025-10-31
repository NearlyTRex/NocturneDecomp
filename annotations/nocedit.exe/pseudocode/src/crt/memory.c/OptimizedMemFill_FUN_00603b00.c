// Name: crt_memory.c_OptimizedMemFill_FUN_00603b00
// Address: 00603b00
// Address Range: [[00603b00, 00603b30]]
// Convention: __watcallRegister
// Signature: void crt_memory.c_OptimizedMemFill_FUN_00603b00(void * dest, uint replicated_value, uint count)
// Cross-references:
//   crt_memory.c_memset_FUN_005fde40 (005fde40) at 005fde59 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_BulkDwordFill_FUN_00603b37

#include "nocturne.h"

void crt_memory_c_OptimizedMemFill_FUN_00603b00(void *dest,uint replicated_value,uint count)

{
  undefined1 *extraout_EAX;
  int in_ECX;
  uint uVar1;
  uint unaff_retaddr;
  
  if (in_ECX != 0) {
    do {
      if (((uint)dest & 3) == 0) break;
      *(char *)dest = (char)replicated_value;
      dest = (void *)((int)dest + 1);
      replicated_value = replicated_value >> 8 | replicated_value << 0x18;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
    crt_memory_c_BulkDwordFill_FUN_00603b37(dest,replicated_value,count);
    uVar1 = unaff_retaddr & 3;
    if (uVar1 != 0) {
      *extraout_EAX = (char)replicated_value;
      if ((uVar1 != 1) && (extraout_EAX[1] = (char)(replicated_value >> 8), uVar1 != 2)) {
        extraout_EAX[2] = (char)replicated_value;
      }
    }
  }
  return;
}


// Assembly code:
// 00603b00: OR ECX,ECX
//   Label: crt_memory.c_OptimizedMemFill_FUN_00603b00
// 00603b02: JZ 0x00603b30
//   XREF to: 00603b30 (CONDITIONAL_JUMP)
// 00603b04: CMP byte ptr [EAX],DL
// 00603b06: TEST AL,0x3
//   Label: LAB_00603b06
// 00603b08: JZ 0x00603b13
//   XREF to: 00603b13 (CONDITIONAL_JUMP)
// 00603b0a: MOV byte ptr [EAX],DL
// 00603b0c: INC EAX
// 00603b0d: ROR EDX,0x8
// 00603b10: DEC ECX
// 00603b11: JNZ 0x00603b06
//   XREF to: 00603b06 (CONDITIONAL_JUMP)
// 00603b13: PUSH ECX
//   Label: LAB_00603b13
// 00603b14: SHR ECX,0x2
// 00603b17: CALL crt_memory.c_BulkDwordFill_FUN_00603b37
//   XREF to: 00603b37 (UNCONDITIONAL_CALL)
// 00603b1c: POP ECX
// 00603b1d: AND ECX,0x3
// 00603b20: JZ 0x00603b30
//   XREF to: 00603b30 (CONDITIONAL_JUMP)
// 00603b22: MOV byte ptr [EAX],DL
// 00603b24: DEC ECX
// 00603b25: JZ 0x00603b30
//   XREF to: 00603b30 (CONDITIONAL_JUMP)
// 00603b27: MOV byte ptr [EAX + 0x1],DH
// 00603b2a: DEC ECX
// 00603b2b: JZ 0x00603b30
//   XREF to: 00603b30 (CONDITIONAL_JUMP)
// 00603b2d: MOV byte ptr [EAX + 0x2],DL
// 00603b30: RET
//   Label: LAB_00603b30
