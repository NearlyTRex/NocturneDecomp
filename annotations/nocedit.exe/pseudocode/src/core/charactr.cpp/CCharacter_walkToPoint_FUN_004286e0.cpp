// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// Address: 004286e0
// Address Range: [[004286e0, 00428d7c]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  CVector3f *in_stack_00000008;
  CPathMap *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float local_f8;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f local_b8;
  CVector3f CStack_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  float local_1c;
  float local_18;
  float fStack_14;
  
  fVar6 = *(float *)(this_ptr->field2_0x240c + 0x28);
  local_18 = *(float *)(this_ptr->field2_0x240c + 0x2c);
  fVar2 = SQRT(in_stack_00000010->x * in_stack_00000010->x +
               in_stack_00000010->z * in_stack_00000010->z);
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     (&CStack_ac,in_stack_00000010);
  fVar7 = pCVar4->y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,&local_b8,in_stack_00000008);
  fVar3 = SQRT(local_b8.x * local_b8.x + local_b8.z * local_b8.z);
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_d0,&local_b8);
  local_1c = pCVar4->y;
  local_48 = 0;
  local_f8 = 0.0;
  if (0.0 < SQRT(in_stack_00000010->z * in_stack_00000010->z +
                 in_stack_00000010->x * in_stack_00000010->x +
                 in_stack_00000010->y * in_stack_00000010->y)) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c - fVar7);
    local_f8 = ABS(fStack_14);
  }
  if (((ABS(fVar3 - fVar2) < in_stack_00000014 + (float)0.01) &&
      (local_f8 < in_stack_00000018 + (float)0.01)) &&
     (ABS(local_b8.y) < (float)5)) {
    local_48 = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  if ((fVar2 * (float)1.5 + (float)0.5 +
       ABS(fVar7) * (float)0.31830988619288902 * (float)2 <= fVar3) ||
     (1.0 < ABS(local_b8.y))) {
    if (in_stack_0000000c == (CPathMap *)0x0) {
      in_stack_0000000c = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (in_stack_0000000c,&(this_ptr->base_actor).location.position,&local_70,
                       (this_ptr->base_actor).field7_0x6c);
    if (iVar5 == 0) {
      if (local_48 != 0) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    local_50 = -fVar6;
    local_4c = fVar3 - fVar2;
    local_40 = local_50;
    if ((local_50 <= local_4c) && (local_40 = local_4c, fVar6 < local_4c)) {
      local_40 = fVar6;
    }
    *(float *)(this_ptr->field2_0x240c + 0x18) =
         *(float *)(this_ptr->field2_0x240c + 0x18) + local_40;
    fStack_14 = local_70.y - (this_ptr->base_actor).orient.bank;
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_14);
    fVar6 = -local_18;
    if ((fVar6 <= fVar7) && (fVar6 = fVar7, local_18 < fVar7)) {
      fVar6 = local_18;
    }
    *(float *)(this_ptr->field2_0x240c + 0xc) = *(float *)(this_ptr->field2_0x240c + 0xc) + fVar6;
  }
  else {
    if (fVar6 * (float)4 + fVar2 <= fVar3) {
      local_60 = -fVar6;
      local_38 = fVar3 - fVar2;
      local_2c = local_60;
      if ((local_60 <= local_38) && (local_2c = local_38, fVar6 < local_38)) {
        local_2c = fVar6;
      }
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_2c;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,&local_88,(CVector3f *)(this_ptr->field2_0x240c + 0x10));
      pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base_actor,&CStack_f4,in_stack_00000010);
      local_a0 = in_stack_00000008->x - pCVar4->x;
      local_9c = in_stack_00000008->y - pCVar4->y;
      local_94.x = local_a0 - local_88.x;
      local_98 = in_stack_00000008->z - pCVar4->z;
      local_94.y = local_9c - local_88.y;
      local_94.z = local_98 - local_88.z;
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_e8,&local_94);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar4->y - (this_ptr->base_actor).orient.bank);
      fVar6 = -local_18;
      if ((-local_18 <= fVar7) && (fVar6 = fVar7, local_18 < fVar7)) {
        fVar6 = local_18;
      }
    }
    else {
      local_dc = local_b8.x - in_stack_00000010->x;
      local_d4 = local_b8.z - in_stack_00000010->z;
      local_5c = SQRT(local_d4 * local_d4 + local_dc * local_dc);
      local_d8 = 0.0;
      if (fVar6 < local_5c) {
        local_44 = fVar6 / local_5c;
        local_dc = local_dc * local_44;
        local_d8 = local_44 * 0.0;
        local_d4 = local_d4 * local_44;
      }
      pcVar1 = this_ptr->field2_0x240c + 0x10;
      *(float *)pcVar1 = *(float *)pcVar1 + local_dc;
      *(float *)(this_ptr->field2_0x240c + 0x14) =
           *(float *)(this_ptr->field2_0x240c + 0x14) + local_d8;
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_d4;
      local_7c.x = local_b8.x - *(float *)pcVar1;
      local_7c.y = local_b8.y - *(float *)(this_ptr->field2_0x240c + 0x14);
      local_7c.z = local_b8.z - *(float *)(this_ptr->field2_0x240c + 0x18);
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_c4,&local_7c);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y - fVar7);
      fVar6 = -local_18;
      if ((fVar6 <= fVar7) && (fVar6 = fVar7, local_18 < fVar7)) {
        fVar6 = local_18;
      }
    }
    *(float *)(this_ptr->field2_0x240c + 0xc) = fVar6;
  }
  if (local_48 == 0) {
    return 0;
  }
  return 1;
}
