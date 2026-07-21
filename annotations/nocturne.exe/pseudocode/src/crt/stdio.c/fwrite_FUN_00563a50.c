// Name: crt_stdio.c_fwrite_FUN_00563a50
// Address: 00563a50
// Address Range: [[00563a50, 00563c88]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdio_c_fwrite_FUN_00563a50(undefined4 *param_1,uint param_2,int param_3,int *param_4)

#include "nocturne.h"

uint __cdecl _fwrite(uint *param_1,uint param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar8;
  uint uVar7;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  uint uStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  (*(code *)PTR_FUN_005c1ac0)(param_4[4]);
  if ((*(byte *)(param_4 + 3) & 2) == 0) {
    FUN_00568e80(4);
    *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
    (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
    uStack_18 = 0;
  }
  else {
    uStack_14 = param_3 * param_2;
    if (uStack_14 == 0) {
      (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
      return 0;
    }
    if (*(int *)(param_4[2] + 8) == 0) {
      FUN_00568ed0(param_4);
    }
    uVar3 = param_4[3];
    bVar1 = *(byte *)(param_4 + 3);
    uStack_18 = 0;
    *(byte *)(param_4 + 3) = bVar1 & 0xcf;
    if ((bVar1 & 0x40) == 0) {
      bVar11 = (*(byte *)((int)param_4 + 0xd) & 4) != 0;
      if (bVar11) {
        bVar8 = *(byte *)((int)param_4 + 0xd) & 0xfa;
        *(byte *)((int)param_4 + 0xd) = bVar8;
        *(byte *)((int)param_4 + 0xd) = bVar8 | 1;
      }
      uVar4 = *(uint *)(param_4[2] + 0xc);
      *(uint *)(param_4[2] + 0xc) = 1;
      do {
        uVar2 = *(byte *)param_1;
        param_1 = (uint *)((int)param_1 + 1);
        _fputc(uVar2,param_4);
        if ((*(byte *)(param_4 + 3) & 0x30) != 0) break;
        uStack_18 = uStack_18 + 1;
      } while (uStack_14 - uStack_18 != 0);
      *(uint *)(param_4[2] + 0xc) = uVar4;
      if (bVar11) {
        bVar8 = *(byte *)((int)param_4 + 0xd) & 0xfa;
        *(byte *)((int)param_4 + 0xd) = bVar8;
        *(byte *)((int)param_4 + 0xd) = bVar8 | 4;
        FUN_00568890(param_4);
      }
    }
    else {
      do {
        if ((param_4[1] == 0) && ((uint)param_4[5] <= uStack_14)) {
          uVar5 = uStack_14 >> 8 & 0xfffffe;
          uVar7 = uVar5 << 8;
          if (uVar5 == 0) {
            uVar7 = uStack_14;
          }
          uVar5 = FUN_00569fb0(param_4[4],param_1,uVar7);
          if (uVar5 != 0xffffffff) {
            if (uVar5 != 0) goto LAB_00563ba0;
            iVar6 = (*(code *)PTR_FUN_005c1abc)();
            *(uint *)(iVar6 + 4) = 0xc;
          }
          *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
        }
        else {
          uVar5 = param_4[5] - param_4[1];
          if (uStack_14 < (uint)(param_4[5] - param_4[1])) {
            uVar5 = uStack_14;
          }
          puVar9 = param_1;
          puVar10 = (uint *)*param_4;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar8 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar8 * -2 + 1;
          }
          for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar10 = *(byte *)puVar9;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar8 * -2 + 1);
            puVar10 = (uint *)((int)puVar10 + (uint)bVar8 * -2 + 1);
          }
          *param_4 = *param_4 + uVar5;
          param_4[1] = param_4[1] + uVar5;
          *(byte *)((int)param_4 + 0xd) = *(byte *)((int)param_4 + 0xd) | 0x10;
          if ((param_4[1] == param_4[5]) || ((*(byte *)((int)param_4 + 0xd) & 4) != 0)) {
            FUN_00568890(param_4);
          }
        }
LAB_00563ba0:
        param_1 = (uint *)((int)param_1 + uVar5);
        uStack_18 = uStack_18 + uVar5;
        uStack_14 = uStack_14 - uVar5;
      } while ((uStack_14 != 0) && ((*(byte *)(param_4 + 3) & 0x20) == 0));
    }
    if ((*(byte *)(param_4 + 3) & 0x20) != 0) {
      uStack_18 = 0;
    }
    param_4[3] = param_4[3] | uVar3 & 0x30;
    (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
    uStack_18 = uStack_18 / param_2;
  }
  return uStack_18;
}
