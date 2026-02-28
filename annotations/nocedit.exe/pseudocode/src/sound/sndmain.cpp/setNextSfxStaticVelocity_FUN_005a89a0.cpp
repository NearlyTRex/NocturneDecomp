// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0
// Address: 005a89a0
// Address Range: [[005a89a0, 005a89f9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x,double vel_y,double vel_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x,double vel_y,double vel_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].velocity.x = vel_x;
  g_SfxOptions[iVar1].velocity.y = vel_y;
  g_SfxOptions[iVar1].velocity.z = vel_z;
  g_SfxOptions[iVar1].velocity_source_ptr = (void *)0x0;
  g_SfxOptions[iVar1].velocity_format = 0;
  return;
}
