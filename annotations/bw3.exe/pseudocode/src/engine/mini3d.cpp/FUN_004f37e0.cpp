// Name: engine_mini3d.cpp_FUN_004f37e0
// Address: 004f37e0
// Address Range: [[004f37e0, 004f3a44]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f37e0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f37e0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float10 fVar10;
  
  if ((float)param_1 < _DAT_01d76c4c) {
    fVar10 = (float10)_DAT_01d76c4c;
    round();
    param_1 = (int)ROUND(fVar10);
  }
  if (_DAT_01d76c54 < (float)param_3) {
    fVar10 = (float10)_DAT_01d76c54;
    round();
    param_3 = (int)ROUND(fVar10);
  }
  if (param_1 <= param_3) {
    if ((float)param_2 < _DAT_01d76c50) {
      fVar10 = (float10)_DAT_01d76c50;
      round();
      param_2 = (int)ROUND(fVar10);
    }
    if (_DAT_01d76c58 < (float)param_4) {
      fVar10 = (float10)_DAT_01d76c58;
      round();
      param_4 = (int)ROUND(fVar10);
    }
    if (param_2 <= param_4) {
      fVar9 = (float)engine_mini3d_cpp_FUN_004f3af0();
      pfVar8 = _DAT_01d7f4f4;
      fVar7 = _DAT_01d76cc4;
      fVar4 = _DAT_005c8341;
      fVar1 = 1.0 / fVar9;
      fVar5 = (float)param_1 * _DAT_01d76cc4 + _DAT_005c8341;
      *_DAT_01d7f4f4 = fVar5;
      pfVar8[5] = 0.0;
      pfVar8[6] = 0.5;
      pfVar8[7] = 0.5;
      fVar4 = (float)param_2 * fVar7 + fVar4;
      pfVar8[0xd] = 0.0;
      pfVar8[1] = fVar4;
      pfVar8[2] = fVar9;
      pfVar8[3] = fVar1;
      pfVar8[4] = _DAT_01d7a6c4;
      pfVar8[0xe] = 0.5;
      pfVar8[0xf] = 0.5;
      pfVar8[0x15] = 0.0;
      fVar2 = _DAT_005c8345;
      fVar3 = (float)param_3 * fVar7 + _DAT_005c8345;
      pfVar8[0x16] = 0.5;
      pfVar8[8] = fVar3;
      pfVar8[9] = fVar4;
      pfVar8[10] = fVar9;
      pfVar8[0xb] = fVar1;
      pfVar8[0xc] = _DAT_01d7a6c4;
      pfVar8[0x10] = fVar3;
      pfVar8[0x17] = 0.5;
      pfVar8[0x1d] = 0.0;
      pfVar8[0x1e] = 0.5;
      fVar2 = fVar2 + (float)param_4 * fVar7;
      pfVar8[0x1f] = 0.5;
      pfVar8[0x11] = fVar2;
      pfVar8[0x12] = fVar9;
      pfVar8[0x13] = fVar1;
      pfVar8[0x14] = _DAT_01d7a6c4;
      pfVar8[0x18] = fVar5;
      pfVar8[0x19] = fVar2;
      pfVar8[0x1a] = fVar9;
      pfVar8[0x1b] = fVar1;
      pfVar8[0x1c] = _DAT_01d7a6c4;
      engine_mini3d_cpp_FUN_004ed980(&DAT_006004c8);
      uVar6 = _DAT_01d76c38;
      _DAT_01d76c38 = 0;
      engine_mini3d_cpp_FUN_004ee5b0(pfVar8,4,&DAT_006004b8,2);
      _DAT_01d76c38 = uVar6;
      return;
    }
  }
  return;
}
