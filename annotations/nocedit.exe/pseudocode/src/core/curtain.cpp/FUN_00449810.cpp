// Name: core_curtain.cpp_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449810()

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_00449810(uint param_1) */

void core_curtain_cpp_FUN_00449810(void)

{
  CDemonActorTransformState *pCVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  CDemonActorTransformState *pCVar12;
  char *pcVar13;
  CVector3f *pCVar14;
  int unaff_EBP;
  int iVar15;
  float fVar16;
  int *piVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  CDemonActor *in_stack_00000004;
  int local_64;
  CDemonActorTransformState *local_5c;
  float local_30;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar18 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  while( true ) {
    fVar2 = 1.0 / *(float *)(in_stack_00000004[1].create_event + 0x2c);
    fVar16 = *(float *)(in_stack_00000004[1].actor_name + 4);
    dVar21 = crt_math_c_round_FUN_005fe6b0
                       ((double)(*(float *)in_stack_00000004[1].actor_name * fVar2));
    iVar9 = (int)ROUND(dVar21);
    dVar21 = crt_math_c_round_FUN_005fe6b0((double)(fVar16 * fVar2));
    iVar5 = iVar9 + 1;
    iVar10 = (int)ROUND(dVar21);
    iVar6 = iVar10 + 1;
    in_stack_00000004[0x152].is_transparent = unaff_EBP;
    in_stack_00000004[0x152].field16_0x100 = iVar10;
    *(int *)(in_stack_00000004[1].create_event + 0x34) = iVar5 * iVar6;
    if (iVar5 * iVar6 < 0x3e9) break;
    *(float *)(in_stack_00000004[1].create_event + 0x2c) =
         *(float *)(in_stack_00000004[1].create_event + 0x2c) * (float)2;
  }
  fVar16 = *(float *)(in_stack_00000004[1].actor_name + 4);
  iVar15 = 0;
  local_30 = *(float *)(in_stack_00000004[1].actor_name + 4);
  local_1c = 0;
  if (0 < iVar6) {
    do {
      fVar2 = *(float *)in_stack_00000004[1].actor_name;
      fVar4 = (float)0.5;
      iVar11 = 0;
      if (0 < iVar5) {
        local_20 = local_1c - iVar5;
        local_14 = in_stack_00000004[1].create_event + local_1c * 0x74 + 0x38;
        do {
          local_14[0x14] = '\0';
          local_14[0x15] = '\0';
          local_14[0x16] = '\0';
          local_14[0x17] = '\0';
          *(float *)(local_14 + 0xc) = -fVar2 * fVar4;
          *(float *)(local_14 + 0x10) = local_30;
          if (((((iVar15 == 0) && (in_stack_00000004[1].location.position.z != 0.0)) ||
               ((iVar15 == iVar10 && (in_stack_00000004[1].orient.bank != 0.0)))) ||
              ((iVar11 == 0 && (in_stack_00000004[1].location.area_id != 0)))) ||
             ((iVar11 == iVar9 && (in_stack_00000004[1].orient.pitch != 0.0)))) {
            ((CVector3f *)(local_14 + 0x68))->x = 1.4013e-45;
          }
          else {
            ((CVector3f *)(local_14 + 0x68))->x = 0.0;
          }
          *(float *)(local_14 + 0x70) = 0.0;
          if ((iVar11 == 0) && (iVar15 == 0)) {
            *(float *)(local_14 + 0x70) = 1.4013e-45;
          }
          if ((iVar11 == 0) && (iVar15 == iVar10)) {
            *(float *)(local_14 + 0x70) = 1.4013e-45;
          }
          if ((iVar11 == iVar9) && (iVar15 == 0)) {
            *(float *)(local_14 + 0x70) = 1.4013e-45;
          }
          if ((iVar11 == iVar9) && (iVar15 == iVar10)) {
            *(float *)(local_14 + 0x70) = 1.4013e-45;
          }
          local_14[0x44] = '\0';
          local_14[0x45] = '\0';
          local_14[0x46] = '\0';
          local_14[0x47] = '\0';
          if (0 < iVar15) {
            *(int *)(local_14 + *(int *)(local_14 + 0x44) * 4 + 0x48) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < iVar11) {
            *(int *)(local_14 + *(int *)(local_14 + 0x44) * 4 + 0x48) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (iVar11 < iVar9) {
            *(int *)(local_14 + *(int *)(local_14 + 0x44) * 4 + 0x48) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar19 = (float10)252;
          fVar20 = (float10)65536;
          dVar21 = crt_math_c_round_FUN_005fe6b0
                             ((double)((((float10)*(float *)in_stack_00000004[1].actor_name *
                                         (float10)0.5 +
                                        (float10)*(float *)(local_14 + 0xc)) /
                                       (float10)*(float *)in_stack_00000004[1].actor_name) * fVar19
                                      * fVar20));
          *(int *)(local_14 + 0x18) = (int)ROUND(dVar21) + 0x20000;
          iVar11 = iVar11 + 1;
          dVar21 = crt_math_c_round_FUN_005fe6b0
                             ((double)(fVar20 * ((float10)1 -
                                                (float10)*(float *)(local_14 + 0x10) /
                                                (float10)*(float *)(in_stack_00000004[1].actor_name
                                                                   + 4)) * fVar19));
          *(int *)(local_14 + 0x1c) = (int)ROUND(dVar21) + 0x20000;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_14 = (char *)(local_18 + 0x74);
        } while (iVar11 < iVar5);
      }
      local_30 = local_30 - fVar16 / (float)iVar10;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar6);
  }
  local_64 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pCVar1 = (CDemonActorTransformState *)(in_stack_00000004[1].create_event + 0x38);
    local_5c = pCVar1;
    do {
      iVar9 = 0;
      if (0 < *(int *)((int)(local_5c + 2) + 0xc)) {
        pCVar12 = local_5c;
        do {
          iVar10 = *(int *)((int)(pCVar12 + 2) + 0x10);
          fVar16 = (local_5c->orientation).x - *(float *)((int)pCVar1 + iVar10 * 0x74 + 0xc);
          fVar2 = (local_5c->orientation).y - *(float *)((int)pCVar1 + iVar10 * 0x74 + 0x10);
          fVar4 = (local_5c->orientation).z - *(float *)((int)pCVar1 + iVar10 * 0x74 + 0x14);
          iVar9 = iVar9 + 1;
          ((CVector3i *)((int)(pCVar12 + 3) + 4))->x =
               (int)SQRT(fVar4 * fVar4 + fVar16 * fVar16 + fVar2 * fVar2);
          pCVar12 = (CDemonActorTransformState *)((int)&pCVar12->position + 4);
        } while (iVar9 < *(int *)((int)(local_5c + 2) + 0xc));
      }
      local_5c = (CDemonActorTransformState *)((int)(local_5c + 4) + 4);
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  iVar9 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pfVar7 = (float *)(in_stack_00000004[1].create_event + 0x44);
    do {
      pcVar13 = in_stack_00000004[1].create_event + iVar9 * 0x74 + 0x38;
      if ((float *)pcVar13 != pfVar7) {
        *(float *)pcVar13 = *pfVar7;
        *(float *)(pcVar13 + 4) = pfVar7[1];
        *(float *)(pcVar13 + 8) = pfVar7[2];
      }
      pcVar13[0x34] = '\0';
      pcVar13[0x35] = '\0';
      pcVar13[0x36] = '\0';
      pcVar13[0x37] = '\0';
      iVar9 = iVar9 + 1;
      *(uint *)(pcVar13 + 0x30) = *(uint *)(pcVar13 + 0x34);
      *(uint *)(pcVar13 + 0x2c) = *(uint *)(pcVar13 + 0x30);
      pfVar7 = pfVar7 + 0x1d;
    } while (iVar9 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  piVar8 = &in_stack_00000004[0x175].field11_0xdc;
  pCVar14 = in_stack_00000004[0x318].orient_matrix.m + 2;
  local_28 = 0;
  if (0 < in_stack_00000004[0x152].field16_0x100) {
    do {
      local_18 = 0;
      if (0 < in_stack_00000004[0x152].is_transparent) {
        do {
          piVar8[5] = 0;
          ((CVector3f *)(piVar8 + 1))->x = 4.2039e-45;
          fVar16 = (float)piVar8[5];
          ((CVector3f *)(piVar8 + 4))->x = fVar16;
          piVar8[3] = (int)fVar16;
          piVar8[2] = (int)fVar16;
          pCVar14->y = 4.2039e-45;
          *(uint *)((int)(pCVar14 + 1) + 8) = 0;
          fVar16 = *(float *)((int)(pCVar14 + 1) + 8);
          *(float *)((int)(pCVar14 + 1) + 4) = fVar16;
          pCVar14[1].x = fVar16;
          pCVar14->z = fVar16;
          iVar10 = (in_stack_00000004[0x152].is_transparent + 1) * local_28;
          fVar16 = (float)(local_18 + iVar10);
          piVar8[6] = (int)fVar16;
          piVar8[7] = *(int *)(in_stack_00000004[1].create_event + (int)fVar16 * 0x74 + 0x50);
          piVar8[8] = *(int *)(in_stack_00000004[1].create_event + (int)fVar16 * 0x74 + 0x54);
          piVar8[9] = (int)fVar16 + 1;
          piVar8[10] = *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                               (int)fVar16 * 0x74 + 0x14);
          ((CVector3i *)(piVar8 + 0xb))->x =
               *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                       (int)fVar16 * 0x74 + 0x18);
          iVar9 = in_stack_00000004[0x152].is_transparent;
          piVar8[0xc] = (int)fVar16 + 1 + iVar9 + 1;
          iVar9 = local_18 * 0x74 + iVar10 * 0x74 + iVar9 * 0x74 + 0xe8;
          piVar8[0xd] = *(int *)((int)&in_stack_00000004[2].orient_matrix + iVar9 + -0xcc);
          piVar8[0xe] = *(int *)(in_stack_00000004[2].create_event + iVar9 + -0x104);
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 0x1c);
          *(int *)(pCVar14 + 2) = piVar8[0xc];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 0xd];
          piVar17[(uint)bVar18 * -2 + 1] = (piVar8 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1]
          ;
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 0x28);
          *(int *)(pCVar14 + 3) = piVar8[9];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 10];
          piVar17[(uint)bVar18 * -2 + 1] = (piVar8 + (uint)bVar18 * -2 + 10)[(uint)bVar18 * -2 + 1];
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 0x34);
          *(int *)(pCVar14 + 4) = piVar8[6];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 7];
          piVar17[(uint)bVar18 * -2 + 1] = (piVar8 + (uint)bVar18 * -2 + 7)[(uint)bVar18 * -2 + 1];
          (((CDemonActorTransformState *)(piVar8 + 0x13))->position).x = 4.2039e-45;
          piVar8[0x17] = 0;
          fVar16 = (float)piVar8[0x17];
          ((CVector3f *)(piVar8 + 0x16))->x = fVar16;
          piVar8[0x15] = (int)fVar16;
          piVar8[0x14] = (int)fVar16;
          *(uint *)((int)(pCVar14 + 6) + 4) = 3;
          *(uint *)((int)(pCVar14 + 7) + 8) = 0;
          uVar3 = *(uint *)((int)(pCVar14 + 7) + 8);
          *(uint *)((int)(pCVar14 + 7) + 4) = uVar3;
          pCVar14[7].x = uVar3;
          *(uint *)((int)(pCVar14 + 6) + 8) = uVar3;
          iVar5 = (in_stack_00000004[0x152].is_transparent + 1) * local_28;
          fVar16 = (float)(iVar5 + local_18);
          piVar8[0x18] = (int)fVar16;
          piVar8[0x19] = *(int *)(in_stack_00000004[1].create_event + (int)fVar16 * 0x74 + 0x50);
          piVar8[0x1a] = *(int *)(in_stack_00000004[1].create_event + (int)fVar16 * 0x74 + 0x54);
          iVar9 = in_stack_00000004[0x152].is_transparent;
          iVar6 = (int)fVar16 + iVar9 + 2;
          piVar8[0x1b] = iVar6;
          iVar10 = iVar5 * 0x74 + local_18 * 0x74 + iVar9 * 0x74 + 0xe8;
          piVar8[0x1c] = (int)*(CDemonActor **)
                               ((int)&in_stack_00000004[2].orient_matrix + iVar10 + -0xcc);
          piVar8[0x1d] = *(int *)(in_stack_00000004[2].create_event + iVar10 + -0x104);
          piVar8[0x1e] = (int)(iVar6 + -1);
          iVar9 = iVar5 * 0x74 + local_18 * 0x74 + iVar9 * 0x74;
          piVar8[0x1f] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar9 + 0x14);
          piVar8[0x20] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar9 + 0x18);
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 100);
          *(CDemonActor_vtable **)(pCVar14 + 8) = (CDemonActor_vtable *)piVar8[0x1e];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 0x1f];
          piVar17[(uint)bVar18 * -2 + 1] =
               (piVar8 + (uint)bVar18 * -2 + 0x1f)[(uint)bVar18 * -2 + 1];
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 0x70);
          *(int *)(pCVar14 + 9) = piVar8[0x1b];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 0x1c];
          piVar17[(uint)bVar18 * -2 + 1] =
               (piVar8 + (uint)bVar18 * -2 + 0x1c)[(uint)bVar18 * -2 + 1];
          piVar17 = (int *)((int)pCVar14 + (uint)bVar18 * -8 + 0x7c);
          *(int *)(pCVar14 + 10) = piVar8[0x18];
          *piVar17 = piVar8[(uint)bVar18 * -2 + 0x19];
          piVar17[(uint)bVar18 * -2 + 1] =
               (piVar8 + (uint)bVar18 * -2 + 0x19)[(uint)bVar18 * -2 + 1];
          piVar8 = piVar8 + 0x24;
          pCVar14 = pCVar14 + 0xc;
          local_18 = local_18 + 1;
        } while (local_18 < in_stack_00000004[0x152].is_transparent);
      }
      local_28 = local_28 + 1;
    } while (local_28 < in_stack_00000004[0x152].field16_0x100);
  }
  core_curtain_cpp_FUN_00449e40();
  in_stack_00000004->is_transparent = (uint)((int)in_stack_00000004[1].location.position.y < 0xfde9)
  ;
  return;
}
