// Name: core_gabriela.cpp_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d6b2e]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6540()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6540(uint param_1, uint
   param_2, uint param_3) */

void core_gabriela_cpp_FUN_004d6540(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  float *pfVar7;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  byte local_134 [4];
  CVector3f aCStack_130 [12];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint local_3c;
  float local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_18;
  float fStack_14;
  
  if ((in_stack_0000000c == 0) &&
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)(in_stack_00000004 + 1)), pSVar4->state_index == 2))
  {
    in_stack_0000000c = 1;
  }
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) == 0) ||
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) == 2)) {
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) ||
       (in_stack_0000000c != 0)) {
      in_stack_00000004[0x17a].actor_name[8] = '\0';
      in_stack_00000004[0x17a].actor_name[9] = '\0';
      in_stack_00000004[0x17a].actor_name[10] = '\0';
      in_stack_00000004[0x17a].actor_name[0xb] = '\0';
    }
    else if (in_stack_00000004[0x179].vtable == (CDemonActor_vtable *)0x0) {
      iVar5 = 0;
      local_24 = 1e+30;
      local_28 = 0;
      for (local_20 = 0; local_20 < (int)g_CDemonSetPtr->actor_list_ptr; local_20 = local_20 + 1) {
        uVar1 = *(uint *)(g_CDemonSetPtr->actor_list_data + iVar5);
        local_18 = (float)core_gabriela_cpp_FUN_004d6260();
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = uVar1;
          local_24 = local_18;
        }
        iVar5 = iVar5 + 4;
      }
      *(uint *)(in_stack_00000004[0x17a].actor_name + 8) = local_28;
    }
    if (in_stack_00000004[0x179].vtable == (CDemonActor_vtable *)&DAT_00000002) {
      if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
        in_stack_00000004[0x17a].actor_name[0x18] = '\0';
        in_stack_00000004[0x17a].actor_name[0x19] = '\0';
        in_stack_00000004[0x17a].actor_name[0x1a] = '\0';
        in_stack_00000004[0x17a].actor_name[0x1b] = '\0';
        *(uint *)(in_stack_00000004[0x17a].actor_name + 0x14) =
             *(uint *)(in_stack_00000004[0x17a].actor_name + 0x18);
        *(uint *)(in_stack_00000004[0x17a].actor_name + 0x10) =
             *(uint *)(in_stack_00000004[0x17a].actor_name + 0x14);
        *(uint *)(in_stack_00000004[0x17a].actor_name + 0xc) =
             *(uint *)(in_stack_00000004[0x17a].actor_name + 0x10);
      }
      fVar2 = in_stack_00000008 / (_DAT_0065e7c0 * (float)0.5) +
              in_stack_00000004[0x17a].location.position.x;
    }
    else if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      if (0.0 < *(float *)(in_stack_00000004[0x17a].actor_name + 0x1c)) goto LAB_004d65dd;
      fVar2 = in_stack_00000004[0x17a].location.position.x - in_stack_00000008 / _DAT_0065e7c0;
    }
    else {
      crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_134,10,&g_CVectorTypeInfo);
      iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) +
                          0x4c))();
      if (iVar5 < 1) {
        pfVar7 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                               0x154) + 0x14))();
        fStack_a0 = *pfVar7 + pfVar7[3];
        fStack_9c = pfVar7[1] + pfVar7[4];
        CStack_88.x = fStack_a0 * 0.5f;
        fStack_98 = pfVar7[2] + pfVar7[5];
        CStack_88.y = fStack_9c * 0.5f;
        aCStack_130[0].z = fStack_98 * 0.5f;
        CStack_88.z = aCStack_130[0].z;
        fVar2 = CStack_88.x;
        fVar3 = CStack_88.y;
        if (&CStack_4c != &CStack_88) goto LAB_004d6841;
      }
      else if (&CStack_4c != aCStack_130) {
        CStack_4c.x = aCStack_130[0].x;
        CStack_4c.y = aCStack_130[0].y;
        fVar2 = CStack_4c.x;
        fVar3 = CStack_4c.y;
LAB_004d6841:
        CStack_4c.y = fVar3;
        CStack_4c.x = fVar2;
        CStack_4c.z = aCStack_130[0].z;
      }
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_64,
                          &CStack_4c);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_70,pCVar6)
      ;
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_7c,
                          DAT_02d7b860);
      CStack_94.x = CStack_70.x - pCVar6->x;
      CStack_94.y = CStack_70.y - pCVar6->y;
      CStack_94.z = CStack_70.z - pCVar6->z;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_58,&CStack_94);
      fVar2 = in_stack_00000008 / _DAT_0065e7c0;
      *(float *)(in_stack_00000004[0x17a].actor_name + 0xc) = CStack_58.x;
      fVar2 = fVar2 + in_stack_00000004[0x17a].location.position.x;
      *(float *)(in_stack_00000004[0x17a].actor_name + 0x10) = CStack_58.y;
    }
  }
  else {
    fVar2 = (float)in_stack_00000004[0x8d].field11_0xdc * (float)3.1415926535000001 *
            (float)2 * in_stack_00000008 +
            *(float *)(in_stack_00000004[0x17a].actor_name + 0xc);
    local_3c = 0x3fc90fdb;
    *(float *)(in_stack_00000004[0x17a].actor_name + 0xc) = fVar2;
    if (fVar2 < -1.570796f) {
      in_stack_00000004[0x17a].actor_name[0xc] = -0x25;
      in_stack_00000004[0x17a].actor_name[0xd] = '\x0f';
      in_stack_00000004[0x17a].actor_name[0xe] = -0x37;
      in_stack_00000004[0x17a].actor_name[0xf] = -0x41;
    }
    if (1.5707964 < *(float *)(in_stack_00000004[0x17a].actor_name + 0xc)) {
      in_stack_00000004[0x17a].actor_name[0xc] = -0x25;
      in_stack_00000004[0x17a].actor_name[0xd] = '\x0f';
      in_stack_00000004[0x17a].actor_name[0xe] = -0x37;
      in_stack_00000004[0x17a].actor_name[0xf] = '?';
    }
    fVar2 = in_stack_00000008 / _DAT_0065e7c0 + in_stack_00000004[0x17a].location.position.x;
    in_stack_00000004[0x17a].actor_name[0x10] = '\0';
    in_stack_00000004[0x17a].actor_name[0x11] = '\0';
    in_stack_00000004[0x17a].actor_name[0x12] = '\0';
    in_stack_00000004[0x17a].actor_name[0x13] = '\0';
  }
  in_stack_00000004[0x17a].location.position.x = fVar2;
LAB_004d65dd:
  if (1.0 < in_stack_00000004[0x17a].location.position.x) {
    in_stack_00000004[0x17a].location.position.x = 1.0;
  }
  if (in_stack_00000004[0x17a].location.position.x < 0.0) {
    in_stack_00000004[0x17a].actor_name[0x14] = '\0';
    in_stack_00000004[0x17a].actor_name[0x15] = '\0';
    in_stack_00000004[0x17a].actor_name[0x16] = '\0';
    in_stack_00000004[0x17a].actor_name[0x17] = '\0';
    in_stack_00000004[0x17a].actor_name[0x18] = '\0';
    in_stack_00000004[0x17a].actor_name[0x19] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1a] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1b] = '\0';
    in_stack_00000004[0x17a].location.position.x = 0.0;
  }
  if (0.0 < in_stack_00000004[0x17a].location.position.x) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[0x17a].actor_name + 0x10) -
                          *(float *)(in_stack_00000004[0x17a].actor_name + 0x18));
    fStack_14 = local_18;
    local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[0x17a].actor_name + 0xc) -
                          *(float *)(in_stack_00000004[0x17a].actor_name + 0x14));
    fVar2 = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
    if (local_18 < -fVar2) {
      local_18 = -fVar2;
    }
    if (fVar2 < local_18) {
      local_18 = fVar2;
    }
    if (local_2c < -fVar2) {
      local_2c = -fVar2;
    }
    if (fVar2 < local_2c) {
      local_2c = fVar2;
    }
    fVar2 = *(float *)(in_stack_00000004[0x17a].actor_name + 0x18);
    *(float *)(in_stack_00000004[0x17a].actor_name + 0x14) =
         *(float *)(in_stack_00000004[0x17a].actor_name + 0x14) + local_2c;
    *(float *)(in_stack_00000004[0x17a].actor_name + 0x18) = fVar2 + local_18;
    return;
  }
  uVar1 = *(uint *)(in_stack_00000004[0x17a].actor_name + 0x10);
  *(uint *)(in_stack_00000004[0x17a].actor_name + 0x14) =
       *(uint *)(in_stack_00000004[0x17a].actor_name + 0xc);
  *(uint *)(in_stack_00000004[0x17a].actor_name + 0x18) = uVar1;
  return;
}
