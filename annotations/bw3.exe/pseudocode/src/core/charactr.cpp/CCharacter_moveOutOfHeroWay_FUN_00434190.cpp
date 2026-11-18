// Name: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_00434190
// Address: 00434190
// Address Range: [[00434190, 0043480b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_00434190(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_00434190(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CLocation *pCVar2;
  int iVar3;
  CHero *this_ptr_00;
  uint uVar4;
  CVector3f *pCVar5;
  CVector3f *unaff_EBP;
  byte bVar6;
  float afStackY_1124 [989];
  CMatrix3x3f *pCVar7;
  CVector3f *pCVar8;
  float fStack_194;
  float fStack_190;
  CMatrix3x3f CStack_18c;
  CMatrix3x3f CStack_164;
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [4];
  uint uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  CHero *pCStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  CLocation *pCStack_18;
  CLocation *pCStack_14;
  
  bVar6 = 0;
  if (0.0 <= this_ptr->hero_proximity_timer) {
    pCStack_14 = &(this_ptr->base).location;
    this_ptr_00 = core_hero_cpp_closestHeroToPoint_FUN_004d22c0(pCStack_14);
    pCStack_30 = this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              ((CDemonActor *)this_ptr_00,unaff_EBP,&CStack_d0);
    CStack_88.x = CStack_d0.x;
    *(uint *)((int)&CStack_88 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_d0 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_88 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_d0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_88,&CStack_58);
    fStack_13c = CStack_58.x;
    afStack_138[(uint)bVar6 * -2] = *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + 4);
    afStack_138[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    fStack_34 = ABS(afStack_138[0]);
    fStack_10c = unaff_EBP->x - (this_ptr_00->base).base.location.position.x;
    fStack_108 = unaff_EBP->y - (this_ptr_00->base).base.location.position.y;
    fStack_104 = unaff_EBP->z - (this_ptr_00->base).base.location.position.z;
    CStack_e8.x = fStack_10c;
    *(float *)((int)&CStack_e8 + (uint)bVar6 * -8 + 4) = afStack_120[(uint)bVar6 * -2 + 6];
    *(float *)((int)&CStack_e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_e8,&CStack_40);
    fStack_dc = CStack_40.x;
    afStack_d8[(uint)bVar6 * -2] = *(float *)((int)&CStack_40 + (uint)bVar6 * -8 + 4);
    afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&CStack_40 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    fStack_28 = afStack_d8[0];
    iVar3 = (*(((this_ptr_00->base).base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr_00);
    if ((iVar3 != 0) && (fStack_34 < 0.7853982f)) {
      uStack_2c = (uint)(CStack_88.x < 0.0);
      uStack_1c = 0;
      pCVar5 = &this_ptr->move_away_target;
      pCStack_18 = &(pCStack_30->base).base.location;
      do {
        uVar4 = uStack_1c;
        if (uStack_2c != 0) {
          uVar4 = uStack_1c ^ 1;
        }
        uStack_4c = 0;
        afStack_48[1] = 0.0;
        afStack_48[0] = fStack_28 + g_MoveAwayAngleOffsets[uVar4];
        pCVar8 = &CStack_a0;
        pCVar7 = &CStack_164;
        CStack_a0.x = 0.0;
        *(float *)((int)&CStack_a0 + (uint)bVar6 * -8 + 4) = afStack_48[(uint)bVar6 * -2];
        *(float *)((int)&CStack_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(pCVar7,pCVar8);
        for (fStack_190 = 6.5; (float)2.3999999999999999 < fStack_190;
            fStack_190 = fStack_190 + -1.0f) {
          CStack_f4.x = 0.0;
          CStack_f4.y = 0.0;
          CStack_f4.z = fStack_190;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                    (&CStack_164,&CStack_f4,&CStack_64);
          pCVar2 = pCStack_18;
          fStack_94 = CStack_64.x;
          afStack_90[(uint)bVar6 * -2] = *(float *)((int)&CStack_64 + (uint)bVar6 * -8 + 4);
          afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          fStack_124 = (pCVar2->position).x + fStack_94;
          afStack_120[0] = (pCVar2->position).y + afStack_90[0];
          afStack_120[1] = (pCVar2->position).z + afStack_90[1];
          CStack_130.x = fStack_124;
          *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + 4) = afStack_120[(uint)bVar6 * -2];
          *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (pCVar5 != &CStack_130) {
            pCVar5->x = CStack_130.x;
            (this_ptr->move_away_target).y = CStack_130.y;
            (this_ptr->move_away_target).z = CStack_130.z;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (this_ptr,pCVar5,(CPathMap *)0x0,&g_ZeroVector,0.0,0.0);
          if (-1 < iVar3) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    if (((ABS(CStack_88.y) <= (float)4) && (fStack_34 <= 0.5235988f)) &&
       (SQRT(CStack_88.z * CStack_88.z + CStack_88.x * CStack_88.x + CStack_88.y * CStack_88.y) <=
        (float)4.5)) {
      fVar1 = this_ptr->hero_proximity_timer + delta_time;
      this_ptr->hero_proximity_timer = fVar1;
      if (fVar1 < (float)1.75) {
        return 0;
      }
      uStack_20 = 0;
      pCStack_14 = &(pCStack_30->base).base.location;
      pCVar5 = &this_ptr->move_away_target;
      do {
        fStack_24 = (float)((int)uStack_20 / 2) * 1.570796f * 0.25f;
        if ((uStack_20 & 1) != 0) {
          fStack_24 = -fStack_24;
        }
        afStack_120[2] = 0.0;
        afStack_120[3] = fStack_28 + fStack_24;
        pCVar8 = &CStack_b8;
        uStack_110 = 0;
        pCVar7 = &CStack_18c;
        CStack_b8.x = 0.0;
        *(float *)((int)&CStack_b8 + (uint)bVar6 * -8 + 4) = afStack_120[(uint)bVar6 * -2 + 3];
        *(float *)((int)&CStack_b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(pCVar7,pCVar8);
        for (fStack_194 = 4.5; (float)2.3999999999999999 < fStack_194;
            fStack_194 = fStack_194 + -1.0f) {
          CStack_70.z = fStack_194;
          CStack_70.x = 0.0;
          CStack_70.y = 0.0;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                    (&CStack_18c,&CStack_70,&CStack_100);
          pCVar2 = pCStack_14;
          fStack_7c = CStack_100.x;
          afStack_78[(uint)bVar6 * -2] = *(float *)((int)&CStack_100 + (uint)bVar6 * -8 + 4);
          afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&CStack_100 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          fStack_ac = (pCVar2->position).x + fStack_7c;
          afStack_a8[0] = (pCVar2->position).y + afStack_78[0];
          afStack_a8[1] = (pCVar2->position).z + afStack_78[1];
          CStack_c4.x = fStack_ac;
          *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + 4) = afStack_a8[(uint)bVar6 * -2];
          *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (pCVar5 != &CStack_c4) {
            pCVar5->x = CStack_c4.x;
            (this_ptr->move_away_target).y = CStack_c4.y;
            (this_ptr->move_away_target).z = CStack_c4.z;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (this_ptr,pCVar5,(CPathMap *)0x0,&g_ZeroVector,0.0,0.0);
          if (-1 < iVar3) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uStack_20 = uStack_20 + 1;
        if (8 < (int)uStack_20) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n");
          this_ptr->hero_proximity_timer = 0.0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar1 = this_ptr->hero_proximity_timer + delta_time;
    this_ptr->hero_proximity_timer = fVar1;
    if ((fVar1 < 0.0) && (this_ptr->walk_stuck_timer <= (float)1.5)) {
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (this_ptr,&this_ptr->move_away_target,(CPathMap *)0x0,&g_ZeroVector,0.0,0.0)
      ;
      if (iVar3 == 0) {
        return 1;
      }
      this_ptr->hero_proximity_timer = 0.0;
      return 0;
    }
  }
  this_ptr->hero_proximity_timer = 0.0;
  return 0;
}
