// Name: core_bugs.cpp_CBugs_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00425fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00425cc0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_FUN_00425cc0(CBugs *this_ptr)

{
  CLocation *dest_position;
  float *pfVar1;
  float *pfVar2;
  CDemonActor *pCVar3;
  CPathMap *this_ptr_00;
  int iVar4;
  float in_stack_00000008;
  CMatrix3x3f CStack_9c;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  float fStack_14;
  
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,in_stack_00000008);
  if ((this_ptr->allow_swarm != 0) &&
     (pCVar3 = (this_ptr->base).victim, pCVar3 != (CDemonActor *)0x0)) {
    CStack_74.z = (this_ptr->base).base.base.location.position.x - (pCVar3->location).position.x;
    fStack_68 = (this_ptr->base).base.base.location.position.y - (pCVar3->location).position.y;
    fStack_64 = (this_ptr->base).base.base.location.position.z - (pCVar3->location).position.z;
    if ((ABS(fStack_68) < (float)2) &&
       ((ABS(CStack_74.z) < (float)2 && (ABS(fStack_64) < (float)2)))) {
      core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
      core_bugs_cpp_CBugs_FUN_00427400(this_ptr);
      if (this_ptr->state == 1) {
        core_bugs_cpp_CBugs_FUN_00425fe0(this_ptr);
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((this_ptr->allow_chase != 0) &&
     (pCVar3 = (this_ptr->base).victim, pCVar3 != (CDemonActor *)0x0)) {
    this_ptr_00 = (*((pCVar3->vtable)._ub)->getPathMap)(pCVar3);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_FUN_00548500();
    }
    dest_position = &(this_ptr->base).base.base.location;
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr_00,&dest_position->position,&CStack_44,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar4 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_9c,&CStack_44);
      CStack_74.z = 2.0f * in_stack_00000008;
      CStack_74.x = 0.0;
      CStack_74.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_9c,&CStack_20,&CStack_74);
      fStack_5c = (dest_position->position).x;
      pfVar1 = &(this_ptr->base).base.base.location.position.y;
      fStack_58 = *pfVar1;
      pfVar2 = &(this_ptr->base).base.base.location.position.z;
      fStack_54 = *pfVar2;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_20);
      fStack_2c = (dest_position->position).x;
      fStack_28 = *pfVar1;
      fStack_24 = *pfVar2;
      (dest_position->position).x = fStack_5c;
      (this_ptr->base).base.base.location.position.y = fStack_58;
      (this_ptr->base).base.base.location.position.z = fStack_54;
      fStack_38 = fStack_2c - (dest_position->position).x;
      fStack_30 = fStack_24 - (this_ptr->base).base.base.location.position.z;
      fStack_14 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
      fStack_50 = fStack_14 * 0.5f;
      fStack_4c = ((this_ptr->bounds).min.y + (this_ptr->bounds).max.y) * 0.5f;
      fStack_48 = ((this_ptr->bounds).min.z + (this_ptr->bounds).max.z) * 0.5f;
      fStack_34 = fStack_4c;
      if (((((this_ptr->bounds).min.x <= fStack_38) && ((this_ptr->bounds).min.y <= fStack_4c)) &&
          ((this_ptr->bounds).min.z <= fStack_30)) &&
         (((fStack_38 <= (this_ptr->bounds).max.x && (fStack_4c <= (this_ptr->bounds).max.y)) &&
          (fStack_30 <= (this_ptr->bounds).max.z)))) {
        core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
      }
    }
  }
  core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
LAB_00425d86:
  iVar4 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar4 = iVar4 + 1;
      core_bugs_cpp_CBugs_FUN_00426420(this_ptr);
    } while (iVar4 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  return;
}
