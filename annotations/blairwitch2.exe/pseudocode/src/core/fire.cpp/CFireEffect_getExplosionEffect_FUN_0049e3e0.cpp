// Name: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
// Address: 0049e3e0
// Address Range: [[0049e3e0, 0049e556]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_58 [9];
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28 [2];
  
  pfVar5 = (float *)0x1c975e4;
  iVar4 = 0;
  do {
    if ((float)_DAT_005d5812 < pfVar5[3]) {
      if (&local_34 != local_58) {
        local_34 = position->x - *pfVar5;
        local_30 = position->y - pfVar5[1];
        local_2c = position->z - pfVar5[2];
      }
      fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
      if (fVar1 < pfVar5[4] * (float)_DAT_005d5812 + radius) {
        if (out_force_dir != (CVector3f *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_30 * fVar1 * _DAT_005d581a;
          fVar3 = local_2c * fVar1 * _DAT_005d581a;
          if (local_28 != out_force_dir) {
            out_force_dir->x = local_34 * fVar1 * _DAT_005d581a;
            out_force_dir->y = fVar2;
            out_force_dir->z = fVar3;
          }
        }
        if (out_gore_multiplier != (float *)0x0) {
          *out_gore_multiplier = pfVar5[5];
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 7;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
