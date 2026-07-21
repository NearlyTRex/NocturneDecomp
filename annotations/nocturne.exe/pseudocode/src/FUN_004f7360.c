// Name: FUN_004f7360
// Address: 004f7360
// Address Range: [[004f7360, 004f7558]]
// Convention: unknown
// Signature: undefined4 FUN_004f7360(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7360(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  uint local_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  byte auStack_3c [12];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  
  if (param_2 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(local_88);
    local_88[0] = 0;
    iVar1 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x34))(param_2,local_88);
    if (iVar1 == 2) {
      uStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(param_1 + 0x30));
      *(uint *)(param_1 + 0x30) = uStack_18;
      uStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(param_1 + 0x38));
      *(uint *)(param_1 + 0x38) = uStack_18;
      if ((ABS(*(float *)(param_1 + 0x30)) <= (float)_DAT_0058d965) &&
         (ABS(*(float *)(param_1 + 0x38)) <= (float)_DAT_0058d965)) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_60);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_24,param_2 + 0x20)
        ;
        if (((fStack_60 <= fStack_24 + fStack_6c) &&
            (((fStack_24 - fStack_6c <= fStack_54 && (fStack_58 <= fStack_1c + fStack_6c)) &&
             (fStack_1c - fStack_6c <= fStack_4c)))) &&
           ((fStack_5c <= fStack_20 + fStack_70 && (fStack_20 + fStack_74 <= fStack_50)))) {
          iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
          if (*(int *)(iVar1 + 0x358) != 0) {
            fStack_48 = fStack_24;
            fStack_40 = fStack_1c;
            uStack_30 = 0;
            uStack_2c = 0x3f800000;
            uStack_28 = 0;
            fStack_44 = fStack_70 + _DAT_0058d96d + fStack_20;
            uVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                              (param_1 + 0x150,0,&fStack_48,&uStack_30,auStack_3c);
            fVar3 = (float)core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(uVar2);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
