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
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].position.x = pos_x;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position.y = pos_y;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position.z = pos_z;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position_format = 0;
  return;
}
