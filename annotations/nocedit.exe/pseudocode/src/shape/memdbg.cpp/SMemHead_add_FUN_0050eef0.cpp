// Name: shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
// Address: 0050eef0
// Address Range: [[0050eef0, 0050ef1b]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)
// Cross-references:
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f428 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f31c [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f685 [UNCONDITIONAL_CALL]
// Globals:
//   SMemHead* g_MemoryListHead

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(SMemHead *header)

{
  SMemHead *pSVar1;
  
  pSVar1 = g_MemoryListHead;
  header->prev = (SMemHead *)0x0;
  if (g_MemoryListHead == (SMemHead *)0x0) {
    g_MemoryListHead = header;
    header->next = (SMemHead *)0x0;
    return;
  }
  g_MemoryListHead->prev = header;
  g_MemoryListHead = header;
  header->next = pSVar1;
  return;
}


// Assembly code:
// 0050eef0: MOV ECX,dword ptr [0x02f0d938]
//   Label: shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   XREF to: 02f0d938 (READ)
// 0050eef6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0050eefa: MOV dword ptr [EAX],0x0
// 0050ef00: TEST ECX,ECX
// 0050ef02: JNZ 0x0050ef0f
//   XREF to: 0050ef0f (CONDITIONAL_JUMP)
// 0050ef04: MOV [0x02f0d938],EAX
//   XREF to: 02f0d938 (WRITE)
// 0050ef09: MOV dword ptr [EAX + 0x4],ECX
// 0050ef0c: MOV ECX,EAX
// 0050ef0e: RET
// 0050ef0f: MOV dword ptr [ECX],EAX
//   Label: LAB_0050ef0f
// 0050ef11: MOV [0x02f0d938],EAX
//   XREF to: 02f0d938 (WRITE)
// 0050ef16: MOV dword ptr [EAX + 0x4],ECX
// 0050ef19: MOV ECX,EAX
// 0050ef1b: RET
