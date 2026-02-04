// Name: core_zombie.cpp_CZombie_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

{
  int iVar1;
  CZombie *pCVar2;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 1) {
    iVar1 = *(int *)((this_ptr->base).unk2 + 4);
    if (iVar1 != 0) {
      pCVar2 = (CZombie *)(**(code **)(*(int *)(iVar1 + 0x154) + 0x108))();
      if (pCVar2 == this_ptr) {
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
      }
    }
    (this_ptr->base).base.grabbed_by = in_stack_00000008;
    (this_ptr->base).base.grabbed_type = 1;
    return 1;
  }
  return 0;
}
