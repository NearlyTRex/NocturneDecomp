// Name: dll_dx7.cpp_FUN_10002d50
// Address: 10002d50
// Address Range: [[10002d50, 10002d8c]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10002d50(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10002d50(void)

{
  *g_ExternalRendererBridge.current_alpha = 0;
  *g_ExternalRendererBridge.blend_mode = 1;
  dll_dx7_cpp_FUN_10003f10(0x226);
  *g_ExternalRendererBridge.current_alpha = 0xff;
  *g_ExternalRendererBridge.blend_mode = 0;
  return;
}
