// Name: core_trash.cpp_CTrash_process_FUN_005decf0
// Address: 005decf0
// Address Range: [[005decf0, 005ded29] [005df4fe, 005df533]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_process_FUN_005decf0(CTrash * this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr)

{
  CLocation *position;
  char *pcVar1;
  float fVar2;
  bool bVar3;
  CDemonSet *pCVar4;
  int iVar5;
  float fVar6;
  CVector3f *pCVar7;
  char *pcVar8;
  float *pfVar9;
  byte bVar10;
  float in_stack_00000008;
  CMatrix3x4f *matrix_b;
  double dVar11;
  CMatrix3x4f local_1a8;
  float local_178 [12];
  CVector3f local_148 [4];
  CMatrix3x4f local_118;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CMatrix3x3f local_88;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar10 = 0;
  iVar5 = core_hero_cpp_FUN_004f2220();
  if (iVar5 == 0) {
    iVar5 = core_hero_cpp_FUN_004f2220();
    if (iVar5 != 0) {
      return;
    }
    (this_ptr->base_actor).location.position.x = (this_ptr->home_pos).x;
    (this_ptr->base_actor).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base_actor).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x20) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x20);
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x24);
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x28);
  pCVar4 = g_CDemonSetPtr;
  local_d0 = 0x40800000;
  local_cc = 0;
  pcVar8 = g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0;
  local_c8 = 0;
  if (pcVar8 != (char *)&local_d0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = -0x80;
    pcVar8[3] = '@';
    pCVar4->field19_0x14f0a0[0xbbc4] = '\0';
    pCVar4->field19_0x14f0a0[0xbbc5] = '\0';
    pCVar4->field19_0x14f0a0[0xbbc6] = '\0';
    pCVar4->field19_0x14f0a0[0xbbc7] = '\0';
    pCVar4->field19_0x14f0a0[0xbbc8] = '\0';
    pCVar4->field19_0x14f0a0[0xbbc9] = '\0';
    pCVar4->field19_0x14f0a0[0xbbca] = '\0';
    pCVar4->field19_0x14f0a0[0xbbcb] = '\0';
  }
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x34) - in_stack_00000008;
  *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar6;
  pCVar4 = g_CDemonSetPtr;
  if (fVar6 <= 0.0) {
    if (this_ptr->field4_0x2e0 + 0x38 != g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) {
      *(uint *)(this_ptr->field4_0x2e0 + 0x38) =
           *(uint *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
      *(uint *)(this_ptr->field4_0x2e0 + 0x3c) =
           *(uint *)(pCVar4->field19_0x14f0a0 + 0xbbc4);
      *(uint *)(this_ptr->field4_0x2e0 + 0x40) =
           *(uint *)(pCVar4->field19_0x14f0a0 + 0xbbc8);
    }
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x38) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x38)
    ;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x3c) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x3c)
    ;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x40) = local_14 + *(float *)(this_ptr->field4_0x2e0 + 0x40)
    ;
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar6;
  }
  pcVar8 = this_ptr->field4_0x2e0 + 0x38;
  local_28 = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) - *(float *)pcVar8;
  local_24 = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4) -
             *(float *)(this_ptr->field4_0x2e0 + 0x3c);
  local_ac = local_28 * 0.05f;
  local_20 = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8) -
             *(float *)(this_ptr->field4_0x2e0 + 0x40);
  local_a8 = local_24 * 0.05f;
  local_a4 = local_20 * 0.05f;
  pCVar7 = (CVector3f *)(this_ptr->field4_0x2e0 + 0x20);
  *(float *)pcVar8 = *(float *)pcVar8 + local_ac;
  *(float *)(this_ptr->field4_0x2e0 + 0x3c) = *(float *)(this_ptr->field4_0x2e0 + 0x3c) + local_a8;
  *(float *)(this_ptr->field4_0x2e0 + 0x40) = *(float *)(this_ptr->field4_0x2e0 + 0x40) + local_a4;
  local_94 = *(float *)pcVar8 - pCVar7->x;
  local_90 = *(float *)(this_ptr->field4_0x2e0 + 0x3c) - *(float *)(this_ptr->field4_0x2e0 + 0x24);
  local_40 = local_94 * 0.07f;
  local_8c = *(float *)(this_ptr->field4_0x2e0 + 0x40) - *(float *)(this_ptr->field4_0x2e0 + 0x28);
  local_3c = local_90 * 0.07f;
  local_38 = local_8c * 0.07f;
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x24);
  pCVar7->x = pCVar7->x + local_40;
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = fVar6 + local_3c;
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = *(float *)(this_ptr->field4_0x2e0 + 0x28) + local_38;
  local_c4 = (this_ptr->base_actor).location.position.x;
  local_c0 = (this_ptr->base_actor).location.position.y;
  local_bc = (this_ptr->base_actor).location.position.z;
  local_14 = -*(float *)(this_ptr->field4_0x2e0 + 0x44);
  pcVar8 = this_ptr->field4_0x2e0 + 8;
  local_e8 = pCVar7->x - *(float *)pcVar8;
  local_e4 = *(float *)(this_ptr->field4_0x2e0 + 0x24) - *(float *)(this_ptr->field4_0x2e0 + 0xc);
  pcVar1 = this_ptr->field4_0x2e0 + 0x2c;
  local_e0 = *(float *)(this_ptr->field4_0x2e0 + 0x28) - *(float *)(this_ptr->field4_0x2e0 + 0x10);
  local_dc = local_e8 * *(float *)pcVar1;
  local_48 = local_e4 * *(float *)pcVar1;
  local_d4 = local_e0 * *(float *)pcVar1;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pCVar7 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,local_88.m + 2,pCVar7);
  local_a0 = pCVar7->x * 0.5f;
  local_9c = pCVar7->y * 0.5f;
  local_98 = 0.5f * pCVar7->z;
  pcVar1 = this_ptr->field4_0x2e0 + 0x14;
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.8f;
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.8f;
  *(float *)pcVar1 = *(float *)pcVar1 * 0.8f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar6;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar2;
  *(float *)pcVar1 = *(float *)pcVar1 + local_a0;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = *(float *)(this_ptr->field4_0x2e0 + 0x18) + local_9c;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = *(float *)(this_ptr->field4_0x2e0 + 0x1c) + local_98;
  local_88.m[1].x = local_dc * in_stack_00000008;
  local_88.m[1].y = local_d8 * in_stack_00000008;
  local_88.m[1].z = local_d4 * in_stack_00000008;
  *(float *)pcVar8 = *(float *)pcVar8 + local_88.m[1].x;
  *(float *)(this_ptr->field4_0x2e0 + 0xc) =
       *(float *)(this_ptr->field4_0x2e0 + 0xc) + local_88.m[1].y;
  *(float *)(this_ptr->field4_0x2e0 + 0x10) =
       *(float *)(this_ptr->field4_0x2e0 + 0x10) + local_88.m[1].z;
  fVar6 = SQRT(*(float *)(this_ptr->field4_0x2e0 + 0x1c) * *(float *)(this_ptr->field4_0x2e0 + 0x1c)
               + *(float *)pcVar1 * *(float *)pcVar1 +
                 *(float *)(this_ptr->field4_0x2e0 + 0x18) *
                 *(float *)(this_ptr->field4_0x2e0 + 0x18)) * (float)0.15915494309644401;
  if (1.0 < fVar6) {
    fVar6 = 1.0 / fVar6;
    *(float *)pcVar1 = *(float *)pcVar1 * fVar6;
    *(float *)(this_ptr->field4_0x2e0 + 0x18) = *(float *)(this_ptr->field4_0x2e0 + 0x18) * fVar6;
    *(float *)(this_ptr->field4_0x2e0 + 0x1c) = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * fVar6;
  }
  local_58 = *(float *)(this_ptr->field4_0x2e0 + 8) * in_stack_00000008;
  local_54 = *(float *)(this_ptr->field4_0x2e0 + 0xc) * in_stack_00000008;
  local_50 = *(float *)(this_ptr->field4_0x2e0 + 0x10) * in_stack_00000008;
  local_34.x = *(float *)(this_ptr->field4_0x2e0 + 0x14) * in_stack_00000008;
  local_34.y = *(float *)(this_ptr->field4_0x2e0 + 0x18) * in_stack_00000008;
  local_34.z = in_stack_00000008 * *(float *)(this_ptr->field4_0x2e0 + 0x1c);
  local_14 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                       (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                        (this_ptr->base_actor).location.position.z,local_58,local_50,
                        *(float *)(this_ptr->field4_0x2e0 + 0x30),*(void **)this_ptr->field4_0x2e0,
                        *(void **)(this_ptr->field4_0x2e0 + 4));
  bVar3 = false;
  dVar11 = (double)local_14;
  if ((0.0 <= dVar11) && (dVar11 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar3 = true;
  }
  position = &(this_ptr->base_actor).location;
  fVar6 = (this_ptr->base_actor).location.position.y;
  (position->position).x = (position->position).x + local_58;
  fVar2 = (this_ptr->base_actor).location.position.z;
  (this_ptr->base_actor).location.position.y = fVar6 + local_54;
  (this_ptr->base_actor).location.position.z = fVar2 + local_50;
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&position->position,
                        *(float *)(this_ptr->field4_0x2e0 + 0x30) * (float)0.90000000000000002);
  matrix_b = SUB84 /* extract 2-byte value */(dVar11,0);
  if (local_1c <= (this_ptr->base_actor).location.position.y) {
    if (!bVar3) goto LAB_005df3d0;
  }
  else {
    fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x30);
    fVar2 = (float)1.5;
    (this_ptr->base_actor).location.position.y = local_1c;
    if (fVar6 * fVar2 + local_c0 < (this_ptr->base_actor).location.position.y) {
      (position->position).x = local_c4;
      (this_ptr->base_actor).location.position.y = local_c0;
      (this_ptr->base_actor).location.position.z = local_bc;
    }
  }
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.7f;
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x14) =
       *(float *)(this_ptr->field4_0x2e0 + 0x14) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar6;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar2;
LAB_005df3d0:
  local_64 = (this_ptr->base_actor).location.position.x - local_c4;
  local_60 = (this_ptr->base_actor).location.position.y - local_c0;
  local_b0 = 1.0 / in_stack_00000008;
  local_b8 = local_64 * local_b0;
  local_5c = (this_ptr->base_actor).location.position.z - local_bc;
  local_b4 = local_60 * local_b0;
  local_b0 = local_5c * local_b0;
  if ((float *)(this_ptr->field4_0x2e0 + 8) != &local_b8) {
    *(float *)(this_ptr->field4_0x2e0 + 8) = local_b8;
    *(float *)(this_ptr->field4_0x2e0 + 0xc) = local_b4;
    *(float *)(this_ptr->field4_0x2e0 + 0x10) = local_b0;
  }
  local_18 = (CVector3f *)&(this_ptr->base_actor).orient;
  local_14 = local_1c;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_1a8,&g_ZeroVector,local_18);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_118,&g_ZeroVector,&local_34);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_118,&local_1a8,matrix_b);
  pfVar9 = local_178;
  pCVar7 = local_148;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7->x = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    pCVar7 = (CVector3f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
  }
  pCVar7 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_148,&local_88);
  if (pCVar7 != local_18) {
    local_18->x = pCVar7->x;
    local_18->y = pCVar7->y;
    local_18->z = pCVar7->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  return;
}
