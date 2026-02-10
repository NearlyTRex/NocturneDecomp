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
  CPathMap *extraout_EAX;
  int iVar4;
  float in_stack_00000008;
  CMatrix3x3f CStack_a4;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
  if ((this_ptr->allow_swarm != 0) &&
     (pCVar3 = (this_ptr->base).victim, pCVar3 != (CDemonActor *)0x0)) {
    CStack_7c.z = (this_ptr->base).base.base.location.position.x - (pCVar3->location).position.x;
    fStack_70 = (this_ptr->base).base.base.location.position.y - (pCVar3->location).position.y;
    fStack_6c = (this_ptr->base).base.base.location.position.z - (pCVar3->location).position.z;
    if ((ABS(fStack_70) < (float)2) &&
       ((ABS(CStack_7c.z) < (float)2 && (ABS(fStack_6c) < (float)2)))) {
      core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
      core_bugs_cpp_CBugs_FUN_00427400(this_ptr);
      if (this_ptr->unk == 1) {
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
      core_path_cpp_FUN_00548500();
      this_ptr_00 = extraout_EAX;
    }
    dest_position = &(this_ptr->base).base.base.location;
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr_00,&dest_position->position,&CStack_4c,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar4 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a4,&CStack_4c);
      CStack_7c.z = 2.0f * in_stack_00000008;
      CStack_7c.x = 0.0;
      CStack_7c.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a4,&CStack_28,&CStack_7c);
      fStack_64 = (dest_position->position).x;
      pfVar1 = &(this_ptr->base).base.base.location.position.y;
      fStack_60 = *pfVar1;
      pfVar2 = &(this_ptr->base).base.base.location.position.z;
      fStack_5c = *pfVar2;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_28);
      fStack_34 = (dest_position->position).x;
      fStack_30 = *pfVar1;
      fStack_2c = *pfVar2;
      (dest_position->position).x = fStack_64;
      (this_ptr->base).base.base.location.position.y = fStack_60;
      (this_ptr->base).base.base.location.position.z = fStack_5c;
      fStack_40 = fStack_34 - (dest_position->position).x;
      fStack_38 = fStack_2c - (this_ptr->base).base.base.location.position.z;
      fStack_1c = *(float *)this_ptr->unk5 + *(float *)(this_ptr->unk5 + 0xc);
      fStack_18 = *(float *)(this_ptr->unk5 + 4) + *(float *)(this_ptr->unk5 + 0x10);
      fStack_58 = fStack_1c * 0.5f;
      fStack_14 = *(float *)(this_ptr->unk5 + 8) + *(float *)(this_ptr->unk5 + 0x14);
      fStack_54 = fStack_18 * 0.5f;
      fStack_50 = fStack_14 * 0.5f;
      fStack_3c = fStack_54;
      if ((((*(float *)this_ptr->unk5 <= fStack_40) && (*(float *)(this_ptr->unk5 + 4) <= fStack_54)
           ) && (*(float *)(this_ptr->unk5 + 8) <= fStack_38)) &&
         (((fStack_40 <= *(float *)(this_ptr->unk5 + 0xc) &&
           (fStack_54 <= *(float *)(this_ptr->unk5 + 0x10))) &&
          (fStack_38 <= *(float *)(this_ptr->unk5 + 0x14))))) {
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
