// Name: core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
// Address: 004c8c90
// Address Range: [[004c8c90, 004c8dc9]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,int *out_damage)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,int *out_damage)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CExplosion *pCVar5;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c [2];
  float local_24 [5];
  
  pCVar5 = g_ExplosionPool;
  iVar4 = 0;
  do {
    if ((float)0.5 < pCVar5->lifetime) {
      if (&local_48 != local_24) {
        local_48 = position->x - (pCVar5->position).x;
        local_44 = position->y - (pCVar5->position).y;
        local_40 = position->z - (pCVar5->position).z;
      }
      fVar1 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (fVar1 < pCVar5->scale * (float)0.5 + radius) {
        if (out_force_dir != (CVector3f *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_44 * fVar1 * 40.0f;
          fVar3 = local_40 * fVar1 * 40.0f;
          if (local_3c != out_force_dir) {
            out_force_dir->x = local_48 * fVar1 * 40.0f;
            out_force_dir->y = fVar2;
            out_force_dir->z = fVar3;
          }
        }
        if (out_damage != (int *)0x0) {
          *out_damage = pCVar5->damage_amount;
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pCVar5 = pCVar5 + 1;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
