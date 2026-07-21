// Name: FUN_00462300
// Address: 00462300
// Address Range: [[00462300, 0046270a]]
// Convention: unknown
// Signature: void FUN_00462300(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462300(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  byte auStack_b4 [4];
  uint uStack_b0;
  int iStack_80;
  int iStack_7c;
  byte local_78 [4];
  float fStack_74;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  byte local_54 [4];
  uint local_50;
  uint local_48;
  float local_44;
  uint local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(param_1 + 0x2e4) == 0) {
    local_48 = *(uint *)(param_1 + 0x2f0);
    local_40 = *(uint *)(param_1 + 0x2f8);
    local_44 = *(float *)(param_1 + 0x2f4) + _DAT_0057de6c;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00467930
              (&DAT_01fba938,local_54,(uint *)(param_1 + 0x2f0),&local_48);
    *(uint *)(param_1 + 0x2e4) = 1;
    *(uint *)(param_1 + 0x2e8) = local_50;
  }
  if ((*(uint *)(param_1 + 0x2d4) & 0x7fffffff) == 0) {
    fVar2 = *(float *)(param_1 + 0x300) - param_2 * (float)_DAT_0057de70;
    *(float *)(param_1 + 0x300) = fVar2;
    *(float *)(param_1 + 0x24) = fVar2 * param_2 + *(float *)(param_1 + 0x24);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_78);
    if (*(float *)(param_1 + 0x24) <
        *(float *)(param_1 + 0x2e8) - (fStack_68 - fStack_74) * (float)_DAT_0057de78) {
      if (*(int *)(param_1 + 0x330) != 0) {
        FUN_0050e660(0x01E57284,0x42c80000,0,0,0x3f800000);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x30c);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2e8);
      if (*(int *)(param_1 + 0x32c) == 0) {
        iVar4 = 0;
        do {
          fStack_60 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbf000000,0x3f000000);
          fStack_14 = fStack_60;
          fStack_5c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbf000000,0x3f000000);
          fStack_14 = fStack_5c;
          fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbf000000,0x3f000000);
          fStack_60 = fStack_60 + *(float *)(param_1 + 0x20);
          fStack_5c = fStack_5c + *(float *)(param_1 + 0x24);
          fStack_58 = fStack_14 + *(float *)(param_1 + 0x28);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&fStack_60,0x3f000000,0,0xffff);
          fStack_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0x3f490fdb,0x3fc90fdb);
          fStack_14 = fStack_1c;
          fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
          fVar6 = (float10)fcos((float10)fStack_14);
          fVar7 = (float10)fcos((float10)fStack_1c);
          fVar8 = (float10)fsin((float10)fStack_14);
          fVar9 = (float10)fsin((float10)fStack_1c);
          fStack_18 = (float)fVar7;
          fStack_38 = (float)(fVar9 * (float10)_DAT_0057de80);
          fStack_3c = (float)(fVar6 * (float10)_DAT_0057de80 * (float10)fStack_18);
          fStack_34 = (float)(fVar8 * (float10)_DAT_0057de80 * (float10)fStack_18);
          uVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(0x1b7b330);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_0048b320
                    (0x01C08D04,(float *)(param_1 + 0x20),&fStack_3c,uVar3);
        } while (iVar4 < 10);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2f4);
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      *(float *)(param_1 + 0x20) =
           fStack_14 * *(float *)(param_1 + 0x2e0) + *(float *)(param_1 + 0x2f0);
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      *(float *)(param_1 + 0x28) =
           fStack_14 * *(float *)(param_1 + 0x2e0) + *(float *)(param_1 + 0x2f8);
      *(uint *)(param_1 + 0x304) = 0;
      *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x304);
      *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x300);
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                   (*(uint *)(param_1 + 0x2d8),
                                    *(uint *)(param_1 + 0x2dc));
      *(float *)(param_1 + 0x2d4) = fStack_14;
    }
    iStack_20 = param_1 + 0x20;
    iVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar5) break;
      iVar1 = *(int *)(iVar4 + 0x14ecb4 + 0x01E57284);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_b4);
      uStack_b0 = *(uint *)(param_1 + 0x308);
      iStack_80 = param_1;
      iStack_7c = param_1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf8))(iVar1,iStack_20,0x3f800000,auStack_b4);
    }
  }
  else if ((*(int *)(param_1 + 0x2d0) != 0) &&
          (param_2 = *(float *)(param_1 + 0x2d4) - param_2, *(float *)(param_1 + 0x2d4) = param_2,
          param_2 < 0.0)) {
    *(uint *)(param_1 + 0x2d4) = 0;
    return;
  }
  return;
}
