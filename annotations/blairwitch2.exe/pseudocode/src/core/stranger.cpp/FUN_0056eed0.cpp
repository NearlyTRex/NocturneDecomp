// Name: core_stranger.cpp_FUN_0056eed0
// Address: 0056eed0
// Address Range: [[0056eed0, 0056ef8d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0056eed0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_0056eed0(CStranger *this_ptr,float delta_time)

{
  uint uVar1;
  CDynamite *this_ptr_00;
  int iVar2;
  
  iVar2 = *(int *)&this_ptr->field_0x25698;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x14))(iVar2,delta_time);
    this_ptr_00 = (CDynamite *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&this_ptr->field_0x25698,g_CDynamiteClassInfo.name_hash)
    ;
    if (this_ptr_00 != (CDynamite *)0x0) {
      iVar2 = core_dynamite_cpp_FUN_0047a1c0(this_ptr_00);
      if (iVar2 != 0) {
        *(uint *)&this_ptr_00->field_0x6e0 = 0;
        *(uint *)&this_ptr_00->field_0x6dc = *(uint *)&this_ptr_00->field_0x6e0;
        *(uint *)&this_ptr_00->field_0x6d8 = *(uint *)&this_ptr_00->field_0x6dc;
        (**(code **)(*(int *)&this_ptr_00->field_0x2b0 + 0xec))(this_ptr_00);
        *(uint *)&this_ptr->field_0x25698 = 0;
        *(uint *)&this_ptr->field_0x2d04 = 0;
        uVar1 = 0x41200000;
        *(uint *)&this_ptr->field_0x2d08 = 0;
        *(uint *)&this_ptr->field_0x25650 = uVar1;
        if (*(int *)&this_ptr->field_0x256a4 == 3) {
          *(uint *)&this_ptr->field_0x256a4 = 0;
          return;
        }
      }
    }
  }
  return;
}
