// Name: core_msnedit.cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930
// Address: 0053c930
// Address Range: [[0053c930, 0053c96c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930(CDemonMission *this_ptr,CDemonActor *actor)

{
  core_msnedit_cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970
            (this_ptr,actor,((this_ptr->viewport).left + (this_ptr->viewport).right) / 2,
             ((this_ptr->viewport).top + (this_ptr->viewport).bottom) / 2);
  return;
}
