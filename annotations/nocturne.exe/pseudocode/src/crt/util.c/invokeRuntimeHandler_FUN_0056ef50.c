// Name: crt_util.c_invokeRuntimeHandler_FUN_0056ef50
// Address: 0056ef50
// Address Range: [[0056ef50, 0056ef5f]]
// Convention: __cdecl
// Signature: void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0056ef50(RUNTIME_HANDLER_FUNC **ppHandler)

#include "nocturne.h"

void __cdecl invokeRuntimeHandler(RUNTIME_HANDLER_FUNC **ppHandler)

{
  if (*ppHandler != (RUNTIME_HANDLER_FUNC *)0x0) {
    (**ppHandler)();
  }
  return;
}
