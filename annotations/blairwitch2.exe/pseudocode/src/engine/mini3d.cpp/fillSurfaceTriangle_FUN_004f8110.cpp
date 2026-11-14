// Name: engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f8110
// Address: 004f8110
// Address Range: [[004f8110, 004f8324]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110(float *v0,float *v1,float *v2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_14;
  
  if ((v2[5] - v1[5]) * (v1[6] - v0[6]) < (v1[5] - v0[5]) * (v2[6] - v1[6])) {
    _DAT_01d17fb8 = 0x4b0;
    _DAT_01d17fbc = 0;
    _DAT_01d17ab4 = 0;
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v0,v1);
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v1,v2);
    engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(v2,v0);
    piVar1 = (int *)&DAT_01d17ab8;
    iVar5 = 0;
    if (0 < _DAT_01d17ab4) {
      do {
        if ((_DAT_01d17fb8 == *piVar1) && (piVar1 != (int *)0x0)) goto LAB_004f81c0;
        iVar5 = iVar5 + 1;
        piVar1 = piVar1 + 0x14;
      } while (iVar5 < _DAT_01d17ab4);
    }
    piVar1 = (int *)0x0;
LAB_004f81c0:
    if (piVar1 != (int *)0x0) {
      iVar5 = 0;
      piVar2 = (int *)&DAT_01d17ab8;
      if (0 < _DAT_01d17ab4) {
        do {
          if ((_DAT_01d17fb8 == *piVar2) && (piVar2 != piVar1)) goto LAB_004f81ed;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 0x14;
        } while (iVar5 < _DAT_01d17ab4);
      }
      piVar2 = (int *)0x0;
LAB_004f81ed:
      if (piVar2 != (int *)0x0) {
        local_14 = _DAT_01d17fb8;
        do {
          if (piVar1[1] <= local_14) {
            *piVar1 = -1;
            iVar5 = 0;
            piVar1 = (int *)&DAT_01d17ab8;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_14 == *piVar1) && (piVar1 != piVar2)) goto LAB_004f8232;
                iVar5 = iVar5 + 1;
                piVar1 = piVar1 + 0x14;
              } while (iVar5 < _DAT_01d17ab4);
            }
            piVar1 = (int *)0x0;
LAB_004f8232:
            if (piVar1 == (int *)0x0) {
              return;
            }
          }
          if (piVar2[1] <= local_14) {
            *piVar2 = -1;
            iVar5 = 0;
            piVar2 = (int *)&DAT_01d17ab8;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_14 == *piVar2) && (piVar2 != piVar1)) goto LAB_004f826f;
                iVar5 = iVar5 + 1;
                piVar2 = piVar2 + 0x14;
              } while (iVar5 < _DAT_01d17ab4);
            }
            piVar2 = (int *)0x0;
LAB_004f826f:
            if (piVar2 == (int *)0x0) {
              return;
            }
          }
          iVar5 = piVar1[2];
          iVar4 = piVar2[2];
          iVar3 = iVar5;
          if (iVar4 < iVar5) {
            iVar3 = iVar4;
            iVar4 = iVar5;
          }
          iVar3 = iVar3 >> 0x10;
          puVar6 = (uint *)(*(int *)(&DAT_01c2a38c + local_14 * 4) + iVar3 * 4);
          for (; iVar3 < iVar4 >> 0x10; iVar3 = iVar3 + 1) {
            *puVar6 = 0x80000000;
            puVar6 = puVar6 + 1;
          }
          piVar1[2] = piVar1[2] + piVar1[3];
          local_14 = local_14 + 1;
          piVar2[2] = piVar2[2] + piVar2[3];
        } while( true );
      }
    }
  }
  return;
}
