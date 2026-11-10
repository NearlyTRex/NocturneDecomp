// Name: engine_clipper.c_clipPolygonBottomPlane_FUN_0043999e
// Address: 0043999e
// Address Range: [[0043999e, 00439acd]]
// Convention: unknown
// Signature: int engine_clipper_c_clipPolygonBottomPlane_FUN_0043999e(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_clipper_c_clipPolygonBottomPlane_FUN_0043999e(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_18;
  int *piStack_14;
  
  iVar4 = 0;
  iStack_18 = 0;
  if (0 < param_3) {
    piStack_14 = param_1;
    iVar5 = param_1[param_3 + -1];
    do {
      iVar3 = DAT_007e4d50;
      iVar1 = *piStack_14;
      bVar2 = *(int *)(iVar5 + 4) <= -*(int *)(iVar5 + 8);
      if (*(int *)(iVar1 + 4) <= -*(int *)(iVar1 + 8)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = iVar4 + 1;
        *(int *)(param_2 + -4 + iVar4 * 4) = iVar5;
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
        engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(iVar1,iVar5,&DAT_007e4b10 + iVar3)
        ;
        break;
      case 2:
        *(int *)(param_2 + -4 + (iVar4 + 1) * 4) = iVar5;
        if (0xb < iVar3) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar3 = DAT_007e4d50 * 0x30;
        iVar4 = iVar4 + 2;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007e4b10 + iVar3;
        engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(iVar5,iVar1,&DAT_007e4b10 + iVar3)
        ;
      }
      piStack_14 = piStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      iVar5 = iVar1;
    } while (iStack_18 < param_3);
  }
  return iVar4;
}
