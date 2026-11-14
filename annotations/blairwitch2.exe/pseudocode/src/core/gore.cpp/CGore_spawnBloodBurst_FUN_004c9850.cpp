// Name: core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

{
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStackY_1048 [1004];
  float fVar5;
  float max_value;
  CMatrix3x3f local_88;
  CVector3f local_60;
  float local_54;
  float local_50 [2];
  CVector3f local_48;
  float local_3c;
  float local_38 [2];
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_18;
  
  bVar2 = 0;
  if (blood_type != BLOOD_TYPE_NONE) {
    if (direction == (CVector3f *)0x0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                    (this_ptr,position,(CVector3f *)0x0,blood_type);
        } while (iVar1 < count);
      }
    }
    else {
      local_20 = SQRT(direction->z * direction->z +
                      direction->x * direction->x + direction->y * direction->y);
      if (&local_48 != direction) {
        local_48.x = direction->x;
        local_48.y = direction->y;
        local_48.z = direction->z;
      }
      local_24 = SQRT(local_48.z * local_48.z + local_48.x * local_48.x + local_48.y * local_48.y);
      if (local_24 <= 0.0) {
        local_48.y = 0.0;
        local_48.x = 0.0;
        local_48.z = 0.0;
      }
      else {
        fVar5 = 1.0 / local_24;
        local_48.x = local_48.x * fVar5;
        local_48.y = local_48.y * fVar5;
        local_48.z = local_48.z * fVar5;
      }
      atan2();
      fVar3 = SQRT((float10)local_48.x * (float10)local_48.x +
                   (float10)local_48.z * (float10)local_48.z);
      fVar4 = (float10)local_48.y;
      atan2();
      iVar1 = 0;
      local_38[1] = 0.0;
      local_38[0] = (float)fVar3;
      local_3c = (float)-fVar4;
      if (0 < count) {
        do {
          max_value = 0.7853982;
          fVar5 = -0.7853982;
          local_60.x = local_3c;
          *(float *)((int)&local_60 + (uint)bVar2 * -8 + 4) = local_38[(uint)bVar2 * -2];
          *(float *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar5,max_value);
          local_60.x = local_18 + local_60.x;
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.7853982,0.7853982);
          local_60.y = local_18 + local_60.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_88,&local_60);
          local_60.x = local_88.m[0].z;
          local_60.y = local_88.m[1].z;
          local_60.z = local_88.m[2].z;
          core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
          local_54 = local_60.x * local_20;
          local_50[0] = local_60.y * local_20;
          local_50[1] = local_60.z * local_20;
          local_30.x = local_60.x * local_20;
          local_38[(uint)bVar2 * -2 + 3] = local_50[(uint)bVar2 * -2];
          local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
               local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          if (&local_60 != (CVector3f *)(local_38 + 2)) {
            local_60.x = local_30.x;
            local_60.y = local_30.y;
            local_60.z = local_30.z;
          }
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                    (this_ptr,position,&local_60,blood_type);
          iVar1 = iVar1 + 1;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
