// Name: FUN_00433ef0
// Address: 00433ef0
// Address Range: [[00433ef0, 00433f51] [00433f7c, 00433fc1]]
// Convention: unknown
// Signature: void FUN_00433ef0(void)

#include "nocturne.h"

void FUN_00433ef0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int iStack_14;
  
  bVar7 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_00767b44) {
    puVar4 = &DAT_0076874c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_00767b44) {
        uVar2 = uVar2 ^ DAT_00767b44;
      }
      bVar1 = (int)puVar4[2] <= (int)puVar4[1];
      if ((int)(&DAT_00768754)[uVar2 * 0xc] <= (int)(&DAT_00768750)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        puVar5 = puVar4;
        puVar6 = &DAT_00768d4c + DAT_00767b48 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_00767b48 = DAT_00767b48 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                  (&DAT_0076874c + uVar2 * 0xc,puVar4,&DAT_00768d4c + DAT_00767b48 * 0xc);
        DAT_00767b48 = DAT_00767b48 + 1;
        break;
      case 2:
        puVar5 = puVar4;
        puVar6 = &DAT_00768d4c + DAT_00767b48 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_00767b48 = DAT_00767b48 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                  (puVar4,&DAT_0076874c + uVar2 * 0xc,&DAT_00768d4c + DAT_00767b48 * 0xc);
        DAT_00767b48 = DAT_00767b48 + 1;
      }
      iStack_14 = iStack_14 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iStack_14 < (int)DAT_00767b44);
  }
  return;
}
