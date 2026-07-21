// Name: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
// Address: 0045bab0
// Address Range: [[0045bab0, 0045bc1d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  if ((((param_2 < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x18) < param_2)) ||
      (param_3 < *(int *)(param_1 + 0x14))) || (*(int *)(param_1 + 0x1c) < param_3)) {
    return;
  }
  iVar2 = param_2 * 2;
  param_3 = param_3 * 4;
  iVar1 = param_2 * 4;
  if (_DAT_01b4d71c == 0) {
    if (DAT_005b7624 < 0x10) {
      if (DAT_005b7624 == 8) {
        *(byte *)(param_2 + *(int *)(&DAT_01bd2fa0 + param_3)) = DAT_01b4d710;
        return;
      }
    }
    else {
      if (DAT_005b7624 < 0x11) {
        *(ushort *)(iVar2 + *(int *)(&DAT_01bd2fa0 + param_3)) = _DAT_01b4d710;
        return;
      }
      if (DAT_005b7624 == 0x20) {
        *(uint *)(iVar1 + *(int *)(&DAT_01bd2fa0 + param_3)) = _DAT_01b4d710;
        return;
      }
    }
    _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01cc4804 = 0x18d;
    FUN_004c8440("Invalid bitsPerPixel!");
    return;
  }
  if (DAT_005b7624 < 0x10) {
    if (DAT_005b7624 == 8) {
      *(byte *)(param_2 + *(int *)(&DAT_01bd2fa0 + param_3)) =
           *(byte *)(*(byte *)(param_2 + *(int *)(&DAT_01bd2fa0 + param_3)) + 0x1bf5d20);
      return;
    }
  }
  else {
    if (DAT_005b7624 < 0x11) {
      *(ushort *)(iVar2 + *(int *)(&DAT_01bd2fa0 + param_3)) =
           *(ushort *)(iVar2 + *(int *)(&DAT_01bd2fa0 + param_3)) >> (DAT_01b4d720 & 0x1f) &
           (ushort)_DAT_01b4d730;
      return;
    }
    if (DAT_005b7624 == 0x20) {
      *(uint *)(*(int *)(&DAT_01bd2fa0 + param_3) + iVar1) =
           *(uint *)(*(int *)(&DAT_01bd2fa0 + param_3) + iVar1) >> (DAT_01b4d720 & 0x1f) &
           _DAT_01b4d730;
      return;
    }
  }
  _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
  _DAT_01cc4804 = 0x19e;
  FUN_004c8440("Invalid bitsPerPixel!");
  return;
}
