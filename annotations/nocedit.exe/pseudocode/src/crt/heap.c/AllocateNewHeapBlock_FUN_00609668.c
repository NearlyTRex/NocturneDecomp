// Name: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
// Address: 00609668
// Address Range: [[00609668, 00609716]]
// Convention: __cdecl
// Signature: int crt_heap.c_AllocateNewHeapBlock_FUN_00609668(uint size)
// Cross-references:
//   crt_heap.c_SystemAllocWrapper_FUN_00609718 (00609718) at 00609722 [UNCONDITIONAL_CALL]
// Globals:
//   VirtualAlloc* PTR_VirtualAlloc_00611660 = 00212296
//   undefined4 DAT_00684fd0
//   undefined4 DAT_006854f0
// Function calls:
//   crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
//   crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   VirtualAlloc

#include "nocturne.h"

int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00609668(uint size)

{
  int new_block;
  uint uVar1;
  HeapBlock *pHVar2;
  BADSPACEBASE *in_ESP;
  SIZE_T in_stack_00000008;
  uint in_stack_0000001c;
  uint uStack00000020;
  
  if (DAT_006854f0 == 0) {
    return 0;
  }
  if (DAT_00684fd0 == -2) {
    return 0;
  }
  new_block = crt_heap_c_CalculateHeapBlockSize_FUN_0060972c(&size);
  if (new_block != 0) {
    new_block = (int)(*PTR_VirtualAlloc_00611660)((LPVOID)0x0,in_stack_00000008,0x1000,0x40);
    if ((HeapBlock *)new_block != (HeapBlock *)0x0) {
      uVar1 = in_stack_0000001c - 4;
      if (in_stack_0000001c < uVar1) {
        return 0;
      }
      if (uVar1 < 0x38) {
        return 0;
      }
      ((HeapBlock *)new_block)->size = uVar1;
      size = 0x6096e5;
      pHVar2 = crt_heap_c_InsertHeapBlockInOrder_FUN_006095f0((HeapBlock *)new_block);
      uStack00000020 = pHVar2->size;
      pHVar2->size = uStack00000020 | 1;
      ((HeapBlock *)new_block)->block_size = 0;
      ((HeapBlock *)new_block)->alloc_count = ((HeapBlock *)new_block)->alloc_count + 1;
      crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(&pHVar2->prev);
      new_block = (int)&DAT_00000001;
    }
  }
  return new_block;
}


// Assembly code:
// 00609668: PUSH EBX
//   Label: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
// 00609669: PUSH ESI
// 0060966a: PUSH EDI
// 0060966b: CMP dword ptr [0x006854f0],0x0
//   XREF to: 006854f0 (READ)
// 00609672: JNZ 0x0060967a
//   XREF to: 0060967a (CONDITIONAL_JUMP)
// 00609674: XOR EAX,EAX
// 00609676: POP EDI
// 00609677: POP ESI
// 00609678: POP EBX
// 00609679: RET
// 0060967a: CMP dword ptr [0x00684fd0],-0x2
//   Label: LAB_0060967a
//   XREF to: 00684fd0 (READ)
// 00609681: JNZ 0x00609689
//   XREF to: 00609689 (CONDITIONAL_JUMP)
// 00609683: XOR EAX,EAX
// 00609685: POP EDI
// 00609686: POP ESI
// 00609687: POP EBX
// 00609688: RET
// 00609689: LEA EAX,[ESP + 0x10]
//   Label: LAB_00609689
//   XREF to: Stack[0x4] (DATA)
// 0060968d: PUSH EAX
// 0060968e: CALL crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
//   XREF to: register:00000000 (WRITE)
//   XREF to: 0060972c (UNCONDITIONAL_CALL)
// 00609693: ADD ESP,0x4
// 00609696: TEST EAX,EAX
// 00609698: JZ 0x00609713
//   XREF to: 00609713 (CONDITIONAL_JUMP)
// 0060969e: PUSH 0x40
// 006096a0: PUSH 0x1000
// 006096a5: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006096a9: PUSH ECX
// 006096aa: PUSH 0x0
// 006096ac: CALL dword ptr CS:[0x611660]
//   XREF to: EXTERNAL:000000a3 (COMPUTED_CALL)
//   XREF to: 00611660 (READ)
// 006096b3: MOV EBX,EAX
// 006096b5: TEST EAX,EAX
// 006096b7: JZ 0x00609713
//   XREF to: 00609713 (CONDITIONAL_JUMP)
// 006096b9: MOV EAX,dword ptr [ESP + 0x10]
// 006096bd: MOV ESI,dword ptr [ESP + 0x10]
// 006096c1: SUB EAX,0x4
// 006096c4: CMP EAX,ESI
// 006096c6: JBE 0x006096ce
//   XREF to: 006096ce (CONDITIONAL_JUMP)
// 006096c8: XOR EAX,EAX
// 006096ca: POP EDI
// 006096cb: POP ESI
// 006096cc: POP EBX
// 006096cd: RET
// 006096ce: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_006096ce
// 006096d2: CMP EAX,0x38
// 006096d5: JNC 0x006096dd
//   XREF to: 006096dd (CONDITIONAL_JUMP)
// 006096d7: XOR EAX,EAX
// 006096d9: POP EDI
// 006096da: POP ESI
// 006096db: POP EBX
// 006096dc: RET
// 006096dd: PUSH EBX
//   Label: LAB_006096dd
// 006096de: MOV dword ptr [EBX],EAX
// 006096e0: CALL crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
//   XREF to: 006095f0 (UNCONDITIONAL_CALL)
// 006096e5: MOV EDX,EAX
// 006096e7: ADD ESP,0x4
// 006096ea: MOV EAX,dword ptr [EAX]
// 006096ec: MOV dword ptr [ESP + 0x10],EAX
// 006096f0: OR AL,0x1
// 006096f2: MOV dword ptr [EDX],EAX
// 006096f4: ADD EDX,0x4
// 006096f7: MOV EDI,dword ptr [EBX + 0x18]
// 006096fa: MOV dword ptr [EBX + 0x14],0x0
// 00609701: INC EDI
// 00609702: PUSH EDX
// 00609703: MOV dword ptr [EBX + 0x18],EDI
// 00609706: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 0060970b: MOV EAX,0x1
// 00609710: ADD ESP,0x4
// 00609713: POP EDI
//   Label: LAB_00609713
// 00609714: POP ESI
// 00609715: POP EBX
// 00609716: RET
