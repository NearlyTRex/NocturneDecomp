// Name: core_charactr.cpp_FUN_00434190
// Address: 00434190
// Address Range: [[00434190, 0043480b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00434190(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_00434190(CCharacter *param_1,float param_2)

{
  CLocation *pCVar1;
  int iVar2;
  CHero *this_ptr;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *unaff_EBP;
  byte bVar5;
  float afStackY_1124 [989];
  CMatrix3x3f *pCVar6;
  CVector3f *pCVar7;
  float fStack_194;
  float fStack_190;
  CMatrix3x3f CStack_18c;
  CMatrix3x3f CStack_164;
  uint uStack_13c;
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
  float fStack_e8;
  float afStack_e4 [5];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  uint uStack_58;
  float afStack_54 [4];
  uint uStack_44;
  uint uStack_40;
  float fStack_34;
  CHero *pCStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  CLocation *pCStack_18;
  CLocation *pCStack_14;
  
  bVar5 = 0;
  if (0.0 <= param_1->hero_proximity_timer) {
    pCStack_14 = &(param_1->base).location;
    this_ptr = core_hero_cpp_closestHeroToPoint_FUN_004d22c0(pCStack_14);
    pCStack_30 = this_ptr;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              ((CDemonActor *)this_ptr,unaff_EBP,&CStack_d0);
    afStack_90[2] = CStack_d0.x;
    afStack_90[(uint)bVar5 * -2 + 3] = *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + 4);
    afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_90 + 2);
    uStack_13c = uStack_58;
    afStack_138[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2];
    afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_34 = ABS(afStack_138[0]);
    fStack_10c = unaff_EBP->x - (this_ptr->base).base.location.position.x;
    fStack_108 = unaff_EBP->y - (this_ptr->base).base.location.position.y;
    fStack_104 = unaff_EBP->z - (this_ptr->base).base.location.position.z;
    fStack_e8 = fStack_10c;
    afStack_e4[(uint)bVar5 * -2] = afStack_120[(uint)bVar5 * -2 + 6];
    afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_e8);
    afStack_e4[2] = (float)uStack_40;
    afStack_e4[(uint)bVar5 * -2 + 3] = afStack_54[(uint)bVar5 * -2 + 6];
    afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_28 = afStack_e4[3];
    iVar2 = (*(((this_ptr->base).base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
    if ((iVar2 != 0) && (fStack_34 < _DAT_005b88e2)) {
      uStack_2c = (uint)(afStack_90[2] < 0.0);
      uStack_1c = 0;
      pCVar4 = &param_1->move_away_target;
      pCStack_18 = &(pCStack_30->base).base.location;
      do {
        uVar3 = uStack_1c;
        if (uStack_2c != 0) {
          uVar3 = uStack_1c ^ 1;
        }
        afStack_54[2] = 0.0;
        uStack_44 = 0;
        afStack_54[3] = fStack_28 + *(float *)(uVar3 * 4 + 0x5f0f30);
        pCVar7 = &CStack_a0;
        pCVar6 = &CStack_164;
        CStack_a0.x = 0.0;
        *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + 4) = afStack_54[(uint)bVar5 * -2 + 3];
        *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(pCVar6,pCVar7);
        for (fStack_190 = 6.5; (float)_DAT_005b8916 < fStack_190;
            fStack_190 = fStack_190 + _DAT_005b891e) {
          CStack_f4.x = 0.0;
          CStack_f4.y = 0.0;
          CStack_f4.z = fStack_190;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                    (&CStack_164,&CStack_f4,&CStack_64);
          pCVar1 = pCStack_18;
          fStack_94 = CStack_64.x;
          afStack_90[(uint)bVar5 * -2] = *(float *)((int)&CStack_64 + (uint)bVar5 * -8 + 4);
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               *(float *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          fStack_124 = (pCVar1->position).x + fStack_94;
          afStack_120[0] = (pCVar1->position).y + afStack_90[0];
          afStack_120[1] = (pCVar1->position).z + afStack_90[1];
          CStack_130.x = fStack_124;
          *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + 4) = afStack_120[(uint)bVar5 * -2];
          *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (pCVar4 != &CStack_130) {
            pCVar4->x = CStack_130.x;
            (param_1->move_away_target).y = CStack_130.y;
            (param_1->move_away_target).z = CStack_130.z;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (param_1,pCVar4,(CPathMap *)0x0,(CVector3f *)&DAT_02cfd900,0.0,0.0);
          if (-1 < iVar2) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    if (((ABS(afStack_90[3]) <= (float)_DAT_005b88ee) && (fStack_34 <= _DAT_005b88f6)) &&
       (SQRT(fStack_80 * fStack_80 + afStack_90[2] * afStack_90[2] + afStack_90[3] * afStack_90[3])
        <= (float)_DAT_005b88fe)) {
      param_2 = param_1->hero_proximity_timer + param_2;
      param_1->hero_proximity_timer = param_2;
      if (param_2 < (float)_DAT_005b8906) {
        return 0;
      }
      uStack_20 = 0;
      pCStack_14 = &(pCStack_30->base).base.location;
      pCVar4 = &param_1->move_away_target;
      do {
        fStack_24 = (float)((int)uStack_20 / 2) * _DAT_005b890e * _DAT_005b8912;
        if ((uStack_20 & 1) != 0) {
          fStack_24 = -fStack_24;
        }
        afStack_120[2] = 0.0;
        afStack_120[3] = fStack_28 + fStack_24;
        pCVar7 = &CStack_b8;
        uStack_110 = 0;
        pCVar6 = &CStack_18c;
        CStack_b8.x = 0.0;
        *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4) = afStack_120[(uint)bVar5 * -2 + 3];
        *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(pCVar6,pCVar7);
        for (fStack_194 = 4.5; (float)_DAT_005b8916 < fStack_194;
            fStack_194 = fStack_194 + _DAT_005b891e) {
          CStack_70.z = fStack_194;
          CStack_70.x = 0.0;
          CStack_70.y = 0.0;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                    (&CStack_18c,&CStack_70,&CStack_100);
          pCVar1 = pCStack_14;
          fStack_7c = CStack_100.x;
          afStack_90[(uint)bVar5 * -2 + 6] = *(float *)((int)&CStack_100 + (uint)bVar5 * -8 + 4);
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               *(float *)((int)&CStack_100 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          fStack_ac = (pCVar1->position).x + fStack_7c;
          afStack_a8[0] = (pCVar1->position).y + fStack_78;
          afStack_a8[1] = (pCVar1->position).z + fStack_74;
          CStack_c4.x = fStack_ac;
          *(float *)((int)&CStack_c4 + (uint)bVar5 * -8 + 4) = afStack_a8[(uint)bVar5 * -2];
          *(float *)((int)&CStack_c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (pCVar4 != &CStack_c4) {
            pCVar4->x = CStack_c4.x;
            (param_1->move_away_target).y = CStack_c4.y;
            (param_1->move_away_target).z = CStack_c4.z;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (param_1,pCVar4,(CPathMap *)0x0,(CVector3f *)&DAT_02cfd900,0.0,0.0);
          if (-1 < iVar2) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uStack_20 = uStack_20 + 1;
        if (8 < (int)uStack_20) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n");
          param_1->hero_proximity_timer = 0.0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = param_1->hero_proximity_timer + param_2;
    param_1->hero_proximity_timer = param_2;
    if ((param_2 < 0.0) && (param_1->walk_stuck_timer <= (float)_DAT_005b88e6)) {
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (param_1,&param_1->move_away_target,(CPathMap *)0x0,
                         (CVector3f *)&DAT_02cfd900,0.0,0.0);
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
