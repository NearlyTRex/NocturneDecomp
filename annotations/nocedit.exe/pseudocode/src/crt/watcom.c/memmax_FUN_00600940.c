// Name: crt_watcom.c_memmax_FUN_00600940
// Address: 00600940
// Address Range: [[00600940, 00600984]]
// Convention: unknown
// Signature: undefined crt_watcom.c_memmax_FUN_00600940()
// Cross-references:
//   shape_design.c_displayMemoryStatus_FUN_0046e6f0 (0046e6f0) at 0046e727 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
// Function calls:
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

uint crt_watcom_c_memmax_FUN_00600940(void)

{
  int *piVar1;
  Heap *pHVar2;
  uint uVar3;
  uint uVar4;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  uVar4 = 0;
  for (pHVar2 = g_MainHeap; pHVar2 != (Heap *)0x0; pHVar2 = pHVar2->next_heap_block) {
    for (piVar1 = (int *)pHVar2[3].heap_base; (Heap **)piVar1 != &pHVar2[2].next_heap_block;
        piVar1 = (int *)piVar1[2]) {
      uVar3 = *piVar1 - 4U & 0xfffffff8;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
    }
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return uVar4;
}


// Assembly code:
// 00600940: PUSH EBX
//   Label: crt_watcom.c_memmax_FUN_00600940
// 00600941: PUSH ESI
// 00600942: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00684f00 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600948: MOV ESI,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 0060094e: XOR EBX,EBX
// 00600950: TEST ESI,ESI
// 00600952: JZ 0x0060097a
//   XREF to: 0060097a (CONDITIONAL_JUMP)
// 00600954: LEA ECX,[ESI + 0x20]
//   Label: LAB_00600954
// 00600957: MOV EAX,dword ptr [ESI + 0x28]
// 0060095a: CMP EAX,ECX
// 0060095c: JZ 0x00600973
//   XREF to: 00600973 (CONDITIONAL_JUMP)
// 0060095e: MOV EDX,dword ptr [EAX]
//   Label: LAB_0060095e
// 00600960: SUB EDX,0x4
// 00600963: AND DL,0xf8
// 00600966: CMP EDX,EBX
// 00600968: JBE 0x0060096c
//   XREF to: 0060096c (CONDITIONAL_JUMP)
// 0060096a: MOV EBX,EDX
// 0060096c: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_0060096c
// 0060096f: CMP EAX,ECX
// 00600971: JNZ 0x0060095e
//   XREF to: 0060095e (CONDITIONAL_JUMP)
// 00600973: MOV ESI,dword ptr [ESI + 0x8]
//   Label: LAB_00600973
// 00600976: TEST ESI,ESI
// 00600978: JNZ 0x00600954
//   XREF to: 00600954 (CONDITIONAL_JUMP)
// 0060097a: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_0060097a
//   XREF to: 00684f08 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600980: MOV EAX,EBX
// 00600982: POP ESI
// 00600983: POP EBX
// 00600984: RET
