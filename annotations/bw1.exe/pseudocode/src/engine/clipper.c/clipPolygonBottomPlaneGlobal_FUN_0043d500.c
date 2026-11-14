// Name: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043d500
// Address: 0043d500
// Address Range: [[0043d500, 0043d567] [0043d592, 0043d5b1]]
// Convention: unknown
// Signature: byte engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043d500(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043d500(void)

{
  byte in_AL;
  byte extraout_AL;
  byte extraout_AL_00;
  uint uVar1;
  int iVar2;
  SRenderVertex *v1;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int iStack_14;
  
  bVar5 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007c842c) {
    v1 = (SRenderVertex *)&DAT_007c9630;
    do {
      uVar1 = iStack_14 + 1;
      if (uVar1 == DAT_007c842c) {
        uVar1 = uVar1 ^ DAT_007c842c;
      }
      in_AL = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if ((int)(&DAT_007c9634)[uVar1 * 0xc] <= (int)-(&DAT_007c9638)[uVar1 * 0xc]) {
        in_AL = in_AL | 2;
      }
      switch(in_AL) {
      case 0:
        in_AL = 0x30;
        pSVar3 = v1;
        piVar4 = &DAT_007c7558 + DAT_007c7554 * 0xc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)piVar4 = (char)(pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -2 + 1);
          piVar4 = (int *)((int)piVar4 + (uint)bVar5 * -2 + 1);
        }
        DAT_007c7554 = DAT_007c7554 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                  ((SRenderVertex *)(&DAT_007c9630 + uVar1 * 0xc),v1,
                   (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
        DAT_007c7554 = DAT_007c7554 + 1;
        in_AL = extraout_AL;
        break;
      case 2:
        pSVar3 = v1;
        piVar4 = &DAT_007c7558 + DAT_007c7554 * 0xc;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)piVar4 = (char)(pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -2 + 1);
          piVar4 = (int *)((int)piVar4 + (uint)bVar5 * -2 + 1);
        }
        DAT_007c7554 = DAT_007c7554 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                  (v1,(SRenderVertex *)(&DAT_007c9630 + uVar1 * 0xc),
                   (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
        DAT_007c7554 = DAT_007c7554 + 1;
        in_AL = extraout_AL_00;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007c842c);
  }
  return in_AL;
}
