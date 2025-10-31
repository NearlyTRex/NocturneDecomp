// Name: crt_memory.c_BulkDwordFill_FUN_00603b37
// Address: 00603b37
// Address Range: [[00603b37, 00603ba2]]
// Convention: __watcallRegister
// Signature: void crt_memory.c_BulkDwordFill_FUN_00603b37(void * dest, uint replicated_value, uint dword_count)
// Cross-references:
//   crt_memory.c_OptimizedMemFill_FUN_00603b00 (00603b00) at 00603b17 [UNCONDITIONAL_CALL]

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
          puVar1 = (uint *)dest;
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


// Assembly code:
// 00603b37: OR ECX,ECX
//   Label: crt_memory.c_BulkDwordFill_FUN_00603b37
// 00603b39: JZ 0x00603ba2
//   XREF to: 00603ba2 (CONDITIONAL_JUMP)
// 00603b3b: TEST AL,0x1f
//   Label: LAB_00603b3b
// 00603b3d: JZ 0x00603b47
//   XREF to: 00603b47 (CONDITIONAL_JUMP)
// 00603b3f: MOV dword ptr [EAX],EDX
// 00603b41: LEA EAX,[EAX + 0x4]
// 00603b44: DEC ECX
// 00603b45: JNZ 0x00603b3b
//   XREF to: 00603b3b (CONDITIONAL_JUMP)
// 00603b47: PUSH ECX
//   Label: LAB_00603b47
// 00603b48: SHR ECX,0x2
// 00603b4b: JZ 0x00603b87
//   XREF to: 00603b87 (CONDITIONAL_JUMP)
// 00603b4d: DEC ECX
// 00603b4e: JZ 0x00603b79
//   XREF to: 00603b79 (CONDITIONAL_JUMP)
// 00603b50: MOV dword ptr [EAX],EDX
//   Label: LAB_00603b50
// 00603b52: MOV dword ptr [EAX + 0x4],EDX
// 00603b55: DEC ECX
// 00603b56: MOV dword ptr [EAX + 0x8],EDX
// 00603b59: MOV dword ptr [EAX + 0xc],EDX
// 00603b5c: JZ 0x00603b76
//   XREF to: 00603b76 (CONDITIONAL_JUMP)
// 00603b5e: CMP byte ptr [EAX + 0x20],DL
// 00603b61: MOV dword ptr [EAX + 0x10],EDX
// 00603b64: MOV dword ptr [EAX + 0x14],EDX
// 00603b67: DEC ECX
// 00603b68: MOV dword ptr [EAX + 0x18],EDX
// 00603b6b: MOV dword ptr [EAX + 0x1c],EDX
// 00603b6e: LEA EAX,[EAX + 0x20]
// 00603b71: JNZ 0x00603b50
//   XREF to: 00603b50 (CONDITIONAL_JUMP)
// 00603b73: LEA EAX,[EAX + -0x10]
// 00603b76: LEA EAX,[EAX + 0x10]
//   Label: LAB_00603b76
// 00603b79: MOV dword ptr [EAX],EDX
//   Label: LAB_00603b79
// 00603b7b: MOV dword ptr [EAX + 0x4],EDX
// 00603b7e: MOV dword ptr [EAX + 0x8],EDX
// 00603b81: MOV dword ptr [EAX + 0xc],EDX
// 00603b84: LEA EAX,[EAX + 0x10]
// 00603b87: POP ECX
//   Label: LAB_00603b87
// 00603b88: AND ECX,0x3
// 00603b8b: JZ 0x00603ba2
//   XREF to: 00603ba2 (CONDITIONAL_JUMP)
// 00603b8d: MOV dword ptr [EAX],EDX
// 00603b8f: LEA EAX,[EAX + 0x4]
// 00603b92: DEC ECX
// 00603b93: JZ 0x00603ba2
//   XREF to: 00603ba2 (CONDITIONAL_JUMP)
// 00603b95: MOV dword ptr [EAX],EDX
// 00603b97: LEA EAX,[EAX + 0x4]
// 00603b9a: DEC ECX
// 00603b9b: JZ 0x00603ba2
//   XREF to: 00603ba2 (CONDITIONAL_JUMP)
// 00603b9d: MOV dword ptr [EAX],EDX
// 00603b9f: LEA EAX,[EAX + 0x4]
// 00603ba2: RET
//   Label: LAB_00603ba2
