// Name: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50
// Address: 00525f50
// Address Range: [[00525f50, 00525fb3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(double *)(iVar1 + 0x2dc1b7c) = pos_x;
  *(double *)(iVar1 + 0x2dc1b84) = pos_y;
  *(double *)(iVar1 + 0x2dc1b8c) = pos_z;
  *(uint *)(iVar1 + 0x2dc1b94) = 0;
  *(uint *)(iVar1 + 0x2dc1b98) = 0;
  return;
}
