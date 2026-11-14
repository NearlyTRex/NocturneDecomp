// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557077]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00557020(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00557020(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8) = pos_x._0_4_;
  *(uint *)(iVar1 * 8 + 0x2cf282c) = pos_x._4_4_;
  *(uint *)(&DAT_02cf2838 + iVar1 * 8) = pos_y._0_4_;
  *(uint *)(iVar1 * 8 + 0x2cf283c) = pos_y._4_4_;
  *(uint *)(&DAT_02cf2848 + iVar1 * 8) = pos_z._0_4_;
  *(uint *)(iVar1 * 8 + 0x2cf284c) = pos_z._4_4_;
  DAT_02cf3424 = DAT_02cf3424 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
