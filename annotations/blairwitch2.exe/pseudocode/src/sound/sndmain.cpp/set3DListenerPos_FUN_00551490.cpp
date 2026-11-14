// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00551490
// Address: 00551490
// Address Range: [[00551490, 005514e7]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00551490(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00551490(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(uint *)(&DAT_02648428 + _DAT_026484b8 * 8) = pos_x._0_4_;
  *(uint *)(iVar1 * 8 + 0x264842c) = pos_x._4_4_;
  *(uint *)(&DAT_02648438 + iVar1 * 8) = pos_y._0_4_;
  *(uint *)(iVar1 * 8 + 0x264843c) = pos_y._4_4_;
  *(uint *)(&DAT_02648448 + iVar1 * 8) = pos_z._0_4_;
  *(uint *)(iVar1 * 8 + 0x264844c) = pos_z._4_4_;
  DAT_02649024 = DAT_02649024 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
