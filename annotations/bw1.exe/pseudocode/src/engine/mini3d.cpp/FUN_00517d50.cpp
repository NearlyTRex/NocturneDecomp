// Name: engine_mini3d.cpp_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517dd4]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00517d50(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00517d50(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)_DAT_01d224c0 * (float10)_DAT_005e9037;
  fVar3 = (float10)_DAT_005e9033;
  fVar4 = (float10)(param_1 >> 0x10 & 0xff) * fVar3;
  fVar5 = (float10)(param_1 >> 8 & 0xff) * fVar3;
  fVar3 = (float10)(param_1 & 0xff) * fVar3;
  uVar1 = round();
  _DAT_01d25f38 = (float)fVar4;
  _DAT_01d25f3c = (float)fVar5;
  _DAT_01d25f40 = (float)fVar3;
  _DAT_01d25f44 = uVar1 & 0xffffff | (int)ROUND(fVar2) << 0x18;
  return;
}
