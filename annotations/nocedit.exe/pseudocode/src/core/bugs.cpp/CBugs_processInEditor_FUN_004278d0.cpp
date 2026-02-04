// Name: core_bugs.cpp_CBugs_processInEditor_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  pCVar1 = &(this_ptr->base).base.base.location;
  fVar2 = (pCVar1->position).x;
  fVar3 = (this_ptr->base).base.base.location.position.y;
  fVar4 = (this_ptr->base).base.base.location.position.z;
  core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800((CCharacter *)this_ptr);
  (this_ptr->base).base.base.orient.heading = 0.0;
  (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.heading;
  (this_ptr->base).base.base.orient.pitch = (this_ptr->base).base.base.orient.bank;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  (pCVar1->position).x = fVar2;
  (this_ptr->base).base.base.location.position.y = fVar3;
  (this_ptr->base).base.base.location.position.z = fVar4;
  core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
  iVar5 = 0;
  core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
  if (0 < this_ptr->count) {
    do {
      iVar5 = iVar5 + 1;
      core_bugs_cpp_CBugs_FUN_00426420(this_ptr);
    } while (iVar5 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  return;
}
