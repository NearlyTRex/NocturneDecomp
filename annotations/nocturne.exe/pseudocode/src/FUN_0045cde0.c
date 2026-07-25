// Name: FUN_0045cde0
// Address: 0045cde0
// Address Range: [[0045cde0, 0045cfc2]]
// Convention: unknown
// Signature: void FUN_0045cde0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cde0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  uint uVar7;
  
  iVar2 = param_4;
  iVar3 = param_1;
  if (_DAT_01bd1d84 != _DAT_01b4d48c) {
    _DAT_01b4d484 = (float)_DAT_01bd1d80 * (float)1.52587890625e-05 + _DAT_01b4d484;
    _DAT_01b4d48c = _DAT_01bd1d84;
    if (DAT_005ae6f8 < _DAT_01b4d484) {
      _DAT_01b4d488 = _DAT_01b4d484 / DAT_005ae6f8 + _DAT_01b4d488;
      if ((float)(DAT_005ae6f4 * 2) < _DAT_01b4d488) {
        _DAT_01b4d488 = 0.0;
      }
      _DAT_01b4d484 = 0.0;
    }
  }
  uVar7 = 0x45ce14;
  fVar6 = (float10)round((float10)_DAT_01b4d488);
  iVar4 = (int)ROUND(fVar6);
  iVar5 = param_4;
  if (param_4 < param_2) {
    param_1 = param_4;
    iVar5 = param_2;
  }
  iVar1 = param_1;
  if (param_4 < param_3) {
    param_4 = param_3;
    param_3 = iVar2;
  }
  for (; iVar2 = param_3, iVar1 < iVar5; iVar1 = iVar1 + 1) {
    if (iVar4 % (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(iVar3,iVar1,param_3,uVar7);
    }
    iVar4 = iVar4 + 1;
  }
  for (; iVar2 < param_4; iVar2 = iVar2 + 1) {
    if (iVar4 % (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(iVar3,iVar5,iVar2,uVar7);
    }
    iVar4 = iVar4 + 1;
  }
  for (; param_1 < iVar5; iVar5 = iVar5 + -1) {
    if (iVar4 % (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(iVar3,iVar5,param_4,uVar7);
    }
    iVar4 = iVar4 + 1;
  }
  for (; param_3 < param_4; param_4 = param_4 + -1) {
    if (iVar4 % (DAT_005ae6f4 * 2) < DAT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(iVar3,param_1,param_4);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}
