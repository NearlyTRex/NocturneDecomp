// Name: core_charactr.cpp_CCharacter_FUN_0042e050
// Address: 0042e050
// Address Range: [[0042e050, 0042e1f4] [0042e20c, 0042e36d]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042e050(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042e050(CCharacter *this_ptr)

{
  char *target_string;
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float in_stack_00000008;
  char *in_stack_0000000c;
  float fVar6;
  float fVar7;
  int local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_14;
  
  if ((in_stack_0000000c == (char *)0x0) || (*in_stack_0000000c == '\0')) {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    this_ptr->field11_0x25a0[0x54] = '\0';
    this_ptr->field11_0x25a0[0x55] = '\0';
    this_ptr->field11_0x25a0[0x56] = '\0';
    this_ptr->field11_0x25a0[0x57] = '\0';
    this_ptr->field11_0x25a0[0x4c] = '\0';
    this_ptr->field11_0x25a0[0x4d] = '\0';
    this_ptr->field11_0x25a0[0x4e] = '\0';
    this_ptr->field11_0x25a0[0x4f] = '\0';
    return 0;
  }
  fVar6 = *(float *)(this_ptr->field11_0x25a0 + 0x54) - in_stack_00000008;
  *(float *)(this_ptr->field11_0x25a0 + 0x54) = fVar6;
  if (0.0 < fVar6) goto LAB_0042e20c;
  iVar5 = *(int *)(this_ptr->field11_0x25a0 + 0x4c);
  if ((iVar5 == 0) ||
     (fVar6 = *(float *)(iVar5 + 0x20) - (this_ptr->base_actor).location.position.x,
     fVar1 = *(float *)(iVar5 + 0x24) - (this_ptr->base_actor).location.position.y,
     fVar7 = *(float *)(iVar5 + 0x28) - (this_ptr->base_actor).location.position.z,
     (float)4 <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) goto LAB_0042e0e4;
    if (*(int *)(this_ptr->field11_0x25a0 + 0x4c) == 0) goto LAB_0042e0ee;
    uVar3 = core_waypoint_cpp_FUN_005ec320();
    *(uint *)(this_ptr->field11_0x25a0 + 0x50) = uVar3;
  }
  else {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
LAB_0042e0e4:
    this_ptr->field11_0x25a0[0x4c] = '\0';
    this_ptr->field11_0x25a0[0x4d] = '\0';
    this_ptr->field11_0x25a0[0x4e] = '\0';
    this_ptr->field11_0x25a0[0x4f] = '\0';
LAB_0042e0ee:
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    local_28 = 0;
    local_1c = &(this_ptr->base_actor).location;
    local_24 = 0;
    iVar5 = 0;
    for (local_20 = 0; local_20 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4);
        local_20 = local_20 + 1) {
      target_string = *(char **)(g_CDemonSetPtr->field19_0x14f0a0 + local_24 + 0x5dc8);
      iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(in_stack_0000000c,target_string,0)
      ;
      iVar4 = iVar5;
      if ((iVar2 != 0) &&
         (fVar6 = (local_1c->position).x - *(float *)(target_string + 0x20),
         fVar1 = (local_1c->position).y - *(float *)(target_string + 0x24),
         fVar7 = (local_1c->position).z - *(float *)(target_string + 0x28),
         20.0f <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
        iVar4 = iVar5 + 4;
        local_28 = local_28 + 1;
        *(char **)((int)local_1f80 + iVar5) = target_string;
      }
      local_24 = local_24 + 4;
      iVar5 = iVar4;
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar5 = 0;
      do {
        while( true ) {
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_2c);
          if (local_1f80[iVar4] != 0) break;
          iVar5 = iVar5 + 1;
          if (9 < iVar5) goto LAB_0042e1d9;
        }
        iVar2 = core_waypoint_cpp_FUN_005ec320();
        *(int *)(this_ptr->field11_0x25a0 + 0x50) = iVar2;
        if (iVar2 != 0) {
          *(int *)(this_ptr->field11_0x25a0 + 0x4c) = local_1f80[iVar4];
          break;
        }
        local_1f80[iVar4] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
    }
  }
LAB_0042e1d9:
  if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) {
    fVar7 = 10.0;
    fVar6 = 4.0;
  }
  else {
    fVar7 = 2.0;
    fVar6 = 1.0;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar6,fVar7);
  *(float *)(this_ptr->field11_0x25a0 + 0x54) = local_14;
LAB_0042e20c:
  if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) {
    return 0;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->field11_0x25a0 + 0x50) + 0x154) + 0xbc))();
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
  if (iVar5 == 0) {
    return 1;
  }
  if (iVar5 < 0) {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    return 0;
  }
  return 0;
}
