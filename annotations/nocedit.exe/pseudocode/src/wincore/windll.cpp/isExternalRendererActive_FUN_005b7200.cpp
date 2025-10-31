// Name: wincore_windll.cpp_isExternalRendererActive_FUN_005b7200
// Address: 005b7200
// Address Range: [[005b7200, 005b7205]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_isExternalRendererActive_FUN_005b7200(void)
// Globals:
//   int g_ExternalRendererActive

#include "nocturne.h"

int __cdecl wincore_windll_cpp_isExternalRendererActive_FUN_005b7200(void)

{
  return g_ExternalRendererActive;
}


// Assembly code:
// 005b7200: MOV EAX,[0x03f6b978]
//   Label: wincore_windll.cpp_isExternalRendererActive_FUN_005b7200
//   XREF to: 03f6b978 (READ)
// 005b7205: RET
