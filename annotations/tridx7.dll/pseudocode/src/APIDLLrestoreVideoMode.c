// Name: APIDLLrestoreVideoMode
// Address: 10002be0
// Address Range: [[10002be0, 10002c46]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLrestoreVideoMode(void)

#include "nocturne.h"

int __cdecl APIDLLrestoreVideoMode(void)

{
  int iVar1;
  
                    /* 0x2be0  24  APIDLLrestoreVideoMode */
  if (DAT_100141f8 != 0) {
    iVar1 = FUN_10002c50();
    if (iVar1 == 0) {
      FUN_10002340("Cannot unlock back buffer");
    }
  }
  (*g_DirectDraw->vtable->FlipToGDISurface)(g_DirectDraw);
  (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
  (*g_DirectDraw4->vtable->SetCooperativeLevel)(g_DirectDraw4,(char)g_WindowHandle,8);
  FUN_10002370();
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 1);
  return 1;
}
