// Name: core_elephant.cpp_FUN_00478120
// Address: 00478120
// Address Range: [[00478120, 00478302]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_00478120(int param_1)

#include "nocturne.h"

void core_elephant_cpp_FUN_00478120(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  byte local_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_44);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_68,uVar3);
  uStack_18 = *(uint *)(param_1 + 0x2e0);
  uStack_20 = 0;
  uStack_1c = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_74,&uStack_20);
  fStack_38 = -fStack_74;
  fStack_34 = -fStack_70;
  fStack_30 = -fStack_6c;
  fStack_2c = fStack_68 + fStack_74;
  fStack_28 = fStack_64 + fStack_70;
  fStack_24 = fStack_60 + fStack_6c;
  if (&fStack_50 != &fStack_38) {
    fStack_50 = fStack_38;
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
  }
  fVar1 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
  if (fVar1 <= 0.0) {
    fStack_4c = 0.0;
    fStack_50 = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
            (0x01C08D04,&fStack_68,&fStack_2c,0x3f800000,0,0xff,0,
             *(float *)(param_1 + 0x570) * (float)3.1415926535000001 * (float)0.0055555555555555497);
  *(uint *)(param_1 + 0x574) = 1;
  *(float *)(param_1 + 0x578) =
       SQRT((fStack_24 - fStack_60) * (fStack_24 - fStack_60) +
            (fStack_2c - fStack_68) * (fStack_2c - fStack_68) +
            (fStack_28 - fStack_64) * (fStack_28 - fStack_64));
  return;
}
