// Name: FUN_00433c70
// Address: 00433c70
// Address Range: [[00433c70, 00433cd0]]
// Convention: unknown
// Signature: void FUN_00433c70(void)

#include "nocturne.h"

void FUN_00433c70(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int local_14;
  
  bVar8 = 0;
  local_14 = 0;
  if (0 < (int)DAT_00767b3c) {
    piVar4 = &DAT_0076814c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == DAT_00767b3c) {
        uVar2 = uVar2 ^ DAT_00767b3c;
      }
      piVar5 = &DAT_0076814c + uVar2 * 0xc;
      bVar1 = piVar4[2] <= *piVar4;
      if ((int)(&DAT_00768154)[uVar2 * 0xc] <= *piVar5) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        piVar5 = piVar4;
        piVar6 = &DAT_00767b4c + DAT_00767b40 * 0xc;
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
        DAT_00767b40 = DAT_00767b40 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                  (piVar5,piVar4,&DAT_00767b4c + DAT_00767b40 * 0xc);
        DAT_00767b40 = DAT_00767b40 + 1;
        break;
      case 2:
        piVar6 = piVar4;
        piVar7 = &DAT_00767b4c + DAT_00767b40 * 0xc;
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
        DAT_00767b40 = DAT_00767b40 + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                  (piVar4,piVar5,&DAT_00767b4c + DAT_00767b40 * 0xc);
        DAT_00767b40 = DAT_00767b40 + 1;
      }
      local_14 = local_14 + 1;
      piVar4 = piVar4 + 0xc;
    } while (local_14 < (int)DAT_00767b3c);
  }
  return;
}
