// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
// Address: 0045f190
// Address Range: [[0045f190, 0045f264]]
// Convention: __cdecl
// Signature: bool __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  _DAT_01b4d764 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8);
    if (iVar2 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    _DAT_01c039a0 = 0xc0;
    _DAT_01c039a4 = 6;
    _DAT_01c00c7c = FUN_00463f77;
  }
  else {
    _DAT_01c039a0 = 0;
    _DAT_01c039a4 = 0;
    _DAT_01c00c7c = FUN_00463ff5;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_01c02594 != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(param_1,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
            (param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  if (_DAT_01c02594 != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(param_1,uVar1);
  }
  return DAT_005ae708 <= _DAT_01b4d764;
}
