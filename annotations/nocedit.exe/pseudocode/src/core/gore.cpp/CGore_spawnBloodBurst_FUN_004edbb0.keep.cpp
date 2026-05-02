// Name: core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
// Address: 004edbb0
// MANUAL RECONSTRUCTION
// Address Range: [[004edbb0, 004eddd4]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)

{
  float fVar2;
  float fVar5;
  int iVar2;
  int iVar6;
  float10 fVar3;
  float10 fVar4;
  CMatrix3x3f local_74;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float fVar1;
  
  if (blood_type != 2) {
    if (direction == (CVector3f *)0x0) {
      iVar2 = 0;
      if (0 < count) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                    (this_ptr,position,(CVector3f *)0x0,blood_type);
        } while (iVar2 < count);
      }
    }
    else {
      fVar2 = SQRT(direction->z * direction->z +
                   direction->x * direction->x + direction->y * direction->y);
      if (&local_40 != direction) {
        local_40.x = direction->x;
        local_40.y = direction->y;
        local_40.z = direction->z;
      }
      fVar1 = SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y);
      if (fVar1 <= 0.0) {
        local_40.y = 0.0;
        local_40.x = 0.0;
        local_40.z = 0.0;
      }
      else {
        fVar5 = 1.0 / fVar1;
        local_40.x = local_40.x * fVar5;
        local_40.y = local_40.y * fVar5;
        local_40.z = local_40.z * fVar5;
      }
      fVar4 = (float10)fpatan((float10)local_40.y,
                              SQRT((float10)local_40.x * (float10)local_40.x +
                                   (float10)local_40.z * (float10)local_40.z));
      fVar3 = (float10)fpatan((float10)local_40.x,(float10)local_40.z);
      iVar6 = 0;
      if (0 < count) {
        do {
          local_34.z = 0.0;
          local_34.x = (float)-fVar4;
          local_34.y = (float)fVar3;
          fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.7853982,0.7853982);
          local_34.x = fVar5 + local_34.x;
          fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.7853982,0.7853982);
          local_34.y = fVar5 + local_34.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_74,&local_34);
          local_34.x = local_74.m[0].z;
          local_34.y = local_74.m[1].z;
          local_34.z = local_74.m[2].z;
          core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
          local_4c.x = local_34.x * fVar2;
          local_4c.y = local_34.y * fVar2;
          local_4c.z = local_34.z * fVar2;
          if (&local_34 != &local_4c) {
            local_34.x = local_4c.x;
            local_34.y = local_4c.y;
            local_34.z = local_4c.z;
          }
          iVar6 = iVar6 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                    (this_ptr,position,&local_34,blood_type);
        } while (iVar6 < count);
      }
    }
  }
  return;
}
