// Name: core_hero.cpp_CHero_FUN_004f3b20
// Address: 004f3b20
// Address Range: [[004f3b20, 004f3bb2]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f3b20(CHero * this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3b20(CHero *this_ptr)

{
  CHero *pCVar1;
  float *pfVar2;
  
  this_ptr->field6_0x1fb9c[0] = '\0';
  this_ptr->field6_0x1fb9c[1] = '\0';
  this_ptr->field6_0x1fb9c[2] = '\0';
  this_ptr->field6_0x1fb9c[3] = '\0';
  this_ptr->field6_0x1fb9c[4] = '\0';
  this_ptr->field6_0x1fb9c[5] = '\0';
  this_ptr->field6_0x1fb9c[6] = '\0';
  this_ptr->field6_0x1fb9c[7] = '\0';
  this_ptr->field6_0x1fb9c[8] = '\0';
  this_ptr->field6_0x1fb9c[9] = '\0';
  this_ptr->field6_0x1fb9c[10] = '\0';
  this_ptr->field6_0x1fb9c[0xb] = '\0';
  this_ptr->field6_0x1fb9c[0xc] = '\0';
  this_ptr->field6_0x1fb9c[0xd] = '\0';
  this_ptr->field6_0x1fb9c[0xe] = '\0';
  this_ptr->field6_0x1fb9c[0xf] = '\0';
  this_ptr->field6_0x1fb9c[0x10] = '\0';
  this_ptr->field6_0x1fb9c[0x11] = '\0';
  this_ptr->field6_0x1fb9c[0x12] = '\0';
  this_ptr->field6_0x1fb9c[0x13] = '\0';
  this_ptr->field6_0x1fb9c[0x14] = '\0';
  this_ptr->field6_0x1fb9c[0x15] = '\0';
  this_ptr->field6_0x1fb9c[0x16] = '\0';
  this_ptr->field6_0x1fb9c[0x17] = '\0';
  this_ptr->field6_0x1fb9c[0x18] = '\0';
  this_ptr->field6_0x1fb9c[0x19] = '\0';
  this_ptr->field6_0x1fb9c[0x1a] = '\0';
  this_ptr->field6_0x1fb9c[0x1b] = '\0';
  (this_ptr->base_character).grabbed_by = (CDemonActor *)0x0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(&this_ptr->inventory,0xffffffff);
  (*(this_ptr->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
            ((CDemonActor *)this_ptr);
  pCVar1 = this_ptr;
  do {
    pfVar2 = &(pCVar1->base_character).base_actor.orient_matrix.m[0].z;
    (pCVar1->base_character).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pfVar2;
  } while (pfVar2 != (float *)((this_ptr->base_character).base_actor.create_event + 0x10));
  return;
}
