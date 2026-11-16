// Name: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042abe0
// Address: 0042abe0
// Address Range: [[0042abe0, 0042b25b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042abe0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042abe0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CLocation *pCVar2;
  int iVar3;
  CHero *this_ptr_00;
  uint uVar4;
  CVector3f *pCVar5;
  byte bVar6;
  float afStackY_1128 [990];
  CMatrix3x3f *pCVar7;
  CVector3f *pCVar8;
  float fStack_198;
  float fStack_194;
  CMatrix3x3f CStack_190;
  CMatrix3x3f CStack_168;
  float local_140;
  float local_13c [2];
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [4];
  uint uStack_114;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc [2];
  CVector3f local_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f local_8c;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f local_5c;
  uint uStack_50;
  float afStack_4c [2];
  CVector3f local_44;
  float local_38;
  CHero *local_34;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  CLocation *pCStack_1c;
  CLocation *pCStack_18;
  CVector3f *local_14;
  
  bVar6 = 0;
  if (0.0 <= this_ptr->hero_proximity_timer) {
    local_14 = &(this_ptr->base).location.position;
    this_ptr_00 = core_hero_cpp_closestHeroToPoint_FUN_004ce050((CLocation *)local_14);
    local_34 = this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr_00,local_14,&local_d4);
    local_8c.x = local_d4.x;
    *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_d4 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_8c,&local_5c);
    local_140 = local_5c.x;
    local_13c[(uint)bVar6 * -2] = *(float *)((int)&local_5c + (uint)bVar6 * -8 + 4);
    local_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    local_38 = ABS(local_13c[0]);
    local_110 = local_14->x - (this_ptr_00->base).base.location.position.x;
    local_10c = local_14->y - (this_ptr_00->base).base.location.position.y;
    local_108 = local_14->z - (this_ptr_00->base).base.location.position.z;
    local_ec.x = local_110;
    *(float *)((int)&local_ec + (uint)bVar6 * -8 + 4) = afStack_124[(uint)bVar6 * -2 + 6];
    *(float *)((int)&local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_ec,&local_44);
    local_e0 = local_44.x;
    local_dc[(uint)bVar6 * -2] = *(float *)((int)&local_44 + (uint)bVar6 * -8 + 4);
    local_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    local_2c = local_dc[0];
    iVar3 = (*(((this_ptr_00->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr_00);
    if ((iVar3 != 0) && (local_38 < _DAT_005cd2e6)) {
      uStack_30 = (uint)(local_8c.x < 0.0);
      uStack_20 = 0;
      pCVar5 = &this_ptr->move_away_target;
      pCStack_1c = &(local_34->base).base.location;
      do {
        uVar4 = uStack_20;
        if (uStack_30 != 0) {
          uVar4 = uStack_20 ^ 1;
        }
        local_14 = (CVector3f *)(local_2c + *(float *)(&DAT_00609aa0 + uVar4 * 4));
        uStack_50 = 0;
        afStack_4c[1] = 0.0;
        afStack_4c[0] = local_2c + *(float *)(&DAT_00609aa0 + uVar4 * 4);
        pCVar8 = &CStack_a4;
        pCVar7 = &CStack_168;
        CStack_a4.x = 0.0;
        *(float *)((int)&CStack_a4 + (uint)bVar6 * -8 + 4) = afStack_4c[(uint)bVar6 * -2];
        *(float *)((int)&CStack_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(pCVar7,pCVar8);
        for (fStack_194 = 6.5; (float)_DAT_005cd31e < fStack_194;
            fStack_194 = fStack_194 + _DAT_005cd326) {
          CStack_f8.x = 0.0;
          CStack_f8.y = 0.0;
          CStack_f8.z = fStack_194;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                    (&CStack_168,&CStack_f8,&CStack_68);
          pCVar2 = pCStack_1c;
          fStack_98 = CStack_68.x;
          afStack_94[(uint)bVar6 * -2] = *(float *)((int)&CStack_68 + (uint)bVar6 * -8 + 4);
          afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&CStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          fStack_128 = (pCVar2->position).x + fStack_98;
          afStack_124[0] = (pCVar2->position).y + afStack_94[0];
          afStack_124[1] = (pCVar2->position).z + afStack_94[1];
          CStack_134.x = fStack_128;
          *(float *)((int)&CStack_134 + (uint)bVar6 * -8 + 4) = afStack_124[(uint)bVar6 * -2];
          *(float *)((int)&CStack_134 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (pCVar5 != &CStack_134) {
            pCVar5->x = CStack_134.x;
            (this_ptr->move_away_target).y = CStack_134.y;
            (this_ptr->move_away_target).z = CStack_134.z;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (this_ptr,pCVar5,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,0.0,0.0);
          if (-1 < iVar3) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uStack_20 = uStack_20 + 1;
      } while ((int)uStack_20 < 6);
    }
    if (((ABS(local_8c.y) <= (float)_DAT_005cd2f6) && (local_38 <= _DAT_005cd2fe)) &&
       (SQRT(local_8c.z * local_8c.z + local_8c.x * local_8c.x + local_8c.y * local_8c.y) <=
        (float)_DAT_005cd306)) {
      fVar1 = this_ptr->hero_proximity_timer + delta_time;
      this_ptr->hero_proximity_timer = fVar1;
      if (fVar1 < (float)_DAT_005cd30e) {
        return 0;
      }
      uStack_24 = 0;
      pCStack_18 = &(local_34->base).base.location;
      pCVar5 = &this_ptr->move_away_target;
      do {
        fStack_28 = (float)((int)uStack_24 / 2) * _DAT_005cd316 * _DAT_005cd31a;
        if ((uStack_24 & 1) != 0) {
          fStack_28 = -fStack_28;
        }
        local_14 = (CVector3f *)(local_2c + fStack_28);
        afStack_124[2] = 0.0;
        afStack_124[3] = local_2c + fStack_28;
        pCVar8 = &CStack_bc;
        uStack_114 = 0;
        pCVar7 = &CStack_190;
        CStack_bc.x = 0.0;
        *(float *)((int)&CStack_bc + (uint)bVar6 * -8 + 4) = afStack_124[(uint)bVar6 * -2 + 3];
        *(float *)((int)&CStack_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(pCVar7,pCVar8);
        for (fStack_198 = 4.5; (float)_DAT_005cd31e < fStack_198;
            fStack_198 = fStack_198 + _DAT_005cd326) {
          CStack_74.z = fStack_198;
          CStack_74.x = 0.0;
          CStack_74.y = 0.0;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                    (&CStack_190,&CStack_74,&CStack_104);
          pCVar2 = pCStack_18;
          fStack_80 = CStack_104.x;
          afStack_7c[(uint)bVar6 * -2] = *(float *)((int)&CStack_104 + (uint)bVar6 * -8 + 4);
          afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&CStack_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          fStack_b0 = (pCVar2->position).x + fStack_80;
          afStack_ac[0] = (pCVar2->position).y + afStack_7c[0];
          afStack_ac[1] = (pCVar2->position).z + afStack_7c[1];
          CStack_c8.x = fStack_b0;
          *(float *)((int)&CStack_c8 + (uint)bVar6 * -8 + 4) = afStack_ac[(uint)bVar6 * -2];
          *(float *)((int)&CStack_c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (pCVar5 != &CStack_c8) {
            pCVar5->x = CStack_c8.x;
            (this_ptr->move_away_target).y = CStack_c8.y;
            (this_ptr->move_away_target).z = CStack_c8.z;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (this_ptr,pCVar5,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,0.0,0.0);
          if (-1 < iVar3) {
            this_ptr->walk_stuck_timer = 0.0;
            this_ptr->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uStack_24 = uStack_24 + 1;
        if (8 < (int)uStack_24) {
          engine_console_cpp_CConsole_printf_FUN_00436710
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
    if ((fVar1 < 0.0) && (this_ptr->walk_stuck_timer <= (float)_DAT_005cd2ee)) {
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (this_ptr,&this_ptr->move_away_target,(CPathMap *)0x0,
                         (CVector3f *)&DAT_0265370c,0.0,0.0);
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
