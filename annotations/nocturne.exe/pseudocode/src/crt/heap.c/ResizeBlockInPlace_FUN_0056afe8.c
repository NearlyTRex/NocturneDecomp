// Name: crt_heap.c_ResizeBlockInPlace_FUN_0056afe8
// Address: 0056afe8
// Address Range: [[0056afe8, 0056b1a1]]
// Convention: __watcallRegister
// Signature: undefined4 __watcallRegister crt_heap_c_ResizeBlockInPlace_FUN_0056afe8(undefined4 param_1,undefined4 param_2,int *unaff_EBX,undefined4 param_4,short param_5,int *param_6,uint param_7,uint *param_8)

#include "nocturne.h"

uint __watcallRegister ResizeBlockInPlace(uint param_1,uint param_2,int *unaff_EBX,uint param_4,short param_5,int *param_6,uint param_7,uint *param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  short in_DS;
  
  uVar4 = param_7 + 0xb & 0xfffffff8;
  if (uVar4 < param_7) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  puVar1 = (uint *)(param_6 + -1);
  uVar7 = *puVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *param_8 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)puVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == param_5) {
        iVar3 = DAT_005c1680[2];
        unaff_EBX = DAT_005c1680;
        while ((iVar3 != 0 &&
               ((param_6 < unaff_EBX || ((int *)(*unaff_EBX + (int)unaff_EBX) <= param_6))))) {
          unaff_EBX = (int *)unaff_EBX[2];
          iVar3 = unaff_EBX[2];
        }
      }
      if (puVar8 == (uint *)unaff_EBX[3]) {
        unaff_EBX[3] = ((uint *)unaff_EBX[3])[1];
      }
      if (*param_8 <= uVar4) {
        uVar6 = uVar4 - *param_8;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *param_8);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *puVar1 = *puVar1 + *param_8;
          DAT_02de5461 = 0;
          goto LAB_0056b198;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *puVar1 = *puVar1 + uVar4;
      unaff_EBX[7] = unaff_EBX[7] + -1;
      DAT_02de5461 = 0;
      if (*param_8 <= uVar4) goto LAB_0056b198;
      *param_8 = *param_8 - uVar4;
    }
    uVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *puVar1 = uVar4 | 1;
      *(uint *)(uVar4 + (int)puVar1) = uVar7 - uVar4 | 1;
      if (in_DS == param_5) {
        iVar3 = DAT_005c1680[2];
        unaff_EBX = DAT_005c1680;
        while ((iVar3 != 0 &&
               ((param_6 < unaff_EBX || ((int *)(*unaff_EBX + (int)unaff_EBX) <= param_6))))) {
          unaff_EBX = (int *)unaff_EBX[2];
          iVar3 = unaff_EBX[2];
        }
      }
      unaff_EBX[6] = unaff_EBX[6] + 1;
      ValidateHeapIntegrity((uint *)(uVar4 + (int)puVar1) + 1);
    }
LAB_0056b198:
    uVar5 = 0;
  }
  return uVar5;
}
