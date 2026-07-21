// Name: core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
// Address: 004b0200
// Address Range: [[004b0200, 004b0424]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(uint param_1,uint param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  uint uVar5;
  int iStack_7c;
  float local_78;
  float local_74;
  float fStack_68;
  float fStack_5c;
  float local_54;
  float fStack_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (param_5 != 2) {
    if (param_3 == (float *)0x0) {
      iVar2 = 0;
      if (0 < param_4) {
        do {
          iStack_7c = param_5;
          iVar2 = iVar2 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(param_1,param_2,0);
        } while (iVar2 < param_4);
      }
    }
    else {
      local_1c = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
      if (&local_40 != param_3) {
        local_40 = *param_3;
        local_3c = param_3[1];
        local_38 = param_3[2];
      }
      local_78 = SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
      if (local_78 <= 0.0) {
        local_3c = 0.0;
        local_40 = 0.0;
        local_38 = 0.0;
      }
      else {
        fVar1 = 1.0 / local_78;
        local_40 = local_40 * fVar1;
        local_3c = local_3c * fVar1;
        local_38 = local_38 * fVar1;
      }
      iStack_7c = 0x4b02e5;
      atan2
                ((float10)local_3c,
                 SQRT((float10)local_40 * (float10)local_40 + (float10)local_38 * (float10)local_38)
                );
      fVar3 = (float10)local_3c;
      local_24 = 0.0;
      uVar5 = 0x4b02f8;
      fVar4 = (float10)atan2((float10)local_44);
      iVar2 = 0;
      local_30 = (float)-fVar3;
      local_2c = (float)fVar4;
      if (0 < param_4) {
        do {
          local_3c = local_30;
          local_38 = local_2c;
          local_34 = (float)local_28;
          local_20 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0xbf490fdb,0x3f490fdb,uVar5);
          local_3c = local_20 + local_3c;
          local_20 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0xbf490fdb,0x3f490fdb);
          local_38 = local_20 + local_38;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&iStack_7c,&local_3c);
          local_3c = local_74;
          local_38 = fStack_68;
          local_34 = fStack_5c;
          core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbf000000,0x3f000000);
          local_54 = local_3c * local_24;
          fStack_50 = local_38 * local_24;
          local_4c = local_34 * local_24;
          if (&local_3c != &local_54) {
            local_3c = local_54;
            local_38 = fStack_50;
            local_34 = local_4c;
          }
          iVar2 = iVar2 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(param_1,param_2,&local_3c,param_5);
        } while (iVar2 < param_4);
      }
    }
  }
  return;
}
