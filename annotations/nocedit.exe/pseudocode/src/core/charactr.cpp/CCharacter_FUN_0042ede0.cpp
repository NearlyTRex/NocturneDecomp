// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  CLocation *input_world_point;
  int iVar1;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  float *pfVar6;
  float in_stack_00000008;
  float fVar7;
  float fVar8;
  CMatrix3x3f CStack_e4;
  byte auStack_b4 [8];
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  byte auStack_a0 [12];
  float fStack_94;
  float fStack_90;
  float local_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f aCStack_50 [2];
  CVector3f CStack_38;
  int local_2c;
  CDemonActor *pCStack_28;
  float local_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    input_world_point = &(this_ptr->base_actor).location;
    this_ptr_00 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    pCStack_28 = this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (this_ptr_00,(CVector3f *)auStack_a0,&input_world_point->position);
    pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)auStack_b4,(CVector3f *)(auStack_a0 + 4));
    fVar8 = ABS(pCVar2->y);
    CStack_38.x = (input_world_point->position).x - (this_ptr_00->location).position.x;
    CStack_38.y = (this_ptr->base_actor).location.position.y - (this_ptr_00->location).position.y;
    CStack_38.z = (this_ptr->base_actor).location.position.z - (this_ptr_00->location).position.z;
    pCVar2 = &CStack_80;
    fVar7 = 6.146836e-39;
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(pCVar2,&CStack_38);
    fStack_14 = pCVar3->y;
    iVar4 = (*this_ptr_00->vtable[1].processMeleeHit)(this_ptr_00,(int)fVar8);
    iVar1 = local_2c;
    if ((iVar4 != 0) && ((float)pCVar2 < (float)0.78539816337500001)) {
      pCStack_28 = (CDemonActor *)(uint)(local_a4 < 0.0);
      uStack_1c = 0;
      pfVar6 = (float *)(local_2c + 0x20);
      do {
        uVar5 = uStack_1c;
        if (pCStack_28 != (CDemonActor *)0x0) {
          uVar5 = uStack_1c ^ 1;
        }
        CStack_80.y = local_24 + *(float *)(&DAT_0066e740 + uVar5 * 4);
        CStack_80.x = 0.0;
        CStack_80.z = 0.0;
        fStack_14 = CStack_80.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)&stack0xfffffef4,&CStack_80);
        fVar8 = 6.5;
        while ((float)2.3999999999999999 < fVar8) {
          auStack_b4._4_4_ = 0.0;
          fStack_ac = 0.0;
          fStack_a8 = fVar8;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)&stack0xfffffef4,&CStack_74,
                              (CVector3f *)(auStack_b4 + 4));
          fStack_64 = *pfVar6 + pCVar3->x;
          fStack_60 = *(float *)(iVar1 + 0x24) + pCVar3->y;
          CStack_5c.x = *(float *)(iVar1 + 0x28) + pCVar3->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_64) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_64;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_60;
            *(float *)(this_ptr->cloth_data + 0x338) = CStack_5c.x;
          }
          fVar7 = 0.0;
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar4) {
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
    if (((ABS((float)auStack_a0._0_4_) <= (float)4) &&
        ((float)pCVar2 <= (float)0.52359877558333301)) &&
       (SQRT((float)auStack_a0._4_4_ * (float)auStack_a0._4_4_ +
             local_a4 * local_a4 + (float)auStack_a0._0_4_ * (float)auStack_a0._0_4_) <=
        (float)4.5)) {
      fVar8 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar8;
      if (fVar8 < (float)1.75) {
        return 0;
      }
      uStack_18 = 0;
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
        for (; (float)2.3999999999999999 < fVar7; fVar7 = fVar7 + -1f) {
          CStack_38.x = 0.0;
          CStack_38.y = 0.0;
          CStack_38.z = fVar7;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e4,aCStack_50,&CStack_38);
          fStack_94 = *(float *)(local_2c + 0x20) + pCVar2->x;
          fStack_90 = *(float *)(local_2c + 0x24) + pCVar2->y;
          local_8c = *(float *)(local_2c + 0x28) + pCVar2->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_94) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_94;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_90;
            *(float *)(this_ptr->cloth_data + 0x338) = local_8c;
          }
          fVar7 = 0.0;
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
    fVar8 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar8;
    if (((fVar8 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)1.5)) &&
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
