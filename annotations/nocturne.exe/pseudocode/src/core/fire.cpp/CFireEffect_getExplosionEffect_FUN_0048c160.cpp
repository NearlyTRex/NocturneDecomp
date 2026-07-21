// Name: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
// Address: 0048c160
// Address Range: [[0048c160, 0048c299]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160(uint param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [6];
  float local_24 [5];
  
  pfVar5 = (float *)0x1c5d708;
  iVar4 = 0;
  do {
    if ((float)_DAT_0058150c < pfVar5[3]) {
      if (&local_48 != local_24) {
        local_48 = *param_2 - *pfVar5;
        local_44 = param_2[1] - pfVar5[1];
        local_40 = param_2[2] - pfVar5[2];
      }
      fVar1 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (fVar1 < pfVar5[4] * (float)_DAT_0058150c + param_3) {
        if (param_4 != (float *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_44 * fVar1 * _DAT_00581514;
          fVar3 = local_40 * fVar1 * _DAT_00581514;
          if (local_3c != param_4) {
            *param_4 = local_48 * fVar1 * _DAT_00581514;
            param_4[1] = fVar2;
            param_4[2] = fVar3;
          }
        }
        if (param_5 != (float *)0x0) {
          *param_5 = pfVar5[5];
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
