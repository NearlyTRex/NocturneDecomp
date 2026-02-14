// Name: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0
// Address: 005a6ce0
// Address Range: [[005a6ce0, 005a6d7a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr)

{
  int iVar1;
  CVector3d *pCVar2;
  CVector3d *pCVar3;
  
  iVar1 = (this_ptr->options).position_format;
  if (iVar1 == 1) {
    pCVar2 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = (double)*(float *)&((this_ptr->options).position_source_ptr)->x
    ;
    pCVar3 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.y = (double)*(float *)((int)&pCVar2->x + 4);
    (this_ptr->options).position.z = (double)*(float *)&pCVar3->y;
  }
  else if (iVar1 == 2) {
    pCVar2 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = ((this_ptr->options).position_source_ptr)->x;
    pCVar3 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.y = pCVar2->y;
    *(uint *)&(this_ptr->options).position.z = *(uint *)&pCVar3->z;
    *(uint *)((int)&(this_ptr->options).position.z + 4) = *(uint *)((int)&pCVar3->z + 4)
    ;
  }
  iVar1 = (this_ptr->options).velocity_format;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    pCVar2 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.x = ((this_ptr->options).velocity_source_ptr)->x;
    pCVar3 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.y = pCVar2->y;
    *(uint *)&(this_ptr->options).velocity.z = *(uint *)&pCVar3->z;
    *(uint *)((int)&(this_ptr->options).velocity.z + 4) = *(uint *)((int)&pCVar3->z + 4)
    ;
    return;
  }
  pCVar2 = (this_ptr->options).velocity_source_ptr;
  (this_ptr->options).velocity.x = (double)*(float *)&((this_ptr->options).velocity_source_ptr)->x;
  pCVar3 = (this_ptr->options).velocity_source_ptr;
  (this_ptr->options).velocity.y = (double)*(float *)((int)&pCVar2->x + 4);
  (this_ptr->options).velocity.z = (double)*(float *)&pCVar3->y;
  return;
}
