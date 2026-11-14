// Name: engine_clipper.c_clipPolygonLeftPlane_FUN_00439720
// Address: 00439720
// Address Range: [[00439720, 00439774] [0043977a, 0043979f]]
// Convention: unknown
// Signature: int engine_clipper_c_clipPolygonLeftPlane_FUN_00439720(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_clipper_c_clipPolygonLeftPlane_FUN_00439720(void)

{
  SRenderVertex *v2;
  byte bVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *v1;
  uint *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int iStack_18;
  uint *puStack_14;
  
  iVar3 = 0;
  iStack_18 = 0;
  if (0 < in_stack_0000000c) {
    puStack_14 = in_stack_00000004;
    v1 = (SRenderVertex *)in_stack_00000004[in_stack_0000000c + -1];
    do {
      iVar2 = DAT_007e4d50;
      v2 = (SRenderVertex *)*puStack_14;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_x <= -(v2->projected_vertex).transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = iVar3 + 1;
        *(SRenderVertex **)(in_stack_00000008 + -4 + iVar3 * 4) = v1;
        break;
      case 1:
        if (0xb < DAT_007e4d50) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar2 = DAT_007e4d50 * 0x30;
        iVar3 = iVar3 + 1;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        *(SRenderVertex **)(in_stack_00000008 + -4 + iVar3 * 4) =
             (SRenderVertex *)(&DAT_007e4b10 + iVar2);
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0
                  (v2,v1,(SRenderVertex *)(&DAT_007e4b10 + iVar2));
        break;
      case 2:
        *(SRenderVertex **)(in_stack_00000008 + -4 + (iVar3 + 1) * 4) = v1;
        if (0xb < iVar2) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar2 = DAT_007e4d50 * 0x30;
        iVar3 = iVar3 + 2;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        *(SRenderVertex **)(in_stack_00000008 + -4 + iVar3 * 4) =
             (SRenderVertex *)(&DAT_007e4b10 + iVar2);
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0
                  (v1,v2,(SRenderVertex *)(&DAT_007e4b10 + iVar2));
      }
      puStack_14 = puStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      v1 = v2;
    } while (iStack_18 < in_stack_0000000c);
  }
  return iVar3;
}
