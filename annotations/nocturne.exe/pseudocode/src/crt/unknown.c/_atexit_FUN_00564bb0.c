// Name: crt_unknown.c__atexit_FUN_00564bb0
// Address: 00564bb0
// Address Range: [[00564bb0, 00564bbd]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c__atexit_FUN_00564bb0(WatcomStaticDestructorNode *exit_node)

#include "nocturne.h"

void __cdecl _atexit(WatcomStaticDestructorNode *exit_node)

{
  atexitRegisterNode(exit_node);
  return;
}
