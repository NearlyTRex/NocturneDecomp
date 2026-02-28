// Name: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
// Address: 005a88e0
// Address Range: [[005a88e0, 005a8939]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].position.x = pos_x;
  g_SfxOptions[iVar1].position.y = pos_y;
  g_SfxOptions[iVar1].position.z = pos_z;
  g_SfxOptions[iVar1].position_source_ptr = (void *)0x0;
  g_SfxOptions[iVar1].position_format = 0;
  return;
}
