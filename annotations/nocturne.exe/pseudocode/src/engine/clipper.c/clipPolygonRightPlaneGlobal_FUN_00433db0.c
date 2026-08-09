// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00433db0
// Address: 00433db0
// Address Range: [[00433db0, 00433edc]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00433db0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00433db0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < (int)DAT_00767b40) {
    v1 = (SRenderVertex *)&DAT_00767b4c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == DAT_00767b40) {
        uVar2 = uVar2 ^ DAT_00767b40;
      }
      pSVar4 = (SRenderVertex *)(&DAT_00767b4c + uVar2 * 0xc);
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((pSVar4->projected_vertex).transformed_x <= (int)-(&DAT_00767b54)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar6 = &DAT_0076874c + DAT_00767b44 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
          piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar6 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -2 + 1);
          piVar6 = (int *)((int)piVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_00767b44 = DAT_00767b44 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                  (pSVar4,v1,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
        DAT_00767b44 = DAT_00767b44 + 1;
        break;
      case 2:
        pSVar5 = v1;
        piVar6 = &DAT_0076874c + DAT_00767b44 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
          piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar6 = (char)(pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
          piVar6 = (int *)((int)piVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_00767b44 = DAT_00767b44 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                  (v1,pSVar4,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
        DAT_00767b44 = DAT_00767b44 + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < (int)DAT_00767b40);
  }
  return;
}
