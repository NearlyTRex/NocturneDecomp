// Name: core_charactr.cpp_CCharacter_serialize_FUN_004283a0
// Address: 004283a0
// Address Range: [[004283a0, 004285c8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_serialize_FUN_004283a0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_serialize_FUN_004283a0(CCharacter *this_ptr)

{
  CCharacter *pCVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar2;
  int iVar3;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0xffffffec,"numCarryHands")
      ;
      if (0 < unaff_EBP) {
        do {
          core_actor_cpp_serializeInteger_FUN_0040b7f0
                    ((int *)&stack0xfffffff4,"carry hand");
          pcVar2 = "carry actor";
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)&this_ptr->carry_hands[unaff_ESI].carry_actor,
                     "carry actor");
        } while ((int)(pcVar2 + 1) < unaff_ESI);
      }
    }
    else {
      pCVar1 = this_ptr;
      do {
        pCVar1 = (CCharacter *)&(pCVar1->base_actor).orient_matrix.m[0].z;
      } while (pCVar1 != (CCharacter *)((this_ptr->base_actor).create_event + 0x10));
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0xfffffff4,"numCarryHands")
      ;
      iVar3 = 0;
      do {
        if (this_ptr->carry_hands[iVar3].carry_actor != (CDemonActor *)0x0) {
          pcVar2 = "carry hand";
          core_actor_cpp_serializeInteger_FUN_0040b7f0
                    ((int *)&stack0xffffffec,"carry hand");
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)&this_ptr->carry_hands[(int)pcVar2].carry_actor,
                     "carry actor");
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->talk_to_me_event,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&this_ptr->cloth_count,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->size_scale,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    this_ptr->max_hit_points = this_ptr->hit_points;
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->health_bar_mode,"healthBarMode");
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0
            ((char **)this_ptr->descriptive_name,"descriptiveName");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_hit_points,"maxHitPoints");
  return;
}
