// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  uint uVar5;
  CLocation *pCVar6;
  float in_stack_00000008;
  float fStack_118;
  float fStack_110;
  CMatrix3x3f CStack_10c;
  CMatrix3x3f CStack_e4;
  CVector3f local_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  CDemonActor *local_2c;
  uint uStack_28;
  float local_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    pCVar6 = &(this_ptr->base).location;
    pCVar3 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    local_2c = pCVar3;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(pCVar3,&local_a4,&pCVar6->position);
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_bc,&local_a4);
    fVar1 = pCVar4->y;
    local_44.x = (pCVar6->position).x - (pCVar3->location).position.x;
    local_44.y = (this_ptr->base).location.position.y - (pCVar3->location).position.y;
    local_44.z = (this_ptr->base).location.position.z - (pCVar3->location).position.z;
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_8c,&local_44);
    local_24 = pCVar4->y;
    iVar2 = (*(((pCVar3->vtable)._ue)->_ue).enemyfunc3)();
    pCVar3 = local_2c;
    if ((iVar2 != 0) && (ABS(fVar1) < (float)0.78539816337500001)) {
      uStack_28 = (uint)(local_a4.x < 0.0);
      uStack_1c = 0;
      pCVar6 = &local_2c->location;
      do {
        uVar5 = uStack_1c;
        if (uStack_28 != 0) {
          uVar5 = uStack_1c ^ 1;
        }
        CStack_80.y = local_24 + *(float *)(&DAT_0066e740 + uVar5 * 4);
        CStack_80.x = 0.0;
        CStack_80.z = 0.0;
        fStack_14 = CStack_80.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_80);
        for (fStack_110 = 6.5; (float)2.3999999999999999 < fStack_110;
            fStack_110 = fStack_110 + -1.0f) {
          CStack_b0.z = fStack_110;
          CStack_b0.x = 0.0;
          CStack_b0.y = 0.0;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_10c,&CStack_74,&CStack_b0);
          fStack_68 = (pCVar6->position).x + pCVar4->x;
          fStack_64 = (pCVar3->location).position.y + pCVar4->y;
          fStack_60 = (pCVar3->location).position.z + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_68) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_68;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_64;
            *(float *)(this_ptr->cloth_data + 0x338) = fStack_60;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar2) {
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
    pCVar3 = local_2c;
    if (((ABS(local_a4.y) <= (float)4) && (ABS(fVar1) <= (float)0.52359877558333301)) &&
       (SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y) <=
        (float)4.5)) {
      fVar1 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar1;
      if (fVar1 < (float)1.75) {
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
        for (fStack_118 = 4.5; (float)2.3999999999999999 < fStack_118;
            fStack_118 = fStack_118 + -1.0f) {
          CStack_38.z = fStack_118;
          CStack_38.x = 0.0;
          CStack_38.y = 0.0;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e4,&CStack_50,&CStack_38);
          fStack_98 = (pCVar6->position).x + pCVar4->x;
          fStack_94 = (pCVar3->location).position.y + pCVar4->y;
          fStack_90 = (pCVar3->location).position.z + pCVar4->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &fStack_98) {
            *(float *)(this_ptr->cloth_data + 0x330) = fStack_98;
            *(float *)(this_ptr->cloth_data + 0x334) = fStack_94;
            *(float *)(this_ptr->cloth_data + 0x338) = fStack_90;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar2) {
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
    fVar1 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar1;
    if (((fVar1 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)1.5)) &&
       (iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr), iVar2 == 0)) {
      return 1;
    }
  }
  this_ptr->cloth_data[0x32c] = '\0';
  this_ptr->cloth_data[0x32d] = '\0';
  this_ptr->cloth_data[0x32e] = '\0';
  this_ptr->cloth_data[0x32f] = '\0';
  return 0;
}
