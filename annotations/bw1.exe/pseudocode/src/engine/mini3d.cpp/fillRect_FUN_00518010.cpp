// Name: engine_mini3d.cpp_fillRect_FUN_00518010
// Address: 00518010
// Address Range: [[00518010, 00518274]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillRect_FUN_00518010(int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillRect_FUN_00518010(int x1,int y1,int x2,int y2)

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
  
  if ((float)x1 < _DAT_01d224cc) {
    fVar9 = (float10)_DAT_01d224cc;
    round();
    x1 = (int)ROUND(fVar9);
  }
  if (_DAT_01d224d4 < (float)x2) {
    fVar9 = (float10)_DAT_01d224d4;
    round();
    x2 = (int)ROUND(fVar9);
  }
  if (x1 <= x2) {
    if ((float)y1 < _DAT_01d224d0) {
      fVar9 = (float10)_DAT_01d224d0;
      round();
      y1 = (int)ROUND(fVar9);
    }
    if (_DAT_01d224d8 < (float)y2) {
      fVar9 = (float10)_DAT_01d224d8;
      round();
      y2 = (int)ROUND(fVar9);
    }
    if (y1 <= y2) {
      fVar8 = engine_mini3d_cpp_nextDepth2D_FUN_00518320();
      vertices = _DAT_01d2ad74;
      fVar7 = _DAT_01d22544;
      fVar4 = _DAT_005e903f;
      fVar1 = 1.0 / fVar8;
      fVar5 = (float)x1 * _DAT_01d22544 + _DAT_005e903f;
      *_DAT_01d2ad74 = fVar5;
      vertices[5] = 0.0;
      vertices[6] = 0.5;
      vertices[7] = 0.5;
      fVar4 = (float)y1 * fVar7 + fVar4;
      vertices[0xd] = 0.0;
      vertices[1] = fVar4;
      vertices[2] = fVar8;
      vertices[3] = fVar1;
      vertices[4] = _DAT_01d25f44;
      vertices[0xe] = 0.5;
      vertices[0xf] = 0.5;
      vertices[0x15] = 0.0;
      fVar2 = _DAT_005e9043;
      fVar3 = (float)x2 * fVar7 + _DAT_005e9043;
      vertices[0x16] = 0.5;
      vertices[8] = fVar3;
      vertices[9] = fVar4;
      vertices[10] = fVar8;
      vertices[0xb] = fVar1;
      vertices[0xc] = _DAT_01d25f44;
      vertices[0x10] = fVar3;
      vertices[0x17] = 0.5;
      vertices[0x1d] = 0.0;
      vertices[0x1e] = 0.5;
      fVar2 = fVar2 + (float)y2 * fVar7;
      vertices[0x1f] = 0.5;
      vertices[0x11] = fVar2;
      vertices[0x12] = fVar8;
      vertices[0x13] = fVar1;
      vertices[0x14] = _DAT_01d25f44;
      vertices[0x18] = fVar5;
      vertices[0x19] = fVar2;
      vertices[0x1a] = fVar8;
      vertices[0x1b] = fVar1;
      vertices[0x1c] = _DAT_01d25f44;
      engine_mini3d_cpp_useTexture_FUN_005121b0(0x61f5e8);
      uVar6 = _DAT_01d224b8;
      _DAT_01d224b8 = 0;
      engine_mini3d_cpp_polyListD3DTL_FUN_00512de0(vertices,4,(ushort *)&DAT_0061f5d8,2);
      _DAT_01d224b8 = uVar6;
      return;
    }
  }
  return;
}
