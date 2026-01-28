// Name: core_gabriela.cpp_CGabriella_load_FUN_004d6090
// Address: 004d6090
// Address Range: [[004d6090, 004d6132]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_load_FUN_004d6090(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_CGabriella_load(CGabriella* param_1) */

void core_gabriela_cpp_CGabriella_load_FUN_004d6090(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->unk3 + 4),"objectToPickUp");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)in_stack_00000004->unk3,"doorToOpen");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->unk3 + 0xc),"leverToPull");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->unk3 + 0x10),"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&(in_stack_00000004->base).carry_hands[0].carry_actor,
             "lhCarryObject");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&(in_stack_00000004->base).carry_hands[1].carry_actor,
             "rhCarryObject");
  return;
}
