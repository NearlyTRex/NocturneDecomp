// Name: core_vessel.cpp_FUN_005a8e60
// Address: 005a8e60
// Address Range: [[005a8e60, 005a943b]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_005a8e60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vessel_cpp_FUN_005a8e60(int param_1,float param_2)

{
  uint *puVar1;
  CVector3f *position;
  float fVar2;
  int iVar3;
  byte bVar4;
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
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x3b4) == 1) {
    *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x2c);
    *(float *)(param_1 + 1000) = *(float *)(param_1 + 1000) + _DAT_005f9156;
    if ((uint *)(param_1 + 0x3f4) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x3f8) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x38);
    }
    core_flame_cpp_FUN_004b7b90((CFlame *)(param_1 + 0x3c4),param_2);
  }
  else if (*(int *)(param_1 + 0x3b4) == 0) {
    *(float *)(param_1 + 0x668) = param_2 * _DAT_005f9152 + *(float *)(param_1 + 0x668);
  }
  else {
    fVar2 = param_2 * (float)_DAT_005f913e + *(float *)(param_1 + 0x7ec);
    *(float *)(param_1 + 0x7ec) = fVar2;
    if ((float)_DAT_005f9146 <= fVar2) {
      *(float *)(param_1 + 0x7ec) = *(float *)(param_1 + 0x7ec) + _DAT_005f914e;
    }
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    if (*(int *)(param_1 + 0x3c0) != 0) {
      *(uint *)(param_1 + 0x3c0) = 0;
      return;
    }
    puVar1 = (uint *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x3b8);
    position = (CVector3f *)(param_1 + 0x20);
    if (iVar3 == 1) {
      param_2 = *(float *)(param_1 + 0x3bc) + param_2;
      *(float *)(param_1 + 0x3bc) = param_2;
      if (param_2 <= 1.0) {
        return;
      }
      *(uint *)(param_1 + 0x3bc) = 0x3f800000;
      if (*(int *)(param_1 + 0x2d8) == 0) {
        iVar3 = core_vessel_cpp_isStartLocTriggered_FUN_005a8e40(*(uint *)(param_1 + 0x2dc));
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x3a8);
          *(uint *)(param_1 + 0x3b8) = 2;
          *(uint *)position = *(uint *)(iVar3 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar3 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar3 + 0x2c);
          iVar3 = *(int *)(param_1 + 0x3a8);
          if (puVar1 != (uint *)(iVar3 + 0x30)) {
            *puVar1 = *(uint *)(iVar3 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar3 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar3 + 0x38);
          }
        }
      }
      else {
        iVar3 = core_vessel_cpp_isStartLocTriggered_FUN_005a8e40(*(int *)(param_1 + 0x2d8));
        if (((iVar3 == 0) ||
            (iVar3 = core_vessel_cpp_isStartLocTriggered_FUN_005a8e40
                               (*(uint *)(param_1 + 0x2dc)), iVar3 == 0)) &&
           ((iVar3 = core_vessel_cpp_isStartLocTriggered_FUN_005a8e40
                               (*(uint *)(param_1 + 0x2d8)), iVar3 != 0 ||
            (iVar3 = core_vessel_cpp_isStartLocTriggered_FUN_005a8e40
                               (*(uint *)(param_1 + 0x2dc)), iVar3 != 0)))) {
          *(uint *)(param_1 + 0x24) = 0x461c3f9a;
          *(uint *)(param_1 + 0x28) = 0x461c3f9a;
          *(uint *)(param_1 + 0x20) = 0x461c3f9a;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x3a8);
          *(uint *)(param_1 + 0x3b8) = 2;
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar3 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar3 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar3 + 0x2c);
          iVar3 = *(int *)(param_1 + 0x3a8);
          if ((uint *)(param_1 + 0x30) != (uint *)(iVar3 + 0x30)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(iVar3 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar3 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar3 + 0x38);
          }
        }
      }
    }
    else if (iVar3 == 2) {
      param_2 = *(float *)(param_1 + 0x3bc) - param_2;
      *(float *)(param_1 + 0x3bc) = param_2;
      if (0.0 <= param_2) {
        return;
      }
      *(uint *)(param_1 + 0x3b8) = 0;
      *(uint *)(param_1 + 0x3bc) = 0;
    }
    else if (iVar3 == 3) {
      if ((*(int *)(*(int *)(param_1 + 0x3a8) + 0x184) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x3ac) + 0x184) == 0)) {
        param_2 = *(float *)(param_1 + 0x3bc) - param_2;
        *(float *)(param_1 + 0x3bc) = param_2;
        if (0.0 <= param_2) {
          return;
        }
        core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60(0x01C57074,position,8.0,1500.0,4.0)
        ;
        iVar3 = *(int *)(param_1 + 0x3a8);
        *(uint *)(param_1 + 0x3bc) = 0x3f800000;
        *(uint *)position = *(uint *)(iVar3 + 0x20);
        *(uint *)(param_1 + 0x24) = *(uint *)(iVar3 + 0x24);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x28);
        *(uint *)(param_1 + 0x2c) = *(uint *)(iVar3 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x3a8);
        if (puVar1 == (uint *)(iVar3 + 0x30)) {
          *(uint *)(param_1 + 0x3b8) = 2;
        }
        else {
          *puVar1 = *(uint *)(iVar3 + 0x30);
          *(uint *)(param_1 + 0x34) = *(uint *)(iVar3 + 0x34);
          *(uint *)(param_1 + 0x38) = *(uint *)(iVar3 + 0x38);
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
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_20 = 0.0;
      fStack_4c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_48 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_44 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
      fStack_40 = fStack_4c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      iVar3 = *(int *)(param_1 + 0x2d8);
      fStack_1c = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
      if (iVar3 != 0) {
        fStack_34 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
        fStack_30 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
        fStack_2c = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
        fStack_64 = fStack_34;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        fStack_18 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
      }
      iVar3 = *(int *)(param_1 + 0x2dc);
      if (iVar3 != 0) {
        fStack_58 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_54 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_50 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_70 = fStack_58;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        fStack_20 = SQRT(fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      }
      if ((((fStack_18 < *(float *)(param_1 + 0x3b0)) && (*(float *)(param_1 + 0x3b0) < fStack_1c))
          && (*(float *)(param_1 + 0x3b0) < fStack_20)) &&
         ((iVar3 = *(int *)(param_1 + 0x2d8), *(int *)(iVar3 + 0x2d4) == 0 &&
          (*(int *)(iVar3 + 0x3b8) == 0)))) {
        *(uint *)(iVar3 + 0x3b8) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d8) + 0x3bc) = 0;
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,(char *)(*(int *)(param_1 + 0x2d8) + 0x2e0));
      }
      if (((*(int *)(param_1 + 0x2d8) != 0) && (*(int *)(param_1 + 0x2dc) != 0)) &&
         ((*(int *)(*(int *)(param_1 + 0x3ac) + 0x184) != 0 &&
          ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 0x3ac) + 0x184) != 0 &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x2dc) + 0x3ac) + 0x184) != 0)))))) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,(char *)(param_1 + 0x344));
        *(uint *)(*(int *)(param_1 + 0x2d8) + 0x7f0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2dc) + 0x7f0) = 1;
        *(uint *)(param_1 + 0x7f0) = 1;
        return;
      }
    }
  }
  return;
}
