// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_004322de
// Address: 004322de
// Address Range: [[004322de, 00432402]]
// Convention: unknown
// Signature: void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_004322de(void)

#include "nocturne.h"

void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_004322de(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int iStack_14;
  
  bVar8 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007bfcfc) {
    piVar4 = &DAT_007c030c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007bfcfc) {
        uVar2 = uVar2 ^ DAT_007bfcfc;
      }
      piVar5 = &DAT_007c030c + uVar2 * 0xc;
      bVar1 = piVar4[2] <= *piVar4;
      if ((int)(&DAT_007c0314)[uVar2 * 0xc] <= *piVar5) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        piVar5 = piVar4;
        piVar6 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar6 = (char)*piVar5;
          piVar5 = (int *)((int)piVar5 + (uint)bVar8 * -2 + 1);
          piVar6 = (int *)((int)piVar6 + (uint)bVar8 * -2 + 1);
        }
        DAT_007bfd00 = DAT_007bfd00 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                  (piVar5,piVar4,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
        DAT_007bfd00 = DAT_007bfd00 + 1;
        break;
      case 2:
        piVar6 = piVar4;
        piVar7 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar7 = (char)*piVar6;
          piVar6 = (int *)((int)piVar6 + (uint)bVar8 * -2 + 1);
          piVar7 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
        }
        DAT_007bfd00 = DAT_007bfd00 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                  (piVar4,piVar5,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
        DAT_007bfd00 = DAT_007bfd00 + 1;
      }
      iStack_14 = iStack_14 + 1;
      piVar4 = piVar4 + 0xc;
    } while (iStack_14 < (int)DAT_007bfcfc);
  }
  return;
}
