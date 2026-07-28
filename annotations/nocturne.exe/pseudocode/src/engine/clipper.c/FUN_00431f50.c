// Name: engine_clipper.c_FUN_00431f50
// Address: 00431f50
// Address Range: [[00431f50, 0043204f]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00431f50(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431fc8) */

void engine_clipper_c_FUN_00431f50(void)

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
  if (DAT_005ad284 != 0) {
    if (0 < (int)DAT_00766c70) {
      iVar4 = 0;
      do {
        if (iVar6 < *(int *)((int)&DAT_00766c7c + iVar4)) {
          iVar6 = *(int *)((int)&DAT_00766c7c + iVar4);
        }
        iVar4 = iVar4 + 0x30;
      } while (iVar4 < (int)(DAT_00766c70 * 0x30));
    }
    if (DAT_005ad284 <= iVar6) {
      DAT_007672f4 = DAT_00766c70;
      plVar7 = (longlong *)&DAT_00766c74;
      plVar9 = (longlong *)&DAT_007672f8;
      iVar4 = 0;
      iVar6 = DAT_00766c70 * 0x30;
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
      DAT_00766c70 = 0;
      if (0 < (int)DAT_007672f4) {
        v1 = (SRenderVertex *)&DAT_007672f8;
        do {
          uVar5 = iVar4 + 1;
          if (uVar5 == DAT_007672f4) {
            uVar5 = uVar5 ^ DAT_007672f4;
          }
          bVar3 = DAT_005ad284 <= (v1->projected_vertex).transformed_z;
          if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar5 * 0xc]) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
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
            DAT_00766c70 = DAT_00766c70 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                      ((SRenderVertex *)(&DAT_007672f8 + uVar5 * 0xc),v1,
                       (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
            DAT_00766c70 = DAT_00766c70 + 1;
            break;
          case 2:
            plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
            iVar6 = 0x30;
            pSVar8 = v1;
            plVar7 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar7 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
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
            DAT_00766c70 = DAT_00766c70 + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                      (v1,(SRenderVertex *)(&DAT_007672f8 + uVar5 * 0xc),
                       (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
            DAT_00766c70 = DAT_00766c70 + 1;
          }
          iVar4 = iVar4 + 1;
          v1 = v1 + 1;
        } while (iVar4 < (int)DAT_007672f4);
      }
    }
  }
  return;
}
