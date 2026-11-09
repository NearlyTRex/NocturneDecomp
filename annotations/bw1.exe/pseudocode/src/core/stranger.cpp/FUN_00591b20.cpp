// Name: core_stranger.cpp_FUN_00591b20
// Address: 00591b20
// Address Range: [[00591b20, 00591bdd]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00591b20(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_00591b20(CStranger *this_ptr,float delta_time)

{
  uint uVar1;
  CDynamite *this_ptr_00;
  int iVar2;
  
  iVar2 = *(int *)&this_ptr->field_0x20004;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,delta_time);
    this_ptr_00 = (CDynamite *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&this_ptr->field_0x20004,g_CDynamiteClassInfo.name_hash)
    ;
    if (this_ptr_00 != (CDynamite *)0x0) {
      iVar2 = core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0(this_ptr_00);
      if (iVar2 != 0) {
        *(uint *)&this_ptr_00->field_0x584 = 0;
        *(uint *)&this_ptr_00->field_0x580 = *(uint *)&this_ptr_00->field_0x584;
        *(uint *)&this_ptr_00->field_0x57c = *(uint *)&this_ptr_00->field_0x580;
        (**(code **)(*(int *)&this_ptr_00->field_0x154 + 0xe4))(this_ptr_00);
        *(uint *)&this_ptr->field_0x20004 = 0;
        *(uint *)&this_ptr->field_0x2c98 = 0;
        uVar1 = 0x41200000;
        *(uint *)&this_ptr->field_0x2c9c = 0;
        *(uint *)&this_ptr->field_0x1ffbc = uVar1;
        if (*(int *)&this_ptr->field_0x1ff5c == 3) {
          *(uint *)&this_ptr->field_0x1ff5c = 0;
          return;
        }
      }
    }
  }
  return;
}
