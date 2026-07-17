// Name: dll_dx7.cpp_setRenderStateCached_FUN_100037e0
// Address: 100037e0
// Address Range: [[100037e0, 10003824]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_setRenderStateCached_FUN_100037e0(uint render_state,DWORD value)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_setRenderStateCached_FUN_100037e0(uint render_state,DWORD value)

{
  uint uVar1;
  
  uVar1 = render_state & 0xff;
  if ((g_RenderStateKeyCache[uVar1] != render_state) || (g_RenderStateValueCache[uVar1] != value)) {
    g_RenderStateKeyCache[uVar1] = render_state;
    g_RenderStateValueCache[uVar1] = value;
    dll_dx7_cpp_flushBatch_FUN_100047b0();
    (*g_Device->vtable->SetRenderState)(g_Device,render_state,value);
  }
  return;
}
