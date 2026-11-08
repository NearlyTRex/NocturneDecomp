// Name: FUN_00585230
// Address: 00585230
// Address Range: [[00585230, 0058580b]]
// Convention: unknown
// Signature: void FUN_00585230(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585230(int param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1058 [1013];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x510) == 1) {
    *(uint *)(param_1 + 0x540) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x544) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x548) = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x544) = *(float *)(param_1 + 0x544) + _DAT_005eddfa;
    if ((uint *)(param_1 + 0x550) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x554) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x38);
    }
    FUN_0049f2e0(param_1 + 0x520,param_2);
  }
  else if (*(int *)(param_1 + 0x510) == 0) {
    *(float *)(param_1 + 0x920) = param_2 * _DAT_005eddf6 + *(float *)(param_1 + 0x920);
  }
  else {
    fVar3 = param_2 * (float)_DAT_005edde2 + *(float *)(param_1 + 0xaa4);
    *(float *)(param_1 + 0xaa4) = fVar3;
    if ((float)_DAT_005eddea <= fVar3) {
      *(float *)(param_1 + 0xaa4) = *(float *)(param_1 + 0xaa4) + _DAT_005eddf2;
    }
  }
  if (*(int *)(param_1 + 0x430) == 0) {
    if (*(int *)(param_1 + 0x51c) != 0) {
      *(uint *)(param_1 + 0x51c) = 0;
      return;
    }
    puVar1 = (uint *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x514);
    puVar2 = (uint *)(param_1 + 0x20);
    if (iVar4 == 1) {
      param_2 = *(float *)(param_1 + 0x518) + param_2;
      *(float *)(param_1 + 0x518) = param_2;
      if (param_2 <= 1.0) {
        return;
      }
      *(uint *)(param_1 + 0x518) = 0x3f800000;
      if (*(int *)(param_1 + 0x434) == 0) {
        iVar4 = FUN_00585210(*(uint *)(param_1 + 0x438));
        if (iVar4 != 0) {
          iVar4 = *(int *)(param_1 + 0x504);
          *(uint *)(param_1 + 0x514) = 2;
          *puVar2 = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
          iVar4 = *(int *)(param_1 + 0x504);
          if (puVar1 != (uint *)(iVar4 + 0x30)) {
            *puVar1 = *(uint *)(iVar4 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          }
        }
      }
      else {
        iVar4 = FUN_00585210(*(int *)(param_1 + 0x434));
        if (((iVar4 == 0) || (iVar4 = FUN_00585210(*(uint *)(param_1 + 0x438)), iVar4 == 0))
           && ((iVar4 = FUN_00585210(*(uint *)(param_1 + 0x434)), iVar4 != 0 ||
               (iVar4 = FUN_00585210(*(uint *)(param_1 + 0x438)), iVar4 != 0)))) {
          *(uint *)(param_1 + 0x24) = 0x461c3f9a;
          *(uint *)(param_1 + 0x28) = 0x461c3f9a;
          *(uint *)(param_1 + 0x20) = 0x461c3f9a;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x504);
          *(uint *)(param_1 + 0x514) = 2;
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
          iVar4 = *(int *)(param_1 + 0x504);
          if ((uint *)(param_1 + 0x30) != (uint *)(iVar4 + 0x30)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(iVar4 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          }
        }
      }
    }
    else if (iVar4 == 2) {
      param_2 = *(float *)(param_1 + 0x518) - param_2;
      *(float *)(param_1 + 0x518) = param_2;
      if (0.0 <= param_2) {
        return;
      }
      *(uint *)(param_1 + 0x514) = 0;
      *(uint *)(param_1 + 0x518) = 0;
    }
    else if (iVar4 == 3) {
      if ((*(int *)(*(int *)(param_1 + 0x504) + 0x2e0) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x508) + 0x2e0) == 0)) {
        param_2 = *(float *)(param_1 + 0x518) - param_2;
        *(float *)(param_1 + 0x518) = param_2;
        if (0.0 <= param_2) {
          return;
        }
        FUN_0049e360(0x01C3DEB4,puVar2,0x41000000,0x44bb8000,0x40800000);
        iVar4 = *(int *)(param_1 + 0x504);
        *(uint *)(param_1 + 0x518) = 0x3f800000;
        *puVar2 = *(uint *)(iVar4 + 0x20);
        *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
        *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
        iVar4 = *(int *)(param_1 + 0x504);
        if (puVar1 == (uint *)(iVar4 + 0x30)) {
          *(uint *)(param_1 + 0x514) = 2;
        }
        else {
          *puVar1 = *(uint *)(iVar4 + 0x30);
          *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
          *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          *(uint *)(param_1 + 0x514) = 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x518) = 0;
        *(uint *)(param_1 + 0x514) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x504) + 0x2e0) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x508) + 0x2e0) == 0)) {
      if (*(int *)(param_1 + 0x514) == 0) {
        *(uint *)(param_1 + 0x518) = 0x40400000;
        *(uint *)(param_1 + 0x514) = 3;
        return;
      }
    }
    else {
      fStack_18 = 999.9;
      iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      fStack_20 = 0.0;
      fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_48 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_44 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      fStack_40 = fStack_4c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      iVar4 = *(int *)(param_1 + 0x434);
      fStack_1c = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
      if (iVar4 != 0) {
        fStack_34 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
        fStack_30 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
        fStack_2c = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
        fStack_64 = fStack_34;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        fStack_18 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
      }
      iVar4 = *(int *)(param_1 + 0x438);
      if (iVar4 != 0) {
        fStack_58 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_54 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_50 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_70 = fStack_58;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        fStack_20 = SQRT(fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      }
      if ((((fStack_18 < *(float *)(param_1 + 0x50c)) && (*(float *)(param_1 + 0x50c) < fStack_1c))
          && (*(float *)(param_1 + 0x50c) < fStack_20)) &&
         ((iVar4 = *(int *)(param_1 + 0x434), *(int *)(iVar4 + 0x430) == 0 &&
          (*(int *)(iVar4 + 0x514) == 0)))) {
        *(uint *)(iVar4 + 0x514) = 1;
        *(uint *)(*(int *)(param_1 + 0x434) + 0x518) = 0;
        FUN_004894f0(0x01C38BC0,*(int *)(param_1 + 0x434) + 0x43c);
      }
      if (((*(int *)(param_1 + 0x434) != 0) && (*(int *)(param_1 + 0x438) != 0)) &&
         ((*(int *)(*(int *)(param_1 + 0x508) + 0x2e0) != 0 &&
          ((*(int *)(*(int *)(*(int *)(param_1 + 0x434) + 0x508) + 0x2e0) != 0 &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x438) + 0x508) + 0x2e0) != 0)))))) {
        FUN_004894f0(0x01C38BC0,param_1 + 0x4a0);
        *(uint *)(*(int *)(param_1 + 0x434) + 0xaa8) = 1;
        *(uint *)(*(int *)(param_1 + 0x438) + 0xaa8) = 1;
        *(uint *)(param_1 + 0xaa8) = 1;
        return;
      }
    }
  }
  return;
}
