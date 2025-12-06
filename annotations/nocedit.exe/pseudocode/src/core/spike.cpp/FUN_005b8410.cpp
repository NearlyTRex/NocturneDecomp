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
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000010;
  CVector3f local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  CVector3f CStack_24;
  
  fVar6 = in_stack_00000004[2].location.position.y;
  if ((fVar6 == 0.0) || (fVar6 == 1.4013e-45)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].orient_matrix.m[0].y);
    if (iVar4 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    if (iVar4 == 0) goto LAB_005b85e2;
    in_stack_00000004[2].location.area_id = 0;
LAB_005b8479:
    fVar6 = in_stack_00000004[2].location.position.z;
    if (fVar6 == 0.0) {
      return;
    }
    if (fVar6 == 2.8026e-45) {
      in_stack_00000004[2].location.position.z = 4.2039e-45;
    }
  }
  else {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar4 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar4 == 0) {
LAB_005b85e2:
      if (in_stack_00000004[2].location.area_id == 0) goto LAB_005b8479;
    }
    else {
      in_stack_00000004[2].location.area_id = 1;
    }
  }
  fVar6 = *(float *)(in_stack_00000004[3].create_event + 8) - in_stack_00000010;
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar6;
  if (0.0 < fVar6) {
    return;
  }
  fVar6 = in_stack_00000004[2].location.position.z;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  if (fVar6 == 0.0) {
    in_stack_00000004[2].location.position.z = 1.4013e-45;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    goto LAB_005b84db;
  }
  if (fVar6 == 1.4013e-45) {
    pCVar2 = (CDemonActor_vtable *)
             (in_stack_00000010 / *(float *)in_stack_00000004[3].create_event +
             (float)in_stack_00000004[3].vtable);
    in_stack_00000004[3].vtable = pCVar2;
    if ((float)pCVar2 <= 1.0) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 2.8026e-45;
    fVar6 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
    if (fVar6 == 2.8026e-45) {
LAB_005b8655:
      in_stack_00000004[2].location.area_id = 0;
      goto LAB_005b84db;
    }
    if (fVar6 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  else {
    if (fVar6 == 2.8026e-45) {
      in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
      in_stack_00000004[2].location.position.z = 4.2039e-45;
      goto LAB_005b84db;
    }
    if ((fVar6 != 4.2039e-45) ||
       (pCVar2 = (CDemonActor_vtable *)
                 ((float)in_stack_00000004[3].vtable -
                 in_stack_00000010 / *(float *)(in_stack_00000004[3].create_event + 4)),
       in_stack_00000004[3].vtable = pCVar2, 0.0 <= (float)pCVar2)) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 0.0;
    fVar6 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    if (fVar6 == 2.8026e-45) goto LAB_005b8655;
    if (fVar6 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.75,1.25);
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar6 * (float)in_stack_00000004[3].next_actor
  ;
LAB_005b84db:
  pCVar1 = &in_stack_00000004->location;
  local_30 = (pCVar1->position).x;
  local_2c = (in_stack_00000004->location).position.y;
  fStack_28 = (in_stack_00000004->location).position.z;
  local_48.z = in_stack_00000004[2].orient_matrix.m[0].x * (float)in_stack_00000004[3].vtable;
  local_48.x = 0.0;
  local_48.y = 0.0;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_24,&local_48);
  local_38 = in_stack_00000004[2].orient.pitch + pCVar5->x;
  local_34 = in_stack_00000004[2].orient.bank + pCVar5->y;
  local_30 = in_stack_00000004[2].orient.heading + pCVar5->z;
  (pCVar1->position).x = local_38;
  (in_stack_00000004->location).position.y = local_34;
  (in_stack_00000004->location).position.z = local_30;
  fVar6 = local_2c - (pCVar1->position).x;
  fVar3 = fStack_28 - (in_stack_00000004->location).position.y;
  CStack_24.x = CStack_24.x - (in_stack_00000004->location).position.z;
  if (CStack_24.x * CStack_24.x + fVar3 * fVar3 + fVar6 * fVar6 <= (float)1.0000000000000001e-05) {
    return;
  }
  local_48.x = (float)in_stack_00000004;
  core_spike_cpp_FUN_005b8950();
  return;
}
