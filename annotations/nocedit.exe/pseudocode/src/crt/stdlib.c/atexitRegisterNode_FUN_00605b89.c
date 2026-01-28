// Name: crt_stdlib.c_atexitRegisterNode_FUN_00605b89
// Address: 00605b89
// Address Range: [[00605b89, 00605b9a]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode *node_ptr)

#include "nocturne.h"

void __cdecl crt_stdlib_c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode *node_ptr)

{
  node_ptr->next = g_AtexitListHead;
  g_AtexitListHead = node_ptr;
  return;
}
