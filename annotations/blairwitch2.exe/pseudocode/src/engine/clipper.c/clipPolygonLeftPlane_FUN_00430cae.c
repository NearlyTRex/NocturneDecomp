// Name: engine_clipper.c_clipPolygonLeftPlane_FUN_00430cae
// Address: 00430cae
// Address Range: [[00430cae, 00430ddb]]
// Convention: unknown
// Signature: int engine_clipper_c_clipPolygonLeftPlane_FUN_00430cae(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_clipper_c_clipPolygonLeftPlane_FUN_00430cae(uint *param_1,int param_2,int param_3)

{
  SRenderVertex *v2;
  byte bVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *v1;
  int iStack_18;
  uint *puStack_14;
  
  iVar3 = 0;
  iStack_18 = 0;
  if (0 < param_3) {
    puStack_14 = param_1;
    v1 = (SRenderVertex *)param_1[param_3 + -1];
    do {
      iVar2 = DAT_007bfcf8;
      v2 = (SRenderVertex *)*puStack_14;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_x <= -(v2->projected_vertex).transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = iVar3 + 1;
        *(SRenderVertex **)(param_2 + -4 + iVar3 * 4) = v1;
        break;
      case 1:
        if (0xb < DAT_007bfcf8) {
          _DAT_01d046a0 = "..\\engine\\clipper.c";
          _DAT_01d046a4 = 0x5e;
          core_main_c_FUN_004e4500("Ran out of clipped verts!");
        }
        iVar2 = DAT_007bfcf8 * 0x30;
        iVar3 = iVar3 + 1;
        DAT_007bfcf8 = DAT_007bfcf8 + 1;
        *(SRenderVertex **)(param_2 + -4 + iVar3 * 4) = (SRenderVertex *)(&DAT_007bfab8 + iVar2);
        engine_clipper_c_interpolateVertexLeftClip_FUN_00430750
                  (v2,v1,(SRenderVertex *)(&DAT_007bfab8 + iVar2));
        break;
      case 2:
        *(SRenderVertex **)(param_2 + -4 + (iVar3 + 1) * 4) = v1;
        if (0xb < iVar2) {
          _DAT_01d046a0 = "..\\engine\\clipper.c";
          _DAT_01d046a4 = 0x5e;
          core_main_c_FUN_004e4500("Ran out of clipped verts!");
        }
        iVar2 = DAT_007bfcf8 * 0x30;
        iVar3 = iVar3 + 2;
        DAT_007bfcf8 = DAT_007bfcf8 + 1;
        *(SRenderVertex **)(param_2 + -4 + iVar3 * 4) = (SRenderVertex *)(&DAT_007bfab8 + iVar2);
        engine_clipper_c_interpolateVertexLeftClip_FUN_00430750
                  (v1,v2,(SRenderVertex *)(&DAT_007bfab8 + iVar2));
      }
      puStack_14 = puStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      v1 = v2;
    } while (iStack_18 < param_3);
  }
  return iVar3;
}
