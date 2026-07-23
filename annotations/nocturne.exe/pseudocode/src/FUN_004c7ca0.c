// Name: FUN_004c7ca0
// Address: 004c7ca0
// Address Range: [[004c7ca0, 004c8033]]
// Convention: unknown
// Signature: int FUN_004c7ca0(int param_1)

#include "nocturne.h"

int FUN_004c7ca0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  byte local_94 [12];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
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
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_94);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_4c,uVar3);
    uStack_5c = *(uint *)(param_1 + 0x2e0);
    uStack_64 = 0;
    uStack_60 = 0;
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_28,&uStack_64);
    fStack_58 = -fStack_28;
    fStack_54 = -fStack_24;
    fStack_50 = -fStack_20;
    fStack_40 = fStack_4c + fStack_28;
    fStack_3c = fStack_48 + fStack_24;
    fStack_38 = fStack_44 + fStack_20;
    if (&fStack_34 != &fStack_58) {
      fStack_34 = fStack_58;
      fStack_30 = fStack_54;
      fStack_2c = fStack_50;
    }
    fVar1 = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if (fVar1 <= 0.0) {
      fStack_30 = 0.0;
      fStack_34 = 0.0;
      fStack_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_34 = fStack_34 * fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
    }
    fVar5 = (float10)fpatan((float10)18 / (float10)112.0f,(float10)1);
    iVar2 = core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
                      (0x01C08D04,&fStack_4c,&fStack_40,0x3f800000,0xff,0xff,0xb4,(float)fVar5);
    if (*(int *)(param_1 + 0x580) != 0) {
      *(uint *)(param_1 + 0x580) = 0;
      iVar2 = 1;
      do {
        iVar4 = iVar2 + 1;
        iStack_18 = iVar2;
        core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
                  (0x01C08D04,&fStack_4c,&fStack_40,0x3f800000,0xff,0xff,0xb4,
                   (float)iVar2 * (float)fVar5 * (float)0.10000000000000001);
        iVar2 = iVar4;
      } while (iVar4 < 10);
      fStack_6c = fStack_3c - fStack_48;
      fStack_70 = fStack_40 - fStack_4c;
      fStack_68 = fStack_38 - fStack_44;
      fStack_88 = fStack_4c;
      fStack_84 = fStack_48;
      fStack_80 = fStack_44;
      fVar1 = SQRT(fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      if (0.0 < fVar1) {
        fVar1 = 1.0 / fVar1;
        fStack_70 = fStack_70 * fVar1;
        fStack_6c = fStack_6c * fVar1;
        fStack_68 = fStack_68 * fVar1;
      }
      else {
        fStack_6c = 0.0;
        fStack_70 = 0.0;
        fStack_68 = 0.0;
      }
      fStack_1c = *(float *)(param_1 + 0x584) * (float)0.015625;
      fStack_7c = fStack_70 * fStack_1c;
      fStack_78 = fStack_6c * fStack_1c;
      fStack_74 = fStack_68 * fStack_1c;
      if (&fStack_70 != &fStack_7c) {
        fStack_70 = fStack_7c;
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
      }
      iVar2 = 0;
      do {
        iVar4 = core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                          (0x01C08D04,&fStack_88,0,0x8000,0x4000,0,0x3333);
        iVar2 = iVar2 + 1;
        fStack_88 = fStack_88 + fStack_70;
        fStack_84 = fStack_84 + fStack_6c;
        fStack_80 = fStack_80 + fStack_68;
      } while (iVar2 < 0x40);
      return iVar4;
    }
  }
  return iVar2;
}
