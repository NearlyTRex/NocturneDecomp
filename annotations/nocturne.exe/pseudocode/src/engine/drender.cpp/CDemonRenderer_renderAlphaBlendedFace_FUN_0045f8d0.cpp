// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0
// Address: 0045f8d0
// Address Range: [[0045f8d0, 0045f9c4]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(int *param_1,ushort *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(int *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if ((param_1[1] == 0) && (param_1[8] == 0)) {
    puVar3 = param_2;
    do {
      uVar2 = *puVar3;
      *(uint *)((uint)uVar2 * 0x30 + 0x18 + *param_1) = (uint)puVar3[3] << 8;
      puVar1 = puVar3 + 6;
      puVar3 = puVar3 + 1;
      *(uint *)((uint)uVar2 * 0x30 + 0x1c + *param_1) = (uint)*puVar1 << 8;
    } while (puVar3 != param_2 + 3);
  }
  _DAT_01b4d76c = (uint)*param_2;
  _DAT_01b4d770 = (uint)param_2[1];
  _DAT_01b4d774 = (uint)param_2[2];
  if (param_1[1] == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a4 = 6;
    _DAT_01c039a0 = 0x2cd;
  }
  else {
    _DAT_01c039a0 = 0;
    _DAT_01c039a4 = 0;
    _DAT_01c00c7c = core_dstrender_cpp_FUN_00463a79;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(param_1,3,&DAT_01b4d76c);
  return;
}
