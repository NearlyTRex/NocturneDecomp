// Name: core_stranger.cpp_CStranger_processWeaponTick_FUN_0056eed0
// Address: 0056eed0
// Address Range: [[0056eed0, 0056ef8d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_0056eed0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_0056eed0(CStranger *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  float fVar1;
  CCharacter *this_ptr_01;
  int iVar2;
  CDemonActor *unaff_EBX;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
    if (this_ptr_01 != (CCharacter *)0x0) {
      iVar2 = core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0047a1c0((CDynamite *)this_ptr_01);
      if (iVar2 != 0) {
        *(uint *)&(this_ptr_01->model).field_0x42c = 0;
        *(uint *)&(this_ptr_01->model).field_0x428 =
             *(uint *)&(this_ptr_01->model).field_0x42c;
        *(uint *)&(this_ptr_01->model).field_0x424 =
             *(uint *)&(this_ptr_01->model).field_0x428;
        (*(((this_ptr_01->base).vtable._uc)->_uc).isGrabbable)(this_ptr_01,unaff_EBX);
        this_ptr->weapon = (CWeapon *)0x0;
        *(uint *)&this_ptr->field_0x2d04 = 0;
        fVar1 = 0x41200000;
        *(uint *)&this_ptr->field_0x2d08 = 0;
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
