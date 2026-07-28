// Name: engine_clipper.c_FUN_00433ef0
// Address: 00433ef0
// Address Range: [[00433ef0, 00433f51]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00433ef0(void)

#include "nocturne.h"

void engine_clipper_c_FUN_00433ef0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < (int)DAT_00767b44) {
    v1 = (SRenderVertex *)&DAT_0076874c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == DAT_00767b44) {
        uVar2 = uVar2 ^ DAT_00767b44;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if ((int)(&DAT_00768754)[uVar2 * 0xc] <= (int)(&DAT_00768750)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_00767b48 = DAT_00767b48 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                  ((SRenderVertex *)(&DAT_0076874c + uVar2 * 0xc),v1,
                   (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
        DAT_00767b48 = DAT_00767b48 + 1;
        break;
      case 2:
        pSVar4 = v1;
        piVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_00767b48 = DAT_00767b48 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                  (v1,(SRenderVertex *)(&DAT_0076874c + uVar2 * 0xc),
                   (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
        DAT_00767b48 = DAT_00767b48 + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < (int)DAT_00767b44);
  }
  return;
}
