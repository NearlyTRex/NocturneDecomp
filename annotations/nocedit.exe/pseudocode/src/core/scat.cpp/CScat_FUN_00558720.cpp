// Name: core_scat.cpp_CScat_FUN_00558720
// Address: 00558720
// Address Range: [[00558720, 00558ce0]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_00558720(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_00558720(CScat *this_ptr)

{
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  float fVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  float local_13c;
  CVector3f local_138 [12];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  uint local_1c;
  float local_18;
  
  this_ptr->unk[0x28] = '\0';
  this_ptr->unk[0x29] = '\0';
  this_ptr->unk[0x2a] = '\0';
  this_ptr->unk[0x2b] = '\0';
  if ((in_stack_0000000c == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar3->state_index == 2)
     ) {
    in_stack_0000000c = 1;
  }
  local_13c = *(float *)(this_ptr->unk + 0x18);
  local_2c = *(float *)(this_ptr->unk + 0x1c);
  if (((this_ptr->base).aim_mode != 0) && ((this_ptr->base).control_type != 2)) {
    local_13c = *(float *)((this_ptr->base).unk2 + 8) * (float)3.1415926535000001 *
                (float)2 * in_stack_00000008 + local_13c;
    local_1c = 0x3fc90fdb;
    if (local_13c < -1.570796f) {
      local_13c = -1.5707964;
    }
    if (1.5707964 < local_13c) {
      local_13c = 1.5707964;
    }
    local_2c = 0.0;
    goto LAB_005587bd;
  }
  if ((*(int *)this_ptr->unk == 0) || (in_stack_0000000c != 0)) {
    this_ptr->unk[0x24] = '\0';
    this_ptr->unk[0x25] = '\0';
    this_ptr->unk[0x26] = '\0';
    this_ptr->unk[0x27] = '\0';
  }
  else if ((this_ptr->base).action_bindings.fire_key == 0) {
    local_28 = in_stack_0000000c;
    local_24 = 1e+30;
    iVar4 = 0;
    for (local_20 = in_stack_0000000c; local_20 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_20 = local_20 + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar4);
      local_18 = (float)core_scat_cpp_CScat_FUN_00558cf0(this_ptr);
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = iVar1;
        local_24 = local_18;
      }
      iVar4 = iVar4 + 4;
    }
    *(int *)(this_ptr->unk + 0x24) = local_28;
  }
  if ((this_ptr->base).action_bindings.fire_key != 0) {
    if (*(int *)(this_ptr->unk + 0x24) == 0) {
      this_ptr->unk[0x1c] = '\0';
      this_ptr->unk[0x1d] = '\0';
      this_ptr->unk[0x1e] = '\0';
      this_ptr->unk[0x1f] = '\0';
      *(uint *)(this_ptr->unk + 0x18) = *(uint *)(this_ptr->unk + 0x1c);
      local_13c = *(float *)(this_ptr->unk + 0x18);
      local_2c = local_13c;
    }
    goto LAB_005587bd;
  }
  if (*(int *)(this_ptr->unk + 0x24) == 0) goto LAB_005587bd;
  __arrinit(local_138,10,&g_CVectorTypeInfo);
  iVar4 = (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x24) + 0x154) + 0x4c))();
  if (iVar4 < 1) {
    pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x24) + 0x154) + 0x14))();
    fStack_90 = *pfVar6 + pfVar6[3];
    fStack_8c = pfVar6[1] + pfVar6[4];
    CStack_78.x = fStack_90 * 0.5f;
    fStack_88 = pfVar6[2] + pfVar6[5];
    CStack_78.y = fStack_8c * 0.5f;
    local_138[0].z = fStack_88 * 0.5f;
    CStack_78.z = local_138[0].z;
    fVar7 = CStack_78.x;
    fVar2 = CStack_78.y;
    if (&CStack_60 != &CStack_78) goto LAB_00558aeb;
  }
  else if (&CStack_60 != local_138) {
    CStack_60.x = local_138[0].x;
    CStack_60.y = local_138[0].y;
    fVar7 = CStack_60.x;
    fVar2 = CStack_60.y;
LAB_00558aeb:
    CStack_60.y = fVar2;
    CStack_60.x = fVar7;
    CStack_60.z = local_138[0].z;
  }
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(this_ptr->unk + 0x24),&CStack_6c,&CStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&CStack_9c,pCVar5);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&CStack_a8,INT_03106174);
  CStack_84.x = CStack_9c.x - pCVar5->x;
  CStack_84.y = CStack_9c.y - pCVar5->y;
  CStack_84.z = CStack_9c.z - pCVar5->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_54,&CStack_84);
  local_13c = CStack_54.x;
  local_2c = CStack_54.y;
LAB_005587bd:
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_2c - *(float *)(this_ptr->unk + 0x1c));
  local_18 = local_38;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_13c - *(float *)(this_ptr->unk + 0x18));
  local_30 = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
  local_3c = -local_30;
  if (local_38 < local_3c) {
    local_38 = local_3c;
  }
  if (local_30 < local_38) {
    local_38 = local_30;
  }
  local_40 = -local_30;
  local_34 = local_18;
  if (local_18 < local_40) {
    local_34 = local_40;
  }
  if (local_30 < local_34) {
    local_34 = local_30;
  }
  *(float *)(this_ptr->unk + 0x18) = *(float *)(this_ptr->unk + 0x18) + local_34;
  *(float *)(this_ptr->unk + 0x1c) = *(float *)(this_ptr->unk + 0x1c) + local_38;
  if ((*(int *)(this_ptr->unk + 0x24) != 0) && (in_stack_0000000c == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(this_ptr->unk + 0x1c) - local_2c);
    if (((float)0.02 <= ABS(local_18)) &&
       (fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)(this_ptr->unk + 0x1c) - local_2c),
       (float)0.02 <= ABS(fVar7))) {
      return;
    }
    this_ptr->unk[0x28] = '\x01';
    this_ptr->unk[0x29] = '\0';
    this_ptr->unk[0x2a] = '\0';
    this_ptr->unk[0x2b] = '\0';
    return;
  }
  return;
}
