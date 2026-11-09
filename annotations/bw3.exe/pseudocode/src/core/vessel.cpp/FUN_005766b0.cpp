// Name: core_vessel.cpp_FUN_005766b0
// Address: 005766b0
// Address Range: [[005766b0, 00576c8d]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_005766b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vessel_cpp_FUN_005766b0(int param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1058 [1012];
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
  if (*(int *)(param_1 + 0x3b4) == 1) {
    *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x2c);
    *(float *)(param_1 + 1000) = *(float *)(param_1 + 1000) + _DAT_005d70bf;
    if ((uint *)(param_1 + 0x3f4) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x3f8) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x38);
    }
    core_flame_cpp_FUN_004a5b10((CFlame *)(param_1 + 0x3c4),param_2);
  }
  else if (*(int *)(param_1 + 0x3b4) == 0) {
    *(float *)(param_1 + 0x668) = param_2 * _DAT_005d70bb + *(float *)(param_1 + 0x668);
  }
  else {
    fVar3 = param_2 * (float)_DAT_005d70a7 + *(float *)(param_1 + 0x7ec);
    *(float *)(param_1 + 0x7ec) = fVar3;
    if ((float)_DAT_005d70af <= fVar3) {
      *(float *)(param_1 + 0x7ec) = *(float *)(param_1 + 0x7ec) + _DAT_005d70b7;
    }
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    if (*(int *)(param_1 + 0x3c0) != 0) {
      *(uint *)(param_1 + 0x3c0) = 0;
      return;
    }
    puVar1 = (uint *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x3b8);
    puVar2 = (uint *)(param_1 + 0x20);
    if (iVar4 == 1) {
      param_2 = *(float *)(param_1 + 0x3bc) + param_2;
      *(float *)(param_1 + 0x3bc) = param_2;
      if (param_2 <= 1.0) {
        return;
      }
      *(uint *)(param_1 + 0x3bc) = 0x3f800000;
      if (*(int *)(param_1 + 0x2d8) == 0) {
        iVar4 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(*(uint *)(param_1 + 0x2dc));
        if (iVar4 != 0) {
          iVar4 = *(int *)(param_1 + 0x3a8);
          *(uint *)(param_1 + 0x3b8) = 2;
          *puVar2 = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
          iVar4 = *(int *)(param_1 + 0x3a8);
          if (puVar1 != (uint *)(iVar4 + 0x30)) {
            *puVar1 = *(uint *)(iVar4 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          }
        }
      }
      else {
        iVar4 = core_vessel_cpp_isStartLocTriggered_FUN_00576690(*(int *)(param_1 + 0x2d8));
        if (((iVar4 == 0) ||
            (iVar4 = core_vessel_cpp_isStartLocTriggered_FUN_00576690
                               (*(uint *)(param_1 + 0x2dc)), iVar4 == 0)) &&
           ((iVar4 = core_vessel_cpp_isStartLocTriggered_FUN_00576690
                               (*(uint *)(param_1 + 0x2d8)), iVar4 != 0 ||
            (iVar4 = core_vessel_cpp_isStartLocTriggered_FUN_00576690
                               (*(uint *)(param_1 + 0x2dc)), iVar4 != 0)))) {
          *(uint *)(param_1 + 0x24) = 0x461c3f9a;
          *(uint *)(param_1 + 0x28) = 0x461c3f9a;
          *(uint *)(param_1 + 0x20) = 0x461c3f9a;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x3a8);
          *(uint *)(param_1 + 0x3b8) = 2;
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
          iVar4 = *(int *)(param_1 + 0x3a8);
          if ((uint *)(param_1 + 0x30) != (uint *)(iVar4 + 0x30)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(iVar4 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          }
        }
      }
    }
    else if (iVar4 == 2) {
      param_2 = *(float *)(param_1 + 0x3bc) - param_2;
      *(float *)(param_1 + 0x3bc) = param_2;
      if (0.0 <= param_2) {
        return;
      }
      *(uint *)(param_1 + 0x3b8) = 0;
      *(uint *)(param_1 + 0x3bc) = 0;
    }
    else if (iVar4 == 3) {
      if ((*(int *)(*(int *)(param_1 + 0x3a8) + 0x184) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x3ac) + 0x184) == 0)) {
        param_2 = *(float *)(param_1 + 0x3bc) - param_2;
        *(float *)(param_1 + 0x3bc) = param_2;
        if (0.0 <= param_2) {
          return;
        }
        core_fire_cpp_FUN_004a36e0(0x01C73654,puVar2,0x41000000,0x44bb8000,0x40800000,0);
        iVar4 = *(int *)(param_1 + 0x3a8);
        *(uint *)(param_1 + 0x3bc) = 0x3f800000;
        *puVar2 = *(uint *)(iVar4 + 0x20);
        *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
        *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
        iVar4 = *(int *)(param_1 + 0x3a8);
        if (puVar1 == (uint *)(iVar4 + 0x30)) {
          *(uint *)(param_1 + 0x3b8) = 2;
        }
        else {
          *puVar1 = *(uint *)(iVar4 + 0x30);
          *(uint *)(param_1 + 0x34) = *(uint *)(iVar4 + 0x34);
          *(uint *)(param_1 + 0x38) = *(uint *)(iVar4 + 0x38);
          *(uint *)(param_1 + 0x3b8) = 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x3bc) = 0;
        *(uint *)(param_1 + 0x3b8) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x3a8) + 0x184) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x3ac) + 0x184) == 0)) {
      if (*(int *)(param_1 + 0x3b8) == 0) {
        *(uint *)(param_1 + 0x3bc) = 0x40400000;
        *(uint *)(param_1 + 0x3b8) = 3;
        return;
      }
    }
    else {
      fStack_18 = 999.9;
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_20 = 0.0;
      fStack_4c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_48 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_44 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      fStack_40 = fStack_4c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      iVar4 = *(int *)(param_1 + 0x2d8);
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
      iVar4 = *(int *)(param_1 + 0x2dc);
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
      if ((((fStack_18 < *(float *)(param_1 + 0x3b0)) && (*(float *)(param_1 + 0x3b0) < fStack_1c))
          && (*(float *)(param_1 + 0x3b0) < fStack_20)) &&
         ((iVar4 = *(int *)(param_1 + 0x2d8), *(int *)(iVar4 + 0x2d4) == 0 &&
          (*(int *)(iVar4 + 0x3b8) == 0)))) {
        *(uint *)(iVar4 + 0x3b8) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d8) + 0x3bc) = 0;
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (0x01C6E360,(char *)(*(int *)(param_1 + 0x2d8) + 0x2e0));
      }
      if (((*(int *)(param_1 + 0x2d8) != 0) && (*(int *)(param_1 + 0x2dc) != 0)) &&
         ((*(int *)(*(int *)(param_1 + 0x3ac) + 0x184) != 0 &&
          ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 0x3ac) + 0x184) != 0 &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x2dc) + 0x3ac) + 0x184) != 0)))))) {
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (0x01C6E360,(char *)(param_1 + 0x344));
        *(uint *)(*(int *)(param_1 + 0x2d8) + 0x7f0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2dc) + 0x7f0) = 1;
        *(uint *)(param_1 + 0x7f0) = 1;
        return;
      }
    }
  }
  return;
}
