// Name: core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00425fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00425cc0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00425cc0(CBugs *this_ptr,float delta_time)

{
  CLocation *dest_position;
  float *pfVar1;
  CCharacter *pCVar2;
  CPathMap *this_ptr_00;
  int iVar3;
  SBug *bug_data;
  CMatrix3x3f CStack_a8;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *pfStack_14;
  
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->allow_swarm != 0) &&
     (pCVar2 = (this_ptr->base).victim, pCVar2 != (CCharacter *)0x0)) {
    fStack_74 = (this_ptr->base).base.base.location.position.x - (pCVar2->base).location.position.x;
    fStack_70 = (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y;
    fStack_6c = (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z;
    if ((ABS(fStack_70) < (float)2) &&
       ((ABS(fStack_74) < (float)2 && (ABS(fStack_6c) < (float)2)))) {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(this_ptr);
      core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427400(this_ptr,&((this_ptr->base).victim)->base);
      if (this_ptr->state == BUGS_STATE_ATTACK) {
        core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(this_ptr,delta_time);
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((this_ptr->allow_chase != 0) &&
     (pCVar2 = (this_ptr->base).victim, pCVar2 != (CCharacter *)0x0)) {
    this_ptr_00 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_00548500
                              (&(((this_ptr->base).victim)->base).location);
    }
    dest_position = &(this_ptr->base).base.base.location;
    iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr_00,&dest_position->position,&CStack_50,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar3 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a8,&CStack_50);
      CStack_80.z = 2.0f * delta_time;
      CStack_80.x = 0.0;
      CStack_80.y = 0.0;
      pfStack_14 = (float *)CStack_80.z;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a8,&CStack_2c,&CStack_80);
      fStack_68 = (dest_position->position).x;
      pfVar1 = &(this_ptr->base).base.base.location.position.y;
      fStack_64 = *pfVar1;
      pfStack_14 = &(this_ptr->base).base.base.location.position.z;
      fStack_60 = *pfStack_14;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_2c);
      CStack_38.x = (dest_position->position).x;
      CStack_38.y = *pfVar1;
      CStack_38.z = *pfStack_14;
      (dest_position->position).x = fStack_68;
      (this_ptr->base).base.base.location.position.y = fStack_64;
      (this_ptr->base).base.base.location.position.z = fStack_60;
      fStack_44 = CStack_38.x - (dest_position->position).x;
      fStack_3c = CStack_38.z - (this_ptr->base).base.base.location.position.z;
      fStack_20 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
      fStack_1c = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
      fStack_5c = fStack_20 * 0.5f;
      fStack_18 = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
      fStack_58 = fStack_1c * 0.5f;
      fStack_54 = fStack_18 * 0.5f;
      fStack_40 = fStack_58;
      if (((((this_ptr->bounds).min.x <= fStack_44) && ((this_ptr->bounds).min.y <= fStack_58)) &&
          ((this_ptr->bounds).min.z <= fStack_3c)) &&
         (((fStack_44 <= (this_ptr->bounds).max.x && (fStack_58 <= (this_ptr->bounds).max.y)) &&
          (fStack_3c <= (this_ptr->bounds).max.z)))) {
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(this_ptr,&CStack_38);
      }
    }
  }
  core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(this_ptr);
LAB_00425d86:
  iVar3 = 0;
  if (0 < this_ptr->count) {
    bug_data = this_ptr->bugs;
    do {
      iVar3 = iVar3 + 1;
      core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420
                (this_ptr,bug_data,delta_time,(CVector3f *)0x0);
      bug_data = bug_data + 1;
    } while (iVar3 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(this_ptr);
  return;
}
