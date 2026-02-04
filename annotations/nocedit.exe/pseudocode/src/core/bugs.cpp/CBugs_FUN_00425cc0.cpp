// Name: core_bugs.cpp_CBugs_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00425fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00425cc0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_FUN_00425cc0(CBugs *this_ptr)

{
  CLocation *dest_position;
  float *pfVar1;
  CPathMap *this_ptr_00;
  CPathMap *extraout_EAX;
  int iVar2;
  float in_stack_00000008;
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
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *pfStack_14;
  
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
  if ((this_ptr->allow_swarm != 0) && (iVar2 = *(int *)((this_ptr->base).unk2 + 4), iVar2 != 0)) {
    fStack_74 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar2 + 0x20);
    fStack_70 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar2 + 0x24);
    fStack_6c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar2 + 0x28);
    if ((ABS(fStack_70) < (float)2) &&
       ((ABS(fStack_74) < (float)2 && (ABS(fStack_6c) < (float)2)))) {
      core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
      core_bugs_cpp_CBugs_FUN_00427400(this_ptr);
      if (*(int *)(this_ptr->unk1 + 8) == 1) {
        core_bugs_cpp_CBugs_FUN_00425fe0(this_ptr);
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((this_ptr->allow_chase != 0) && (iVar2 = *(int *)((this_ptr->base).unk2 + 4), iVar2 != 0)) {
    this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xbc))();
    if (this_ptr_00 == (CPathMap *)0x0) {
      core_path_cpp_FUN_00548500();
      this_ptr_00 = extraout_EAX;
    }
    dest_position = &(this_ptr->base).base.base.location;
    iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr_00,&dest_position->position,&CStack_50,
                       (this_ptr->base).base.base.unk1);
    if (iVar2 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a8,&CStack_50);
      CStack_80.z = 2.0f * in_stack_00000008;
      CStack_80.x = 0.0;
      CStack_80.y = 0.0;
      pfStack_14 = (float *)CStack_80.z;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a8,&CStack_2c,&CStack_80);
      fStack_68 = (dest_position->position).x;
      pfVar1 = &(this_ptr->base).base.base.location.position.y;
      fStack_64 = *pfVar1;
      pfStack_14 = &(this_ptr->base).base.base.location.position.z;
      fStack_60 = *pfStack_14;
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
      fStack_38 = (dest_position->position).x;
      fStack_34 = *pfVar1;
      fStack_30 = *pfStack_14;
      (dest_position->position).x = fStack_68;
      (this_ptr->base).base.base.location.position.y = fStack_64;
      (this_ptr->base).base.base.location.position.z = fStack_60;
      fStack_44 = fStack_38 - (dest_position->position).x;
      fStack_3c = fStack_30 - (this_ptr->base).base.base.location.position.z;
      fStack_20 = *(float *)this_ptr->unk5 + *(float *)(this_ptr->unk5 + 0xc);
      fStack_1c = *(float *)(this_ptr->unk5 + 4) + *(float *)(this_ptr->unk5 + 0x10);
      fStack_5c = fStack_20 * 0.5f;
      fStack_18 = *(float *)(this_ptr->unk5 + 8) + *(float *)(this_ptr->unk5 + 0x14);
      fStack_58 = fStack_1c * 0.5f;
      fStack_54 = fStack_18 * 0.5f;
      fStack_40 = fStack_58;
      if ((((*(float *)this_ptr->unk5 <= fStack_44) && (*(float *)(this_ptr->unk5 + 4) <= fStack_58)
           ) && (*(float *)(this_ptr->unk5 + 8) <= fStack_3c)) &&
         (((fStack_44 <= *(float *)(this_ptr->unk5 + 0xc) &&
           (fStack_58 <= *(float *)(this_ptr->unk5 + 0x10))) &&
          (fStack_3c <= *(float *)(this_ptr->unk5 + 0x14))))) {
        core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
      }
    }
  }
  core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
LAB_00425d86:
  iVar2 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar2 = iVar2 + 1;
      core_bugs_cpp_CBugs_FUN_00426420(this_ptr);
    } while (iVar2 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  return;
}
