// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
// Address: 0045ef90
// Address Range: [[0045ef90, 0045f089]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((param_1[3] == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = 0;
      iVar2 = param_2;
      do {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01b4d76c + iVar1) = iVar4;
        iVar4 = *param_1 + iVar4 * 0x30;
        local_14 = local_14 & *(uint *)(iVar4 + 0x10);
        if ((*(byte *)(iVar4 + 0x13) & 0x80) != 0) {
          local_18 = 1;
        }
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar3 = param_1[4];
      if ((iVar3 != 0) && (param_1[1] != 0)) {
        param_1[4] = local_18;
      }
      if (param_1[1] == 0) {
        _DAT_01c039a0 = 0x90;
        _DAT_01c039a4 = 6;
        _DAT_01c00c7c = FUN_00463c42;
      }
      else {
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = FUN_00463ac7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
      param_1[4] = iVar3;
    }
  }
  return;
}
