// Name: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004a3790
// Address: 004a3790
// Address Range: [[004a3790, 004a3916]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier,int *out_explosion_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier,int *out_explosion_type)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_34 [3];
  CVector3f local_28 [2];
  
  pfVar5 = (float *)0x1cf6090;
  iVar4 = 0;
  do {
    if ((float)_DAT_005c0a30 < pfVar5[3]) {
      if (&local_70 != local_34) {
        local_70 = position->x - *pfVar5;
        local_6c = position->y - pfVar5[1];
        local_68 = position->z - pfVar5[2];
      }
      fVar1 = SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c);
      if (fVar1 < pfVar5[4] * (float)_DAT_005c0a30 + radius) {
        if (out_force_dir != (CVector3f *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_6c * fVar1 * _DAT_005c0a38;
          fVar3 = local_68 * fVar1 * _DAT_005c0a38;
          if (local_28 != out_force_dir) {
            out_force_dir->x = local_70 * fVar1 * _DAT_005c0a38;
            out_force_dir->y = fVar2;
            out_force_dir->z = fVar3;
          }
        }
        if (out_gore_multiplier != (float *)0x0) {
          *out_gore_multiplier = pfVar5[5];
        }
        if (out_explosion_type != (int *)0x0) {
          *out_explosion_type = (int)pfVar5[7];
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 8;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
