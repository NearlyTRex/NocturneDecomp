// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00527610
// Address: 00527610
// Address Range: [[00527610, 00527683]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z)

{
  g_DOUBLE_02dc78e0 = pos_x;
  g_DOUBLE_02dc78e8 = pos_y;
  g_DOUBLE_02dc78f0 = pos_z;
  if (g_CSoundDevice_PTR_02dc8318 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02dc8318->vtable->set3DListenerPos)
            (g_CSoundDevice_PTR_02dc8318,pos_x,pos_y,pos_z);
  return;
}
