// Name: dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0
// Address: 10002be0
// Address Range: [[10002be0, 10002bfc] [10002c00, 10002c46]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLrestoreVideoMode_FUN_10002be0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLrestoreVideoMode_FUN_10002be0(void)

{
  int iVar1;
  
                    /* 0x2be0  24  APIDLLrestoreVideoMode */
  if (g_FrameLocked != 0) {
    iVar1 = dll_dx7_cpp_unlockBackBuffer_FUN_10002c50();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      dll_dx7_cpp_fatalError_FUN_10002340("Cannot unlock back buffer");
    }
  }
  (*g_DirectDraw->vtable->FlipToGDISurface)(g_DirectDraw);
  (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
  (*g_DirectDraw4->vtable->SetCooperativeLevel)(g_DirectDraw4,(char)g_WindowHandle,8);
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 1);
  return 1;
}
