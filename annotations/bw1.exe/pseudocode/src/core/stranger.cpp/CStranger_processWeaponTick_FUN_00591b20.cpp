// Name: core_stranger.cpp_CStranger_processWeaponTick_FUN_00591b20
// Address: 00591b20
// Address Range: [[00591b20, 00591bdd]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00591b20(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00591b20(CStranger *this_ptr,float delta_time)

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
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
    if (this_ptr_01 != (CCharacter *)0x0) {
      iVar2 = core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0((CDynamite *)this_ptr_01);
      if (iVar2 != 0) {
        (this_ptr_01->model).bone_origins[0x51].z = 0.0;
        (this_ptr_01->model).bone_origins[0x51].y = (this_ptr_01->model).bone_origins[0x51].z;
        (this_ptr_01->model).bone_origins[0x51].x = (this_ptr_01->model).bone_origins[0x51].y;
        (*(((this_ptr_01->base).vtable._uc)->_uc).isGrabbable)(this_ptr_01,unaff_EBX);
        this_ptr->weapon = (CWeapon *)0x0;
        *(uint *)&this_ptr->field_0x2c98 = 0;
        fVar1 = 0x41200000;
        *(uint *)&this_ptr->field_0x2c9c = 0;
        this_ptr->aim_speed_factor = fVar1;
        if (*(int *)&this_ptr->field_0x1ff5c == 3) {
          *(uint *)&this_ptr->field_0x1ff5c = 0;
          return;
        }
      }
    }
  }
  return;
}
