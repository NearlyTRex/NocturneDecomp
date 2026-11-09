// Name: core_zombie.cpp_CZombie_getGrabbed_FUN_00599c60
// Address: 00599c60
// Address Range: [[00599c60, 00599cc0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_00599c60(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_00599c60(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  CZombie *pCVar2;
  
  if (grab_type == 1) {
    iVar1 = *(int *)&this_ptr->field_0x10a78;
    if (iVar1 != 0) {
      pCVar2 = (CZombie *)(**(code **)(*(int *)(iVar1 + 0x2b0) + 0xfc))(iVar1);
      if (pCVar2 == this_ptr) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x10a78 + 0x2b0) + 0xf8))
                  (*(int *)&this_ptr->field_0x10a78);
      }
    }
    *(CDemonActor **)&this_ptr->field_0x276c = grabber;
    *(uint *)&this_ptr->field_0x2770 = 1;
    return 1;
  }
  return 0;
}
