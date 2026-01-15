// Name: core_spike.cpp_FUN_005b8410
// Address: 005b8410
// Address Range: [[005b8410, 005b8672] [005b868f, 005b8726]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8410()

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_FUN_005b8410(uint param_1, uint param_2)
    */

void core_spike_cpp_FUN_005b8410(void)

{
  CLocation *pCVar1;
  CDemonActor_vtable *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c [2];
  float local_14;
  
  fVar7 = in_stack_00000004[2].location.position.y;
  if ((fVar7 == 0.0) || (fVar7 == 1.4013e-45)) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].orient_matrix.m[0].y);
    if (iVar5 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    if (iVar5 == 0) goto LAB_005b85e2;
    in_stack_00000004[2].location.area_id = 0;
LAB_005b8479:
    fVar7 = in_stack_00000004[2].location.position.z;
    if (fVar7 == 0.0) {
      return;
    }
    if (fVar7 == 2.8026e-45) {
      in_stack_00000004[2].location.position.z = 4.2039e-45;
    }
  }
  else {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar5 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar5 == 0) {
LAB_005b85e2:
      if (in_stack_00000004[2].location.area_id == 0) goto LAB_005b8479;
    }
    else {
      in_stack_00000004[2].location.area_id = 1;
    }
  }
  fVar7 = *(float *)(in_stack_00000004[3].create_event + 8) - in_stack_00000008;
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar7;
  if (0.0 < fVar7) {
    return;
  }
  fVar7 = in_stack_00000004[2].location.position.z;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  if (fVar7 == 0.0) {
    in_stack_00000004[2].location.position.z = 1.4013e-45;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    goto LAB_005b84db;
  }
  if (fVar7 == 1.4013e-45) {
    pCVar2 = (CDemonActor_vtable *)
             (in_stack_00000008 / *(float *)in_stack_00000004[3].create_event +
             (float)in_stack_00000004[3].vtable);
    in_stack_00000004[3].vtable = pCVar2;
    if ((float)pCVar2 <= 1.0) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 2.8026e-45;
    fVar7 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
    if (fVar7 == 2.8026e-45) {
LAB_005b8655:
      in_stack_00000004[2].location.area_id = 0;
      goto LAB_005b84db;
    }
    if (fVar7 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  else {
    if (fVar7 == 2.8026e-45) {
      in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
      in_stack_00000004[2].location.position.z = 4.2039e-45;
      goto LAB_005b84db;
    }
    if ((fVar7 != 4.2039e-45) ||
       (pCVar2 = (CDemonActor_vtable *)
                 ((float)in_stack_00000004[3].vtable -
                 in_stack_00000008 / *(float *)(in_stack_00000004[3].create_event + 4)),
       in_stack_00000004[3].vtable = pCVar2, 0.0 <= (float)pCVar2)) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 0.0;
    fVar7 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    if (fVar7 == 2.8026e-45) goto LAB_005b8655;
    if (fVar7 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.75,1.25);
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar7 * (float)in_stack_00000004[3].next_actor
  ;
LAB_005b84db:
  pCVar1 = &in_stack_00000004->location;
  local_38 = (pCVar1->position).x;
  local_34 = (in_stack_00000004->location).position.y;
  local_30 = (in_stack_00000004->location).position.z;
  local_50.z = in_stack_00000004[2].orient_matrix.m[0].x * (float)in_stack_00000004[3].vtable;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_14 = local_50.z;
  pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,local_2c,&local_50);
  local_44 = in_stack_00000004[2].orient.pitch + pCVar6->x;
  local_40 = in_stack_00000004[2].orient.bank + pCVar6->y;
  local_3c = in_stack_00000004[2].orient.heading + pCVar6->z;
  (pCVar1->position).x = local_44;
  (in_stack_00000004->location).position.y = local_40;
  (in_stack_00000004->location).position.z = local_3c;
  fVar7 = local_38 - (pCVar1->position).x;
  fVar4 = local_34 - (in_stack_00000004->location).position.y;
  fVar3 = local_30 - (in_stack_00000004->location).position.z;
  if (fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7 <= (float)1.0000000000000001e-05) {
    return;
  }
  core_spike_cpp_FUN_005b8950();
  return;
}
