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
  CDemonActor_vtable *local_138;
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
  float local_2c;
  CDemonActor_vtable *local_28;
  int local_24;
  float local_20;
  int local_1c;
  uint local_18;
  float fStack_14;
  
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
  local_138 = in_stack_00000004[0x179].vtable;
  local_28 = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) != 0) &&
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 2)) {
    local_138 = (CDemonActor_vtable *)
                ((float)in_stack_00000004[0x8d].field11_0xdc * (float)3.1415926535000001 *
                 (float)2 * in_stack_00000008 + (float)local_138);
    local_18 = 0x3fc90fdb;
    if ((float)local_138 < -1.570796f) {
      local_138 = (CDemonActor_vtable *)0xbfc90fdb;
    }
    if (1.5707964 < (float)local_138) {
      local_138 = (CDemonActor_vtable *)0x3fc90fdb;
    }
    local_28 = (CDemonActor_vtable *)0x0;
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
    local_24 = in_stack_0000000c;
    local_20 = 1e+30;
    iVar4 = 0;
    for (local_1c = in_stack_0000000c; local_1c < (int)g_CDemonSetPtr->actor_list_ptr;
        local_1c = local_1c + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar4);
      fStack_14 = (float)core_scat_cpp_FUN_00558cf0();
      if ((0.0 <= fStack_14) && (fStack_14 < local_20)) {
        local_24 = iVar1;
        local_20 = fStack_14;
      }
      iVar4 = iVar4 + 4;
    }
    *(int *)(in_stack_00000004[0x17a].actor_name + 8) = local_24;
  }
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) != 0) {
    if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      in_stack_00000004[0x17a].actor_name[0] = '\0';
      in_stack_00000004[0x17a].actor_name[1] = '\0';
      in_stack_00000004[0x17a].actor_name[2] = '\0';
      in_stack_00000004[0x17a].actor_name[3] = '\0';
      in_stack_00000004[0x179].vtable = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
      local_138 = in_stack_00000004[0x179].vtable;
      local_28 = local_138;
    }
    goto LAB_005587bd;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) goto LAB_005587bd;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(aCStack_134,10,&g_CVectorTypeInfo);
  iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) + 0x4c))
                    ();
  if (iVar4 < 1) {
    pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                           0x154) + 0x14))();
    fStack_8c = *pfVar6 + pfVar6[3];
    fStack_88 = pfVar6[1] + pfVar6[4];
    CStack_74.x = fStack_8c * 0.5f;
    fStack_84 = pfVar6[2] + pfVar6[5];
    CStack_74.y = fStack_88 * 0.5f;
    aCStack_134[0].z = fStack_84 * 0.5f;
    CStack_74.z = aCStack_134[0].z;
    fVar7 = CStack_74.x;
    fVar2 = CStack_74.y;
    if (&CStack_5c != &CStack_74) goto LAB_00558aeb;
  }
  else if (&CStack_5c != aCStack_134) {
    CStack_5c.x = aCStack_134[0].x;
    CStack_5c.y = aCStack_134[0].y;
    fVar7 = CStack_5c.x;
    fVar2 = CStack_5c.y;
LAB_00558aeb:
    CStack_5c.y = fVar2;
    CStack_5c.x = fVar7;
    CStack_5c.z = aCStack_134[0].z;
  }
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_68,
                      &CStack_5c);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_98,pCVar5);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_a4,DAT_03106174);
  CStack_80.x = CStack_98.x - pCVar5->x;
  CStack_80.y = CStack_98.y - pCVar5->y;
  CStack_80.z = CStack_98.z - pCVar5->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_50,&CStack_80);
  local_138 = (CDemonActor_vtable *)CStack_50.x;
  local_28 = (CDemonActor_vtable *)CStack_50.y;
LAB_005587bd:
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_28 - *(float *)in_stack_00000004[0x17a].actor_name);
  fStack_14 = local_34;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        ((float)local_138 - (float)in_stack_00000004[0x179].vtable);
  local_2c = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
  local_38 = -local_2c;
  if (local_34 < local_38) {
    local_34 = local_38;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  local_3c = -local_2c;
  local_30 = fStack_14;
  if (fStack_14 < local_3c) {
    local_30 = local_3c;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  fVar7 = *(float *)in_stack_00000004[0x17a].actor_name;
  iVar4 = *(int *)(in_stack_00000004[0x17a].actor_name + 8);
  in_stack_00000004[0x179].vtable =
       (CDemonActor_vtable *)((float)in_stack_00000004[0x179].vtable + local_30);
  *(float *)in_stack_00000004[0x17a].actor_name = fVar7 + local_34;
  if ((iVar4 != 0) && (in_stack_0000000c == 0)) {
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_28);
    if (((float)0.02 <= ABS(fStack_14)) &&
       (fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_28),
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
