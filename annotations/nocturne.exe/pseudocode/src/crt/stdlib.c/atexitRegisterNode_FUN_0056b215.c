// Name: crt_stdlib.c_atexitRegisterNode_FUN_0056b215
// Address: 0056b215
// Address Range: [[0056b215, 0056b226]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c_atexitRegisterNode_FUN_0056b215(WatcomStaticDestructorNode *node_ptr)

#include "nocturne.h"

void __cdecl atexitRegisterNode(WatcomStaticDestructorNode *node_ptr)

{
  node_ptr->next = DAT_005c1f50;
  DAT_005c1f50 = node_ptr;
  return;
}
