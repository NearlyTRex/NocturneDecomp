// Name: engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0
// Address: 004f27a0
// Address Range: [[004f27a0, 004f2a0f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0(float *v0,float *v1,float *v2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_20;
  
  fVar1 = (v1[6] - v0[6]) * (v2[5] - v1[5]);
  fVar2 = (v1[5] - v0[5]) * (v2[6] - v1[6]);
  if (_DAT_01d76cf8 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  _DAT_01d80d48 = 0x4b0;
  _DAT_01d80d4c = 0;
  _DAT_01d80844 = 0;
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v0,v1);
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v1,v2);
  engine_mini3d_cpp_setupSurfaceEdge_FUN_004f2610(v2,v0);
  piVar3 = (int *)&DAT_01d80848;
  iVar7 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((_DAT_01d80d48 == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_004f2882;
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0x14;
    } while (iVar7 < _DAT_01d80844);
  }
  piVar3 = (int *)0x0;
LAB_004f2882:
  if (piVar3 != (int *)0x0) {
    iVar7 = 0;
    piVar4 = (int *)&DAT_01d80848;
    if (0 < _DAT_01d80844) {
      do {
        if ((_DAT_01d80d48 == *piVar4) && (piVar4 != piVar3)) goto LAB_004f28b3;
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 0x14;
      } while (iVar7 < _DAT_01d80844);
    }
    piVar4 = (int *)0x0;
LAB_004f28b3:
    if (piVar4 != (int *)0x0) {
      local_20 = _DAT_01d80d48;
      do {
        if (piVar3[1] <= local_20) {
          *piVar3 = -1;
          iVar7 = 0;
          piVar3 = (int *)&DAT_01d80848;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_20 == *piVar3) && (piVar3 != piVar4)) goto LAB_004f28f8;
              iVar7 = iVar7 + 1;
              piVar3 = piVar3 + 0x14;
            } while (iVar7 < _DAT_01d80844);
          }
          piVar3 = (int *)0x0;
LAB_004f28f8:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        if (piVar4[1] <= local_20) {
          *piVar4 = -1;
          iVar7 = 0;
          piVar4 = (int *)&DAT_01d80848;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_20 == *piVar4) && (piVar4 != piVar3)) goto LAB_004f2935;
              iVar7 = iVar7 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar7 < _DAT_01d80844);
          }
          piVar4 = (int *)0x0;
LAB_004f2935:
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        iVar7 = piVar3[2];
        iVar6 = piVar4[2];
        iVar5 = iVar7;
        if (iVar6 < iVar7) {
          iVar5 = iVar6;
          iVar6 = iVar7;
        }
        iVar5 = iVar5 >> 0x10;
        puVar8 = (uint *)(*(int *)(&DAT_01c5faec + local_20 * 4) + iVar5 * 4);
        for (; iVar5 < iVar6 >> 0x10; iVar5 = iVar5 + 1) {
          *puVar8 = 0x80000000;
          puVar8 = puVar8 + 1;
        }
        piVar3[2] = piVar3[2] + piVar3[3];
        local_20 = local_20 + 1;
        piVar4[2] = piVar4[2] + piVar4[3];
      } while( true );
    }
  }
  return;
}
