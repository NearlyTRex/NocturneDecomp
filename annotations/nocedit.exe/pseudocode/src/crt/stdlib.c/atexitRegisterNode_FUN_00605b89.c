// Name: crt_stdlib.c_atexitRegisterNode_FUN_00605b89
// Address: 00605b89
// Address Range: [[00605b89, 00605b9a]]
// Convention: __cdecl
// Signature: void crt_stdlib.c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode * node_ptr)
// Cross-references:
//   crt_stdlib.c_atexit_FUN_005ff060 (005ff060) at 005ff065 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomStaticDestructorNode* g_AtexitListHead = 00000000

#include "nocturne.h"

void __cdecl crt_stdlib_c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode *node_ptr)

{
  node_ptr->next = g_AtexitListHead;
  g_AtexitListHead = node_ptr;
  return;
}


// Assembly code:
// 00605b89: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_stdlib.c_atexitRegisterNode_FUN_00605b89
//   XREF to: Stack[0x4] (READ)
// 00605b8d: MOV EAX,[0x0068527c]
//   XREF to: 0068527c (READ)
// 00605b92: MOV dword ptr [EDX],EAX
// 00605b94: MOV dword ptr [0x0068527c],EDX
//   XREF to: 0068527c (WRITE)
// 00605b9a: RET
