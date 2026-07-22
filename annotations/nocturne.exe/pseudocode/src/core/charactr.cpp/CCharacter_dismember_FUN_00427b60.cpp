// Name: core_charactr.cpp_CCharacter_dismember_FUN_00427b60
// Address: 00427b60
// Address Range: [[00427b60, 00427d9f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(int param_1,float *param_2,float param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(int param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  float local_b0;
  byte local_ac [40];
  byte local_84 [24];
  uint local_6c;
  uint local_68;
  float local_64;
  byte auStack_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48 [3];
  float local_3c;
  float local_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_b0 = param_3;
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xb63c));
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1 + 0x150);
    local_24 = *(int *)(iVar1 + 0xc00);
    if (1 < local_24) {
      if (param_3 < 0.0) {
        local_b0 = 20.0;
      }
      iVar1 = 0;
      if (0 < local_24) {
        do {
          pfVar2 = param_2;
          if ((param_2 != (float *)0x0) && (0.0 < local_b0)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_3c,param_2);
            local_20 = -local_b0;
            local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0)
            ;
            local_38 = local_18 + local_38;
            local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_20,local_b0)
            ;
            local_3c = local_18 + local_3c;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_ac,&local_3c);
            local_64 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])
            ;
            local_6c = 0;
            local_68 = 0;
            local_1c = local_64;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(local_ac,local_48,&local_6c);
            pfVar2 = local_48;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40(param_1,iVar1,pfVar2,param_4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_24);
      }
    }
  }
  pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_84);
  fStack_30 = *pfVar2 + pfVar2[3];
  fStack_2c = pfVar2[1] + pfVar2[4];
  fStack_54 = fStack_30 * 5.2220990168285998e-315._0_4_;
  fStack_50 = fStack_2c * 5.2220990168285998e-315._0_4_;
  fStack_28 = pfVar2[2] + pfVar2[5];
  fStack_4c = fStack_28 * 5.2220990168285998e-315._0_4_;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_60,&fStack_54);
  if (*(int *)(param_1 + 0xb640) == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
              (0x01C78C7C,auStack_60,param_2,100,*(uint *)(param_1 + 0x2608));
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  *(uint *)(param_1 + 0x2f08) = 0;
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
