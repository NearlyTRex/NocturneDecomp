// Name: crt_stdlib.c__atexit_FUN_005ff060
// Address: 005ff060
// Address Range: [[005ff060, 005ff06d]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c__atexit_FUN_005ff060(WatcomStaticDestructorNode *exit_node)

#include "nocturne.h"

void __cdecl _atexit(WatcomStaticDestructorNode *exit_node)

{
  atexitRegisterNode(exit_node);
  return;
}
