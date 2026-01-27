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
  float local_fc;
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar6 = *(float *)(this_ptr->unk1 + 0x28);
  local_1c = *(float *)(this_ptr->unk1 + 0x2c);
  fVar2 = SQRT(in_stack_00000010->x * in_stack_00000010->x +
               in_stack_00000010->z * in_stack_00000010->z);
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     (&local_b0,in_stack_00000010);
  fVar7 = pCVar4->y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base,&local_bc,in_stack_00000008);
  fVar3 = SQRT(local_bc.x * local_bc.x + local_bc.z * local_bc.z);
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d4,&local_bc);
  local_20 = pCVar4->y;
  local_4c = 0;
  local_fc = 0.0;
  if (0.0 < SQRT(in_stack_00000010->z * in_stack_00000010->z +
                 in_stack_00000010->x * in_stack_00000010->x +
                 in_stack_00000010->y * in_stack_00000010->y)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_20 - fVar7);
    local_fc = ABS(local_18);
  }
  if (((ABS(fVar3 - fVar2) < in_stack_00000014 + (float)0.01) &&
      (local_fc < in_stack_00000018 + (float)0.01)) &&
     (ABS(local_bc.y) < (float)5)) {
    local_4c = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  if ((fVar2 * (float)1.5 + (float)0.5 +
       ABS(fVar7) * (float)0.31830988619288902 * (float)2 <= fVar3) ||
     (1.0 < ABS(local_bc.y))) {
    if (in_stack_0000000c == (CPathMap *)0x0) {
      in_stack_0000000c = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (in_stack_0000000c,&(this_ptr->base).location.position,&local_74,
                       (this_ptr->base).unk1);
    if (iVar5 == 0) {
      if (local_4c != 0) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    local_54 = -fVar6;
    local_50 = fVar3 - fVar2;
    local_44 = local_54;
    if ((local_54 <= local_50) && (local_44 = local_50, fVar6 < local_50)) {
      local_44 = fVar6;
    }
    *(float *)(this_ptr->unk1 + 0x18) = *(float *)(this_ptr->unk1 + 0x18) + local_44;
    local_18 = local_74.y - (this_ptr->base).orient.bank;
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_18);
    fVar6 = -local_1c;
    if ((fVar6 <= fVar7) && (fVar6 = fVar7, local_1c < fVar7)) {
      fVar6 = local_1c;
    }
    *(float *)(this_ptr->unk1 + 0xc) = *(float *)(this_ptr->unk1 + 0xc) + fVar6;
  }
  else {
    if (fVar6 * (float)4 + fVar2 <= fVar3) {
      local_64 = -fVar6;
      local_3c = fVar3 - fVar2;
      local_30 = local_64;
      if ((local_64 <= local_3c) && (local_30 = local_3c, fVar6 < local_3c)) {
        local_30 = fVar6;
      }
      *(float *)(this_ptr->unk1 + 0x18) = *(float *)(this_ptr->unk1 + 0x18) + local_30;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&local_8c,(CVector3f *)(this_ptr->unk1 + 0x10));
      pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_f8,in_stack_00000010);
      local_a4 = in_stack_00000008->x - pCVar4->x;
      local_a0 = in_stack_00000008->y - pCVar4->y;
      local_98.x = local_a4 - local_8c.x;
      local_9c = in_stack_00000008->z - pCVar4->z;
      local_98.y = local_a0 - local_8c.y;
      local_98.z = local_9c - local_8c.z;
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_ec,&local_98);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar4->y - (this_ptr->base).orient.bank);
      fVar6 = -local_1c;
      if ((-local_1c <= fVar7) && (fVar6 = fVar7, local_1c < fVar7)) {
        fVar6 = local_1c;
      }
    }
    else {
      local_e0 = local_bc.x - in_stack_00000010->x;
      local_d8 = local_bc.z - in_stack_00000010->z;
      local_60 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
      local_dc = 0.0;
      if (fVar6 < local_60) {
        local_48 = fVar6 / local_60;
        local_e0 = local_e0 * local_48;
        local_dc = local_48 * 0.0;
        local_d8 = local_d8 * local_48;
      }
      pcVar1 = this_ptr->unk1 + 0x10;
      *(float *)pcVar1 = *(float *)pcVar1 + local_e0;
      *(float *)(this_ptr->unk1 + 0x14) = *(float *)(this_ptr->unk1 + 0x14) + local_dc;
      *(float *)(this_ptr->unk1 + 0x18) = *(float *)(this_ptr->unk1 + 0x18) + local_d8;
      local_80.x = local_bc.x - *(float *)pcVar1;
      local_80.y = local_bc.y - *(float *)(this_ptr->unk1 + 0x14);
      local_80.z = local_bc.z - *(float *)(this_ptr->unk1 + 0x18);
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_c8,&local_80);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y - fVar7);
      fVar6 = -local_1c;
      if ((fVar6 <= fVar7) && (fVar6 = fVar7, local_1c < fVar7)) {
        fVar6 = local_1c;
      }
    }
    *(float *)(this_ptr->unk1 + 0xc) = fVar6;
  }
  if (local_4c == 0) {
    return 0;
  }
  return 1;
}
