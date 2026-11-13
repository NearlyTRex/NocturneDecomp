// Name: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00570a40
// Address: 00570a40
// Address Range: [[00570a40, 00570bc9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00570a40(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00570a40(CSfxSlot *this_ptr)

{
  int iVar1;
  float *pfVar2;
  void *pvVar3;
  void *pvVar4;
  double *pdVar5;
  uint uVar6;
  
  iVar1 = (this_ptr->options).position_format;
  if (iVar1 == 1) {
    pfVar2 = (this_ptr->options).position_source_ptr;
    if (((*pfVar2 != (float)(this_ptr->options).position.x) ||
        (pfVar2[1] != (float)(this_ptr->options).position.y)) ||
       (pfVar2[2] != (float)(this_ptr->options).position.z)) {
      uVar6 = this_ptr->changed_flags;
      pvVar3 = (this_ptr->options).position_source_ptr;
      (this_ptr->options).position.x = (double)*(float *)(this_ptr->options).position_source_ptr;
      pvVar4 = (this_ptr->options).position_source_ptr;
      (this_ptr->options).position.y = (double)*(float *)((int)pvVar3 + 4);
      (this_ptr->options).position.z = (double)*(float *)((int)pvVar4 + 8);
      *(byte *)&this_ptr->changed_flags = (byte)uVar6 | 2;
    }
  }
  else if ((iVar1 == 2) &&
          (((pdVar5 = (this_ptr->options).position_source_ptr,
            (this_ptr->options).position.x != *pdVar5 ||
            ((this_ptr->options).position.y != pdVar5[1])) ||
           ((this_ptr->options).position.z != pdVar5[2])))) {
    uVar6 = this_ptr->changed_flags;
    pvVar3 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.x = *(double *)(this_ptr->options).position_source_ptr;
    pvVar4 = (this_ptr->options).position_source_ptr;
    (this_ptr->options).position.y = *(double *)((int)pvVar3 + 8);
    *(uint *)&(this_ptr->options).position.z = *(uint *)((int)pvVar4 + 0x10);
    *(uint *)((int)&(this_ptr->options).position.z + 4) = *(uint *)((int)pvVar4 + 0x14);
    *(byte *)&this_ptr->changed_flags = (byte)uVar6 | 2;
  }
  iVar1 = (this_ptr->options).velocity_format;
  if (iVar1 == 1) {
    pfVar2 = (this_ptr->options).velocity_source_ptr;
    if ((((this_ptr->options).velocity.x == *pfVar2) &&
        ((this_ptr->options).velocity.y == pfVar2[1])) &&
       ((this_ptr->options).velocity.z == pfVar2[2])) {
      return;
    }
    pvVar3 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.x = *(float *)(this_ptr->options).velocity_source_ptr;
    pvVar4 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.y = *(float *)((int)pvVar3 + 4);
    uVar6 = this_ptr->changed_flags;
    (this_ptr->options).velocity.z = *(float *)((int)pvVar4 + 8);
    *(byte *)&this_ptr->changed_flags = (byte)uVar6 | 4;
  }
  else if (iVar1 == 2) {
    pdVar5 = (this_ptr->options).velocity_source_ptr;
    if ((((this_ptr->options).velocity.x == (float)*pdVar5) &&
        ((this_ptr->options).velocity.y == (float)pdVar5[1])) &&
       ((this_ptr->options).velocity.z == (float)pdVar5[2])) {
      return;
    }
    uVar6 = this_ptr->changed_flags;
    pvVar3 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.x = (float)*(double *)(this_ptr->options).velocity_source_ptr;
    pvVar4 = (this_ptr->options).velocity_source_ptr;
    (this_ptr->options).velocity.y = (float)*(double *)((int)pvVar3 + 8);
    (this_ptr->options).velocity.z = (float)*(double *)((int)pvVar4 + 0x10);
    *(byte *)&this_ptr->changed_flags = (byte)uVar6 | 4;
    return;
  }
  return;
}
