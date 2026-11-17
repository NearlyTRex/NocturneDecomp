// Name: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
// Address: 0049e3e0
// Address Range: [[0049e3e0, 0049e556]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CExplosion *pCVar5;
  float local_58 [9];
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28 [2];
  
  pCVar5 = g_CExplosion_ARRAY_01c975e4;
  iVar4 = 0;
  do {
    if ((float)0.5 < pCVar5->lifetime) {
      if (&local_34 != local_58) {
        local_34 = position->x - (pCVar5->position).x;
        local_30 = position->y - (pCVar5->position).y;
        local_2c = position->z - (pCVar5->position).z;
      }
      fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
      if (fVar1 < pCVar5->scale * (float)0.5 + radius) {
        if (out_force_dir != (CVector3f *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_30 * fVar1 * 40.0f;
          fVar3 = local_2c * fVar1 * 40.0f;
          if (local_28 != out_force_dir) {
            out_force_dir->x = local_34 * fVar1 * 40.0f;
            out_force_dir->y = fVar2;
            out_force_dir->z = fVar3;
          }
        }
        if (out_gore_multiplier != (float *)0x0) {
          *out_gore_multiplier = pCVar5->gore_multiplier;
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
