// Name: core_bodypart.cpp_FUN_0041a050
// Address: 0041a050
// Address Range: [[0041a050, 0041a5aa] [0041a615, 0041a628]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041a050()

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041a050(void)

{
  CLocation *pCVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  SSurfaceNormal *pSVar10;
  int extraout_ECX;
  int iVar11;
  int *extraout_EDX;
  int iVar12;
  SSurfaceNormal *output;
  BADSPACEBASE *in_ESP;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  CBodyPart *in_stack_00000004;
  CVector3f local_68;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CVector3f CStack_44;
  CVector3f CStack_34;
  char *local_20;
  float local_18;
  int iStack_14;
  
  if ((2 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) &&
     (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x28))) {
    core_bodypart_cpp_FUN_0041aa40();
    iStack_14 = -((local_50 + (int)local_5c) / 2);
    iVar12 = -((local_4c + local_58) / 2);
    iVar9 = 0;
    iVar13 = -((local_48 + local_54) / 2);
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar11 = 0;
      do {
        iVar2 = *(int *)(in_stack_00000004->field1_0x158 + 0x20);
        *(int *)(iVar11 + iVar2) = *(int *)(iVar11 + iVar2) + iStack_14;
        piVar7 = (int *)(iVar11 + 4 + iVar2);
        *piVar7 = *piVar7 + iVar12;
        piVar7 = (int *)(iVar11 + 8 + iVar2);
        *piVar7 = *piVar7 + iVar13;
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c));
    }
    local_50 = local_50 + iStack_14;
    local_4c = local_4c + iVar12;
    local_48 = local_48 + iVar13;
    local_5c = (float)((int)local_5c + iStack_14);
    local_54 = local_54 + iVar13;
    local_58 = local_58 + iVar12;
    local_68.x = (float)0.00390625;
    *(float *)(in_stack_00000004->field1_0x158 + 4) = (float)local_50 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 8) = (float)local_4c * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0xc) = (float)local_48 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x10) = (float)(int)local_5c * local_68.x;
    local_68.y = (float)iVar12 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x14) = (float)local_58 * local_68.x;
    local_68.z = (float)iVar13 * local_68.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x18) = (float)local_54 * local_68.x;
    local_68.x = (float)iStack_14 * local_68.x;
    local_18 = local_68.z;
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base_actor,&CStack_44,&local_68);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = (pCVar1->position).x - pCVar5->x;
    (in_stack_00000004->base_actor).location.position.y =
         (in_stack_00000004->base_actor).location.position.y - pCVar5->y;
    (in_stack_00000004->base_actor).location.position.z =
         (in_stack_00000004->base_actor).location.position.z - pCVar5->z;
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x134)) {
      pcVar6 = in_stack_00000004->field1_0x158 + 0x138;
      do {
        *(float *)pcVar6 = *(float *)pcVar6 + local_68.y;
        *(float *)(pcVar6 + 4) = *(float *)(pcVar6 + 4) + local_68.z;
        iVar9 = iVar9 + 1;
        *(float *)(pcVar6 + 8) = *(float *)(pcVar6 + 8) + local_5c;
        pcVar6 = pcVar6 + 0x194;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x134));
    }
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x5f4)) {
      local_20 = in_stack_00000004->field1_0x158 + 0x5f8;
      pcVar6 = in_stack_00000004->field1_0x158 + 0x624;
      do {
        pCVar5 = (CVector3f *)(local_20 + iVar9 * 0x2b0);
        pCVar5->x = pCVar5->x + local_68.y;
        pCVar5->y = pCVar5->y + local_68.z;
        pCVar5->z = pCVar5->z + local_5c;
        iVar9 = iVar9 + 1;
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base_actor,&CStack_34,pCVar5);
        *(float *)pcVar6 = pCVar5->x;
        *(float *)(pcVar6 + 4) = pCVar5->y;
        *(float *)(pcVar6 + 8) = pCVar5->z;
        pcVar6 = pcVar6 + 0x2b0;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x5f4));
    }
    crt_memory_c_memset_FUN_005fde40
              (*(void **)(in_stack_00000004->field1_0x158 + 0x24),0,
               *(int *)(in_stack_00000004->field1_0x158 + 0x1c) * 0xc);
    iStack_14 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x28)) {
      local_18 = 0.0;
      do {
        output = (SSurfaceNormal *)
                 (*(int *)(in_stack_00000004->field1_0x158 + 0x2c) + (int)local_18);
        output->vertex_count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  (*(CVector3i **)(in_stack_00000004->field1_0x158 + 0x20),output);
        iVar9 = 0;
        pSVar10 = output;
        if (0 < output->vertex_count) {
          do {
            piVar7 = (int *)(*(int *)(in_stack_00000004->field1_0x158 + 0x24) +
                            pSVar10->vertex_index_1 * 0xc);
            *piVar7 = *piVar7 + output->normal_x;
            piVar7[1] = piVar7[1] + output->normal_y;
            piVar7[2] = piVar7[2] + output->normal_z;
            iVar9 = iVar9 + 1;
            pSVar10 = (SSurfaceNormal *)&pSVar10->normal_y;
          } while (iVar9 < output->vertex_count);
        }
        local_18 = (float)((int)local_18 + 0x3c);
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(in_stack_00000004->field1_0x158 + 0x28));
    }
    iVar9 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar12 = 0;
      do {
        piVar7 = (int *)(*(int *)(in_stack_00000004->field1_0x158 + 0x24) + iVar12);
        dVar17 = (double)*piVar7;
        dVar4 = (double)piVar7[1];
        dVar3 = (double)piVar7[2];
        dVar17 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar17 * dVar17);
        if (dVar17 <= 0.0) {
          piVar7[2] = 0;
          piVar7[1] = piVar7[2];
          *piVar7 = piVar7[2];
        }
        else {
          fVar14 = (float10)65535 / (float10)dVar17;
          fVar15 = (float10)piVar7[1] * fVar14;
          fVar16 = (float10)piVar7[2] * fVar14;
          dVar17 = crt_math_c_round_FUN_005fe6b0((double)((float10)*piVar7 * fVar14));
          fVar14 = (float10)dVar17;
          dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
          fVar15 = (float10)dVar17;
          dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
          *extraout_EDX = (int)ROUND(fVar14);
          extraout_EDX[1] = (int)ROUND(fVar15);
          extraout_EDX[2] = (int)ROUND(dVar17);
          iVar12 = extraout_ECX;
        }
        iVar9 = iVar9 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar9 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c));
    }
    core_bodypart_cpp_CBodyPart_FUN_0041b070(in_stack_00000004);
    if (in_stack_00000004->field1_0x158 + 0xbb4 != in_stack_00000004->field1_0x158 + 0x128) {
      *(uint *)(in_stack_00000004->field1_0x158 + 0xbb4) =
           *(uint *)(in_stack_00000004->field1_0x158 + 0x128);
      *(uint *)(in_stack_00000004->field1_0x158 + 3000) =
           *(uint *)(in_stack_00000004->field1_0x158 + 300);
      *(uint *)(in_stack_00000004->field1_0x158 + 0xbbc) =
           *(uint *)(in_stack_00000004->field1_0x158 + 0x130);
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(in_stack_00000004->field1_0x158 + 0xb8c),&local_68,
                        (CVector3f *)(in_stack_00000004->field1_0x158 + 0x128));
    if ((CVector3f *)(in_stack_00000004->field1_0x158 + 0xbc0) != pCVar5) {
      ((CVector3f *)(in_stack_00000004->field1_0x158 + 0xbc0))->x = pCVar5->x;
      *(float *)(in_stack_00000004->field1_0x158 + 0xbc4) = pCVar5->y;
      *(float *)(in_stack_00000004->field1_0x158 + 0xbc8) = pCVar5->z;
    }
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbe4) = fVar8;
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbec) = fVar8;
    fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
    *(float *)(in_stack_00000004->field1_0x158 + 0xbe8) = fVar8;
    return;
  }
  (in_stack_00000004->base_actor).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(in_stack_00000004);
  pCVar5 = (CVector3f *)(in_stack_00000004->field1_0x158 + 0x10);
  if (pCVar5 != &g_ZeroVector) {
    pCVar5->x = g_ZeroVector.x;
    *(float *)(in_stack_00000004->field1_0x158 + 0x14) = g_ZeroVector.y;
    *(float *)(in_stack_00000004->field1_0x158 + 0x18) = g_ZeroVector.z;
  }
  if ((CVector3f *)(in_stack_00000004->field1_0x158 + 4) != pCVar5) {
    ((CVector3f *)(in_stack_00000004->field1_0x158 + 4))->x = pCVar5->x;
    *(uint *)(in_stack_00000004->field1_0x158 + 8) =
         *(uint *)(in_stack_00000004->field1_0x158 + 0x14);
    *(uint *)(in_stack_00000004->field1_0x158 + 0xc) =
         *(uint *)(in_stack_00000004->field1_0x158 + 0x18);
  }
  return;
}
