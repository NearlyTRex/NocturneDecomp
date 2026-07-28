// Name: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410
// Address: 00524410
// Address Range: [[00524410, 005244aa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410(CSfxSlot *this_ptr)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  iVar1 = (this_ptr->options).position_format;
  if (iVar1 == 1) {
    pvVar2 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = (double)*(float *)(this_ptr->options).position_source_ptr;
    pvVar3 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.y = (double)*(float *)((int)pvVar2 + 4);
    (this_ptr->options).position.z = (double)*(float *)((int)pvVar3 + 8);
  }
  else if (iVar1 == 2) {
    pvVar2 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = *(double *)(this_ptr->options).position_source_ptr;
    pvVar3 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.y = *(double *)((int)pvVar2 + 8);
    *(uint *)&(this_ptr->options).position.z = *(uint *)((int)pvVar3 + 0x10);
    *(uint *)((int)&(this_ptr->options).position.z + 4) = *(uint *)((int)pvVar3 + 0x14);
  }
  iVar1 = (this_ptr->options).velocity_format;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    pvVar2 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.x = *(double *)(this_ptr->options).velocity_source_ptr;
    pvVar3 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.y = *(double *)((int)pvVar2 + 8);
    *(uint *)&(this_ptr->options).velocity.z = *(uint *)((int)pvVar3 + 0x10);
    *(uint *)((int)&(this_ptr->options).velocity.z + 4) = *(uint *)((int)pvVar3 + 0x14);
    return;
  }
  pvVar2 = (this_ptr->options).velocity_source_ptr;
  (this_ptr->options).velocity.x = (double)*(float *)(this_ptr->options).velocity_source_ptr;
  pvVar3 = (this_ptr->options).velocity_source_ptr;
  (this_ptr->options).velocity.y = (double)*(float *)((int)pvVar2 + 4);
  (this_ptr->options).velocity.z = (double)*(float *)((int)pvVar3 + 8);
  return;
}
