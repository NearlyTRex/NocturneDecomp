// Name: crt_memory.c_realloc_implementation_FUN_00601e08
// Address: 00601e08
// Address Range: [[00601e08, 00601e9b]]
// Convention: __cdecl
// Signature: void * crt_memory.c_realloc_implementation_FUN_00601e08(void * ptr, ulong new_size)
// Cross-references:
//   crt_memory.c_realloc_FUN_00601df0 (00601df0) at 00601dfb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_heap.c_GetBlockSize_FUN_00609790
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   crt_heap.c_TryResizeInPlace_FUN_00609974
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0

#include "nocturne.h"

void * __cdecl crt_memory_c_realloc_implementation_FUN_00601e08(void *ptr,ulong new_size)

{
  void *pvVar1;
  ulong new_size_00;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (ptr == (void *)0x0) {
    pvVar1 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(new_size);
    return pvVar1;
  }
  if (new_size == 0) {
    crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(ptr);
    return (void *)0x0;
  }
  new_size_00 = crt_heap_c_GetBlockSize_FUN_00609790(ptr);
  puVar2 = (undefined4 *)crt_heap_c_TryResizeInPlace_FUN_00609974(ptr,new_size);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)crt_heap_c_InternalHeapAlloc_FUN_00601bc0(new_size);
    if (puVar2 == (undefined4 *)0x0) {
      crt_heap_c_TryResizeInPlace_FUN_00609974(ptr,new_size_00);
    }
    else {
      puVar4 = (undefined4 *)ptr;
      puVar5 = puVar2;
      for (uVar3 = new_size_00 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (uVar3 = new_size_00 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(ptr);
    }
  }
  return puVar2;
}


// Assembly code:
// 00601e08: PUSH EBX
//   Label: crt_memory.c_realloc_implementation_FUN_00601e08
// 00601e09: PUSH ESI
// 00601e0a: PUSH EDI
// 00601e0b: PUSH EBP
// 00601e0c: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00601e10: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00601e14: TEST EBX,EBX
// 00601e16: JNZ 0x00601e26
//   XREF to: 00601e26 (CONDITIONAL_JUMP)
// 00601e18: PUSH EDI
// 00601e19: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 00601e1e: ADD ESP,0x4
// 00601e21: POP EBP
// 00601e22: POP EDI
// 00601e23: POP ESI
// 00601e24: POP EBX
// 00601e25: RET
// 00601e26: TEST EDI,EDI
//   Label: LAB_00601e26
// 00601e28: JNZ 0x00601e3a
//   XREF to: 00601e3a (CONDITIONAL_JUMP)
// 00601e2a: PUSH EBX
// 00601e2b: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 00601e30: ADD ESP,0x4
// 00601e33: XOR EAX,EAX
// 00601e35: POP EBP
// 00601e36: POP EDI
// 00601e37: POP ESI
// 00601e38: POP EBX
// 00601e39: RET
// 00601e3a: PUSH EBX
//   Label: LAB_00601e3a
// 00601e3b: CALL crt_heap.c_GetBlockSize_FUN_00609790
//   XREF to: 00609790 (UNCONDITIONAL_CALL)
// 00601e40: ADD ESP,0x4
// 00601e43: PUSH EDI
// 00601e44: PUSH EBX
// 00601e45: MOV ESI,EAX
// 00601e47: CALL crt_heap.c_TryResizeInPlace_FUN_00609974
//   XREF to: 00609974 (UNCONDITIONAL_CALL)
// 00601e4c: ADD ESP,0x8
// 00601e4f: MOV EBP,EAX
// 00601e51: TEST EAX,EAX
// 00601e53: JNZ 0x00601e95
//   XREF to: 00601e95 (CONDITIONAL_JUMP)
// 00601e55: PUSH EDI
// 00601e56: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 00601e5b: ADD ESP,0x4
// 00601e5e: MOV EBP,EAX
// 00601e60: TEST EAX,EAX
// 00601e62: JZ 0x00601e8b
//   XREF to: 00601e8b (CONDITIONAL_JUMP)
// 00601e64: MOV ECX,ESI
// 00601e66: MOV EDI,EAX
// 00601e68: MOV ESI,EBX
// 00601e6a: PUSH ES
// 00601e6b: MOV AX,DS
// 00601e6d: MOV ES,AX
// 00601e6f: PUSH EDI
// 00601e70: MOV EAX,ECX
// 00601e72: SHR ECX,0x2
// 00601e75: MOVSD.REP ES:EDI,ESI
// 00601e77: MOV CL,AL
// 00601e79: AND CL,0x3
// 00601e7c: MOVSB.REP ES:EDI,ESI
// 00601e7e: POP EDI
// 00601e7f: POP ES
// 00601e80: PUSH EBX
// 00601e81: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 00601e86: ADD ESP,0x4
// 00601e89: JMP 0x00601e95
//   XREF to: 00601e95 (UNCONDITIONAL_JUMP)
// 00601e8b: PUSH ESI
//   Label: LAB_00601e8b
// 00601e8c: PUSH EBX
// 00601e8d: CALL crt_heap.c_TryResizeInPlace_FUN_00609974
//   XREF to: 00609974 (UNCONDITIONAL_CALL)
// 00601e92: ADD ESP,0x8
// 00601e95: MOV EAX,EBP
//   Label: LAB_00601e95
// 00601e97: POP EBP
// 00601e98: POP EDI
// 00601e99: POP ESI
// 00601e9a: POP EBX
// 00601e9b: RET
