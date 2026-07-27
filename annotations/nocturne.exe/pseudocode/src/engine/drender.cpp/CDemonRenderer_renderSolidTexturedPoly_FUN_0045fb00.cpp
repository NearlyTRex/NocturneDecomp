// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
// Address: 0045fb00
// Address Range: [[0045fb00, 0045fbf9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar4 = 0;
      iVar2 = param_2;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        if (param_1[8] == 0) {
          iVar5 = iVar1 * 0x30;
          *(uint *)(*param_1 + iVar5 + 0x18) = *(uint *)(iVar2 + 0x1c);
          *(uint *)(iVar5 + *param_1 + 0x1c) = *(uint *)(iVar2 + 0x20);
        }
        *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (param_1[1] == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a4 = 6;
      _DAT_01c039a0 = 0xc3;
    }
    else {
      _DAT_01c039a0 = 1;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = core_dstrender_cpp_FUN_00463b27;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return;
}
