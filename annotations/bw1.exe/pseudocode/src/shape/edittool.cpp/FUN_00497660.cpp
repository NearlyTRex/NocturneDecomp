// Name: shape_edittool.cpp_FUN_00497660
// Address: 00497660
// Address Range: [[00497660, 0049782c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00497660(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00497660(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int x2;
  int iVar6;
  
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x99c;
    core_main_c_FUN_005030e0("CEditorTools::paintWindow() called but no window was opened!");
  }
  uVar2 = _DAT_01c4f020;
  uVar1 = _DAT_01c4f00c;
  iVar6 = (_DAT_01c3eb5c + -1) * 0x1f8;
  _DAT_01c4f00c = *(uint *)(iVar6 + 0x1c3eb64);
  iVar4 = DAT_0061b49c / 0x60;
  iVar5 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
  iVar4 = *(int *)(iVar6 + 0x1c3eb6c) - ((param_2 + 1) * iVar4 + param_2 * iVar5);
  uVar3 = _DAT_01c3f54c;
  if (_DAT_01c3f544 != 0) {
    iVar5 = (_DAT_01c3f54c & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)(byte)(&DAT_01c4e9fa)[iVar5] |
               (uint)(byte)(&DAT_01c4e9f8)[iVar5] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar5] << 8)
    ;
    uVar3 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar3;
  iVar5 = *(int *)(iVar6 + 0x1c3eb60) + 1;
  x2 = *(int *)(iVar6 + 0x1c3eb68) + -2;
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar5,iVar4,x2);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar5,iVar4,x2);
  }
  if (_DAT_01c3f550 != _DAT_01c3f54c) {
    if (_DAT_01c3f544 == 0) {
      _DAT_01c4f020 = _DAT_01c3f550;
    }
    else {
      iVar5 = (_DAT_01c3f550 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9f9)[iVar5] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar5] << 0x10 | (uint)(byte)(&DAT_01c4e9fa)[iVar5]);
    }
    iVar5 = *(int *)(iVar6 + 0x1c3eb60) + 1;
    iVar6 = *(int *)(iVar6 + 0x1c3eb68) + -2;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar5,iVar4 + -1,iVar6);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar5,iVar4 + -1,iVar6);
    }
  }
  _DAT_01c4f020 = uVar2;
  _DAT_01c4f00c = uVar1;
  return;
}
