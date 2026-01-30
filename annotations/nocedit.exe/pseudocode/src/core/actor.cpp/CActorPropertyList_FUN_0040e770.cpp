// Name: core_actor.cpp_CActorPropertyList_FUN_0040e770
// Address: 0040e770
// Address Range: [[0040e770, 0040e840]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e770 (CActorPropertyList *this_ptr,int param_2,int param_3,int param_4)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CActorPropertyList_FUN_0040e770
          (CActorPropertyList *this_ptr,int param_2,int param_3,int param_4)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar2 = 0;
  iVar3 = 0;
  local_14 = 0;
  if (0 < this_ptr->property_count) {
    do {
      core_actor_cpp_FUN_0040ee30();
      if (iVar2 < extraout_EAX) {
        iVar2 = extraout_EAX;
      }
      core_actor_cpp_FUN_0040ee50();
      if (local_14 < extraout_EAX_00) {
        local_14 = extraout_EAX_00;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->property_count);
  }
  iVar3 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  this_ptr[1].properties[0].type = param_2 + iVar2 + iVar3 + 2;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  *(int *)this_ptr[1].properties[0].name = this_ptr[1].properties[0].type + iVar1;
  *(int *)(this_ptr[1].properties[0].name + 4) = param_2;
  *(int *)(this_ptr[1].properties[0].name + 8) = param_4;
  *(int *)(this_ptr[1].properties[0].name + 0xc) = param_3 + 3;
  this_ptr[1].unk = local_14 + iVar2 + iVar3;
  this_ptr[1].property_count = this_ptr->property_count * 0xe + 6;
  return;
}
