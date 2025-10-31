// Name: crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
// Address: 0060972c
// Address Range: [[0060972c, 00609775]]
// Convention: __cdecl
// Signature: int crt_heap.c_CalculateHeapBlockSize_FUN_0060972c(uint * pSize)
// Cross-references:
//   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 (00609668) at 0060968e [UNCONDITIONAL_CALL]
// Globals:
//   int g_HeapFlags = 0x10000

#include "nocturne.h"

int __cdecl crt_heap_c_CalculateHeapBlockSize_FUN_0060972c(uint *pSize)

{
  uint uVar1;
  
  uVar1 = *pSize + 7 & 0xfffffff8;
  if (uVar1 == 0) {
    return 0;
  }
  *pSize = uVar1;
  uVar1 = uVar1 + 0x3c;
  if (uVar1 < *pSize) {
    return 0;
  }
  if (uVar1 < (uint)g_HeapFlags) {
    uVar1 = g_HeapFlags & 0xfffffffe;
  }
  *pSize = uVar1;
  if (uVar1 + 0xfff < *pSize) {
    return 0;
  }
  uVar1 = uVar1 + 0xfff >> 8 & 0xfffff0;
  *pSize = uVar1 << 8;
  return (uint)(uVar1 != 0);
}


// Assembly code:
// 0060972c: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
//   XREF to: Stack[0x4] (READ)
// 00609730: MOV EAX,dword ptr [EDX]
// 00609732: ADD EAX,0x7
// 00609735: AND AL,0xf8
// 00609737: TEST EAX,EAX
// 00609739: JNZ 0x0060973c
//   XREF to: 0060973c (CONDITIONAL_JUMP)
// 0060973b: RET
// 0060973c: MOV dword ptr [EDX],EAX
//   Label: LAB_0060973c
// 0060973e: ADD EAX,0x3c
// 00609741: CMP EAX,dword ptr [EDX]
// 00609743: JNC 0x00609748
//   XREF to: 00609748 (CONDITIONAL_JUMP)
// 00609745: XOR EAX,EAX
// 00609747: RET
// 00609748: MOV ECX,dword ptr [0x006854f4]
//   Label: LAB_00609748
//   XREF to: 006854f4 (READ)
// 0060974e: CMP EAX,ECX
// 00609750: JNC 0x00609756
//   XREF to: 00609756 (CONDITIONAL_JUMP)
// 00609752: MOV EAX,ECX
// 00609754: AND AL,0xfe
// 00609756: MOV dword ptr [EDX],EAX
//   Label: LAB_00609756
// 00609758: ADD EAX,0xfff
// 0060975d: CMP EAX,dword ptr [EDX]
// 0060975f: JNC 0x00609764
//   XREF to: 00609764 (CONDITIONAL_JUMP)
// 00609761: XOR EAX,EAX
// 00609763: RET
// 00609764: XOR AL,AL
//   Label: LAB_00609764
// 00609766: AND AH,0xf0
// 00609769: MOV dword ptr [EDX],EAX
// 0060976b: TEST EAX,EAX
// 0060976d: SETNZ AL
// 00609770: AND EAX,0xff
// 00609775: RET
