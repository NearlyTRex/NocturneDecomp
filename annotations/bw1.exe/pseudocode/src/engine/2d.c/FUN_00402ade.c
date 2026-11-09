// Name: engine_2d.c_FUN_00402ade
// Address: 00402ade
// Address Range: [[00402ade, 00402c5d]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402ade(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_00402ade(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((0 < param_3) && (param_1 <= param_3)) && (-param_3 <= param_1)) &&
     ((param_2 <= param_3 && (-param_3 <= param_2)))) {
    if (DAT_0061b49c < 400) {
      if (DAT_0061b49c != 200) {
LAB_00402c36:
        _DAT_01d1d400 = "..\\engine\\2d.c";
        _DAT_01d1d404 = 0x7da;
        core_main_c_FUN_005030e0("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401780(param_1,param_2,param_3);
    }
    else if (DAT_0061b49c < 0x191) {
      iVar2 = (int)(((longlong)param_1 * (longlong)_DAT_01c4eff8) / (longlong)param_3) +
              _DAT_01c4f000 >> 0x10;
      iVar1 = _DAT_01c4f004 +
              (int)(((longlong)param_2 * (longlong)_DAT_01c4effc) / (longlong)param_3) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (DAT_0061b49c != 0x1e0) goto LAB_00402c36;
      iVar2 = (int)(((longlong)param_1 * (longlong)_DAT_01c4eff8) / (longlong)param_3) +
              _DAT_01c4f000 >> 0x10;
      iVar1 = (int)(((longlong)param_2 * (longlong)_DAT_01c4effc) / (longlong)param_3) +
              _DAT_01c4f004 >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
