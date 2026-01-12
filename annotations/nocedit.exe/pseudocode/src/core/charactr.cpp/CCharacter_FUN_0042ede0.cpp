// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  CLocation *pCVar6;
  float in_stack_00000008;
  float fVar7;
  float local_114;
  float fStack_110;
  CMatrix3x3f CStack_10c;
  CMatrix3x3f CStack_e4;
  CVector3f local_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  byte auStack_88 [12];
  float fStack_7c;
  uint uStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  byte local_40 [12];
  uint uStack_34;
  float fStack_30;
  CDemonActor *local_2c;
  uint uStack_28;
  float local_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    pCVar6 = &(this_ptr->base_actor).location;
    pCVar2 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    local_2c = pCVar2;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(pCVar2,&local_a4,&pCVar6->position);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_bc,&local_a4);
    local_40._0_4_ = (pCVar6->position).x - (pCVar2->location).position.x;
    local_40._4_4_ = (this_ptr->base_actor).location.position.y - (pCVar2->location).position.y;
    local_40._8_4_ = (this_ptr->base_actor).location.position.z - (pCVar2->location).position.z;
    pCVar4 = (CVector3f *)local_40;
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)auStack_88,pCVar4);
    local_24 = pCVar3->y;
    iVar1 = (*pCVar2->vtable[1].processMeleeHit)(pCVar2,(int)pCVar4);
    pCVar2 = local_2c;
    if ((iVar1 != 0) && (local_114 < (float)0.78539816337500001)) {
      uStack_28 = (uint)(local_a4.x < 0.0);
      uStack_1c = 0;
      pCVar6 = &local_2c->location;
      do {
        uVar5 = uStack_1c;
        if (uStack_28 != 0) {
          uVar5 = uStack_1c ^ 1;
        }
        fStack_7c = local_24 + *(float *)(&DAT_0066e740 + uVar5 * 4);
        auStack_88._8_4_ = 0.0;
        uStack_78 = 0;
        fStack_14 = fStack_7c;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&CStack_10c,(CVector3f *)(auStack_88 + 8));
        for (fStack_110 = 6.5; (float)2.3999999999999999 < fStack_110;
            fStack_110 = fStack_110 + -1f) {
          CStack_b0.z = fStack_110;
          CStack_b0.x = 0.0;
          CStack_b0.y = 0.0;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_10c,&CStack_74,&CStack_b0);
          fStack_68 = (pCVar6->position).x + pCVar4->x;
          fStack_64 = (pCVar2->location).position.y + pCVar4->y;
          fStack_60 = (pCVar2->location).position.z + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_68) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_68;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_64;
            *(float *)(this_ptr->cloth_data + 0x338) = fStack_60;
          }
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar1) {
            this_ptr->cloth_data[0x33c] = '\0';
            this_ptr->cloth_data[0x33d] = '\0';
            this_ptr->cloth_data[0x33e] = '\0';
            this_ptr->cloth_data[0x33f] = '\0';
            this_ptr->cloth_data[0x32c] = '\0';
            this_ptr->cloth_data[0x32d] = '\0';
            this_ptr->cloth_data[0x32e] = -0x80;
            this_ptr->cloth_data[0x32f] = -0x40;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    pCVar2 = local_2c;
    if (((ABS(local_a4.y) <= (float)4) && (local_114 <= (float)0.52359877558333301)) &&
       (SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y) <=
        (float)4.5)) {
      fVar7 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar7;
      if (fVar7 < (float)1.75) {
        return 0;
      }
      uStack_18 = 0;
      pCVar6 = &local_2c->location;
      do {
        fStack_20 = (float)((int)uStack_18 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uStack_18 & 1) != 0) {
          fStack_20 = -fStack_20;
        }
        CStack_5c.y = local_24 + fStack_20;
        CStack_5c.x = 0.0;
        CStack_5c.z = 0.0;
        fStack_14 = CStack_5c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_e4,&CStack_5c);
        for (fVar7 = 4.5; (float)2.3999999999999999 < fVar7; fVar7 = fVar7 + -1f) {
          local_40._8_4_ = 0.0;
          uStack_34 = 0;
          fStack_30 = fVar7;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e4,&CStack_50,(CVector3f *)(local_40 + 8));
          fStack_98 = (pCVar6->position).x + pCVar4->x;
          fStack_94 = (pCVar2->location).position.y + pCVar4->y;
          fStack_90 = (pCVar2->location).position.z + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_98) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_98;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_94;
            *(float *)(this_ptr->cloth_data + 0x338) = fStack_90;
          }
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar1) {
            this_ptr->cloth_data[0x33c] = '\0';
            this_ptr->cloth_data[0x33d] = '\0';
            this_ptr->cloth_data[0x33e] = '\0';
            this_ptr->cloth_data[0x33f] = '\0';
            this_ptr->cloth_data[0x32c] = '\0';
            this_ptr->cloth_data[0x32d] = '\0';
            this_ptr->cloth_data[0x32e] = -0x60;
            this_ptr->cloth_data[0x32f] = -0x40;
            return 1;
          }
        }
        uStack_18 = uStack_18 + 1;
        if (8 < (int)uStack_18) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",this_ptr);
          this_ptr->cloth_data[0x32c] = '\0';
          this_ptr->cloth_data[0x32d] = '\0';
          this_ptr->cloth_data[0x32e] = '\0';
          this_ptr->cloth_data[0x32f] = '\0';
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar7 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar7;
    if (((fVar7 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)1.5)) &&
       (iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr), iVar1 == 0)) {
      return 1;
    }
  }
  this_ptr->cloth_data[0x32c] = '\0';
  this_ptr->cloth_data[0x32d] = '\0';
  this_ptr->cloth_data[0x32e] = '\0';
  this_ptr->cloth_data[0x32f] = '\0';
  return 0;
}
