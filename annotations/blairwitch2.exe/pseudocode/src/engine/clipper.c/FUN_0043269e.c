// Name: engine_clipper.c_FUN_0043269e
// Address: 0043269e
// Address Range: [[0043269e, 004327cd]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_0043269e(void)

#include "nocturne.h"

void engine_clipper_c_FUN_0043269e(void)

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
  if (0 < (int)DAT_007bfd08) {
    puVar4 = &DAT_007c0f0c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007bfd08) {
        uVar2 = uVar2 ^ DAT_007bfd08;
      }
      bVar1 = (int)puVar4[1] <= (int)-puVar4[2];
      if (*(int *)(&DAT_007c0f10 + uVar2 * 0x30) <= (int)-(&DAT_007c0f14)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        puVar5 = puVar4;
        puVar6 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
        DAT_007bee30 = DAT_007bee30 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                  (&DAT_007c0f0c + uVar2 * 0xc,puVar4,&DAT_007bee34 + DAT_007bee30 * 0xc);
        DAT_007bee30 = DAT_007bee30 + 1;
        break;
      case 2:
        puVar5 = puVar4;
        puVar6 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
        DAT_007bee30 = DAT_007bee30 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                  (puVar4,&DAT_007c0f0c + uVar2 * 0xc,&DAT_007bee34 + DAT_007bee30 * 0xc);
        DAT_007bee30 = DAT_007bee30 + 1;
      }
      iStack_14 = iStack_14 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iStack_14 < (int)DAT_007bfd08);
  }
  return;
}
