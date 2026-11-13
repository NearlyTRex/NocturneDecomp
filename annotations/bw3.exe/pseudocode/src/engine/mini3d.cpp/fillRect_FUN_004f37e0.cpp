// Name: engine_mini3d.cpp_fillRect_FUN_004f37e0
// Address: 004f37e0
// Address Range: [[004f37e0, 004f3a44]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillRect_FUN_004f37e0(int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillRect_FUN_004f37e0(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float *vertices;
  float fVar8;
  float10 fVar9;
  
  if ((float)x1 < _DAT_01d76c4c) {
    fVar9 = (float10)_DAT_01d76c4c;
    round();
    x1 = (int)ROUND(fVar9);
  }
  if (_DAT_01d76c54 < (float)x2) {
    fVar9 = (float10)_DAT_01d76c54;
    round();
    x2 = (int)ROUND(fVar9);
  }
  if (x1 <= x2) {
    if ((float)y1 < _DAT_01d76c50) {
      fVar9 = (float10)_DAT_01d76c50;
      round();
      y1 = (int)ROUND(fVar9);
    }
    if (_DAT_01d76c58 < (float)y2) {
      fVar9 = (float10)_DAT_01d76c58;
      round();
      y2 = (int)ROUND(fVar9);
    }
    if (y1 <= y2) {
      fVar8 = engine_mini3d_cpp_nextDepth2D_FUN_004f3af0();
      vertices = _DAT_01d7f4f4;
      fVar7 = _DAT_01d76cc4;
      fVar4 = _DAT_005c8341;
      fVar1 = 1.0 / fVar8;
      fVar5 = (float)x1 * _DAT_01d76cc4 + _DAT_005c8341;
      *_DAT_01d7f4f4 = fVar5;
      vertices[5] = 0.0;
      vertices[6] = 0.5;
      vertices[7] = 0.5;
      fVar4 = (float)y1 * fVar7 + fVar4;
      vertices[0xd] = 0.0;
      vertices[1] = fVar4;
      vertices[2] = fVar8;
      vertices[3] = fVar1;
      vertices[4] = _DAT_01d7a6c4;
      vertices[0xe] = 0.5;
      vertices[0xf] = 0.5;
      vertices[0x15] = 0.0;
      fVar2 = _DAT_005c8345;
      fVar3 = (float)x2 * fVar7 + _DAT_005c8345;
      vertices[0x16] = 0.5;
      vertices[8] = fVar3;
      vertices[9] = fVar4;
      vertices[10] = fVar8;
      vertices[0xb] = fVar1;
      vertices[0xc] = _DAT_01d7a6c4;
      vertices[0x10] = fVar3;
      vertices[0x17] = 0.5;
      vertices[0x1d] = 0.0;
      vertices[0x1e] = 0.5;
      fVar2 = fVar2 + (float)y2 * fVar7;
      vertices[0x1f] = 0.5;
      vertices[0x11] = fVar2;
      vertices[0x12] = fVar8;
      vertices[0x13] = fVar1;
      vertices[0x14] = _DAT_01d7a6c4;
      vertices[0x18] = fVar5;
      vertices[0x19] = fVar2;
      vertices[0x1a] = fVar8;
      vertices[0x1b] = fVar1;
      vertices[0x1c] = _DAT_01d7a6c4;
      engine_mini3d_cpp_useTexture_FUN_004ed980(0x6004c8);
      uVar6 = _DAT_01d76c38;
      _DAT_01d76c38 = 0;
      engine_mini3d_cpp_polyListD3DTL_FUN_004ee5b0(vertices,4,(ushort *)&DAT_006004b8,2);
      _DAT_01d76c38 = uVar6;
      return;
    }
  }
  return;
}
