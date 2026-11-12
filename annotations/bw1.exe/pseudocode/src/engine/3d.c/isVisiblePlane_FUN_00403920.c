// Name: engine_3d.c_isVisiblePlane_FUN_00403920
// Address: 00403920
// Address Range: [[00403920, 0040398a]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_isVisiblePlane_FUN_00403920(SClipPlane *plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_isVisiblePlane_FUN_00403920(SClipPlane *plane)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  DAT_00713a68 = DAT_00713a68 + 1;
  iVar4 = 1;
  if (((DAT_00713a7c == 0) &&
      ((((plane->A).i != 0 || (plane->B).i != 0) || (plane->C).i != 0) || (plane->D).i != 0)) &&
     (lVar3 = (longlong)(plane->B).i * (longlong)_DAT_01c51d30 +
              (longlong)(plane->A).i * (longlong)_DAT_01c51d2c +
              (longlong)(plane->C).i * (longlong)_DAT_01c51d34,
     iVar5 = (int)((ulonglong)lVar3 >> 0x20), iVar6 = (plane->D).i >> 0x1f,
     uVar1 = (uint)((uint)(plane->D).i < (uint)lVar3), iVar2 = iVar6 - iVar5, iVar4 = 1,
     (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    iVar4 = 0;
  }
  return iVar4;
}
