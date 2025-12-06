// Name: core_hero.cpp_CHero_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f37d0(CHero * this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f37d0(CHero *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_EBX;
  
  iVar1 = (*(this_ptr->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,unaff_EBX);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if ((((((*(int *)this_ptr->field3_0xbe2c != 0) || (*(int *)(this_ptr->field3_0xbe2c + 4) != 0))
          || (*(int *)(this_ptr->field3_0xbe2c + 0xc) != 0)) ||
         ((*(int *)(this_ptr->field3_0xbe2c + 0x10) != 0 ||
          (*(int *)(this_ptr->field3_0xbe2c + 0x14) != 0)))) ||
        ((*(int *)(this_ptr->field3_0xbe2c + 0x18) != 0 ||
         ((*(int *)(this_ptr->field3_0xbe2c + 0x1c) != 0 ||
          ((float)0.10000000000000001 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x20)))))))) ||
       (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x24)) ||
        (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x28)) ||
         (*(int *)((this_ptr->base_character).field2_0x240c + 4) == 0)))))) {
      return 1;
    }
  }
  return 0;
}
