// Name: core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
// Address: 004b0200
// Address Range: [[004b0200, 004b0424]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)

{
  float fVar1;
  int iVar2;
  float10 x;
  float10 fVar3;
  float local_74;
  float fStack_68;
  float fStack_5c;
  float local_54;
  float fStack_50;
  float local_4c;
  float local_44;
  byte local_40 [8];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (blood_type != 2) {
    if (direction == (CVector3f *)0x0) {
      iVar2 = 0;
      if (0 < count) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                    (this_ptr,position,(CVector3f *)0x0,blood_type);
        } while (iVar2 < count);
      }
    }
    else {
      local_1c = SQRT(direction->z * direction->z +
                      direction->x * direction->x + direction->y * direction->y);
      if ((CVector3f *)local_40 != direction) {
        local_40._0_4_ = direction->x;
        local_40._4_4_ = direction->y;
        local_38 = direction->z;
      }
      fVar1 = SQRT(local_38 * local_38 +
                   (float)local_40._0_4_ * (float)local_40._0_4_ +
                   (float)local_40._4_4_ * (float)local_40._4_4_);
      if (fVar1 <= 0.0) {
        local_40._4_4_ = 0.0;
        local_40._0_4_ = 0.0;
        local_38 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_40._0_4_ = (float)local_40._0_4_ * fVar1;
        local_40._4_4_ = (float)local_40._4_4_ * fVar1;
        local_38 = local_38 * fVar1;
      }
      atan2
                ((float10)(float)local_40._4_4_,
                 SQRT((float10)(float)local_40._0_4_ * (float10)(float)local_40._0_4_ +
                      (float10)local_38 * (float10)local_38));
      x = (float10)(float)local_40._4_4_;
      local_24 = 0.0;
      fVar3 = atan2((float10)local_44,x);
      iVar2 = 0;
      local_30 = (float)-x;
      local_2c = (float)fVar3;
      if (0 < count) {
        do {
          local_40._4_4_ = local_30;
          local_38 = local_2c;
          local_34 = (float)local_28;
          local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.7853982,0.7853982);
          local_40._4_4_ = local_20 + (float)local_40._4_4_;
          local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.7853982,0.7853982);
          local_38 = local_20 + local_38;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
                    ((CMatrix3x3f *)&stack0xffffff84,(CVector3f *)(local_40 + 4));
          local_40._4_4_ = local_74;
          local_38 = fStack_68;
          local_34 = fStack_5c;
          core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.5,0.5);
          local_54 = (float)local_40._4_4_ * local_24;
          fStack_50 = local_38 * local_24;
          local_4c = local_34 * local_24;
          if ((float *)(local_40 + 4) != &local_54) {
            local_40._4_4_ = local_54;
            local_38 = fStack_50;
            local_34 = local_4c;
          }
          iVar2 = iVar2 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                    (this_ptr,position,(CVector3f *)(local_40 + 4),blood_type);
        } while (iVar2 < count);
      }
    }
  }
  return;
}
