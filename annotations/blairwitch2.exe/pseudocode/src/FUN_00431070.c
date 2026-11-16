// Name: FUN_00431070
// Address: 00431070
// Address Range: [[00431070, 00431268]]
// Convention: unknown
// Signature: void FUN_00431070(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004310e8) */

void FUN_00431070(void)

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
  if (DAT_00609b34 != 0) {
    if (0 < (int)DAT_007bee30) {
      iVar4 = 0;
      do {
        if (iVar6 < *(int *)((int)&DAT_007bee3c + iVar4)) {
          iVar6 = *(int *)((int)&DAT_007bee3c + iVar4);
        }
        iVar4 = iVar4 + 0x30;
      } while (iVar4 < (int)(DAT_007bee30 * 0x30));
    }
    if (DAT_00609b34 <= iVar6) {
      DAT_007bf4b4 = DAT_007bee30;
      plVar7 = (longlong *)&DAT_007bee34;
      plVar9 = (longlong *)&DAT_007bf4b8;
      iVar4 = 0;
      iVar6 = DAT_007bee30 * 0x30;
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
      DAT_007bee30 = 0;
      if (0 < (int)DAT_007bf4b4) {
        v1 = (SRenderVertex *)&DAT_007bf4b8;
        do {
          uVar5 = iVar4 + 1;
          if (uVar5 == DAT_007bf4b4) {
            uVar5 = uVar5 ^ DAT_007bf4b4;
          }
          bVar3 = DAT_00609b34 <= (v1->projected_vertex).transformed_z;
          if (DAT_00609b34 <= (int)(&DAT_007bf4c0)[uVar5 * 0xc]) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar9 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar10 * -2);
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
            DAT_007bee30 = DAT_007bee30 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                      ((SRenderVertex *)(&DAT_007bf4b8 + uVar5 * 0xc),v1,
                       (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
            DAT_007bee30 = DAT_007bee30 + 1;
            break;
          case 2:
            plVar9 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar10 * -2);
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
            DAT_007bee30 = DAT_007bee30 + 1;
            engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                      (v1,(SRenderVertex *)(&DAT_007bf4b8 + uVar5 * 0xc),
                       (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
            DAT_007bee30 = DAT_007bee30 + 1;
          }
          iVar4 = iVar4 + 1;
          v1 = v1 + 1;
        } while (iVar4 < (int)DAT_007bf4b4);
      }
    }
  }
  return;
}
