// Name: crt_watcom.c_memavl_FUN_006008f0
// Address: 006008f0
// Address Range: [[006008f0, 00600930]]
// Convention: __watcallRegister
// Signature: uint crt_watcom.c_memavl_FUN_006008f0(void)
// Cross-references:
//   shape_design.c_displayMemoryStatus_FUN_0046e6f0 (0046e6f0) at 0046e6fc [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
// Function calls:
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

uint crt_watcom_c_memavl_FUN_006008f0(void)

{
  int *piVar1;
  Heap *pHVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  uVar3 = 0;
  for (pHVar2 = g_MainHeap; pHVar2 != (Heap *)0x0; pHVar2 = pHVar2->next_heap_block) {
    for (piVar1 = (int *)pHVar2[3].heap_base; (Heap **)piVar1 != &pHVar2[2].next_heap_block;
        piVar1 = (int *)piVar1[2]) {
      uVar3 = uVar3 + (*piVar1 - 4U & 0xfffffff8);
    }
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return uVar3;
}


// Assembly code:
// 006008f0: PUSH EBX
//   Label: crt_watcom.c_memavl_FUN_006008f0
// 006008f1: PUSH ESI
// 006008f2: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00684f00 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 006008f8: MOV ESI,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 006008fe: XOR EBX,EBX
// 00600900: TEST ESI,ESI
// 00600902: JZ 0x00600926
//   XREF to: 00600926 (CONDITIONAL_JUMP)
// 00600904: LEA ECX,[ESI + 0x20]
//   Label: LAB_00600904
// 00600907: MOV EAX,dword ptr [ESI + 0x28]
// 0060090a: CMP EAX,ECX
// 0060090c: JZ 0x0060091f
//   XREF to: 0060091f (CONDITIONAL_JUMP)
// 0060090e: MOV EDX,dword ptr [EAX]
//   Label: LAB_0060090e
// 00600910: SUB EDX,0x4
// 00600913: AND DL,0xf8
// 00600916: MOV EAX,dword ptr [EAX + 0x8]
// 00600919: ADD EBX,EDX
// 0060091b: CMP EAX,ECX
// 0060091d: JNZ 0x0060090e
//   XREF to: 0060090e (CONDITIONAL_JUMP)
// 0060091f: MOV ESI,dword ptr [ESI + 0x8]
//   Label: LAB_0060091f
// 00600922: TEST ESI,ESI
// 00600924: JNZ 0x00600904
//   XREF to: 00600904 (CONDITIONAL_JUMP)
// 00600926: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_00600926
//   XREF to: 00684f08 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 0060092c: MOV EAX,EBX
// 0060092e: POP ESI
// 0060092f: POP EBX
// 00600930: RET
