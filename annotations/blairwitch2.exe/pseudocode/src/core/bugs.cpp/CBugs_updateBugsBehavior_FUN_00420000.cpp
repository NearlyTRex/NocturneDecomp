// Name: core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00420000
// Address: 00420000
// Address Range: [[00420000, 00420397]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00420000(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00420000(CBugs *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  float fVar2;
  CLocation *pCVar3;
  CPathMap *this_ptr_00;
  SBug *pSVar4;
  float *pfVar5;
  int iVar6;
  byte bVar7;
  float afStackY_10a8 [1004];
  CBugs *this_ptr_01;
  CVector3f *velocity;
  CMatrix3x3f CStack_e8;
  float fStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float afStack_6c [3];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
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
    fStack_9c = afStack_80[2];
    afStack_bc[(uint)bVar7 * -2 + 9] = afStack_80[(uint)bVar7 * -2 + 3];
    afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if ((ABS(fStack_98) < (float)_DAT_005cca21) &&
       ((ABS(fStack_9c) < (float)_DAT_005cca21 && (ABS(fStack_94) < (float)_DAT_005cca21)))) {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
      core_bugs_cpp_CBugs_setSwarmTarget_FUN_00421b10(this_ptr,&((this_ptr->base).victim)->base);
      if (this_ptr->state == BUGS_STATE_ATTACK) {
        core_bugs_cpp_CBugs_attackSwarmTarget_FUN_004203a0(this_ptr,delta_time);
        return;
      }
      goto LAB_004200df;
    }
  }
  if ((this_ptr->allow_chase != 0) &&
     (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) {
    this_ptr_00 = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0
                              (&(((this_ptr->base).victim)->base).location);
    }
    pCStack_18 = &(this_ptr->base).base.base.location;
    iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr_00,&pCStack_18->position,&CStack_90,
                       (this_ptr->base).base.base.direction_hint);
    if (iVar6 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_e8,&CStack_90);
      afStack_6c[2] = _DAT_005f3e34 * delta_time;
      afStack_6c[0] = 0.0;
      afStack_6c[1] = 0.0;
      fStack_14 = afStack_6c[2];
      core_dirmat_cpp_FUN_00449530(&CStack_e8,afStack_80 + 5);
      velocity = &CStack_3c;
      CStack_3c.x = afStack_bc[2];
      *(float *)((int)&CStack_3c + (uint)bVar7 * -8 + 4) = afStack_bc[(uint)bVar7 * -2 + 3];
      *(float *)((int)&CStack_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      pfVar5 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
      afStack_5c[2] = (this_ptr->base).base.base.location.position.x;
      afStack_5c[(uint)bVar7 * -2 + 3] = *pfVar5;
      this_ptr_01 = this_ptr;
      afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] = pfVar5[(uint)bVar7 * -2 + 1];
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr_01,velocity);
      pCVar3 = pCStack_18;
      fVar2 = afStack_5c[2];
      pfVar5 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
      fStack_48 = (this_ptr->base).base.base.location.position.x;
      afStack_5c[(uint)bVar7 * -2 + 6] = *pfVar5;
      afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] = pfVar5[(uint)bVar7 * -2 + 1];
      (pCVar3->position).x = fVar2;
      (pCVar3->position).y = afStack_5c[3];
      (pCVar3->position).z = fStack_4c;
      fStack_c0 = fStack_48 - (pCVar3->position).x;
      afStack_bc[0] = fStack_44 - (pCVar3->position).y;
      afStack_bc[1] = fStack_40 - (pCVar3->position).z;
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
      afStack_2c[2] = fStack_60 * _DAT_005cca29;
      afStack_2c[3] = afStack_5c[0] * _DAT_005cca29;
      fStack_1c = afStack_5c[1] * _DAT_005cca29;
      fStack_a8 = fStack_60 * _DAT_005cca29;
      afStack_bc[(uint)bVar7 * -2 + 6] = afStack_2c[(uint)bVar7 * -2 + 3];
      afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStack_2c[0] = fStack_a4;
      if (((((this_ptr->bounds).min.x <= fStack_30) && ((this_ptr->bounds).min.y <= fStack_a4)) &&
          ((this_ptr->bounds).min.z <= afStack_2c[1])) &&
         (((fStack_30 <= (this_ptr->bounds).max.x && (fStack_a4 <= (this_ptr->bounds).max.y)) &&
          (afStack_2c[1] <= (this_ptr->bounds).max.z)))) {
        core_bugs_cpp_FUN_00421dd0(this_ptr,afStack_5c + 5);
      }
    }
  }
  core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
LAB_004200df:
  iVar6 = 0;
  if (0 < this_ptr->count) {
    pSVar4 = this_ptr->bugs;
    do {
      iVar6 = iVar6 + 1;
      core_bugs_cpp_FUN_00420840(this_ptr,pSVar4,delta_time,0);
      pSVar4 = pSVar4 + 1;
    } while (iVar6 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00421a00(this_ptr);
  return;
}
