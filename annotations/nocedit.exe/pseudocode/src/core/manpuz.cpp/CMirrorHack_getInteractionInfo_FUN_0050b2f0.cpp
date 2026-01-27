// Name: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0
// Address: 0050b2f0
// Address Range: [[0050b2f0, 0050b333]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0(CMirrorHack * this_ptr, SInteractionInfo * out_info)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0
          (CMirrorHack *this_ptr,SInteractionInfo *out_info)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030(&this_ptr->base,out_info);
  out_info->can_interact = 1;
  iVar1 = *(int *)(this_ptr->unk + 0x17c);
  out_info->yaw_min = 6.2831855;
  out_info->yaw_max = -6.2831855;
  out_info->distance_min = -1.0;
  out_info->distance_max = 0.0;
  out_info->reference_data = iVar1;
  return;
}
