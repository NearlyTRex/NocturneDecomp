// Name: core_bugs.cpp_FUN_00422050
// Address: 00422050
// Address Range: [[00422050, 00422368]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00422050(CBugs *param_1,float param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00422050(CBugs *param_1,float param_2)

{
  CLocation *dest_position;
  float *pfVar1;
  float *pfVar2;
  CCharacter *pCVar3;
  CPathMap *this_ptr;
  int iVar4;
  SBug *pSVar5;
  CVector3f *in_stack_ffffff58;
  CMatrix3x3f CStack_98;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)param_1,(int)param_2,in_stack_ffffff58);
  if ((param_1->allow_swarm != 0) && (pCVar3 = (param_1->base).victim, pCVar3 != (CCharacter *)0x0))
  {
    fStack_68 = (param_1->base).base.base.location.position.x - (pCVar3->base).location.position.x;
    fStack_64 = (param_1->base).base.base.location.position.y - (pCVar3->base).location.position.y;
    fStack_60 = (param_1->base).base.base.location.position.z - (pCVar3->base).location.position.z;
    if ((ABS(fStack_64) < (float)2) &&
       ((ABS(fStack_68) < (float)2 && (ABS(fStack_60) < (float)2)))) {
      core_bugs_cpp_FUN_00421b80(param_1);
      core_bugs_cpp_CBugs_setSwarmTarget_FUN_00423790(param_1,&((param_1->base).victim)->base);
      if (param_1->state == BUGS_STATE_ATTACK) {
        core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(param_1,param_2);
        return;
      }
      goto LAB_00422116;
    }
  }
  if ((param_1->allow_chase != 0) && (pCVar3 = (param_1->base).victim, pCVar3 != (CCharacter *)0x0))
  {
    this_ptr = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
    if (this_ptr == (CPathMap *)0x0) {
      this_ptr = core_path_cpp_getPathMap_FUN_004f1e00(&(((param_1->base).victim)->base).location);
    }
    dest_position = &(param_1->base).base.base.location;
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                      (this_ptr,&dest_position->position,&CStack_40,
                       (param_1->base).base.base.direction_hint);
    if (iVar4 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_98,&CStack_40);
      fStack_68 = 2.0f * param_2;
      uStack_70 = 0;
      uStack_6c = 0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&CStack_98,&CStack_1c,&uStack_70);
      fStack_58 = (dest_position->position).x;
      pfVar1 = &(param_1->base).base.base.location.position.y;
      fStack_54 = *pfVar1;
      pfVar2 = &(param_1->base).base.base.location.position.z;
      fStack_50 = *pfVar2;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&CStack_1c);
      CStack_28.x = (dest_position->position).x;
      CStack_28.y = *pfVar1;
      CStack_28.z = *pfVar2;
      (dest_position->position).x = fStack_58;
      (param_1->base).base.base.location.position.y = fStack_54;
      (param_1->base).base.base.location.position.z = fStack_50;
      fStack_34 = CStack_28.x - (dest_position->position).x;
      fStack_2c = CStack_28.z - (param_1->base).base.base.location.position.z;
      fStack_4c = ((param_1->bounds).min.x + (param_1->bounds).max.x) * 5.2220990168285998e-315._0_4_;
      fStack_48 = ((param_1->bounds).min.y + (param_1->bounds).max.y) * 5.2220990168285998e-315._0_4_;
      fStack_44 = ((param_1->bounds).min.z + (param_1->bounds).max.z) * 5.2220990168285998e-315._0_4_;
      fStack_30 = fStack_48;
      if (((((param_1->bounds).min.x <= fStack_34) && ((param_1->bounds).min.y <= fStack_48)) &&
          ((param_1->bounds).min.z <= fStack_2c)) &&
         (((fStack_34 <= (param_1->bounds).max.x && (fStack_48 <= (param_1->bounds).max.y)) &&
          (fStack_2c <= (param_1->bounds).max.z)))) {
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(param_1,&CStack_28);
      }
    }
  }
  core_bugs_cpp_FUN_00421b80(param_1);
LAB_00422116:
  iVar4 = 0;
  if (0 < param_1->count) {
    pSVar5 = param_1->bugs;
    do {
      iVar4 = iVar4 + 1;
      core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(param_1,pSVar5,param_2,0);
      pSVar5 = pSVar5 + 1;
    } while (iVar4 < param_1->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(param_1);
  return;
}
