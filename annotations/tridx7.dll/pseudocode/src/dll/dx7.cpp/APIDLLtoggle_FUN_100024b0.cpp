// Name: dll_dx7.cpp_APIDLLtoggle_FUN_100024b0
// Address: 100024b0
// Address Range: [[100024b0, 100024f5]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLtoggle_FUN_100024b0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLtoggle_FUN_100024b0(void)

{
                    /* 0x24b0  34  APIDLLtoggle */
  if ((g_PrimarySurface != (IDirectDrawSurface *)0x0) && (g_FrameLocked == 0)) {
    if (*g_ExternalRendererBridge.frame_buffer_ptr != (void *)0x0) {
      (*g_PrimarySurface->vtable->Flip)(g_PrimarySurface,(IDirectDrawSurface *)0x0,1);
      return 1;
    }
    (*g_PrimarySurface->vtable->Flip)(g_PrimarySurface,(IDirectDrawSurface *)0x0,0);
  }
  return 1;
}
