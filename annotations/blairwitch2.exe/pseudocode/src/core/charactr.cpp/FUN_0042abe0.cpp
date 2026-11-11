// Name: core_charactr.cpp_FUN_0042abe0
// Address: 0042abe0
// Address Range: [[0042abe0, 0042b25b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042abe0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_0042abe0(CCharacter *param_1,float param_2)

{
  CLocation *pCVar1;
  int iVar2;
  CHero *this_ptr;
  uint uVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_1128 [990];
  CMatrix3x3f *pCVar6;
  CVector3f *pCVar7;
  float fStack_198;
  float fStack_194;
  CMatrix3x3f CStack_190;
  CMatrix3x3f CStack_168;
  uint local_140;
  float local_13c [2];
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [4];
  uint uStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float afStack_f8 [3];
  float local_ec;
  float afStack_e8 [5];
  float local_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float afStack_64 [5];
  uint uStack_50;
  float fStack_4c;
  uint uStack_48;
  uint local_44;
  float local_38;
  CHero *local_34;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  CLocation *pCStack_1c;
  CLocation *pCStack_18;
  CLocation *local_14;
  
  bVar5 = 0;
  if (0.0 <= param_1->hero_proximity_timer) {
    local_14 = &(param_1->base).location;
    this_ptr = core_hero_cpp_closestHeroToPoint_FUN_004ce050(local_14);
    local_34 = this_ptr;
    core_actor_cpp_FUN_00408de0(this_ptr,local_14);
    afStack_94[2] = local_d4;
    afStack_94[(uint)bVar5 * -2 + 3] = afStack_e8[(uint)bVar5 * -2 + 6];
    afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_94 + 2);
    local_140 = afStack_64[2];
    local_13c[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 3];
    local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    local_38 = ABS(local_13c[0]);
    local_110 = (local_14->position).x - (this_ptr->base).base.location.position.x;
    local_10c = (local_14->position).y - (this_ptr->base).base.location.position.y;
    local_108 = (local_14->position).z - (this_ptr->base).base.location.position.z;
    local_ec = local_110;
    afStack_e8[(uint)bVar5 * -2] = afStack_124[(uint)bVar5 * -2 + 6];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_ec);
    afStack_e8[2] = (float)local_44;
    afStack_e8[(uint)bVar5 * -2 + 3] = afStack_64[(uint)bVar5 * -2 + 9];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    local_2c = afStack_e8[3];
    iVar2 = (*(((this_ptr->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr);
    if ((iVar2 != 0) && (local_38 < _DAT_005cd2e6)) {
      uStack_30 = (uint)(afStack_94[2] < 0.0);
      uStack_20 = 0;
      pCVar4 = &param_1->move_away_target;
      pCStack_1c = &(local_34->base).base.location;
      do {
        uVar3 = uStack_20;
        if (uStack_30 != 0) {
          uVar3 = uStack_20 ^ 1;
        }
        local_14 = (CLocation *)(local_2c + *(float *)(&DAT_00609aa0 + uVar3 * 4));
        uStack_50 = 0;
        uStack_48 = 0;
        fStack_4c = local_2c + *(float *)(&DAT_00609aa0 + uVar3 * 4);
        pCVar7 = &CStack_a4;
        pCVar6 = &CStack_168;
        CStack_a4.x = 0.0;
        *(float *)((int)&CStack_a4 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 6];
        *(float *)((int)&CStack_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(pCVar6,pCVar7);
        for (fStack_194 = 6.5; (float)_DAT_005cd31e < fStack_194;
            fStack_194 = fStack_194 + _DAT_005cd326) {
          afStack_f8[0] = 0.0;
          afStack_f8[1] = 0.0;
          afStack_f8[2] = fStack_194;
          core_dirmat_cpp_FUN_00449530(&CStack_168,afStack_124 + 0xb);
          pCVar1 = pCStack_1c;
          fStack_98 = fStack_68;
          afStack_94[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2];
          afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fStack_128 = (pCVar1->position).x + fStack_98;
          afStack_124[0] = (pCVar1->position).y + afStack_94[0];
          afStack_124[1] = (pCVar1->position).z + afStack_94[1];
          CStack_134.x = fStack_128;
          *(float *)((int)&CStack_134 + (uint)bVar5 * -8 + 4) = afStack_124[(uint)bVar5 * -2];
          *(float *)((int)&CStack_134 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (pCVar4 != &CStack_134) {
            pCVar4->x = CStack_134.x;
            (param_1->move_away_target).y = CStack_134.y;
            (param_1->move_away_target).z = CStack_134.z;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (param_1,pCVar4,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,0.0,0.0);
          if (-1 < iVar2) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uStack_20 = uStack_20 + 1;
      } while ((int)uStack_20 < 6);
    }
    if (((ABS(afStack_94[3]) <= (float)_DAT_005cd2f6) && (local_38 <= _DAT_005cd2fe)) &&
       (SQRT(fStack_84 * fStack_84 + afStack_94[2] * afStack_94[2] + afStack_94[3] * afStack_94[3])
        <= (float)_DAT_005cd306)) {
      param_2 = param_1->hero_proximity_timer + param_2;
      param_1->hero_proximity_timer = param_2;
      if (param_2 < (float)_DAT_005cd30e) {
        return 0;
      }
      uStack_24 = 0;
      pCStack_18 = &(local_34->base).base.location;
      pCVar4 = &param_1->move_away_target;
      do {
        fStack_28 = (float)((int)uStack_24 / 2) * _DAT_005cd316 * _DAT_005cd31a;
        if ((uStack_24 & 1) != 0) {
          fStack_28 = -fStack_28;
        }
        local_14 = (CLocation *)(local_2c + fStack_28);
        afStack_124[2] = 0.0;
        afStack_124[3] = local_2c + fStack_28;
        pCVar7 = &CStack_bc;
        uStack_114 = 0;
        pCVar6 = &CStack_190;
        CStack_bc.x = 0.0;
        *(float *)((int)&CStack_bc + (uint)bVar5 * -8 + 4) = afStack_124[(uint)bVar5 * -2 + 3];
        *(float *)((int)&CStack_bc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(pCVar6,pCVar7);
        for (fStack_198 = 4.5; (float)_DAT_005cd31e < fStack_198;
            fStack_198 = fStack_198 + _DAT_005cd326) {
          afStack_74[2] = fStack_198;
          afStack_74[0] = 0.0;
          afStack_74[1] = 0.0;
          core_dirmat_cpp_FUN_00449530(&CStack_190,afStack_94 + 8);
          pCVar1 = pCStack_18;
          fStack_80 = fStack_104;
          afStack_94[(uint)bVar5 * -2 + 6] = afStack_124[(uint)bVar5 * -2 + 9];
          afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fStack_b0 = (pCVar1->position).x + fStack_80;
          afStack_ac[0] = (pCVar1->position).y + fStack_7c;
          afStack_ac[1] = (pCVar1->position).z + fStack_78;
          CStack_c8.x = fStack_b0;
          *(float *)((int)&CStack_c8 + (uint)bVar5 * -8 + 4) = afStack_ac[(uint)bVar5 * -2];
          *(float *)((int)&CStack_c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (pCVar4 != &CStack_c8) {
            pCVar4->x = CStack_c8.x;
            (param_1->move_away_target).y = CStack_c8.y;
            (param_1->move_away_target).z = CStack_c8.z;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (param_1,pCVar4,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,0.0,0.0);
          if (-1 < iVar2) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uStack_24 = uStack_24 + 1;
        if (8 < (int)uStack_24) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",param_1)
          ;
          param_1->hero_proximity_timer = 0.0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = param_1->hero_proximity_timer + param_2;
    param_1->hero_proximity_timer = param_2;
    if ((param_2 < 0.0) && (param_1->walk_stuck_timer <= (float)_DAT_005cd2ee)) {
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (param_1,&param_1->move_away_target,(CPathMap *)0x0,
                         (CVector3f *)&DAT_0265370c,0.0,0.0);
      if (iVar2 == 0) {
        return 1;
      }
      param_1->hero_proximity_timer = 0.0;
      return 0;
    }
  }
  param_1->hero_proximity_timer = 0.0;
  return 0;
}
