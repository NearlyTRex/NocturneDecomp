// Name: core_moon.cpp_CMoon_update_FUN_004deae0
// Address: 004deae0
// Address Range: [[004deae0, 004dec46]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = param_2 * (float)_DAT_0058a8fe + *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar1;
  if ((float)_DAT_0058a906 < fVar1) {
    *(uint *)(param_1 + 4) = 0x3f147ae1;
    DAT_005bb210 = 1;
  }
  _DAT_01ccdec4 = param_2 * (float)_DAT_0058a90e + _DAT_01ccdec4;
  if ((float)_DAT_0058a916 <= _DAT_01ccdec4) {
    _DAT_01ccdec4 = _DAT_01ccdec4 + _DAT_0058a91e;
  }
  _DAT_01ccdebc = _DAT_01ccdebc + _DAT_01bd1d80 * 0x20;
  _DAT_01ccdec0 = _DAT_01ccdec0 + _DAT_01bd1d80 * 0x10;
  if (DAT_005bb210 != 0) {
    iVar3 = 0;
    do {
      *(float *)(iVar3 + 0x1ccdef0) = param_2 * (float)_DAT_0058a926 + *(float *)(iVar3 + 0x1ccdef0)
      ;
      fVar1 = (float)*(int *)(*(int *)(iVar3 + 0x1ccdeec) * 0xc + 0x1ccdec8);
      if (fVar1 <= *(float *)(iVar3 + 0x1ccdef0)) {
        *(float *)(iVar3 + 0x1ccdef0) = *(float *)(iVar3 + 0x1ccdef0) - fVar1;
      }
      fVar1 = (float)_DAT_01cce2bc;
      fVar2 = param_2 * (float)_DAT_0058a92e + *(float *)(iVar3 + 0x1ccdef4);
      *(float *)(iVar3 + 0x1ccdef4) = fVar2;
      if (fVar1 <= fVar2) {
        *(float *)(iVar3 + 0x1ccdef4) = *(float *)(iVar3 + 0x1ccdef4) - fVar1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != 0x2d0);
  }
  return;
}
