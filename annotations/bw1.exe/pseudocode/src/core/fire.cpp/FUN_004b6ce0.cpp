// Name: core_fire.cpp_FUN_004b6ce0
// Address: 004b6ce0
// Address Range: [[004b6ce0, 004b6e56]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_FUN_004b6ce0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_FUN_004b6ce0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)

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
  
  pfVar5 = (float *)0x1cb0070;
  iVar4 = 0;
  do {
    if ((float)_DAT_005df654 < pfVar5[3]) {
      if (&local_34 != local_58) {
        local_34 = *(float *)position - *pfVar5;
        local_30 = *(float *)&position->field_0x4 - pfVar5[1];
        local_2c = *(float *)&position->field_0x8 - pfVar5[2];
      }
      fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
      if (fVar1 < pfVar5[4] * (float)_DAT_005df654 + radius) {
        if (out_force_dir != (CVector3f *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_30 * fVar1 * _DAT_005df65c;
          fVar3 = local_2c * fVar1 * _DAT_005df65c;
          if (local_28 != out_force_dir) {
            *(float *)out_force_dir = local_34 * fVar1 * _DAT_005df65c;
            *(float *)&out_force_dir->field_0x4 = fVar2;
            *(float *)&out_force_dir->field_0x8 = fVar3;
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
