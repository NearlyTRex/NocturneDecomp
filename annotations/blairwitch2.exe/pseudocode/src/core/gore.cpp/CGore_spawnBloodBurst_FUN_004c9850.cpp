// Name: core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)

{
  int iVar1;
  byte bVar2;
  float10 x;
  float10 fVar3;
  float afStackY_1050 [1004];
  float fVar4;
  float max_value;
  float local_88;
  float fStack_7c;
  float fStack_70;
  CVector3f local_68;
  float local_5c;
  float local_58 [4];
  CVector3f local_48;
  float local_3c [5];
  float local_28;
  float local_24;
  float local_20;
  
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
        fVar4 = 1.0 / local_24;
        local_48.x = local_48.x * fVar4;
        local_48.y = local_48.y * fVar4;
        local_48.z = local_48.z * fVar4;
      }
      atan2((float10)local_48.x,(float10)local_48.z);
      x = SQRT((float10)local_58[3] * (float10)local_58[3] +
               (float10)local_48.y * (float10)local_48.y);
      fVar3 = atan2((float10)local_48.x,x);
      iVar1 = 0;
      local_3c[0] = 0.0;
      local_48.z = (float)x;
      local_48.y = (float)-fVar3;
      if (0 < count) {
        do {
          max_value = 0.7853982;
          fVar4 = -0.7853982;
          local_68.x = local_48.y;
          *(uint *)((int)&local_68 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 8);
          *(float *)((int)&local_68 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2];
          local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar4,max_value);
          local_68.x = local_20 + local_68.x;
          local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.7853982,0.7853982);
          local_68.y = local_20 + local_68.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                    ((CMatrix3x3f *)&stack0xffffff70,&local_68);
          local_68.x = local_88;
          local_68.y = fStack_7c;
          local_68.z = fStack_70;
          core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
          local_5c = local_68.x * local_28;
          local_58[0] = local_68.y * local_28;
          local_58[1] = local_68.z * local_28;
          local_3c[1] = local_68.x * local_28;
          local_3c[(uint)bVar2 * 0xfffffffe + 2] = local_58[(uint)bVar2 * -2];
          local_3c[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 3] =
               local_58[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          if (&local_68 != (CVector3f *)(local_3c + 1)) {
            local_68.x = local_3c[1];
            local_68.y = local_3c[2];
            local_68.z = local_3c[3];
          }
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                    (this_ptr,position,&local_68,blood_type);
          iVar1 = iVar1 + 1;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
