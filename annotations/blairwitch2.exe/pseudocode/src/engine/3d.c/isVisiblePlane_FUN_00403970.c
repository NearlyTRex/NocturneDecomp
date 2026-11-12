// Name: engine_3d.c_isVisiblePlane_FUN_00403970
// Address: 00403970
// Address Range: [[00403970, 004039da]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_isVisiblePlane_FUN_00403970(SClipPlane *plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_isVisiblePlane_FUN_00403970(SClipPlane *plane)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  DAT_0070ca68 = DAT_0070ca68 + 1;
  iVar4 = 1;
  if (((DAT_0070ca7c == 0) &&
      ((((plane->A).i != 0 || (plane->B).i != 0) || (plane->C).i != 0) || (plane->D).i != 0)) &&
     (lVar3 = (longlong)(plane->B).i * (longlong)_DAT_01c38b70 +
              (longlong)(plane->A).i * (longlong)_DAT_01c38b6c +
              (longlong)(plane->C).i * (longlong)_DAT_01c38b74,
     iVar5 = (int)((ulonglong)lVar3 >> 0x20), iVar6 = (plane->D).i >> 0x1f,
     uVar1 = (uint)((uint)(plane->D).i < (uint)lVar3), iVar2 = iVar6 - iVar5, iVar4 = 1,
     (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    iVar4 = 0;
  }
  return iVar4;
}
