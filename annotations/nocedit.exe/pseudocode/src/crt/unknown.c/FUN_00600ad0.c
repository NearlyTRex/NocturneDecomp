// Name: crt_unknown.c_FUN_00600ad0
// Address: 00600ad0
// Address Range: [[00600ad0, 00600b93]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600ad0()
// Cross-references:
//   shape_design.c_FUN_0046e760 (0046e760) at 0046e76c [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
//   undefined1 DAT_03f9b850
// Function calls:
//   crt_heap.c_heapWalk_FUN_006012d0
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   crt_unknown.c_FUN_00600990
//   crt_unknown.c_FUN_00600a64

#include "nocturne.h"

int crt_unknown_c_FUN_00600ad0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  HeapState HStack_18;
  int iStack_8;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  if (DAT_03f9b850 != '\0') {
    (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
    return 0;
  }
  iVar1 = crt_unknown_c_FUN_00600990();
  if (iVar1 == 0) {
    HStack_18.segment_selector = 0;
    HStack_18.current_block_ptr = (void *)0x0;
    while( true ) {
      iVar1 = crt_heap_c_heapWalk_FUN_006012d0(&HStack_18,g_MainHeap);
      if (iVar1 != 0) break;
      if (HStack_18.allocation_status == 1) {
        iVar1 = crt_unknown_c_FUN_00600a64();
        if (iVar1 != 0) break;
        iStack_8 = iStack_8 - HStack_18.block_size;
      }
    }
    if (iStack_8 == 0) {
      if (iVar1 == 5) {
        (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
        return 3;
      }
      if (iVar1 == 4) {
        iVar1 = 0;
      }
      else if (iVar1 != 0) goto LAB_00600b87;
      DAT_03f9b850 = '\x01';
    }
    else {
      iVar1 = 3;
    }
  }
LAB_00600b87:
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return iVar1;
}


// Assembly code:
// 00600ad0: PUSH EBX
//   Label: crt_unknown.c_FUN_00600ad0
// 00600ad1: SUB ESP,0x14
// 00600ad4: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00684f00 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600ada: CMP byte ptr [0x03f9b850],0x0
//   XREF to: 03f9b850 (READ)
// 00600ae1: JZ 0x00600af0
//   XREF to: 00600af0 (CONDITIONAL_JUMP)
// 00600ae3: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   XREF to: 00684f08 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600ae9: XOR EAX,EAX
// 00600aeb: ADD ESP,0x14
// 00600aee: POP EBX
// 00600aef: RET
// 00600af0: LEA EAX,[ESP + 0x10]
//   Label: LAB_00600af0
// 00600af4: PUSH EAX
// 00600af5: CALL crt_unknown.c_FUN_00600990
//   XREF to: 00600990 (UNCONDITIONAL_CALL)
// 00600afa: MOV EBX,EAX
// 00600afc: ADD ESP,0x4
// 00600aff: TEST EAX,EAX
// 00600b01: JNZ 0x00600b87
//   XREF to: 00600b87 (CONDITIONAL_JUMP)
// 00600b07: XOR EDX,EDX
// 00600b09: MOV dword ptr [ESP],EAX
// 00600b0c: MOV word ptr [ESP + 0x4],DX
// 00600b11: MOV EBX,dword ptr [0x00684ed4]
//   Label: LAB_00600b11
//   XREF to: 00684ed4 (READ)
// 00600b17: PUSH EBX
// 00600b18: LEA EAX,[ESP + 0x4]
// 00600b1c: PUSH EAX
// 00600b1d: CALL crt_heap.c_heapWalk_FUN_006012d0
//   XREF to: 006012d0 (UNCONDITIONAL_CALL)
// 00600b22: ADD ESP,0x8
// 00600b25: MOV EBX,EAX
// 00600b27: TEST EAX,EAX
// 00600b29: JNZ 0x00600b4e
//   XREF to: 00600b4e (CONDITIONAL_JUMP)
// 00600b2b: CMP dword ptr [ESP + 0xa],0x1
// 00600b30: JNZ 0x00600b11
//   XREF to: 00600b11 (CONDITIONAL_JUMP)
// 00600b32: MOV EAX,dword ptr [ESP]
// 00600b35: PUSH EAX
// 00600b36: CALL crt_unknown.c_FUN_00600a64
//   XREF to: 00600a64 (UNCONDITIONAL_CALL)
// 00600b3b: ADD ESP,0x4
// 00600b3e: MOV EBX,EAX
// 00600b40: TEST EAX,EAX
// 00600b42: JNZ 0x00600b4e
//   XREF to: 00600b4e (CONDITIONAL_JUMP)
// 00600b44: MOV EAX,dword ptr [ESP + 0x6]
// 00600b48: SUB dword ptr [ESP + 0x10],EAX
// 00600b4c: JMP 0x00600b11
//   XREF to: 00600b11 (UNCONDITIONAL_JUMP)
// 00600b4e: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_00600b4e
// 00600b53: JZ 0x00600b5c
//   XREF to: 00600b5c (CONDITIONAL_JUMP)
// 00600b55: MOV EBX,0x3
// 00600b5a: JMP 0x00600b87
//   XREF to: 00600b87 (UNCONDITIONAL_JUMP)
// 00600b5c: CMP EBX,0x5
//   Label: LAB_00600b5c
// 00600b5f: JNZ 0x00600b73
//   XREF to: 00600b73 (CONDITIONAL_JUMP)
// 00600b61: MOV EBX,0x3
// 00600b66: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   XREF to: 00684f08 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600b6c: MOV EAX,EBX
// 00600b6e: ADD ESP,0x14
// 00600b71: POP EBX
// 00600b72: RET
// 00600b73: CMP EBX,0x4
//   Label: LAB_00600b73
// 00600b76: JNZ 0x00600b7c
//   XREF to: 00600b7c (CONDITIONAL_JUMP)
// 00600b78: XOR EBX,EBX
// 00600b7a: JMP 0x00600b80
//   XREF to: 00600b80 (UNCONDITIONAL_JUMP)
// 00600b7c: TEST EBX,EBX
//   Label: LAB_00600b7c
// 00600b7e: JNZ 0x00600b87
//   XREF to: 00600b87 (CONDITIONAL_JUMP)
// 00600b80: MOV byte ptr [0x03f9b850],0x1
//   Label: LAB_00600b80
//   XREF to: 03f9b850 (WRITE)
// 00600b87: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_00600b87
//   XREF to: 00684f08 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600b8d: MOV EAX,EBX
// 00600b8f: ADD ESP,0x14
// 00600b92: POP EBX
// 00600b93: RET
