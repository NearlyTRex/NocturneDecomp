// Name: core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660
// Address: 00540660
// Address Range: [[00540660, 0054071d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(CStranger *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  float fVar1;
  CDemonActor *this_ptr_01;
  int iVar2;
  int *unaff_EBX;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
    this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (&this_ptr->weapon->base,g_CDynamiteActorType_01bca088.name_hash);
    if (this_ptr_01 != (CDemonActor *)0x0) {
      iVar2 = core_dynamite_cpp_FUN_0046eda0(this_ptr_01);
      if (iVar2 != 0) {
        this_ptr_01[4].orient_matrix.m[0].x = 0.0;
        this_ptr_01[4].orient.vec.z = this_ptr_01[4].orient_matrix.m[0].x;
        this_ptr_01[4].orient.vec.y = this_ptr_01[4].orient.vec.z;
        (*((this_ptr_01->vtable)._ub)->showEditorHelp)(this_ptr_01,unaff_EBX);
        this_ptr->weapon = (CWeapon *)0x0;
        (this_ptr->base).base.layer_action_index = 0;
        fVar1 = 10.0f;
        (this_ptr->base).base.layer_action_t = 0.0;
        this_ptr->aim_speed_factor = fVar1;
        if (this_ptr->action_pending == 3) {
          this_ptr->action_pending = 0;
          return;
        }
      }
    }
  }
  return;
}
