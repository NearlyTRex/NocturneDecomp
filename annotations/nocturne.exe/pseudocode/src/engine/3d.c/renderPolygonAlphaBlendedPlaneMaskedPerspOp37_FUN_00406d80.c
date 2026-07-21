// Name: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80
// Address: 00406d80
// Address Range: [[00406d80, 00406e9a]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c00c78 == 0) {
      if (_DAT_01c03948 == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_005300ec;
        }
        else {
          _DAT_01c00c7c = &LAB_00530322;
        }
      }
      else if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_0052f031;
      }
      else {
        _DAT_01c00c7c = &LAB_0052f823;
      }
      _DAT_01c039a0 = 0x20d;
      _DAT_01c039a4 = 5;
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0
                (*(uint *)(param_1 + 4),param_1 + 0x18);
      return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
    }
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_005300ec;
      }
      else {
        _DAT_01c00c7c = &LAB_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = &LAB_0052f031;
    }
    else {
      _DAT_01c00c7c = &LAB_0052f823;
    }
    _DAT_01c039a0 = 0xd;
    _DAT_01c039a4 = 5;
    FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
