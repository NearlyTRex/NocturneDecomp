// Name: engine_2d.c_drawLine3D_FUN_00401710
// Address: 00401710
// Address Range: [[00401710, 00401846]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int x1,int y1,uint z1,int x2,int y2,uint z2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int x1,int y1,uint z1,int x2,int y2,uint z2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_1c;
  int iStack_14;
  
  uVar1 = z2;
  iStack_14 = x2;
  iVar3 = y2;
  if (y2 < y1) {
    uVar1 = z1;
    iStack_14 = x1;
    iVar3 = y1;
    z1 = z2;
    y1 = y2;
    x1 = x2;
  }
  iStack_14 = iStack_14 - x1;
  iVar3 = iVar3 - y1;
  if (iStack_14 < 0) {
    iStack_14 = -iStack_14;
  }
  iVar2 = uVar1 - z1;
  if (iVar3 < iStack_14) {
    iVar4 = iVar3 * 2 - iStack_14;
    if (-1 < iStack_14) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401680(x1,y1,z1);
        if (0 < iVar4) {
          y1 = y1 + 1;
          iVar4 = iVar4 - unaff_ESI;
        }
        x1 = x1 + iVar3;
        iVar4 = iVar4 + unaff_EDI;
        z1 = z1 + iVar2 / (iStack_14 + 1);
        unaff_EBP = unaff_EBP + 1;
      } while (unaff_EBP <= unaff_ESI);
    }
  }
  else {
    iVar2 = iStack_14 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401680(x1,y1,z1);
        if (0 < iVar2) {
          iVar2 = iVar2 - unaff_EDI;
          x1 = x1 + iVar3;
        }
        y1 = y1 + 1;
        iStack_14 = iStack_14 + 1;
        iVar2 = iVar2 + unaff_ESI;
        z1 = z1 + iStack_1c;
      } while (iStack_14 <= unaff_EDI);
    }
  }
  return;
}
