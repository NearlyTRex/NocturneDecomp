// Name: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0
// Address: 0054e1a0
// Address Range: [[0054e1a0, 0054e1d4]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  (this_ptr->skirt_cloth).vertices[0x26a].connected_indices[3] = 1;
  (this_ptr->skirt_cloth).vertices[0x275].connected_indices[7] = 1;
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  (this_ptr->skirt_cloth).vertices[0x275].connected_indices[3] = 0x40000000;
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicubat.wav");
  return;
}
