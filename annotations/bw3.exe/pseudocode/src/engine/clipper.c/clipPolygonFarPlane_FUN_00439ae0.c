// Name: engine_clipper.c_clipPolygonFarPlane_FUN_00439ae0
// Address: 00439ae0
// Address Range: [[00439ae0, 00439cd8]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00439ae0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00439b58) */

void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00439ae0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *v1;
  longlong *plVar7;
  SRenderVertex *pSVar8;
  longlong *plVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar6 = 0;
  if (DAT_005f12f4 != 0) {
    if (0 < (int)DAT_007e3e88) {
      iVar4 = 0;
      do {
        if (iVar6 < *(int *)((int)&DAT_007e3e94 + iVar4)) {
          iVar6 = *(int *)((int)&DAT_007e3e94 + iVar4);
        }
        iVar4 = iVar4 + 0x30;
      } while (iVar4 < (int)(DAT_007e3e88 * 0x30));
    }
    if (DAT_005f12f4 <= iVar6) {
      DAT_007e450c = DAT_007e3e88;
      plVar7 = (longlong *)&DAT_007e3e8c;
      plVar9 = (longlong *)&DAT_007e4510;
      iVar4 = 0;
      iVar6 = DAT_007e3e88 * 0x30;
      while (7 < iVar6) {
        lVar1 = *plVar7;
        plVar7 = plVar7 + 1;
        *plVar9 = (longlong)ROUND((float10)lVar1);
        plVar9 = plVar9 + 1;
        iVar6 = iVar6 + -8;
      }
      if (iVar6 != 0 && -9 < iVar6 + -8) {
        *(int *)plVar9 = (int)*plVar7;
        if (4 < iVar6) {
          *(uint *)((int)plVar9 + 4) = *(uint *)((int)plVar7 + 4);
        }
      }
      DAT_007e3e88 = 0;
      if (0 < (int)DAT_007e450c) {
        v1 = (SRenderVertex *)&DAT_007e4510;
        do {
          uVar5 = iVar4 + 1;
          if (uVar5 == DAT_007e450c) {
            uVar5 = uVar5 ^ DAT_007e450c;
          }
          bVar3 = DAT_005f12f4 <= (v1->projected_vertex).transformed_z;
          if (DAT_005f12f4 <= (int)(&DAT_007e4518)[uVar5 * 0xc]) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar9 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar10 * -2);
              pSVar8 = (SRenderVertex *)((int)v1 + (uint)bVar10 * -8 + 4);
              *(int *)plVar9 = (v1->projected_vertex).transformed_x;
              iVar6 = 0x2c;
            }
            while (7 < iVar6) {
              lVar2._0_4_ = (pSVar8->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar8->projected_vertex).transformed_y;
              pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
              *plVar7 = (longlong)ROUND((float10)lVar2);
              plVar7 = plVar7 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar7 = (pSVar8->projected_vertex).transformed_x;
              if (4 < iVar6) {
                *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4) =
                     *(uint *)((int)pSVar8 + (uint)bVar10 * -8 + 4);
              }
            }
            DAT_007e3e88 = DAT_007e3e88 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                      ((SRenderVertex *)(&DAT_007e4510 + uVar5 * 0xc),v1,
                       (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
            DAT_007e3e88 = DAT_007e3e88 + 1;
            break;
          case 2:
            plVar9 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar10 * -2);
              pSVar8 = (SRenderVertex *)((int)v1 + (uint)bVar10 * -8 + 4);
              *(int *)plVar9 = (v1->projected_vertex).transformed_x;
              iVar6 = 0x2c;
            }
            while (7 < iVar6) {
              lVar1._0_4_ = (pSVar8->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar8->projected_vertex).transformed_y;
              pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
              *plVar7 = (longlong)ROUND((float10)lVar1);
              plVar7 = plVar7 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar7 = (pSVar8->projected_vertex).transformed_x;
              if (4 < iVar6) {
                *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4) =
                     *(uint *)((int)pSVar8 + (uint)bVar10 * -8 + 4);
              }
            }
            DAT_007e3e88 = DAT_007e3e88 + 1;
            engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                      (v1,(SRenderVertex *)(&DAT_007e4510 + uVar5 * 0xc),
                       (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
            DAT_007e3e88 = DAT_007e3e88 + 1;
          }
          iVar4 = iVar4 + 1;
          v1 = v1 + 1;
        } while (iVar4 < (int)DAT_007e450c);
      }
    }
  }
  return;
}
