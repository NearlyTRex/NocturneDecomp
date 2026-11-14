// Name: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780
// Address: 00572780
// Address Range: [[00572780, 005727dc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00572780(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00572780(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(double *)(iVar1 + 0x2c78cf4) = pos_x;
  *(double *)(iVar1 + 0x2c78cfc) = pos_y;
  *(double *)(iVar1 + 0x2c78d04) = pos_z;
  *(uint *)(iVar1 + 0x2c78d0c) = 0;
  *(uint *)(iVar1 + 0x2c78d10) = 0;
  return;
}
