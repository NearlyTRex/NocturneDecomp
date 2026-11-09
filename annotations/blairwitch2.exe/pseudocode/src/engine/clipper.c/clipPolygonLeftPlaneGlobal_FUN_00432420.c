// Name: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00432420
// Address: 00432420
// Address Range: [[00432420, 0043254c]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00432420(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00432420(void)

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
  if (0 < (int)DAT_007bfd00) {
    piVar4 = &DAT_007bfd0c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007bfd00) {
        uVar2 = uVar2 ^ DAT_007bfd00;
      }
      piVar5 = &DAT_007bfd0c + uVar2 * 0xc;
      bVar1 = *piVar4 <= -piVar4[2];
      if (*piVar5 <= (int)-(&DAT_007bfd14)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        piVar5 = piVar4;
        piVar6 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
        DAT_007bfd04 = DAT_007bfd04 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                  (piVar5,piVar4,&DAT_007c090c + DAT_007bfd04 * 0xc);
        DAT_007bfd04 = DAT_007bfd04 + 1;
        break;
      case 2:
        piVar6 = piVar4;
        piVar7 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
        DAT_007bfd04 = DAT_007bfd04 + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                  (piVar4,piVar5,&DAT_007c090c + DAT_007bfd04 * 0xc);
        DAT_007bfd04 = DAT_007bfd04 + 1;
      }
      iStack_14 = iStack_14 + 1;
      piVar4 = piVar4 + 0xc;
    } while (iStack_14 < (int)DAT_007bfd00);
  }
  return;
}
