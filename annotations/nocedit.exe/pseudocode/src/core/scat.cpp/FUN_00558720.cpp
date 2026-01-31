// Name: core_scat.cpp_FUN_00558720
// Address: 00558720
// Address Range: [[00558720, 00558ce0]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00558720(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558720(uint param_1, uint param_2,
   uint param_3) */

void __cdecl core_scat_cpp_FUN_00558720(void)

{
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  float fVar7;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  CDemonActor_union_vtable local_13c;
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
  CDemonActor_union_vtable CStack_54;
  CDemonActor_union_vtable CStack_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor_union_vtable local_2c;
  int local_28;
  float local_24;
  int local_20;
  uint local_1c;
  float local_18;
  
  in_stack_00000004[0x17a].actor_name[0xc] = '\0';
  in_stack_00000004[0x17a].actor_name[0xd] = '\0';
  in_stack_00000004[0x17a].actor_name[0xe] = '\0';
  in_stack_00000004[0x17a].actor_name[0xf] = '\0';
  if ((in_stack_0000000c == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)(in_stack_00000004 + 1)), pSVar3->state_index == 2))
  {
    in_stack_0000000c = 1;
  }
  local_13c = in_stack_00000004[0x179].vtable;
  local_2c = *(CDemonActor_union_vtable *)(in_stack_00000004 + 0x17a);
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) != 0) &&
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 2)) {
    local_13c._ub =
         (CDemonActor_vtable *)
         ((float)in_stack_00000004[0x8d].standing_platform * (float)3.1415926535000001 *
          (float)2 * in_stack_00000008 + local_13c._ub);
    local_1c = 0x3fc90fdb;
    if ((float)local_13c < -1.570796f) {
      local_13c._ub = (CDemonActor_vtable *)0xbfc90fdb;
    }
    if (1.5707964 < (float)local_13c) {
      local_13c._ub = (CDemonActor_vtable *)0x3fc90fdb;
    }
    local_2c._ub = (CDemonActor_vtable *)0x0;
    goto LAB_005587bd;
  }
  if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) ||
     (in_stack_0000000c != 0)) {
    in_stack_00000004[0x17a].actor_name[8] = '\0';
    in_stack_00000004[0x17a].actor_name[9] = '\0';
    in_stack_00000004[0x17a].actor_name[10] = '\0';
    in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  }
  else if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) == 0) {
    local_28 = in_stack_0000000c;
    local_24 = 1e+30;
    iVar4 = 0;
    for (local_20 = in_stack_0000000c; local_20 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_20 = local_20 + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar4);
      local_18 = (float)core_scat_cpp_FUN_00558cf0();
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = iVar1;
        local_24 = local_18;
      }
      iVar4 = iVar4 + 4;
    }
    *(int *)(in_stack_00000004[0x17a].actor_name + 8) = local_28;
  }
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) != 0) {
    if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      in_stack_00000004[0x17a].actor_name[0] = '\0';
      in_stack_00000004[0x17a].actor_name[1] = '\0';
      in_stack_00000004[0x17a].actor_name[2] = '\0';
      in_stack_00000004[0x17a].actor_name[3] = '\0';
      in_stack_00000004[0x179].vtable = *(CDemonActor_union_vtable *)(in_stack_00000004 + 0x17a);
      local_13c = in_stack_00000004[0x179].vtable;
      local_2c = local_13c;
    }
    goto LAB_005587bd;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) goto LAB_005587bd;
  __arrinit(local_138,10,&g_CVectorTypeInfo);
  iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) + 0x4c))
                    ();
  if (iVar4 < 1) {
    pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                           0x154) + 0x14))();
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
                     (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_6c,
                      &CStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_9c,pCVar5);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_a8,INT_03106174);
  CStack_84.x = CStack_9c.x - pCVar5->x;
  CStack_84.y = CStack_9c.y - pCVar5->y;
  CStack_84.z = CStack_9c.z - pCVar5->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&CStack_54,&CStack_84);
  local_13c = CStack_54;
  local_2c = CStack_50;
LAB_005587bd:
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_2c - *(float *)in_stack_00000004[0x17a].actor_name);
  local_18 = local_38;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_13c - (float)in_stack_00000004[0x179].vtable);
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
  fVar7 = *(float *)in_stack_00000004[0x17a].actor_name;
  iVar4 = *(int *)(in_stack_00000004[0x17a].actor_name + 8);
  in_stack_00000004[0x179].vtable =
       (CDemonActor_vtable *)(in_stack_00000004[0x179].vtable + local_34);
  *(float *)in_stack_00000004[0x17a].actor_name = fVar7 + local_38;
  if ((iVar4 != 0) && (in_stack_0000000c == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_2c);
    if (((float)0.02 <= ABS(local_18)) &&
       (fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_2c),
       (float)0.02 <= ABS(fVar7))) {
      return;
    }
    in_stack_00000004[0x17a].actor_name[0xc] = '\x01';
    in_stack_00000004[0x17a].actor_name[0xd] = '\0';
    in_stack_00000004[0x17a].actor_name[0xe] = '\0';
    in_stack_00000004[0x17a].actor_name[0xf] = '\0';
    return;
  }
  return;
}
