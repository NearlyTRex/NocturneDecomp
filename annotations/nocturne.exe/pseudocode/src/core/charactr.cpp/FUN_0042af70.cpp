// Name: core_charactr.cpp_FUN_0042af70
// Address: 0042af70
// Address Range: [[0042af70, 0042b48b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042af70(CCharacter *param_1,float param_2)

#include "nocturne.h"

uint core_charactr_cpp_FUN_0042af70(CCharacter *param_1,float param_2)

{
  CLocation *location;
  CVector3f *pCVar1;
  int iVar2;
  CHero *this_ptr;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  int in_stack_fffffee8;
  CMatrix3x4f *out_matrix;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  CMatrix3x3f CStack_100;
  CMatrix3x3f CStack_d8;
  CVector3f local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c [2];
  CVector3f CStack_74;
  byte auStack_68 [12];
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float local_44;
  float local_40;
  float local_3c;
  CHero *local_2c;
  uint uStack_28;
  float local_24;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uVar7;
  
  if (0.0 <= param_1->hero_proximity_timer) {
    location = &(param_1->base).location;
    this_ptr = core_hero_cpp_closestHeroToPoint_FUN_004b4500(location);
    local_2c = this_ptr;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              ((CDemonActor *)this_ptr,&local_a4,&location->position);
    iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                      (&CStack_d8.m[2].y,&local_a4);
    out_matrix = (CMatrix3x4f *)ABS(*(float *)(iVar2 + 4));
    local_44 = (location->position).x - (this_ptr->base).base.location.position.x;
    local_40 = (param_1->base).location.position.y - (this_ptr->base).base.location.position.y;
    local_3c = (param_1->base).location.position.z - (this_ptr->base).base.location.position.z;
    iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_8c,&local_44);
    local_24 = *(float *)(iVar2 + 4);
    iVar3 = (*(((this_ptr->base).base.vtable._uc)->_uc).getCarryObjToBodyXForm)
                      (&this_ptr->base,in_stack_fffffee8,out_matrix);
    iVar2 = iStack_20;
    if ((iVar3 != 0) && (fStack_108 < (float)0.78539816337500001)) {
      uStack_1c = (uint)(fStack_98 < 0.0);
      pCVar1 = &param_1->move_away_target;
      uVar7 = 0;
      pfVar6 = (float *)(iStack_20 + 0x20);
      do {
        uVar5 = uVar7;
        if (uStack_1c != 0) {
          uVar5 = uVar7 ^ 1;
        }
        CStack_74.y = fStack_18 + *(float *)(&DAT_005ad1d0 + uVar5 * 4);
        CStack_74.x = 0.0;
        CStack_74.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_100,&CStack_74);
        for (fStack_104 = 6.5; (float)2.3999999999999999 < fStack_104;
            fStack_104 = fStack_104 + -1.0f) {
          local_a4.z = fStack_104;
          local_a4.x = 0.0;
          local_a4.y = 0.0;
          pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (&CStack_100,auStack_68,&local_a4);
          CStack_5c.x = *pfVar6 + *pfVar4;
          CStack_5c.y = *(float *)(iVar2 + 0x24) + pfVar4[1];
          CStack_5c.z = *(float *)(iVar2 + 0x28) + pfVar4[2];
          if (pCVar1 != &CStack_5c) {
            pCVar1->x = CStack_5c.x;
            (param_1->move_away_target).y = CStack_5c.y;
            (param_1->move_away_target).z = CStack_5c.z;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,pCVar1,(CPathMap *)0x0,(CVector3f *)&DAT_02dd1184,0.0,0.0);
          if (-1 < iVar3) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -4.0;
            return 2;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 6);
    }
    if (((ABS(fStack_94) <= (float)4) && (fStack_108 <= (float)0.52359877558333301)) &&
       (SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94) <=
        (float)4.5)) {
      param_2 = param_1->hero_proximity_timer + param_2;
      param_1->hero_proximity_timer = param_2;
      if (param_2 < (float)1.75) {
        return 0;
      }
      pCVar1 = &param_1->move_away_target;
      uVar7 = 0;
      do {
        fStack_14 = (float)((int)uVar7 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uVar7 & 1) != 0) {
          fStack_14 = -fStack_14;
        }
        CStack_50.y = fStack_18 + fStack_14;
        CStack_50.x = 0.0;
        CStack_50.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_d8,&CStack_50);
        for (fStack_10c = 4.5; (float)2.3999999999999999 < fStack_10c;
            fStack_10c = fStack_10c + -1.0f) {
          local_24 = fStack_10c;
          local_2c = (CHero *)0x0;
          uStack_28 = 0;
          pfVar6 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (&CStack_d8,&local_44,&local_2c);
          local_8c[0].x = *(float *)(iStack_20 + 0x20) + *pfVar6;
          local_8c[0].y = *(float *)(iStack_20 + 0x24) + pfVar6[1];
          local_8c[0].z = *(float *)(iStack_20 + 0x28) + pfVar6[2];
          if (pCVar1 != local_8c) {
            pCVar1->x = local_8c[0].x;
            (param_1->move_away_target).y = local_8c[0].y;
            (param_1->move_away_target).z = local_8c[0].z;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,pCVar1,(CPathMap *)0x0,(CVector3f *)&DAT_02dd1184,0.0,0.0);
          if (-1 < iVar2) {
            param_1->walk_stuck_timer = 0.0;
            param_1->hero_proximity_timer = -5.0;
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        if (8 < (int)uVar7) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s was in the way, but couldn't figure out where to move!\n",param_1);
          param_1->hero_proximity_timer = 0.0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = param_1->hero_proximity_timer + param_2;
    param_1->hero_proximity_timer = param_2;
    if (((param_2 < 0.0) && (param_1->walk_stuck_timer <= (float)1.5)) &&
       (iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,&param_1->move_away_target,(CPathMap *)0x0,
                           (CVector3f *)&DAT_02dd1184,0.0,0.0), iVar2 == 0)) {
      return 1;
    }
  }
  param_1->hero_proximity_timer = 0.0;
  return 0;
}
