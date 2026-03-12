// Name: core_bugs.cpp_CBugs_processInEditor_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr)

{
  float *pfVar1;
  SBug *bug_data;
  int iVar6;
  CVector3f local_20;
  float *local_14;
  CLocation *pCVar1;
  float *pfVar2;
  float fVar5;
  float fVar3;
  float fVar4;
  
  pCVar1 = &(this_ptr->base).base.base.location;
  fVar3 = (pCVar1->position).x;
  pfVar1 = &(this_ptr->base).base.base.location.position.y;
  fVar4 = *pfVar1;
  pfVar2 = &(this_ptr->base).base.base.location.position.z;
  fVar5 = *pfVar2;
  core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800((CCharacter *)this_ptr);
  (this_ptr->base).base.base.orient.vec.z = 0.0;
  (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.z;
  (this_ptr->base).base.base.orient.vec.x = (this_ptr->base).base.base.orient.vec.y;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  local_20.x = (pCVar1->position).x;
  local_20.y = *pfVar1;
  local_20.z = *pfVar2;
  (pCVar1->position).x = fVar3;
  (this_ptr->base).base.base.location.position.y = fVar4;
  (this_ptr->base).base.base.location.position.z = fVar5;
  core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(this_ptr,&local_20);
  iVar6 = 0;
  core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(this_ptr);
  if (0 < this_ptr->count) {
    bug_data = this_ptr->bugs;
    do {
      iVar6 = iVar6 + 1;
      core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420
                (this_ptr,bug_data,g_CGamePtr->delta_time_float,(CVector3f *)0x0);
      bug_data = bug_data + 1;
    } while (iVar6 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(this_ptr);
  return;
}
