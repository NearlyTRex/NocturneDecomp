// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00573ec0
// Address: 00573ec0
// Address Range: [[00573ec0, 00573f17]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00573ec0(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00573ec0(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8) = pos_x._0_4_;
  *(uint *)(iVar1 * 8 + 0x2c7fbfc) = pos_x._4_4_;
  *(uint *)(&DAT_02c7fc08 + iVar1 * 8) = pos_y._0_4_;
  *(uint *)(iVar1 * 8 + 0x2c7fc0c) = pos_y._4_4_;
  *(uint *)(&DAT_02c7fc18 + iVar1 * 8) = pos_z._0_4_;
  *(uint *)(iVar1 * 8 + 0x2c7fc1c) = pos_z._4_4_;
  DAT_02c807f4 = DAT_02c807f4 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
