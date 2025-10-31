// Name: crt_heap.c_heapCheckWrapper_FUN_006012c0
// Address: 006012c0
// Address Range: [[006012c0, 006012cd]]
// Convention: __cdecl
// Signature: int crt_heap.c_heapCheckWrapper_FUN_006012c0(void * heap_state_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 (004a2590) at 004a25af [UNCONDITIONAL_CALL]
// Function calls:
//   crt_heap.c_heapCheck_FUN_00601374

#include "nocturne.h"

int __cdecl crt_heap_c_heapCheckWrapper_FUN_006012c0(void *heap_state_ptr)

{
  int iVar1;
  
  iVar1 = crt_heap_c_heapCheck_FUN_00601374(heap_state_ptr);
  return iVar1;
}


// Assembly code:
// 006012c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_heap.c_heapCheckWrapper_FUN_006012c0
//   XREF to: Stack[0x4] (READ)
// 006012c4: PUSH EDX
// 006012c5: CALL crt_heap.c_heapCheck_FUN_00601374
//   XREF to: 00601374 (UNCONDITIONAL_CALL)
// 006012ca: ADD ESP,0x4
// 006012cd: RET
