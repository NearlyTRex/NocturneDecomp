// Name: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter *this_ptr,float delta_time)

{
  CLocation *location_00;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar3;
  CEnemy *pCVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar7;
  int iVar8;
  CVector3f *pCVar6;
  uint uVar7;
  CVector3f *pCVar9;
  float fStack_118;
  float fStack_110;
  CMatrix3x3f CStack_10c;
  CMatrix3x3f CStack_e4;
  CVector3f local_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  CVector3f CStack_98;
  CVector3f local_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  CEnemy *local_2c;
  uint uStack_28;
  float local_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  float fVar1;
  CCharacter *pCVar2;
  CLocation *location;
  
  if (0.0 <= this_ptr->hero_proximity_timer) {
    location_00 = &(this_ptr->base).location;
    pCVar4 = (CEnemy *)core_hero_cpp_closestHeroToPoint_FUN_004f2170(location_00);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)pCVar4,&local_a4,&location_00->position);
    pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_bc,&local_a4);
    fVar1 = pCVar5->y;
    local_44.x = (location_00->position).x - (pCVar4->base).base.location.position.x;
    local_44.y = (this_ptr->base).location.position.y - (pCVar4->base).base.location.position.y;
    local_44.z = (this_ptr->base).location.position.z - (pCVar4->base).base.location.position.z;
    pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_8c,&local_44);
    fVar2 = pCVar7->y;
    iVar8 = (*(((pCVar4->base).base.vtable._ue)->_ue).randomize)(pCVar4);
    if ((iVar8 != 0) && (ABS(fVar1) < (float)0.78539816337500001)) {
      bVar3 = local_a4.x < 0.0;
      pCVar7 = &this_ptr->move_away_target;
      uStack_1c = 0;
      do {
        uVar7 = uStack_1c;
        if (bVar3) {
          uVar7 = uStack_1c ^ 1;
        }
        CStack_80.y = fVar2 + g_MoveAwayAngleOffsets[uVar7];
        CStack_80.x = 0.0;
        CStack_80.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_80);
        for (fStack_110 = 6.5; (float)2.3999999999999999 < fStack_110;
            fStack_110 = fStack_110 + -1.0f) {
          CStack_b0.z = fStack_110;
          CStack_b0.x = 0.0;
          CStack_b0.y = 0.0;
          pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_10c,&CStack_74,&CStack_b0);
          CStack_68.x = (pCVar4->base).base.location.position.x + pCVar6->x;
          CStack_68.y = (pCVar4->base).base.location.position.y + pCVar6->y;
          CStack_68.z = (pCVar4->base).base.location.position.z + pCVar6->z;
          if (pCVar7 != &CStack_68) {
            pCVar7->x = CStack_68.x;
            (this_ptr->move_away_target).y = CStack_68.y;
            (this_ptr->move_away_target).z = CStack_68.z;
          }
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (this_ptr,pCVar7,(CPathMap *)0x0,&g_ZeroVector.f,0.0,0.0);
          if (-1 < iVar8) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    if (((ABS(local_a4.y) <= (float)4) && (ABS(fVar1) <= (float)0.52359877558333301)) &&
       (SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y) <=
        (float)4.5)) {
      fVar4 = this_ptr->hero_proximity_timer + delta_time;
      this_ptr->hero_proximity_timer = fVar4;
      if (fVar4 < (float)1.75) {
        return 0;
      }
      pCVar7 = &this_ptr->move_away_target;
      uStack_18 = 0;
      do {
        fStack_20 = (float)((int)uStack_18 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uStack_18 & 1) != 0) {
          fStack_20 = -fStack_20;
        }
        CStack_5c.y = fVar2 + fStack_20;
        CStack_5c.x = 0.0;
        CStack_5c.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_e4,&CStack_5c);
        for (fStack_118 = 4.5; (float)2.3999999999999999 < fStack_118;
            fStack_118 = fStack_118 + -1.0f) {
          CStack_38.z = fStack_118;
          CStack_38.x = 0.0;
          CStack_38.y = 0.0;
          pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e4,&CStack_50,&CStack_38);
          CStack_98.x = (pCVar4->base).base.location.position.x + pCVar9->x;
          CStack_98.y = (pCVar4->base).base.location.position.y + pCVar9->y;
          CStack_98.z = (pCVar4->base).base.location.position.z + pCVar9->z;
          if (pCVar7 != &CStack_98) {
            pCVar7->x = CStack_98.x;
            (this_ptr->move_away_target).y = CStack_98.y;
            (this_ptr->move_away_target).z = CStack_98.z;
          }
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (this_ptr,pCVar7,(CPathMap *)0x0,&g_ZeroVector.f,0.0,0.0);
          if (-1 < iVar8) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uStack_18 = uStack_18 + 1;
        if (8 < (int)uStack_18) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",this_ptr);
          this_ptr->hero_proximity_timer = 0.0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar2 = this_ptr->hero_proximity_timer + delta_time;
    this_ptr->hero_proximity_timer = fVar2;
    if (((fVar2 < 0.0) && (this_ptr->walk_stuck_timer <= (float)1.5)) &&
       (iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (this_ptr,&this_ptr->move_away_target,(CPathMap *)0x0,&g_ZeroVector.f,0.0,
                           0.0), iVar3 == 0)) {
      return 1;
    }
  }
  this_ptr->hero_proximity_timer = 0.0;
  return 0;
}
