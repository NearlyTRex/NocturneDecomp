// Name: dll_dx7.cpp_APIDLLkill_FUN_10002460
// Address: 10002460
// Address Range: [[10002460, 100024a6]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_APIDLLkill_FUN_10002460(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_APIDLLkill_FUN_10002460(void)

{
                    /* 0x2460  20  APIDLLkill */
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  if (g_DirectDraw4 != (IDirectDraw4 *)0x0) {
    (*g_DirectDraw4->vtable->Release)((IUnknown *)g_DirectDraw4);
    g_DirectDraw4 = (IDirectDraw4 *)0x0;
  }
  if (g_DirectDraw != (IDirectDraw *)0x0) {
    (*g_DirectDraw->vtable->Release)((IUnknown *)g_DirectDraw);
    g_DirectDraw = (IDirectDraw *)0x0;
  }
  return;
}
