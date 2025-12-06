// Name: core_icepick.cpp_FUN_004f9490
// Address: 004f9490
// Address Range: [[004f9490, 004f9508] [004f9564, 004f958c]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f9490()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f9573) */
/* Signature: byte actors_hero_icepick.cpp_FUN_004f9490(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f9490(void)

{
  CDemonActor *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  byte auStack_2c [12];
  char acStack_20 [16];
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)(auStack_2c + 8),
                  in_stack_00000008);
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)auStack_2c,input_local_point);
  iVar2 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
        return;
      }
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + -4);
      if (this_ptr != in_stack_00000004) break;
LAB_004f94e9:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff9c);
    core_actor_cpp_getRandomFloat_FUN_0040cc10(90.0,130.0);
    auStack_2c._4_4_ = in_stack_00000004;
    auStack_2c._8_4_ = in_stack_00000004;
    iVar1 = (*this_ptr->vtable[1].playAmbientSound)(this_ptr,acStack_20);
    if (iVar1 == 0) goto LAB_004f94e9;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
