// Name: core_haystack.cpp_FUN_004f1ab0
// Address: 004f1ab0
// Address Range: [[004f1ab0, 004f1b48]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1ab0()

#include "nocturne.h"

/* Signature: byte actors_hero_haystack.cpp_FUN_004f1ab0(uint param_1, uint
   param_2) */

void core_haystack_cpp_FUN_004f1ab0(void)

{
  CDemonActor *this_ptr;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  byte auStack_5c [56];
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 ((CDeformableModelInstance *)(in_stack_00000004 + 1),
                  (CVector3f *)(auStack_5c + 0x34),in_stack_00000008);
  iVar2 = 0;
  iVar1 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffe8,input_local_point);
  while( true ) {
    if (g_CDemonSetPtr->damage_listener_count <= iVar2) break;
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar1 + -4);
    if (this_ptr != in_stack_00000004) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_5c);
      auStack_5c._0_4_ = auStack_5c + 4;
      auStack_5c._8_4_ = 0x41200000;
      pCStack_24 = in_stack_00000004;
      pCStack_20 = in_stack_00000004;
      (*this_ptr->vtable[1].playAmbientSound)(this_ptr,&stack0xfffffff0);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
