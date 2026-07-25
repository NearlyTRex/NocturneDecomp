// Name: FUN_0042cef8
// Address: 0042cef8
// Address Range: [[0042cef8, 0042cff1]]
// Convention: unknown
// Signature: undefined8 FUN_0042cef8(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

ulonglong FUN_0042cef8(uint *param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_EDX;
  
  if (((uint)param_1 & 0x1f) != 0) {
    uVar5 = 0x20 - ((uint)param_1 & 0x1f);
    if ((int)param_3 < (int)uVar5) {
      uVar5 = param_3;
    }
    param_3 = param_3 - uVar5;
    uVar6 = uVar5 & 3;
    if (uVar6 != 0) {
      uVar5 = uVar5 - uVar6;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(byte *)param_1 = *(byte *)param_2;
        param_2 = (uint *)((int)param_2 + 1);
        param_1 = (uint *)((int)param_1 + 1);
      }
    }
    uVar5 = uVar5 >> 2;
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
    }
    if (param_3 == 0) goto LAB_0042cfea;
  }
  iVar7 = param_3 - 0x100;
  if (-1 < iVar7) {
    do {
      iVar8 = iVar7 + -0x100;
      bVar4 = 0xff < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  uVar5 = param_3 >> 5;
  if (uVar5 != 0) {
    iVar7 = uVar5 * 0x20;
    do {
      iVar8 = iVar7 + -0x20;
      lVar1 = *(longlong *)(iVar8 + (int)param_2);
      lVar2 = *(longlong *)(iVar7 + -0x10 + (int)param_2);
      lVar3 = *(longlong *)(iVar7 + -8 + (int)param_2);
      *(longlong *)(iVar7 + -0x18 + (int)param_1) =
           (longlong)ROUND((float10)*(longlong *)(iVar7 + -0x18 + (int)param_2));
      *(longlong *)(iVar8 + (int)param_1) = (longlong)ROUND((float10)lVar1);
      *(longlong *)(iVar7 + -8 + (int)param_1) = (longlong)ROUND((float10)lVar3);
      *(longlong *)(iVar7 + -0x10 + (int)param_1) = (longlong)ROUND((float10)lVar2);
      iVar7 = iVar8;
    } while (0x1f < iVar8);
    param_3 = param_3 + uVar5 * -0x20;
    param_2 = param_2 + uVar5 * 8;
    param_1 = param_1 + uVar5 * 8;
  }
  if (param_3 != 0) {
    uVar6 = param_3 >> 2;
    uVar5 = uVar6;
    if (uVar6 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      param_3 = param_3 + uVar6 * -4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(byte *)param_1 = *(byte *)param_2;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
  }
LAB_0042cfea:
  return CONCAT44(in_EDX,in_EAX);
}
