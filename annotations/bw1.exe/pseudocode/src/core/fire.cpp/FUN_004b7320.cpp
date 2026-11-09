// Name: core_fire.cpp_FUN_004b7320
// Address: 004b7320
// Address Range: [[004b7320, 004b736f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b7320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b7320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(code *)**(uint **)&g_RainDropPool[_DAT_01cc010c].field_0x3c)
            (g_RainDropPool + _DAT_01cc010c,position,velocity);
  iVar1 = _DAT_01cc010c + 1;
  *(uint *)&g_RainDropPool[_DAT_01cc010c].field_0x24 = 0x3e800000;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01cc010c = iVar1;
  return;
}
