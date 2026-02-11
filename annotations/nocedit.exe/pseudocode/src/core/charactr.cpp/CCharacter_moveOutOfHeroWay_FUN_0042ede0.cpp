// Name: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter *this_ptr,float delta_time)

{
  CLocation *location;
  float fVar1;
  int iVar2;
  CEnemy *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  uint uVar6;
  float *pfVar7;
  CEnemy *local_114;
  float fStack_110;
  float fStack_10c;
  CMatrix3x3f CStack_108;
  CMatrix3x3f CStack_e0;
  CVector3f local_bc;
  byte auStack_ac [12];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  byte auStack_94 [24];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  byte auStack_4c [12];
  float local_40;
  float local_3c;
  CVector3f CStack_34;
  int iStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (0.0 <= *(float *)this_ptr->field53_0x2dc4) {
    location = &(this_ptr->base).location;
    this_ptr_00 = (CEnemy *)core_hero_cpp_closestHeroToPoint_FUN_004f2170(location);
    CStack_34.z = (float)this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)this_ptr_00,(CVector3f *)(auStack_ac + 8),&location->position);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              (&local_bc,(CVector3f *)(auStack_ac + 8));
    auStack_4c._8_4_ = (location->position).x - (this_ptr_00->base).base.location.position.x;
    local_40 = (this_ptr->base).location.position.y - (this_ptr_00->base).base.location.position.y;
    local_3c = (this_ptr->base).location.position.z - (this_ptr_00->base).base.location.position.z;
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_94 + 8),(CVector3f *)(auStack_4c + 8));
    local_24 = pCVar3->y;
    iVar4 = (*(((this_ptr_00->base).base.vtable._ue)->_ue).randomize)(this_ptr_00);
    iVar2 = iStack_28;
    if ((iVar4 != 0) && (fStack_110 < (float)0.78539816337500001)) {
      local_24 = (float)(uint)(fStack_a0 < 0.0);
      pCVar3 = (CVector3f *)(this_ptr->field53_0x2dc4 + 4);
      uStack_18 = 0;
      pfVar7 = (float *)(iStack_28 + 0x20);
      do {
        uVar6 = uStack_18;
        if (local_24 != 0.0) {
          uVar6 = uStack_18 ^ 1;
        }
        CStack_7c.y = fStack_20 + *(float *)(&DAT_0066e740 + uVar6 * 4);
        CStack_7c.x = 0.0;
        CStack_7c.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,&CStack_7c);
        for (fStack_10c = 6.5; (float)2.3999999999999999 < fStack_10c;
            fStack_10c = fStack_10c + -1.0f) {
          auStack_ac._8_4_ = fStack_10c;
          auStack_ac._0_4_ = 0.0;
          auStack_ac._4_4_ = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_108,&CStack_70,(CVector3f *)auStack_ac);
          CStack_64.x = *pfVar7 + pCVar5->x;
          CStack_64.y = *(float *)(iVar2 + 0x24) + pCVar5->y;
          CStack_64.z = *(float *)(iVar2 + 0x28) + pCVar5->z;
          if (pCVar3 != &CStack_64) {
            pCVar3->x = CStack_64.x;
            *(float *)(this_ptr->field53_0x2dc4 + 8) = CStack_64.y;
            *(float *)(this_ptr->field53_0x2dc4 + 0xc) = CStack_64.z;
          }
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (this_ptr,pCVar3,(CPathMap *)0x0,&g_ZeroVector,0.0,0.0);
          if (-1 < iVar4) {
            this_ptr->field53_0x2dc4[0x10] = '\0';
            this_ptr->field53_0x2dc4[0x11] = '\0';
            this_ptr->field53_0x2dc4[0x12] = '\0';
            this_ptr->field53_0x2dc4[0x13] = '\0';
            this_ptr->field53_0x2dc4[0] = '\0';
            this_ptr->field53_0x2dc4[1] = '\0';
            this_ptr->field53_0x2dc4[2] = -0x80;
            this_ptr->field53_0x2dc4[3] = -0x40;
            return 2;
          }
        }
        uStack_18 = uStack_18 + 1;
      } while ((int)uStack_18 < 6);
    }
    if (((ABS(fStack_9c) <= (float)4) && (fStack_110 <= (float)0.52359877558333301)) &&
       (SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c) <=
        (float)4.5)) {
      fVar1 = *(float *)this_ptr->field53_0x2dc4 + delta_time;
      *(float *)this_ptr->field53_0x2dc4 = fVar1;
      if (fVar1 < (float)1.75) {
        return 0;
      }
      pCVar3 = (CVector3f *)(this_ptr->field53_0x2dc4 + 4);
      uStack_14 = 0;
      do {
        fStack_1c = (float)((int)uStack_14 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uStack_14 & 1) != 0) {
          fStack_1c = -fStack_1c;
        }
        CStack_58.y = fStack_20 + fStack_1c;
        CStack_58.x = 0.0;
        CStack_58.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_e0,&CStack_58);
        for (local_114 = (CEnemy *)0x40900000; (float)2.3999999999999999 < (float)local_114;
            local_114 = (CEnemy *)((float)local_114 + -1.0f)) {
          CStack_34.z = (float)local_114;
          CStack_34.x = 0.0;
          CStack_34.y = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e0,(CVector3f *)auStack_4c,&CStack_34);
          auStack_94._0_4_ = *(float *)(iStack_28 + 0x20) + pCVar5->x;
          auStack_94._4_4_ = *(float *)(iStack_28 + 0x24) + pCVar5->y;
          auStack_94._8_4_ = *(float *)(iStack_28 + 0x28) + pCVar5->z;
          if (pCVar3 != (CVector3f *)auStack_94) {
            pCVar3->x = (float)auStack_94._0_4_;
            *(uint *)(this_ptr->field53_0x2dc4 + 8) = auStack_94._4_4_;
            *(uint *)(this_ptr->field53_0x2dc4 + 0xc) = auStack_94._8_4_;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (this_ptr,pCVar3,(CPathMap *)0x0,&g_ZeroVector,0.0,0.0);
          if (-1 < iVar2) {
            this_ptr->field53_0x2dc4[0x10] = '\0';
            this_ptr->field53_0x2dc4[0x11] = '\0';
            this_ptr->field53_0x2dc4[0x12] = '\0';
            this_ptr->field53_0x2dc4[0x13] = '\0';
            this_ptr->field53_0x2dc4[0] = '\0';
            this_ptr->field53_0x2dc4[1] = '\0';
            this_ptr->field53_0x2dc4[2] = -0x60;
            this_ptr->field53_0x2dc4[3] = -0x40;
            return 1;
          }
        }
        uStack_14 = uStack_14 + 1;
        if (8 < (int)uStack_14) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",this_ptr);
          this_ptr->field53_0x2dc4[0] = '\0';
          this_ptr->field53_0x2dc4[1] = '\0';
          this_ptr->field53_0x2dc4[2] = '\0';
          this_ptr->field53_0x2dc4[3] = '\0';
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar1 = *(float *)this_ptr->field53_0x2dc4 + delta_time;
    *(float *)this_ptr->field53_0x2dc4 = fVar1;
    if (((fVar1 < 0.0) && (*(float *)(this_ptr->field53_0x2dc4 + 0x10) <= (float)1.5))
       && (iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             (this_ptr,(CVector3f *)(this_ptr->field53_0x2dc4 + 4),(CPathMap *)0x0,
                              &g_ZeroVector,0.0,0.0), iVar2 == 0)) {
      return 1;
    }
  }
  this_ptr->field53_0x2dc4[0] = '\0';
  this_ptr->field53_0x2dc4[1] = '\0';
  this_ptr->field53_0x2dc4[2] = '\0';
  this_ptr->field53_0x2dc4[3] = '\0';
  return 0;
}
