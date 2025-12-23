// Name: core_scat.cpp_FUN_00558720
// Address: 00558720
// Address Range: [[00558720, 00558ce0]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558720()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558720(uint param_1, uint param_2,
   uint param_3) */

void core_scat_cpp_FUN_00558720(void)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float local_138;
  CVector3f aCStack_134 [12];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor_vtable *local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  float local_18;
  float fStack_14;
  
  in_stack_00000004[0x17a].actor_name[0xc] = '\0';
  in_stack_00000004[0x17a].actor_name[0xd] = '\0';
  in_stack_00000004[0x17a].actor_name[0xe] = '\0';
  in_stack_00000004[0x17a].actor_name[0xf] = '\0';
  if ((in_stack_0000000c == 0.0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)(in_stack_00000004 + 1)), pSVar2->state_index == 2))
  {
    in_stack_0000000c = 1.4013e-45;
  }
  local_2c = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) != 0) &&
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 2)) {
    local_1c = 0x3fc90fdb;
    local_2c = (CDemonActor_vtable *)0x0;
    goto LAB_005587bd;
  }
  if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) ||
     (in_stack_0000000c != 0.0)) {
    in_stack_00000004[0x17a].actor_name[8] = '\0';
    in_stack_00000004[0x17a].actor_name[9] = '\0';
    in_stack_00000004[0x17a].actor_name[10] = '\0';
    in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  }
  else if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) == 0) {
    local_28 = in_stack_0000000c;
    local_24 = 1e+30;
    iVar3 = 0;
    for (local_20 = in_stack_0000000c; (int)local_20 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_20 = (float)((int)local_20 + 1)) {
      fVar6 = *(float *)(g_CDemonSetPtr->actor_list_data + iVar3);
      local_18 = (float)core_scat_cpp_FUN_00558cf0();
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = fVar6;
        local_24 = local_18;
      }
      iVar3 = iVar3 + 4;
    }
    *(float *)(in_stack_00000004[0x17a].actor_name + 8) = local_28;
  }
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) != 0) {
    if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      in_stack_00000004[0x17a].actor_name[0] = '\0';
      in_stack_00000004[0x17a].actor_name[1] = '\0';
      in_stack_00000004[0x17a].actor_name[2] = '\0';
      in_stack_00000004[0x17a].actor_name[3] = '\0';
      in_stack_00000004[0x179].vtable = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
      local_2c = in_stack_00000004[0x179].vtable;
    }
    goto LAB_005587bd;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) goto LAB_005587bd;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_138,10,&g_CVectorTypeInfo);
  iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) + 0x4c))
                    ();
  if (iVar3 < 1) {
    pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                           0x154) + 0x14))();
    fStack_8c = *pfVar5 + pfVar5[3];
    fStack_88 = pfVar5[1] + pfVar5[4];
    CStack_74.x = fStack_8c * 0.5f;
    fStack_84 = pfVar5[2] + pfVar5[5];
    CStack_74.y = fStack_88 * 0.5f;
    aCStack_134[0].z = fStack_84 * 0.5f;
    CStack_74.z = aCStack_134[0].z;
    fVar6 = CStack_74.x;
    fVar1 = CStack_74.y;
    if (&CStack_5c != &CStack_74) goto LAB_00558aeb;
  }
  else if (&CStack_5c != aCStack_134) {
    CStack_5c.x = aCStack_134[0].x;
    CStack_5c.y = aCStack_134[0].y;
    fVar6 = CStack_5c.x;
    fVar1 = CStack_5c.y;
LAB_00558aeb:
    CStack_5c.y = fVar1;
    CStack_5c.x = fVar6;
    CStack_5c.z = aCStack_134[0].z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_68,
                      &CStack_5c);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_98,pCVar4);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_a4,DAT_03106174);
  CStack_80.x = CStack_98.x - pCVar4->x;
  CStack_80.y = CStack_98.y - pCVar4->y;
  CStack_80.z = CStack_98.z - pCVar4->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_50,&CStack_80);
  local_138 = CStack_50.x;
  local_28 = CStack_50.y;
LAB_005587bd:
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_28 - *(float *)in_stack_00000004[0x17a].actor_name);
  fStack_14 = local_34;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_138 - (float)in_stack_00000004[0x179].vtable);
  local_2c = (CDemonActor_vtable *)
             (in_stack_00000008 * (float)3.1415926535000001 * (float)1.5);
  local_38 = -(float)local_2c;
  if (local_34 < local_38) {
    local_34 = local_38;
  }
  if ((float)local_2c < local_34) {
    local_34 = (float)local_2c;
  }
  local_3c = -(float)local_2c;
  local_30 = fStack_14;
  if (fStack_14 < local_3c) {
    local_30 = local_3c;
  }
  if ((float)local_2c < local_30) {
    local_30 = (float)local_2c;
  }
  fVar6 = *(float *)in_stack_00000004[0x17a].actor_name;
  iVar3 = *(int *)(in_stack_00000004[0x17a].actor_name + 8);
  in_stack_00000004[0x179].vtable =
       (CDemonActor_vtable *)((float)in_stack_00000004[0x179].vtable + local_30);
  *(float *)in_stack_00000004[0x17a].actor_name = fVar6 + local_34;
  if ((iVar3 != 0) && (in_stack_0000000c == 0.0)) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - local_28);
    if (((float)0.02 <= ABS(fStack_14)) &&
       (fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - local_28),
       (float)0.02 <= ABS(fVar6))) {
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
