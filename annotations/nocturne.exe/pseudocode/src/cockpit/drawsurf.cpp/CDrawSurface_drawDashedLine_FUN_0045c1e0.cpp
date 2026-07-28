// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
// Address: 0045c1e0
// Address Range: [[0045c1e0, 0045c3f7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

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
  
  if (_DAT_01bd1d84 != _DAT_01b4d480) {
    _DAT_01b4d478 = (float)_DAT_01bd1d80 * (float)1.52587890625e-05 + _DAT_01b4d478;
    _DAT_01b4d480 = _DAT_01bd1d84;
    if (DAT_005ae6f8 < _DAT_01b4d478) {
      _DAT_01b4d47c = _DAT_01b4d478 / DAT_005ae6f8 + _DAT_01b4d47c;
      if ((float)(DAT_005ae6f4 * 2) < _DAT_01b4d47c) {
        _DAT_01b4d47c = 0.0;
      }
      _DAT_01b4d478 = 0.0;
    }
  }
  dVar5 = round((double)_DAT_01b4d47c);
  uStack_1c = (uint)ROUND(dVar5);
  iStack_2c = 1;
  iVar4 = x1 - this_ptr->x;
  x = x2 - this_ptr->x;
  iVar2 = y1 - this_ptr->y;
  y = y2 - this_ptr->y;
  iStack_30 = 1;
  iVar1 = iVar2;
  iVar3 = iVar4;
  if (iVar2 <= y) {
    iStack_30 = -1;
    iVar1 = y;
    y = iVar2;
    iVar3 = x;
    x = iVar4;
  }
  iVar1 = iVar1 - y;
  iVar3 = iVar3 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    iStack_2c = -1;
  }
  if (iVar1 < iVar3) {
    iStack_24 = 0;
    iVar2 = iVar1 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(unaff_retaddr,x,y);
        }
        if (0 < iVar2) {
          y = y + 1;
          iVar2 = iVar2 - iVar3;
        }
        uStack_1c = uStack_1c + iStack_30;
        x = x + iStack_2c;
        iStack_24 = iStack_24 + 1;
        iVar2 = iVar2 + iVar1;
      } while (iStack_24 <= iVar3);
    }
  }
  else {
    iStack_28 = 0;
    iVar2 = iVar3 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(unaff_retaddr,x,y);
        }
        if (0 < iVar2) {
          iVar2 = iVar2 - iVar1;
          x = x + iStack_2c;
        }
        y = y + 1;
        iVar2 = iVar2 + iVar3;
        uStack_1c = uStack_1c + iStack_30;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 <= iVar1);
    }
  }
  return;
}
