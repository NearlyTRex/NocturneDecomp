// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043ad90
// Address: 0043ad90
// Address Range: [[0043ad90, 0043ae5c]]
// Convention: unknown
// Signature: byte engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043ad90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043ad90(void)

{
  byte in_AL;
  byte extraout_AL;
  byte extraout_AL_00;
  uint uVar1;
  int iVar2;
  SRenderVertex *v1;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  int iStack_14;
  
  bVar6 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007e4d54) {
    v1 = (SRenderVertex *)&DAT_007e5364;
    do {
      uVar1 = iStack_14 + 1;
      if (uVar1 == DAT_007e4d54) {
        uVar1 = uVar1 ^ DAT_007e4d54;
      }
      pSVar3 = (SRenderVertex *)(&DAT_007e5364 + uVar1 * 0xc);
      in_AL = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((int)(&DAT_007e536c)[uVar1 * 0xc] <= (pSVar3->projected_vertex).transformed_x) {
        in_AL = in_AL | 2;
      }
      switch(in_AL) {
      case 0:
        in_AL = 0x30;
        pSVar3 = v1;
        piVar5 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)piVar5 = (char)(pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_007e4d58 = DAT_007e4d58 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (pSVar3,v1,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
        DAT_007e4d58 = DAT_007e4d58 + 1;
        in_AL = extraout_AL;
        break;
      case 2:
        pSVar4 = v1;
        piVar5 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_007e4d58 = DAT_007e4d58 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (v1,pSVar3,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
        DAT_007e4d58 = DAT_007e4d58 + 1;
        in_AL = extraout_AL_00;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007e4d54);
  }
  return in_AL;
}
