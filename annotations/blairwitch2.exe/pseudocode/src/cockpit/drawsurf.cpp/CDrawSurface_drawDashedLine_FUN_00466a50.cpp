// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00466a50
// Address: 00466a50
// Address Range: [[00466a50, 00466c5d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00466a50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00466a50(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int y;
  int iVar1;
  int iVar2;
  int x;
  int iVar3;
  int iVar4;
  double dVar5;
  CDrawSurface *unaff_retaddr;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_1c;
  
  if (g_INT_01c2a374 != g_INT_01ba5998) {
    g_FLOAT_01ba5990 = (float)g_INT_01c2a370 * 1.525879e-05f + g_FLOAT_01ba5990;
    g_INT_01ba5998 = g_INT_01c2a374;
    if (g_FLOAT_0060b274 < g_FLOAT_01ba5990) {
      g_FLOAT_01ba5994 = g_FLOAT_01ba5990 / g_FLOAT_0060b274 + g_FLOAT_01ba5994;
      if ((float)(g_INT_0060b270 * 2) < g_FLOAT_01ba5994) {
        g_FLOAT_01ba5994 = 0.0;
      }
      g_FLOAT_01ba5990 = 0.0;
    }
  }
  dVar5 = round((double)g_FLOAT_01ba5994);
  uStack_1c = (uint)ROUND(dVar5);
  iStack_2c = 1;
  iVar2 = x1 - this_ptr->x;
  iVar3 = x2 - this_ptr->x;
  iVar4 = y1 - this_ptr->y;
  y = y2 - this_ptr->y;
  iStack_30 = 1;
  iVar1 = iVar4;
  x = iVar3;
  if (iVar4 <= y) {
    iStack_30 = -1;
    iVar1 = y;
    x = iVar2;
    iVar2 = iVar3;
    y = iVar4;
  }
  iVar1 = iVar1 - y;
  iVar2 = iVar2 - x;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iStack_2c = -1;
  }
  if (iVar1 < iVar2) {
    iStack_24 = 0;
    iVar3 = iVar1 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (g_INT_0060b270 * 2) < g_INT_0060b270) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(unaff_retaddr,x,y);
        }
        if (0 < iVar3) {
          y = y + 1;
          iVar3 = iVar3 - iVar2;
        }
        uStack_1c = uStack_1c + iStack_30;
        x = x + iStack_2c;
        iStack_24 = iStack_24 + 1;
        iVar3 = iVar3 + iVar1;
      } while (iStack_24 <= iVar2);
    }
  }
  else {
    iStack_28 = 0;
    iVar3 = iVar2 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (g_INT_0060b270 * 2) < g_INT_0060b270) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(unaff_retaddr,x,y);
        }
        if (0 < iVar3) {
          iVar3 = iVar3 - iVar1;
          x = x + iStack_2c;
        }
        y = y + 1;
        iVar3 = iVar3 + iVar2;
        uStack_1c = uStack_1c + iStack_30;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 <= iVar1);
    }
  }
  return;
}
