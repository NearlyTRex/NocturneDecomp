// Name: core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00426030
// Address: 00426030
// Address Range: [[00426030, 004263c7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00426030(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00426030(CBugs *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  float fVar2;
  CLocation *pCVar3;
  CPathMap *this_ptr_00;
  SBug *bug_data;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  float afStackY_10a8 [1004];
  CBugs *this_ptr_01;
  CVector3f *velocity;
  CMatrix3x3f CStack_e8;
  float fStack_c0;
  float afStack_bc [2];
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  CLocation *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->allow_swarm != 0) &&
     (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) {
    afStack_80[2] =
         (this_ptr->base).base.base.location.position.x - (pCVar1->base).location.position.x;
    afStack_80[3] =
         (this_ptr->base).base.base.location.position.y - (pCVar1->base).location.position.y;
    fStack_70 = (this_ptr->base).base.base.location.position.z - (pCVar1->base).location.position.z;
    afStack_a4[2] = afStack_80[2];
    afStack_a4[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2 + 3];
    afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if ((ABS(afStack_a4[3]) < (float)2) &&
       ((ABS(afStack_a4[2]) < (float)2 &&
        (ABS(fStack_94) < (float)2)))) {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(this_ptr);
      core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427b40(this_ptr,&((this_ptr->base).victim)->base);
      if (this_ptr->state == BUGS_STATE_ATTACK) {
        core_bugs_cpp_CBugs_attackSwarmTarget_FUN_004263d0(this_ptr,delta_time);
        return;
      }
      goto LAB_0042610f;
    }
  }
  if ((this_ptr->allow_chase != 0) &&
     (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) {
    this_ptr_00 = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0
                              (&(((this_ptr->base).victim)->base).location);
    }
    pCStack_18 = &(this_ptr->base).base.base.location;
    iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_00,&pCStack_18->position,&CStack_90,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar6 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_e8,&CStack_90);
      CStack_6c.z = 2.0f * delta_time;
      CStack_6c.x = 0.0;
      CStack_6c.y = 0.0;
      fStack_14 = CStack_6c.z;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(&CStack_e8,&CStack_6c,&CStack_b4);
      velocity = &CStack_3c;
      CStack_3c.x = CStack_b4.x;
      *(uint *)((int)&CStack_3c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      pfVar4 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
      afStack_5c[2] = (this_ptr->base).base.base.location.position.x;
      afStack_5c[(uint)bVar7 * -2 + 3] = *pfVar4;
      this_ptr_01 = this_ptr;
      afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] = pfVar4[(uint)bVar7 * -2 + 1];
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr_01,velocity);
      pCVar3 = pCStack_18;
      fVar2 = afStack_5c[2];
      puVar5 = (uint *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
      CStack_48.x = (this_ptr->base).base.base.location.position.x;
      *(uint *)((int)&CStack_48 + (uint)bVar7 * -8 + 4) = *puVar5;
      *(uint *)((int)&CStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           puVar5[(uint)bVar7 * -2 + 1];
      (pCVar3->position).x = fVar2;
      (pCVar3->position).y = afStack_5c[3];
      (pCVar3->position).z = fStack_4c;
      fStack_c0 = CStack_48.x - (pCVar3->position).x;
      afStack_bc[0] = CStack_48.y - (pCVar3->position).y;
      afStack_bc[1] = CStack_48.z - (pCVar3->position).z;
      fStack_30 = fStack_c0;
      afStack_2c[(uint)bVar7 * -2] = afStack_bc[(uint)bVar7 * -2];
      afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_84 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
      afStack_80[0] = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
      afStack_80[1] = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
      fStack_60 = fStack_84;
      afStack_5c[(uint)bVar7 * -2] = afStack_80[(uint)bVar7 * -2];
      afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      afStack_2c[2] = fStack_60 * 0.5f;
      afStack_2c[3] = afStack_5c[0] * 0.5f;
      fStack_1c = afStack_5c[1] * 0.5f;
      fStack_a8 = fStack_60 * 0.5f;
      afStack_a4[(uint)bVar7 * -2] = afStack_2c[(uint)bVar7 * -2 + 3];
      afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStack_2c[0] = afStack_a4[0];
      if (((((this_ptr->bounds).min.x <= fStack_30) && ((this_ptr->bounds).min.y <= afStack_a4[0]))
          && ((this_ptr->bounds).min.z <= afStack_2c[1])) &&
         (((fStack_30 <= (this_ptr->bounds).max.x && (afStack_a4[0] <= (this_ptr->bounds).max.y)) &&
          (afStack_2c[1] <= (this_ptr->bounds).max.z)))) {
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00427e00(this_ptr,&CStack_48);
      }
    }
  }
  core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(this_ptr);
LAB_0042610f:
  iVar6 = 0;
  if (0 < this_ptr->count) {
    bug_data = this_ptr->bugs;
    do {
      iVar6 = iVar6 + 1;
      core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426870
                (this_ptr,bug_data,delta_time,(CVector3f *)0x0);
      bug_data = bug_data + 1;
    } while (iVar6 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00427a30(this_ptr);
  return;
}
