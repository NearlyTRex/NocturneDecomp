// Name: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0
// Address: 005a6ce0
// MANUAL RECONSTRUCTION
// Address Range: [[005a6ce0, 005a6d7a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr)

{
  int iVar1;
  CVector3f *pf_src;
  CVector3d *pd_src;

  iVar1 = (this_ptr->options).position_format;
  if (iVar1 == 1) {
    pf_src = (CVector3f *)(this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = (double)pf_src->x;
    (this_ptr->options).position.y = (double)pf_src->y;
    (this_ptr->options).position.z = (double)pf_src->z;
  }
  else if (iVar1 == 2) {
    pd_src = (CVector3d *)(this_ptr->options).position_source_ptr;
    (this_ptr->options).position = *pd_src;
  }
  iVar1 = (this_ptr->options).velocity_format;
  if (iVar1 == 1) {
    pf_src = (CVector3f *)(this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.x = (double)pf_src->x;
    (this_ptr->options).velocity.y = (double)pf_src->y;
    (this_ptr->options).velocity.z = (double)pf_src->z;
  }
  else if (iVar1 == 2) {
    pd_src = (CVector3d *)(this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity = *pd_src;
  }
  return;
}
