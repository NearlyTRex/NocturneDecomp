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
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar5 = 0;
  if (DAT_005ad284 != 0) {
    if (0 < (int)DAT_00766c70) {
      iVar3 = 0;
      do {
        if (iVar5 < *(int *)((int)&DAT_00766c7c + iVar3)) {
          iVar5 = *(int *)((int)&DAT_00766c7c + iVar3);
        }
        iVar3 = iVar3 + 0x30;
      } while (iVar3 < (int)(DAT_00766c70 * 0x30));
    }
    if (DAT_005ad284 <= iVar5) {
      DAT_007672f4 = DAT_00766c70;
      plVar6 = (longlong *)&DAT_00766c74;
      plVar7 = (longlong *)&DAT_007672f8;
      iVar3 = 0;
      iVar5 = DAT_00766c70 * 0x30;
      while (7 < iVar5) {
        lVar1 = *plVar6;
        plVar6 = plVar6 + 1;
        *plVar7 = (longlong)ROUND((float10)lVar1);
        plVar7 = plVar7 + 1;
        iVar5 = iVar5 + -8;
      }
      if (iVar5 != 0 && -9 < iVar5 + -8) {
        *(int *)plVar7 = (int)*plVar6;
        if (4 < iVar5) {
          *(uint *)((int)plVar7 + 4) = *(uint *)((int)plVar6 + 4);
        }
      }
      DAT_00766c70 = 0;
      if (0 < (int)DAT_007672f4) {
        plVar6 = (longlong *)&DAT_007672f8;
        do {
          uVar4 = iVar3 + 1;
          if (uVar4 == DAT_007672f4) {
            uVar4 = uVar4 ^ DAT_007672f4;
          }
          bVar2 = DAT_005ad284 <= (int)plVar6[1];
          if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar4 * 0xc]) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            plVar8 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
            iVar5 = 0x30;
            plVar7 = plVar6;
            plVar9 = plVar8;
            if (((uint)plVar8 & 7) != 0) {
              plVar9 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
              plVar7 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 4);
              *(int *)plVar8 = (int)*plVar6;
              iVar5 = 0x2c;
            }
            while (7 < iVar5) {
              lVar1 = *plVar7;
              plVar7 = plVar7 + 1;
              *plVar9 = (longlong)ROUND((float10)lVar1);
              plVar9 = plVar9 + 1;
              iVar5 = iVar5 + -8;
            }
            if (iVar5 != 0 && -9 < iVar5 + -8) {
              *(int *)plVar9 = (int)*plVar7;
              if (4 < iVar5) {
                *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                     *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4);
              }
            }
            DAT_00766c70 = DAT_00766c70 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                      (&DAT_007672f8 + uVar4 * 0xc,plVar6,&DAT_00766c74 + DAT_00766c70 * 0xc);
            DAT_00766c70 = DAT_00766c70 + 1;
            break;
          case 2:
            plVar8 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
            iVar5 = 0x30;
            plVar7 = plVar6;
            plVar9 = plVar8;
            if (((uint)plVar8 & 7) != 0) {
              plVar9 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
              plVar7 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 4);
              *(int *)plVar8 = (int)*plVar6;
              iVar5 = 0x2c;
            }
            while (7 < iVar5) {
              lVar1 = *plVar7;
              plVar7 = plVar7 + 1;
              *plVar9 = (longlong)ROUND((float10)lVar1);
              plVar9 = plVar9 + 1;
              iVar5 = iVar5 + -8;
            }
            if (iVar5 != 0 && -9 < iVar5 + -8) {
              *(int *)plVar9 = (int)*plVar7;
              if (4 < iVar5) {
                *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                     *(uint *)((int)plVar7 + (uint)bVar10 * -8 + 4);
              }
            }
            DAT_00766c70 = DAT_00766c70 + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                      (plVar6,&DAT_007672f8 + uVar4 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
            DAT_00766c70 = DAT_00766c70 + 1;
          }
          iVar3 = iVar3 + 1;
          plVar6 = plVar6 + 6;
        } while (iVar3 < (int)DAT_007672f4);
      }
    }
  }
  return;
}
