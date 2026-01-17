// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  CLocation *input_world_point;
  float fVar1;
  float fVar2;
  int iVar3;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar4;
  float *pfVar5;
  float in_stack_00000008;
  int in_stack_fffffee8;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  CMatrix3x3f CStack_104;
  byte auStack_dc [52];
  byte auStack_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  byte auStack_48 [8];
  float local_40;
  float local_3c;
  CVector3f CStack_30;
  float local_24;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  uint uVar6;
  
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    input_world_point = &(this_ptr->base_actor).location;
    this_ptr_00 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    CStack_30.y = (float)this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (this_ptr_00,(CVector3f *)(auStack_a8 + 4),&input_world_point->position);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              ((CVector3f *)(auStack_dc + 0x20),(CVector3f *)(auStack_a8 + 4));
    auStack_48._4_4_ = (input_world_point->position).x - (this_ptr_00->location).position.x;
    local_40 = (this_ptr->base_actor).location.position.y - (this_ptr_00->location).position.y;
    local_3c = (this_ptr->base_actor).location.position.z - (this_ptr_00->location).position.z;
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_8c,(CVector3f *)(auStack_48 + 4));
    local_24 = pCVar4->y;
    iVar3 = (*this_ptr_00->vtable[1].processMeleeHit)(this_ptr_00,in_stack_fffffee8);
    fVar1 = local_24;
    if ((iVar3 != 0) && (fStack_10c < (float)0.78539816337500001)) {
      uStack_20 = (uint)(fStack_9c < 0.0);
      uStack_14 = 0;
      pfVar5 = (float *)((int)local_24 + 0x20);
      do {
        uVar6 = uStack_14;
        if (uStack_20 != 0) {
          uVar6 = uStack_14 ^ 1;
        }
        CStack_78.y = fStack_1c + *(float *)(&DAT_0066e740 + uVar6 * 4);
        CStack_78.x = 0.0;
        CStack_78.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_104,&CStack_78);
        for (fStack_108 = 6.5; (float)2.3999999999999999 < fStack_108;
            fStack_108 = fStack_108 + -1.0f) {
          fStack_a0 = fStack_108;
          auStack_a8._0_4_ = 0.0;
          auStack_a8._4_4_ = 0.0;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_104,&CStack_6c,(CVector3f *)auStack_a8);
          fStack_60 = *pfVar5 + pCVar4->x;
          fStack_5c = *(float *)((int)fVar1 + 0x24) + pCVar4->y;
          fStack_58 = *(float *)((int)fVar1 + 0x28) + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_60) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_60;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_5c;
            *(float *)(this_ptr->cloth_data + 0x338) = fStack_58;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar3) {
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
        uStack_14 = uStack_14 + 1;
      } while ((int)uStack_14 < 6);
    }
    fVar1 = local_24;
    if (((ABS(fStack_98) <= (float)4) && (fStack_10c <= (float)0.52359877558333301)) &&
       (SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c + fStack_98 * fStack_98) <=
        (float)4.5)) {
      fVar2 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar2;
      if (fVar2 < (float)1.75) {
        return 0;
      }
      uVar6 = 0;
      pfVar5 = (float *)((int)local_24 + 0x20);
      do {
        fStack_18 = (float)((int)uVar6 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uVar6 & 1) != 0) {
          fStack_18 = -fStack_18;
        }
        CStack_54.y = fStack_1c + fStack_18;
        CStack_54.x = 0.0;
        CStack_54.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)auStack_dc,&CStack_54);
        for (fStack_110 = 4.5; (float)2.3999999999999999 < fStack_110;
            fStack_110 = fStack_110 + -1.0f) {
          CStack_30.z = fStack_110;
          CStack_30.x = 0.0;
          CStack_30.y = 0.0;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)auStack_dc,(CVector3f *)auStack_48,&CStack_30);
          fStack_90 = *pfVar5 + pCVar4->x;
          local_8c.x = *(float *)((int)fVar1 + 0x24) + pCVar4->y;
          local_8c.y = *(float *)((int)fVar1 + 0x28) + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_90) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_90;
            *(float *)(this_ptr->cloth_data + 0x334) = local_8c.x;
            *(float *)(this_ptr->cloth_data + 0x338) = local_8c.y;
          }
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar3) {
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
        uVar6 = uVar6 + 1;
        if (8 < (int)uVar6) {
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
    fVar1 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar1;
    if (((fVar1 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)1.5)) &&
       (iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr), iVar3 == 0)) {
      return 1;
    }
  }
  this_ptr->cloth_data[0x32c] = '\0';
  this_ptr->cloth_data[0x32d] = '\0';
  this_ptr->cloth_data[0x32e] = '\0';
  this_ptr->cloth_data[0x32f] = '\0';
  return 0;
}
