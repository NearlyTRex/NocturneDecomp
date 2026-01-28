// Name: crt_util.c_invokeRuntimeHandler_FUN_0060ac20
// Address: 0060ac20
// Address Range: [[0060ac20, 0060ac2f]]
// Convention: __cdecl
// Signature: void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC **ppHandler)

#include "nocturne.h"

void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC **ppHandler)

{
  if (*ppHandler != (RUNTIME_HANDLER_FUNC *)0x0) {
    (**ppHandler)();
  }
  return;
}
