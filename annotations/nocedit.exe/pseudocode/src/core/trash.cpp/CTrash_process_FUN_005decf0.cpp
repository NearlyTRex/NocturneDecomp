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
  float fVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float fVar7;
  CVector3f *pCVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float in_stack_00000008;
  float fStack0000000c;
  COrientation *pCStack00000010;
  float fStack00000014;
  CVector3f *in_stack_00000020;
  CMatrix3x4f *matrix_b;
  byte auStack_180 [60];
  uint auStack_144 [11];
  uint local_118;
  CVector3f aCStack_114 [3];
  byte auStack_ec [32];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_5c;
  float local_58;
  CMatrix3x3f local_54;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  bVar12 = 0;
  iVar6 = core_hero_cpp_FUN_004f2220();
  if (iVar6 == 0) {
    iVar6 = core_hero_cpp_FUN_004f2220();
    if (iVar6 != 0) {
      return;
    }
    (this_ptr->base_actor).location.position.x = (this_ptr->home_pos).x;
    (this_ptr->base_actor).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base_actor).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x20) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x20);
  fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x24);
  fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x28);
  pCVar5 = g_CDemonSetPtr;
  local_c4 = 4.0;
  local_c0 = 0.0;
  pcVar9 = g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0;
  local_bc = 0.0;
  if ((float *)pcVar9 != &local_c4) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = -0x80;
    pcVar9[3] = '@';
    pCVar5->field19_0x14f0a0[0xbbc4] = '\0';
    pCVar5->field19_0x14f0a0[0xbbc5] = '\0';
    pCVar5->field19_0x14f0a0[0xbbc6] = '\0';
    pCVar5->field19_0x14f0a0[0xbbc7] = '\0';
    pCVar5->field19_0x14f0a0[0xbbc8] = '\0';
    pCVar5->field19_0x14f0a0[0xbbc9] = '\0';
    pCVar5->field19_0x14f0a0[0xbbca] = '\0';
    pCVar5->field19_0x14f0a0[0xbbcb] = '\0';
  }
  fVar7 = *(float *)(this_ptr->field4_0x2e0 + 0x34) - in_stack_00000008;
  *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar7;
  pCVar5 = g_CDemonSetPtr;
  if (fVar7 <= 0.0) {
    if (this_ptr->field4_0x2e0 + 0x38 != g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) {
      *(uint *)(this_ptr->field4_0x2e0 + 0x38) =
           *(uint *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
      *(uint *)(this_ptr->field4_0x2e0 + 0x3c) =
           *(uint *)(pCVar5->field19_0x14f0a0 + 0xbbc4);
      *(uint *)(this_ptr->field4_0x2e0 + 0x40) =
           *(uint *)(pCVar5->field19_0x14f0a0 + 0xbbc8);
    }
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x38) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x38);
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x3c) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x3c);
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x40) = fVar7 + *(float *)(this_ptr->field4_0x2e0 + 0x40);
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
    *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar7;
  }
  pcVar9 = this_ptr->field4_0x2e0 + 0x38;
  local_90 = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) - *(float *)pcVar9) *
             0.05f;
  local_8c = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4) -
             *(float *)(this_ptr->field4_0x2e0 + 0x3c)) * 0.05f;
  local_88 = (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8) -
             *(float *)(this_ptr->field4_0x2e0 + 0x40)) * 0.05f;
  pCVar8 = (CVector3f *)(this_ptr->field4_0x2e0 + 0x20);
  *(float *)pcVar9 = *(float *)pcVar9 + local_90;
  *(float *)(this_ptr->field4_0x2e0 + 0x3c) = *(float *)(this_ptr->field4_0x2e0 + 0x3c) + local_8c;
  *(float *)(this_ptr->field4_0x2e0 + 0x40) = *(float *)(this_ptr->field4_0x2e0 + 0x40) + local_88;
  local_78 = *(float *)pcVar9 - pCVar8->x;
  local_74 = *(float *)(this_ptr->field4_0x2e0 + 0x3c) - *(float *)(this_ptr->field4_0x2e0 + 0x24);
  local_24 = local_78 * 0.07f;
  local_70 = *(float *)(this_ptr->field4_0x2e0 + 0x40) - *(float *)(this_ptr->field4_0x2e0 + 0x28);
  local_20 = local_74 * 0.07f;
  local_1c = local_70 * 0.07f;
  fVar7 = *(float *)(this_ptr->field4_0x2e0 + 0x24);
  pCVar8->x = pCVar8->x + local_24;
  *(float *)(this_ptr->field4_0x2e0 + 0x24) = fVar7 + local_20;
  *(float *)(this_ptr->field4_0x2e0 + 0x28) = *(float *)(this_ptr->field4_0x2e0 + 0x28) + local_1c;
  local_a8 = (this_ptr->base_actor).location.position.x;
  local_a4 = (this_ptr->base_actor).location.position.y;
  local_a0 = (this_ptr->base_actor).location.position.z;
  fVar7 = -*(float *)(this_ptr->field4_0x2e0 + 0x44);
  pcVar9 = this_ptr->field4_0x2e0 + 8;
  local_cc = pCVar8->x - *(float *)pcVar9;
  local_c8 = *(float *)(this_ptr->field4_0x2e0 + 0x24) - *(float *)(this_ptr->field4_0x2e0 + 0xc);
  pcVar1 = this_ptr->field4_0x2e0 + 0x2c;
  local_c4 = *(float *)(this_ptr->field4_0x2e0 + 0x28) - *(float *)(this_ptr->field4_0x2e0 + 0x10);
  local_c0 = local_cc * *(float *)pcVar1;
  local_2c = local_c8 * *(float *)pcVar1;
  local_b8 = local_c4 * *(float *)pcVar1;
  local_bc = fVar7 + local_2c;
  local_30 = local_c0;
  local_28 = local_b8;
  pCVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,local_54.m,pCVar8);
  fStack_80 = pCVar8->x * 0.5f;
  local_7c = pCVar8->y * 0.5f;
  local_78 = 0.5f * pCVar8->z;
  pcVar1 = this_ptr->field4_0x2e0 + 0x14;
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.8f;
  fVar3 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.8f;
  *(float *)pcVar1 = *(float *)pcVar1 * 0.8f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar2;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar3;
  *(float *)pcVar1 = *(float *)pcVar1 + fStack_80;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = *(float *)(this_ptr->field4_0x2e0 + 0x18) + local_7c;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = *(float *)(this_ptr->field4_0x2e0 + 0x1c) + local_78;
  local_5c = local_bc * fVar7;
  local_58 = local_b8 * fVar7;
  local_54.m[0].x = local_b4 * fVar7;
  *(float *)pcVar9 = *(float *)pcVar9 + local_5c;
  *(float *)(this_ptr->field4_0x2e0 + 0xc) = *(float *)(this_ptr->field4_0x2e0 + 0xc) + local_58;
  *(float *)(this_ptr->field4_0x2e0 + 0x10) =
       *(float *)(this_ptr->field4_0x2e0 + 0x10) + local_54.m[0].x;
  fVar2 = SQRT(*(float *)(this_ptr->field4_0x2e0 + 0x1c) * *(float *)(this_ptr->field4_0x2e0 + 0x1c)
               + *(float *)pcVar1 * *(float *)pcVar1 +
                 *(float *)(this_ptr->field4_0x2e0 + 0x18) *
                 *(float *)(this_ptr->field4_0x2e0 + 0x18)) * (float)0.15915494309644401;
  if (1.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    *(float *)pcVar1 = *(float *)pcVar1 * fVar2;
    *(float *)(this_ptr->field4_0x2e0 + 0x18) = *(float *)(this_ptr->field4_0x2e0 + 0x18) * fVar2;
    *(float *)(this_ptr->field4_0x2e0 + 0x1c) = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * fVar2;
  }
  local_54.m[2].y = *(float *)(this_ptr->field4_0x2e0 + 8) * fVar7;
  local_54.m[2].z = *(float *)(this_ptr->field4_0x2e0 + 0xc) * fVar7;
  local_30 = *(float *)(this_ptr->field4_0x2e0 + 0x10) * fVar7;
  local_14 = *(float *)(this_ptr->field4_0x2e0 + 0x14) * fVar7;
  pCStack00000010 =
       (COrientation *)
       core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                 (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                  (this_ptr->base_actor).location.position.z,local_54.m[2].y,local_30,
                  *(float *)(this_ptr->field4_0x2e0 + 0x30),*(void **)this_ptr->field4_0x2e0,
                  *(void **)(this_ptr->field4_0x2e0 + 4));
  bVar4 = false;
  if ((0.0 <= (float)pCStack00000010) && ((float)pCStack00000010 < 1.0)) {
    local_54.m[2].z = local_54.m[2].z * (float)pCStack00000010;
    local_30 = local_30 * (float)pCStack00000010;
    local_2c = local_2c * (float)pCStack00000010;
    bVar4 = true;
  }
  position = &(this_ptr->base_actor).location;
  fVar2 = (this_ptr->base_actor).location.position.y;
  (position->position).x = (position->position).x + local_54.m[2].z;
  fVar3 = (this_ptr->base_actor).location.position.z;
  (this_ptr->base_actor).location.position.y = fVar2 + local_30;
  (this_ptr->base_actor).location.position.z = fVar3 + local_2c;
  matrix_b = (CMatrix3x4f *)pCStack00000010;
  fStack0000000c =
       core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                 (g_CDemonSetPtr,&position->position,
                  *(float *)(this_ptr->field4_0x2e0 + 0x30) * (float)0.90000000000000002);
  if (fStack0000000c <= (this_ptr->base_actor).location.position.y) {
    if (!bVar4) goto LAB_005df3d0;
  }
  else {
    fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x30);
    fVar3 = (float)1.5;
    (this_ptr->base_actor).location.position.y = fStack0000000c;
    if (fVar2 * fVar3 + local_98 < (this_ptr->base_actor).location.position.y) {
      (position->position).x = local_9c;
      (this_ptr->base_actor).location.position.y = local_98;
      (this_ptr->base_actor).location.position.z = local_94;
    }
  }
  fVar2 = *(float *)(this_ptr->field4_0x2e0 + 0x18) * 0.7f;
  fVar3 = *(float *)(this_ptr->field4_0x2e0 + 0x1c) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x14) =
       *(float *)(this_ptr->field4_0x2e0 + 0x14) * 0.7f;
  *(float *)(this_ptr->field4_0x2e0 + 0x18) = fVar2;
  *(float *)(this_ptr->field4_0x2e0 + 0x1c) = fVar3;
LAB_005df3d0:
  local_54.m[2].x = (this_ptr->base_actor).location.position.x - local_9c;
  local_54.m[2].y = (this_ptr->base_actor).location.position.y - local_98;
  local_88 = 1.0 / fVar7;
  local_90 = local_54.m[2].x * local_88;
  local_54.m[2].z = (this_ptr->base_actor).location.position.z - local_94;
  local_8c = local_54.m[2].y * local_88;
  local_88 = local_54.m[2].z * local_88;
  if ((float *)(this_ptr->field4_0x2e0 + 8) != &local_90) {
    *(float *)(this_ptr->field4_0x2e0 + 8) = local_90;
    *(float *)(this_ptr->field4_0x2e0 + 0xc) = local_8c;
    *(float *)(this_ptr->field4_0x2e0 + 0x10) = local_88;
  }
  pCStack00000010 = &(this_ptr->base_actor).orient;
  fStack00000014 = fStack0000000c;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_180,&g_ZeroVector,(CVector3f *)pCStack00000010);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_ec,&g_ZeroVector,(CVector3f *)&stack0xfffffff8);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_ec + 4),(CMatrix3x4f *)(auStack_180 + 8),matrix_b);
  puVar10 = auStack_144;
  puVar11 = &local_118;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_114,&local_54);
  if (pCVar8 != in_stack_00000020) {
    in_stack_00000020->x = pCVar8->x;
    in_stack_00000020->y = pCVar8->y;
    in_stack_00000020->z = pCVar8->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  return;
}
