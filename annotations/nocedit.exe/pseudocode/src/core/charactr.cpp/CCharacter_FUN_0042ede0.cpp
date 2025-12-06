// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  CLocation *input_world_point;
  bool bVar1;
  char *pcVar2;
  CCharacter *pCVar3;
  int iVar4;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  float unaff_retaddr;
  float in_stack_00000008;
  uint uStack0000000c;
  float fStack00000010;
  float fStack_f4;
  float fStack_f0;
  CMatrix3x3f CStack_e8;
  byte auStack_c0 [36];
  CVector3f CStack_9c;
  CVector3f local_8c;
  CVector3f CStack_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float local_40;
  float local_3c;
  CVector3f CStack_38;
  CVector3f local_2c [2];
  float fStack_14;
  
  pCVar3 = this_ptr;
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    input_world_point = &(this_ptr->base_actor).location;
    this_ptr_00 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    local_2c[0].y = (float)this_ptr_00;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (this_ptr_00,(CVector3f *)(auStack_c0 + 0x20),&input_world_point->position);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_c0 + 0xc),&CStack_9c);
    fVar6 = ABS(pCVar5->y);
    CStack_38.x = (input_world_point->position).x - (this_ptr_00->location).position.x;
    CStack_38.y = (this_ptr->base_actor).location.position.y - (this_ptr_00->location).position.y;
    CStack_38.z = (this_ptr->base_actor).location.position.z - (this_ptr_00->location).position.z;
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_80,&CStack_38);
    fStack_14 = pCVar5->y;
    iVar4 = (*this_ptr_00->vtable[1].processMeleeHit)(this_ptr_00,(int)fVar6);
    if ((iVar4 != 0) && (fStack_f0 < (float)0.78539816337500001)) {
      bVar1 = CStack_80.x < 0.0;
      in_stack_00000008 = 0.0;
      do {
        fVar6 = in_stack_00000008;
        if (bVar1) {
          fVar6 = (float)((uint)in_stack_00000008 ^ 1);
        }
        fStack00000010 = unaff_retaddr + *(float *)(&DAT_0066e740 + (int)fVar6 * 4);
        CStack_5c.x = 0.0;
        CStack_5c.z = 0.0;
        CStack_5c.y = fStack00000010;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_e8,&CStack_5c);
        while ((float)2.3999999999999999 < 6.5) {
          local_8c.z = 6.5;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e8,&CStack_50,&local_8c);
          local_40 = *(float *)(unaff_ESI + 0x20) + pCVar5->x;
          local_3c = *(float *)(unaff_ESI + 0x24) + pCVar5->y;
          CStack_38.x = *(float *)(unaff_ESI + 0x28) + pCVar5->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &local_40) {
            *(float *)(this_ptr->cloth_data + 0x330) = local_40;
            *(float *)(this_ptr->cloth_data + 0x334) = local_3c;
            *(float *)(this_ptr->cloth_data + 0x338) = CStack_38.x;
          }
          fStack_f4 = 0.0;
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar4) {
            pCVar3->cloth_data[0x33c] = '\0';
            pCVar3->cloth_data[0x33d] = '\0';
            pCVar3->cloth_data[0x33e] = '\0';
            pCVar3->cloth_data[0x33f] = '\0';
            pCVar3->cloth_data[0x32c] = '\0';
            pCVar3->cloth_data[0x32d] = '\0';
            pCVar3->cloth_data[0x32e] = -0x80;
            pCVar3->cloth_data[0x32f] = -0x40;
            return 2;
          }
          CStack_e8.m[0].y = CStack_e8.m[0].y + -1f;
        }
        in_stack_00000008 = (float)((int)in_stack_00000008 + 1);
      } while ((int)in_stack_00000008 < 6);
    }
    if (((ABS(CStack_80.y) <= (float)4) && (fStack_f0 <= (float)0.52359877558333301)) &&
       (SQRT(CStack_80.z * CStack_80.z + CStack_80.x * CStack_80.x + CStack_80.y * CStack_80.y) <=
        (float)4.5)) {
      fVar6 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar6;
      if (fVar6 < (float)1.75) {
        return 0;
      }
      pcVar2 = this_ptr->cloth_data;
      uStack0000000c = 0;
      do {
        this_ptr = (CCharacter *)
                   ((float)((int)uStack0000000c / 2) * (float)1.57079632675 *
                   (float)0.25);
        if ((uStack0000000c & 1) != 0) {
          this_ptr = (CCharacter *)-(float)this_ptr;
        }
        fStack00000010 = unaff_retaddr + (float)this_ptr;
        CStack_38.x = 0.0;
        CStack_38.z = 0.0;
        CStack_38.y = fStack00000010;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)auStack_c0,&CStack_38);
        while ((float)2.3999999999999999 < fStack_f4) {
          fStack_14 = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)auStack_c0,local_2c,(CVector3f *)&fStack_14);
          fStack_70 = *(float *)(unaff_ESI + 0x20) + pCVar5->x;
          fStack_6c = *(float *)(unaff_ESI + 0x24) + pCVar5->y;
          fStack_68 = *(float *)(unaff_ESI + 0x28) + pCVar5->z;
          if ((float *)(pcVar2 + 0x330) != &fStack_70) {
            *(float *)(pcVar2 + 0x330) = fStack_70;
            *(float *)(pCVar3->cloth_data + 0x334) = fStack_6c;
            *(float *)(pCVar3->cloth_data + 0x338) = fStack_68;
          }
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(pCVar3);
          if (-1 < iVar4) {
            pCVar3->cloth_data[0x33c] = '\0';
            pCVar3->cloth_data[0x33d] = '\0';
            pCVar3->cloth_data[0x33e] = '\0';
            pCVar3->cloth_data[0x33f] = '\0';
            pCVar3->cloth_data[0x32c] = '\0';
            pCVar3->cloth_data[0x32d] = '\0';
            pCVar3->cloth_data[0x32e] = -0x60;
            pCVar3->cloth_data[0x32f] = -0x40;
            return 1;
          }
          fStack_f4 = -1f + 0.0;
        }
        uStack0000000c = uStack0000000c + 1;
        if (8 < (int)uStack0000000c) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",pCVar3);
          pCVar3->cloth_data[0x32c] = '\0';
          pCVar3->cloth_data[0x32d] = '\0';
          pCVar3->cloth_data[0x32e] = '\0';
          pCVar3->cloth_data[0x32f] = '\0';
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar6 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar6;
    if (((fVar6 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)1.5)) &&
       (iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr), iVar4 == 0)) {
      return 1;
    }
  }
  pCVar3->cloth_data[0x32c] = '\0';
  pCVar3->cloth_data[0x32d] = '\0';
  pCVar3->cloth_data[0x32e] = '\0';
  pCVar3->cloth_data[0x32f] = '\0';
  return 0;
}
