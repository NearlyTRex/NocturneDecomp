// Name: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
// Address: 0045f3c0
// Address Range: [[0045f3c0, 0045f458]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = FUN_0052f823;
      }
      _DAT_01c039a4 = 6;
      _DAT_01c039a0 = param_3;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}
