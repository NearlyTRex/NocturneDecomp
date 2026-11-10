// Name: engine_clipper.c_clipPolygonLeftPlane_FUN_0043971e
// Address: 0043971e
// Address Range: [[0043971e, 0043984b]]
// Convention: unknown
// Signature: int engine_clipper_c_clipPolygonLeftPlane_FUN_0043971e(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_clipper_c_clipPolygonLeftPlane_FUN_0043971e(uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_18;
  uint *puStack_14;
  
  iVar4 = 0;
  iStack_18 = 0;
  if (0 < param_3) {
    puStack_14 = param_1;
    piVar5 = (int *)param_1[param_3 + -1];
    do {
      iVar3 = DAT_007e4d50;
      piVar1 = (int *)*puStack_14;
      bVar2 = *piVar5 <= -piVar5[2];
      if (*piVar1 <= -piVar1[2]) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = iVar4 + 1;
        *(int **)(param_2 + -4 + iVar4 * 4) = piVar5;
        break;
      case 1:
        if (0xb < DAT_007e4d50) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar3 = DAT_007e4d50 * 0x30;
        iVar4 = iVar4 + 1;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007e4b10 + iVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(piVar1,piVar5,&DAT_007e4b10 + iVar3)
        ;
        break;
      case 2:
        *(int **)(param_2 + -4 + (iVar4 + 1) * 4) = piVar5;
        if (0xb < iVar3) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar3 = DAT_007e4d50 * 0x30;
        iVar4 = iVar4 + 2;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007e4b10 + iVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(piVar5,piVar1,&DAT_007e4b10 + iVar3)
        ;
      }
      puStack_14 = puStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      piVar5 = piVar1;
    } while (iStack_18 < param_3);
  }
  return iVar4;
}
