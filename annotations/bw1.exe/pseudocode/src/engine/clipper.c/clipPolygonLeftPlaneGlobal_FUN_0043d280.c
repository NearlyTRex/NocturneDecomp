// Name: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_0043d280
// Address: 0043d280
// Address Range: [[0043d280, 0043d3ac]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_0043d280(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_0043d280(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int iStack_14;
  
  bVar7 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007c8424) {
    v1 = (SRenderVertex *)&DAT_007c8430;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007c8424) {
        uVar2 = uVar2 ^ DAT_007c8424;
      }
      pSVar4 = (SRenderVertex *)(&DAT_007c8430 + uVar2 * 0xc);
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((pSVar4->projected_vertex).transformed_x <= (int)-(&DAT_007c8438)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar6 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
        DAT_007c8428 = DAT_007c8428 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                  (pSVar4,v1,(SRenderVertex *)(&DAT_007c9030 + DAT_007c8428 * 0xc));
        DAT_007c8428 = DAT_007c8428 + 1;
        break;
      case 2:
        pSVar5 = v1;
        piVar6 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
        DAT_007c8428 = DAT_007c8428 + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                  (v1,pSVar4,(SRenderVertex *)(&DAT_007c9030 + DAT_007c8428 * 0xc));
        DAT_007c8428 = DAT_007c8428 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007c8424);
  }
  return;
}
