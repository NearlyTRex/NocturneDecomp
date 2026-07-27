// Name: engine_clipper.c_FUN_00434030
// Address: 00434030
// Address Range: [[00434030, 00434097]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00434030(void)

#include "nocturne.h"

void engine_clipper_c_FUN_00434030(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < (int)DAT_00767b48) {
    puVar4 = &DAT_00768d4c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == DAT_00767b48) {
        uVar2 = uVar2 ^ DAT_00767b48;
      }
      bVar1 = (int)puVar4[1] <= (int)-puVar4[2];
      if ((int)(&DAT_00768d50)[uVar2 * 0xc] <= (int)-(&DAT_00768d54)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        puVar5 = puVar4;
        puVar6 = &DAT_00766c74 + DAT_00766c70 * 0xc;
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
        DAT_00766c70 = DAT_00766c70 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                  (&DAT_00768d4c + uVar2 * 0xc,puVar4,&DAT_00766c74 + DAT_00766c70 * 0xc);
        DAT_00766c70 = DAT_00766c70 + 1;
        break;
      case 2:
        puVar5 = puVar4;
        puVar6 = &DAT_00766c74 + DAT_00766c70 * 0xc;
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
        DAT_00766c70 = DAT_00766c70 + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                  (puVar4,&DAT_00768d4c + uVar2 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
        DAT_00766c70 = DAT_00766c70 + 1;
      }
      local_14 = local_14 + 1;
      puVar4 = puVar4 + 0xc;
    } while (local_14 < (int)DAT_00767b48);
  }
  return;
}
