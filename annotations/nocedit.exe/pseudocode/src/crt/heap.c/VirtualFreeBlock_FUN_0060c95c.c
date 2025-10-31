// Name: crt_heap.c_VirtualFreeBlock_FUN_0060c95c
// Address: 0060c95c
// Address Range: [[0060c95c, 0060c9ba]]
// Convention: __cdecl
// Signature: int crt_heap.c_VirtualFreeBlock_FUN_0060c95c(HeapBlock * block)
// Cross-references:
//   crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc (0060c9bc) at 0060c9c9 [UNCONDITIONAL_CALL]
// Globals:
//   VirtualFree* PTR_VirtualFree_00611664 = 002122a6
//   Heap* g_MainHeap = 00000000
//   Heap* g_SecondaryHeap = 00000000
//   undefined4 DAT_00684edc
//   undefined4 DAT_03f9b210
// Function calls:
//   VirtualFree

#include "nocturne.h"

int __cdecl crt_heap_c_VirtualFreeBlock_FUN_0060c95c(HeapBlock *block)

{
  HeapBlock *pHVar1;
  BOOL BVar2;
  
  pHVar1 = block->next;
  BVar2 = (*PTR_VirtualFree_00611664)(block,0,0x8000);
  if (BVar2 != 0) {
    if ((block == (HeapBlock *)g_SecondaryHeap) &&
       (g_SecondaryHeap = (Heap *)pHVar1, pHVar1 == (HeapBlock *)0x0)) {
      g_SecondaryHeap = g_MainHeap;
      DAT_00684edc = 0;
    }
    if (block == DAT_03f9b210) {
      DAT_03f9b210 = (HeapBlock *)((uint)block ^ (uint)DAT_03f9b210);
    }
    return 0;
  }
  return -1;
}


// Assembly code:
// 0060c95c: PUSH EBX
//   Label: crt_heap.c_VirtualFreeBlock_FUN_0060c95c
// 0060c95d: PUSH ESI
// 0060c95e: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060c962: PUSH 0x8000
// 0060c967: PUSH 0x0
// 0060c969: PUSH ESI
// 0060c96a: MOV EBX,dword ptr [ESI + 0x8]
// 0060c96d: CALL dword ptr CS:[0x611664]
//   XREF to: EXTERNAL:000000a4 (COMPUTED_CALL)
//   XREF to: 00611664 (READ)
// 0060c974: TEST EAX,EAX
// 0060c976: JNZ 0x0060c980
//   XREF to: 0060c980 (CONDITIONAL_JUMP)
// 0060c978: MOV EAX,0xffffffff
// 0060c97d: POP ESI
// 0060c97e: POP EBX
// 0060c97f: RET
// 0060c980: CMP ESI,dword ptr [0x00684ed8]
//   Label: LAB_0060c980
//   XREF to: 00684ed8 (READ)
// 0060c986: JNZ 0x0060c9a4
//   XREF to: 0060c9a4 (CONDITIONAL_JUMP)
// 0060c988: TEST EBX,EBX
// 0060c98a: JZ 0x0060c994
//   XREF to: 0060c994 (CONDITIONAL_JUMP)
// 0060c98c: MOV dword ptr [0x00684ed8],EBX
//   XREF to: 00684ed8 (WRITE)
// 0060c992: JMP 0x0060c9a4
//   XREF to: 0060c9a4 (UNCONDITIONAL_JUMP)
// 0060c994: MOV EAX,[0x00684ed4]
//   Label: LAB_0060c994
//   XREF to: 00684ed4 (READ)
// 0060c999: MOV dword ptr [0x00684edc],EBX
//   XREF to: 00684edc (WRITE)
// 0060c99f: MOV [0x00684ed8],EAX
//   XREF to: 00684ed8 (WRITE)
// 0060c9a4: MOV ECX,dword ptr [0x03f9b210]
//   Label: LAB_0060c9a4
//   XREF to: 03f9b210 (READ)
// 0060c9aa: CMP ESI,ECX
// 0060c9ac: JNZ 0x0060c9b6
//   XREF to: 0060c9b6 (CONDITIONAL_JUMP)
// 0060c9ae: XOR ESI,ECX
// 0060c9b0: MOV dword ptr [0x03f9b210],ESI
//   XREF to: 03f9b210 (WRITE)
// 0060c9b6: XOR EAX,EAX
//   Label: LAB_0060c9b6
// 0060c9b8: POP ESI
// 0060c9b9: POP EBX
// 0060c9ba: RET
