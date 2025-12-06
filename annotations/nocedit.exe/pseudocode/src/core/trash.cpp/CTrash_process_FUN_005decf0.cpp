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
  BADSPACEBASE *in_ESP;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float in_stack_00000008;
  float fStack0000000c;
  float fStack00000010;
  COrientation *pCStack00000014;
  float fStack00000018;
  CVector3f *in_stack_00000024;
  CMatrix3x4f *matrix_b;
  byte auStack_17c [60];
  uint auStack_140 [11];
  uint uStack_114;
  CVector3f aCStack_110 [3];
  byte local_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_58;
  float local_54;
  CMatrix3x3f local_50;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar11 = 0;
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
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x20) = fVar6 + *(float *)(this_ptr->field4_0x2e0 + 0x20);
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = fVar6 + *(float *)(this_ptr->field4_0x2e0 + 0x24);
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = fVar6 + *(float *)(this_ptr->field4_0x2e0 + 0x28);
  pCVar4 = g_CDemonSetPtr;
  local_c0 = 4.0;
  local_bc = 0.0;
  pcVar8 = g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0;
  local_b8 = 0.0;
  if ((float *)pcVar8 != &local_c0) {
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
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x38) = fVar6 + *(float *)(this_ptr->field4_0x2e0 + 0x38);
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x3c) = fVar6 + *(float *)(this_ptr->field4_0x2e0 + 0x3c);
    in_stack_00000008 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x40) =
         in_stack_00000008 + *(float *)(this_ptr->field4_0x2e0 + 0x40);
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar6;
  }
  pcVar8 = this_ptr->field4_0x2e0 + 0x38;
  local_8c = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) - *(float *)pcVar8) *
             0.05f;
  local_88 = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4) -
             *(float *)(this_ptr->field4_0x2e0 + 0x3c)) * 0.05f;
  fStack_84 = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8) -
              *(float *)(this_ptr->field4_0x2e0 + 0x40)) * 0.05f;
  pCVar7 = (CVector3f *)(this_ptr->field4_0x2e0 + 0x20);
  *(float *)pcVar8 = *(float *)pcVar8 + local_8c;
  *(float *)(this_ptr->field4_0x2e0 + 0x3c) = *(float *)(this_ptr->field4_0x2e0 + 0x3c) + local_88;
  *(float *)(this_ptr->field4_0x2e0 + 0x40) = *(float *)(this_ptr->field4_0x2e0 + 0x40) + fStack_84;
  local_74 = *(float *)pcVar8 - pCVar7->x;
  local_70 = *(float *)(this_ptr->field4_0x2e0 + 0x3c) - *(float *)(this_ptr->field4_0x2e0 + 0x24);
  local_20 = local_74 * 0.07f;
  fStack_6c = *(float *)(this_ptr->field4_0x2e0 + 0x40) - *(float *)(this_ptr->field4_0x2e0 + 0x28);
  local_1c = local_70 * 0.07f;
  local_18 = fStack_6c * 0.07f;
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x24);
  pCVar7->x = pCVar7->x + local_20;
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = fVar6 + local_1c;
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = *(float *)(this_ptr->field4_0x2e0 + 0x28) + local_18;
  local_a4 = (this_ptr->base_actor).location.position.x;
  local_a0 = (this_ptr->base_actor).location.position.y;
  local_9c = (this_ptr->base_actor).location.position.z;
  fStack0000000c = -*(float *)(this_ptr->field4_0x2e0 + 0x44);
  pcVar8 = this_ptr->field4_0x2e0 + 8;
  local_c8 = pCVar7->x - *(float *)pcVar8;
  local_c4 = *(float *)(this_ptr->field4_0x2e0 + 0x24) - *(float *)(this_ptr->field4_0x2e0 + 0xc);
  pcVar1 = this_ptr->field4_0x2e0 + 0x2c;
  local_c0 = *(float *)(this_ptr->field4_0x2e0 + 0x28) - *(float *)(this_ptr->field4_0x2e0 + 0x10);
  local_bc = local_c8 * *(float *)pcVar1;
  local_28 = local_c4 * *(float *)pcVar1;
  local_b4 = local_c0 * *(float *)pcVar1;
  local_b8 = fStack0000000c + local_28;
  local_2c = local_bc;
  local_24 = local_b4;
  pCVar7 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,local_50.m,pCVar7);
  local_7c = pCVar7->x * 0.5f;
  local_78 = pCVar7->y * 0.5f;
  local_74 = 0.5f * pCVar7->z;
  pcVar1 = this_ptr->field4_0x2e0 + 0x14;
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.8f;
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.8f;
  *(float *)pcVar1 = *(float *)pcVar1 * 0.8f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar6;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar2;
  *(float *)pcVar1 = *(float *)pcVar1 + local_7c;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = *(float *)(this_ptr->field4_0x2e0 + 0x18) + local_78;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = *(float *)(this_ptr->field4_0x2e0 + 0x1c) + local_74;
  local_58 = local_b8 * in_stack_00000008;
  local_54 = local_b4 * in_stack_00000008;
  local_50.m[0].x = local_b0 * in_stack_00000008;
  *(float *)pcVar8 = *(float *)pcVar8 + local_58;
  *(float *)(this_ptr->field4_0x2e0 + 0xc) = *(float *)(this_ptr->field4_0x2e0 + 0xc) + local_54;
  *(float *)(this_ptr->field4_0x2e0 + 0x10) =
       *(float *)(this_ptr->field4_0x2e0 + 0x10) + local_50.m[0].x;
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
  local_50.m[2].y = *(float *)(this_ptr->field4_0x2e0 + 8) * in_stack_00000008;
  local_50.m[2].z = *(float *)(this_ptr->field4_0x2e0 + 0xc) * in_stack_00000008;
  local_2c = *(float *)(this_ptr->field4_0x2e0 + 0x10) * in_stack_00000008;
  pCStack00000014 =
       (COrientation *)
       core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                 (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                  (this_ptr->base_actor).location.position.z,local_50.m[2].y,local_2c,
                  *(float *)(this_ptr->field4_0x2e0 + 0x30),*(void **)this_ptr->field4_0x2e0,
                  *(void **)(this_ptr->field4_0x2e0 + 4));
  bVar3 = false;
  if ((0.0 <= (float)pCStack00000014) && ((float)pCStack00000014 < 1.0)) {
    local_50.m[2].z = local_50.m[2].z * (float)pCStack00000014;
    local_2c = local_2c * (float)pCStack00000014;
    local_28 = local_28 * (float)pCStack00000014;
    bVar3 = true;
  }
  position = &(this_ptr->base_actor).location;
  fVar6 = (this_ptr->base_actor).location.position.y;
  (position->position).x = (position->position).x + local_50.m[2].z;
  fVar2 = (this_ptr->base_actor).location.position.z;
  (this_ptr->base_actor).location.position.y = fVar6 + local_2c;
  (this_ptr->base_actor).location.position.z = fVar2 + local_28;
  matrix_b = (CMatrix3x4f *)pCStack00000014;
  fStack00000010 =
       core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                 (g_CDemonSetPtr,&position->position,
                  *(float *)(this_ptr->field4_0x2e0 + 0x30) * (float)0.90000000000000002);
  if (fStack00000010 <= (this_ptr->base_actor).location.position.y) {
    if (!bVar3) goto LAB_005df3d0;
  }
  else {
    fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x30);
    fVar2 = (float)1.5;
    (this_ptr->base_actor).location.position.y = fStack00000010;
    if (fVar6 * fVar2 + local_94 < (this_ptr->base_actor).location.position.y) {
      (position->position).x = local_98;
      (this_ptr->base_actor).location.position.y = local_94;
      (this_ptr->base_actor).location.position.z = local_90;
    }
  }
  fVar6 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.7f;
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x14) =
       *(float *)(this_ptr->field4_0x2e0 + 0x14) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar6;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar2;
LAB_005df3d0:
  local_50.m[2].x = (this_ptr->base_actor).location.position.x - local_98;
  local_50.m[2].y = (this_ptr->base_actor).location.position.y - local_94;
  fStack_84 = 1.0 / in_stack_00000008;
  local_8c = local_50.m[2].x * fStack_84;
  local_50.m[2].z = (this_ptr->base_actor).location.position.z - local_90;
  local_88 = local_50.m[2].y * fStack_84;
  fStack_84 = local_50.m[2].z * fStack_84;
  if ((float *)(this_ptr->field4_0x2e0 + 8) != &local_8c) {
    *(float *)(this_ptr->field4_0x2e0 + 8) = local_8c;
    *(float *)(this_ptr->field4_0x2e0 + 0xc) = local_88;
    *(float *)(this_ptr->field4_0x2e0 + 0x10) = fStack_84;
  }
  pCStack00000014 = &(this_ptr->base_actor).orient;
  fStack00000018 = fStack00000010;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_17c,&g_ZeroVector,(CVector3f *)pCStack00000014);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)local_e8,&g_ZeroVector,(CVector3f *)&stack0xfffffffc);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_e8 + 4),(CMatrix3x4f *)(auStack_17c + 8),matrix_b);
  puVar9 = auStack_140;
  puVar10 = &uStack_114;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  pCVar7 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_110,&local_50);
  if (pCVar7 != in_stack_00000024) {
    in_stack_00000024->x = pCVar7->x;
    in_stack_00000024->y = pCVar7->y;
    in_stack_00000024->z = pCVar7->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  return;
}
