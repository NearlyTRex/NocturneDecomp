// Name: crt_unknown.c_FUN_005c7018
// Address: 005c7018
// Address Range: [[005c7018, 005c71d1]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c7018(short param_1,int *param_2,uint param_3,uint *param_4)

#include "nocturne.h"

uint FUN_005c7018(short param_1,int *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_EBX;
  uint *puVar8;
  short in_DS;
  
  uVar4 = param_3 + 0xb & 0xfffffff8;
  if (uVar4 < param_3) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  puVar1 = (uint *)(param_2 + -1);
  uVar7 = *puVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *param_4 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)puVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == param_1) {
        iVar3 = DAT_00626220[2];
        unaff_EBX = DAT_00626220;
        while ((iVar3 != 0 &&
               ((param_2 < unaff_EBX || ((int *)(*unaff_EBX + (int)unaff_EBX) <= param_2))))) {
          unaff_EBX = (int *)unaff_EBX[2];
          iVar3 = unaff_EBX[2];
        }
      }
      if (puVar8 == (uint *)unaff_EBX[3]) {
        unaff_EBX[3] = ((uint *)unaff_EBX[3])[1];
      }
      if (*param_4 <= uVar4) {
        uVar6 = uVar4 - *param_4;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *param_4);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *puVar1 = *puVar1 + *param_4;
          DAT_02c9f691 = 0;
          goto LAB_005c71c8;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *puVar1 = *puVar1 + uVar4;
      unaff_EBX[7] = unaff_EBX[7] + -1;
      DAT_02c9f691 = 0;
      if (*param_4 <= uVar4) goto LAB_005c71c8;
      *param_4 = *param_4 - uVar4;
    }
    uVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *puVar1 = uVar4 | 1;
      *(uint *)(uVar4 + (int)puVar1) = uVar7 - uVar4 | 1;
      if (in_DS == param_1) {
        iVar3 = DAT_00626220[2];
        unaff_EBX = DAT_00626220;
        while ((iVar3 != 0 &&
               ((param_2 < unaff_EBX || ((int *)(*unaff_EBX + (int)unaff_EBX) <= param_2))))) {
          unaff_EBX = (int *)unaff_EBX[2];
          iVar3 = unaff_EBX[2];
        }
      }
      unaff_EBX[6] = unaff_EBX[6] + 1;
      FUN_005c0a00((uint *)(uVar4 + (int)puVar1) + 1);
    }
LAB_005c71c8:
    uVar5 = 0;
  }
  return uVar5;
}
