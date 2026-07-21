// Name: FUN_004fda20
// Address: 004fda20
// Address Range: [[004fda20, 004fdcf0]]
// Convention: unknown
// Signature: float FUN_004fda20(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004fda20(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte local_f8 [120];
  byte auStack_80 [24];
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  byte auStack_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,_DAT_01bcdef4);
  __arrinit(local_f8,10,&DAT_005993b0);
  iVar4 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x4c))(param_2,local_f8);
  if ((iVar4 != 0) &&
     (((iVar3 == 0 || (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), iVar3 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_50,param_2 + 0x20),
      0.0 < fStack_48)))) {
    fVar2 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
    fStack_20 = fVar2;
    iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_68,&fStack_50);
    fVar1 = *(float *)(iVar3 + 4);
    if (param_3 == 0) {
      if ((float)_DAT_0058df76 < fVar2) {
        return -1.0;
      }
      if (fVar1 < (float)_DAT_0058df7e) {
        return -1.0;
      }
      if (_DAT_0058df86 < (double)fVar1) {
        return -1.0;
      }
    }
    else {
      if ((float)_DAT_0058df8e < fVar2) {
        return -1.0;
      }
      if (fVar1 < (float)_DAT_0058df96) {
        return -1.0;
      }
      if (_DAT_0058df9e < (double)fVar1) {
        return -1.0;
      }
    }
    pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_80);
    fStack_38 = *pfVar5 + pfVar5[3];
    fStack_34 = pfVar5[1] + pfVar5[4];
    fStack_2c = fStack_38 * _DAT_0058dfa6;
    fStack_30 = pfVar5[2] + pfVar5[5];
    fStack_28 = fStack_34 * _DAT_0058dfa6;
    fStack_24 = fStack_30 * _DAT_0058dfa6;
    fStack_5c = *(float *)(param_1 + 0x20) + fStack_2c;
    fStack_58 = *(float *)(param_1 + 0x24) + fStack_28;
    fStack_54 = *(float *)(param_1 + 0x28) + fStack_24;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,auStack_44,local_f8);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    fStack_1c = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_5c,auStack_44);
    fStack_14 = fStack_1c;
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    if ((fStack_1c <= 1.0) && (param_2 == *(int *)(0x01E57284 + 0x14cd5c))) {
      return fStack_20;
    }
  }
  return -1.0;
}
