// Name: engine_special.cpp_isExternalRendererActive_FUN_005b7200
// Address: 005b7200
// Address Range: [[005b7200, 005b7205]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_isExternalRendererActive_FUN_005b7200(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_isExternalRendererActive_FUN_005b7200(void)

{
  return g_LoadedExternalDLLRenderer;
}
