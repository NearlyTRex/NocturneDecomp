// Name: core_moon.cpp_CMoon_update_FUN_004deae0
// Address: 004deae0
// Address Range: [[004deae0, 004dec46]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(CMoon *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = delta_time * (float)0.012500000000000001 + this_ptr->rotation_phase;
  this_ptr->rotation_phase = fVar1;
  if ((float)0.57999999999999996 < fVar1) {
    this_ptr->rotation_phase = 0.58;
    DAT_005bb210 = 1;
  }
  _DAT_01ccdec4 = delta_time * (float)12 + _DAT_01ccdec4;
  if ((float)60 <= _DAT_01ccdec4) {
    _DAT_01ccdec4 = _DAT_01ccdec4 + 1.6117013929914458e-314._0_4_;
  }
  _DAT_01ccdebc = _DAT_01ccdebc + _DAT_01bd1d80 * 0x20;
  _DAT_01ccdec0 = _DAT_01ccdec0 + _DAT_01bd1d80 * 0x10;
  if (DAT_005bb210 != 0) {
    iVar3 = 0;
    do {
      *(float *)(iVar3 + 0x1ccdef0) =
           delta_time * (float)20 + *(float *)(iVar3 + 0x1ccdef0);
      if ((float)*(int *)(&DAT_01ccdec8 + *(int *)(iVar3 + 0x1ccdeec) * 0xc) <=
          *(float *)(iVar3 + 0x1ccdef0)) {
        *(float *)(iVar3 + 0x1ccdef0) =
             *(float *)(iVar3 + 0x1ccdef0) -
             (float)*(int *)(&DAT_01ccdec8 + *(int *)(iVar3 + 0x1ccdeec) * 0xc);
      }
      fVar1 = (float)_DAT_01cce2bc;
      fVar2 = delta_time * (float)30 + *(float *)(iVar3 + 0x1ccdef4);
      *(float *)(iVar3 + 0x1ccdef4) = fVar2;
      if (fVar1 <= fVar2) {
        *(float *)(iVar3 + 0x1ccdef4) = *(float *)(iVar3 + 0x1ccdef4) - fVar1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != 0x2d0);
  }
  return;
}
