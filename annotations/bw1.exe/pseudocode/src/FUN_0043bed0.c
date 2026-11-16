// Name: FUN_0043bed0
// Address: 0043bed0
// Address Range: [[0043bed0, 0043bfcf] [0043c015, 0043c055]]
// Convention: unknown
// Signature: void FUN_0043bed0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043c072) */
/* WARNING: Removing unreachable block (ram,0x0043bfec) */

void FUN_0043bed0(void)

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
  if (DAT_00610d44 != 0) {
    if (0 < (int)DAT_007c7554) {
      iVar4 = 0;
      do {
        if (iVar6 < *(int *)((int)&DAT_007c7560 + iVar4)) {
          iVar6 = *(int *)((int)&DAT_007c7560 + iVar4);
        }
        iVar4 = iVar4 + 0x30;
      } while (iVar4 < (int)(DAT_007c7554 * 0x30));
    }
    if (DAT_00610d44 <= iVar6) {
      DAT_007c7bd8 = DAT_007c7554;
      iVar4 = 0;
      plVar9 = &DAT_007c7be0;
      plVar7 = (longlong *)&DAT_007c755c;
      DAT_007c7bdc = DAT_007c7558;
      iVar6 = DAT_007c7554 * 0x30 + -4;
      if (iVar6 != 0 && 3 < (int)(DAT_007c7554 * 0x30)) {
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
      }
      DAT_007c7554 = 0;
      if (0 < (int)DAT_007c7bd8) {
        v1 = (SRenderVertex *)&DAT_007c7bdc;
        do {
          uVar5 = iVar4 + 1;
          if (uVar5 == DAT_007c7bd8) {
            uVar5 = uVar5 ^ DAT_007c7bd8;
          }
          bVar3 = DAT_00610d44 <= (v1->projected_vertex).transformed_z;
          if (DAT_00610d44 <= *(int *)((int)&DAT_007c7be0 + uVar5 * 0x30 + 4)) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar7 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
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
            DAT_007c7554 = DAT_007c7554 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                      ((SRenderVertex *)(&DAT_007c7bdc + uVar5 * 0xc),v1,
                       (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
            DAT_007c7554 = DAT_007c7554 + 1;
            break;
          case 2:
            plVar7 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
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
            DAT_007c7554 = DAT_007c7554 + 1;
            engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                      (v1,(SRenderVertex *)(&DAT_007c7bdc + uVar5 * 0xc),
                       (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
            DAT_007c7554 = DAT_007c7554 + 1;
          }
          iVar4 = iVar4 + 1;
          v1 = v1 + 1;
        } while (iVar4 < (int)DAT_007c7bd8);
      }
    }
  }
  return;
}
