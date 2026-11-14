// Name: engine_mini3d.cpp_fillRect_FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f9320]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillRect_FUN_004f90d0(int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillRect_FUN_004f90d0(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *vertices;
  float fVar7;
  float10 fVar8;
  
  if ((float)x1 < _DAT_01d0986c) {
    fVar8 = (float10)_DAT_01d0986c;
    round();
    x1 = (int)ROUND(fVar8);
  }
  if (_DAT_01d09874 < (float)x2) {
    fVar8 = (float10)_DAT_01d09874;
    round();
    x2 = (int)ROUND(fVar8);
  }
  if (x1 <= x2) {
    if ((float)y1 < _DAT_01d09870) {
      fVar8 = (float10)_DAT_01d09870;
      round();
      y1 = (int)ROUND(fVar8);
    }
    if (_DAT_01d09878 < (float)y2) {
      fVar8 = (float10)_DAT_01d09878;
      round();
      y2 = (int)ROUND(fVar8);
    }
    if (y1 <= y2) {
      fVar7 = engine_mini3d_cpp_nextDepth2D_FUN_004f93d0();
      vertices = _DAT_01d12114;
      fVar1 = 1.0 / fVar7;
      _DAT_01d12114[5] = 0.0;
      vertices[6] = 0.5;
      fVar4 = _DAT_005ddff8;
      fVar2 = (float)x1 + _DAT_005ddff8;
      vertices[7] = 0.5;
      *vertices = fVar2;
      vertices[0xd] = 0.0;
      vertices[0xe] = 0.5;
      vertices[0xf] = 0.5;
      vertices[1] = (float)y1 + fVar4;
      vertices[2] = fVar7;
      vertices[3] = fVar1;
      vertices[4] = _DAT_01d0d2e4;
      vertices[0x15] = 0.0;
      vertices[0x16] = 0.5;
      fVar5 = _DAT_005ddffc;
      fVar3 = (float)x2 + _DAT_005ddffc;
      vertices[0x17] = 0.5;
      vertices[8] = fVar3;
      vertices[9] = (float)y1 + fVar4;
      vertices[10] = fVar7;
      vertices[0xb] = fVar1;
      vertices[0xc] = _DAT_01d0d2e4;
      vertices[0x10] = fVar3;
      vertices[0x1d] = 0.0;
      vertices[0x1e] = 0.5;
      vertices[0x1f] = 0.5;
      vertices[0x11] = (float)y2 + fVar5;
      vertices[0x12] = fVar7;
      vertices[0x13] = fVar1;
      vertices[0x14] = _DAT_01d0d2e4;
      vertices[0x18] = fVar2;
      vertices[0x19] = (float)y2 + fVar5;
      vertices[0x1a] = fVar7;
      vertices[0x1b] = fVar1;
      vertices[0x1c] = _DAT_01d0d2e4;
      engine_mini3d_cpp_useTexture_FUN_004f3380(0x618100);
      uVar6 = _DAT_01d09858;
      _DAT_01d09858 = 0;
      engine_mini3d_cpp_polyListD3DTL_FUN_004f40a0(vertices,4,(ushort *)&DAT_006180f0,2);
      _DAT_01d09858 = uVar6;
      return;
    }
  }
  return;
}
