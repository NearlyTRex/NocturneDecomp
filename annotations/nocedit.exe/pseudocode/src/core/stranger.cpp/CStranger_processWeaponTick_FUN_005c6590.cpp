// Name: core_stranger.cpp_CStranger_processWeaponTick_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_005c6590(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_005c6590(CStranger *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  float fVar1;
  CCharacter *this_ptr_01;
  int iVar2;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
    if (this_ptr_01 != (CCharacter *)0x0) {
      iVar2 = core_dynamite_cpp_CDynamite_FUN_0049cf90((CDynamite *)this_ptr_01);
      if (iVar2 != 0) {
        (this_ptr_01->model).transformed_vertices[0x51].z = 0.0;
        (this_ptr_01->model).transformed_vertices[0x51].y =
             (this_ptr_01->model).transformed_vertices[0x51].z;
        (this_ptr_01->model).transformed_vertices[0x51].x =
             (this_ptr_01->model).transformed_vertices[0x51].y;
        (*(((this_ptr_01->base).vtable._uc)->_uc).isGrabbable)(this_ptr_01);
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
