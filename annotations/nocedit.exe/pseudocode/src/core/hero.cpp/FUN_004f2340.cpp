// Name: core_hero.cpp_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f2467]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2340()

#include "nocturne.h"

CHero * core_hero_cpp_FUN_004f2340(void)

{
  CHero *this_ptr;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  int extraout_EAX;
  CCharacter *in_stack_00000004;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00427e20(in_stack_00000004);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450((CPathMap *)&pCVar1[1].base_actor.orient.bank);
  core_inv_cpp_CInventory_ctor_FUN_004fd020((CInventory *)&pCVar2[1].current_position.y);
  this_ptr = (CHero *)(extraout_EAX + -0x1f738);
  *(CHero **)(extraout_EAX + 4) = this_ptr;
  *(CDemonActor_vtable **)(extraout_EAX + -0x1f5e4) = &g_CHeroVTable;
  crt_memory_c_memset_FUN_005fde40((void *)(extraout_EAX + -0x1390c),0,0x2c);
  *(uint *)(extraout_EAX + -0x13914) = 0;
  *(uint *)(extraout_EAX + -0x1c95c) = 0x3f19999a;
  *(uint *)(extraout_EAX + -0x1c958) = 0x3f666666;
  *(uint *)(extraout_EAX + -0x1c954) = 0x49742400;
  *(uint *)(extraout_EAX + -0x1c950) = 0x49742400;
  *(uint *)(extraout_EAX + -0x1c94c) = 0x3fcccccd;
  *(uint *)(extraout_EAX + -0x1c948) = 0x40c00000;
  *(uint *)(extraout_EAX + -0x13910) = 2;
  *(uint *)(extraout_EAX + -4) = 0;
  *(uint *)(extraout_EAX + 0x464) = 0;
  *(uint *)(extraout_EAX + 0x468) = 0;
  *(uint *)(extraout_EAX + 0x46c) = 0;
  *(uint *)(extraout_EAX + 0x470) = 0;
  *(uint *)(extraout_EAX + 0x474) = 0;
  *(uint *)(extraout_EAX + 0x478) = 0;
  *(uint *)(extraout_EAX + 0x47c) = 0;
  *(uint *)(extraout_EAX + 0x460) = 0;
  core_hero_cpp_CHero_FUN_004f2a30(this_ptr);
  *(uint *)(extraout_EAX + 0x498) = 2;
  *(uint *)(extraout_EAX + -0x1d114) = 0;
  *(uint *)(extraout_EAX + -0x1d2f4) = 1;
  return this_ptr;
}
