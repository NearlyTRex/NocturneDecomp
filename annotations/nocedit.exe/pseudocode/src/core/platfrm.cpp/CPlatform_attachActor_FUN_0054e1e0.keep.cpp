// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
// MANUAL RECONSTRUCTION
// Address Range: [[0054e1e0, 0054e2d5] [03fc40db, 03fc413f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr,CDemonActor *actor)

{
  int iVar3;
  int iVar7;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;

  if (actor != (CDemonActor *)0x0) {
    for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
      if (actor == this_ptr->attach_actors[iVar3].actor) {
        return;
      }
    }
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (this_ptr->attach_actors[iVar7].actor == (CDemonActor *)0x0) {
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                  (&local_a0,&(actor->location).position,&(actor->orient).vec);
        core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                  (&local_40,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
        this_ptr->attach_actors[iVar7].actor = actor;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a0,&local_40,&local_70);
        this_ptr->attach_actors[iVar7].matrix = local_70;
        return;
      }
    }
    g_CurrentFilename = "..\\core\\platfrm.cpp";
    g_CurrentLineNumber = 976;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::attachActor - too many!");
    return;
  }
  return;
}
