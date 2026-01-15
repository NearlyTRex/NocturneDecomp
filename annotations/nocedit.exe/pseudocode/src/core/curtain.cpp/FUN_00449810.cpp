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
  uint uVar2;
  float fVar3;
  float fVar4;
  int extraout_EAX;
  int iVar5;
  int iVar6;
  int extraout_EAX_00;
  int extraout_EAX_01;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int extraout_EDX;
  CDemonActorTransformState *pCVar11;
  char *pcVar12;
  CVector3f *pCVar13;
  int iVar14;
  float fVar15;
  int *piVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  CDemonActor *in_stack_00000004;
  int local_6c;
  CDemonActorTransformState *local_64;
  int local_48;
  int local_44;
  int local_34;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  while( true ) {
    fVar18 = (float10)1 / (float10)*(float *)(in_stack_00000004[1].create_event + 0x2c);
    fVar19 = (float10)*(float *)(in_stack_00000004[1].actor_name + 4) * fVar18;
    crt_math_c_round_FUN_005fe6b0
              ((double)((float10)*(float *)in_stack_00000004[1].actor_name * fVar18));
    dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar19);
    iVar9 = (int)ROUND(dVar20);
    iVar5 = iVar9 + 1;
    in_stack_00000004[0x152].is_transparent = local_20;
    in_stack_00000004[0x152].field16_0x100 = iVar9;
    iVar6 = (extraout_EAX + 1) * iVar5;
    *(int *)(in_stack_00000004[1].create_event + 0x34) = iVar6;
    if (iVar6 < 0x3e9) break;
    *(float *)(in_stack_00000004[1].create_event + 0x2c) =
         *(float *)(in_stack_00000004[1].create_event + 0x2c) * (float)2;
  }
  iVar14 = 0;
  iVar6 = *(int *)(in_stack_00000004[1].actor_name + 4);
  if (0 < iVar5) {
    do {
      iVar10 = 0;
      if (0 < local_34) {
        local_1c = local_24 * 0x74 + iVar5;
        do {
          *(uint *)(local_14 + 0x14) = 0;
          *(int *)(local_14 + 0xc) = local_24;
          *(int *)(local_14 + 0x10) = local_30;
          if (((((iVar14 == 0) && (in_stack_00000004[1].location.position.z != 0.0)) ||
               ((iVar14 == extraout_EAX && (in_stack_00000004[1].orient.bank != 0.0)))) ||
              ((iVar10 == 0 && (in_stack_00000004[1].location.area_id != 0)))) ||
             ((iVar10 == extraout_EAX && (in_stack_00000004[1].orient.pitch != 0.0)))) {
            *(uint *)(local_14 + 0x68) = 1;
          }
          else {
            *(uint *)(local_14 + 0x68) = 0;
          }
          *(uint *)(local_14 + 0x70) = 0;
          if ((iVar10 == 0) && (iVar14 == 0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar10 == 0) && (iVar14 == iVar6)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar10 == iVar9) && (iVar14 == 0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar10 == local_48) && (iVar14 == local_44)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          *(uint *)(local_14 + 0x44) = 0;
          if (0 < iVar14) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < iVar10) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (iVar10 < extraout_EAX + 1) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar18 = (float10)252;
          fVar19 = (float10)65536;
          dVar20 = crt_math_c_round_FUN_005fe6b0
                             ((double)((((float10)*(float *)in_stack_00000004[1].actor_name *
                                         (float10)0.5 +
                                        (float10)*(float *)(local_14 + 0xc)) /
                                       (float10)*(float *)in_stack_00000004[1].actor_name) * fVar18
                                      * fVar19));
          local_14 = (int)ROUND(dVar20);
          *(int *)(extraout_EAX_00 + 0x18) = local_14 + 0x20000;
          local_1c = local_18 + 0x74;
          dVar20 = crt_math_c_round_FUN_005fe6b0
                             ((double)(fVar19 * ((float10)1 -
                                                (float10)*(float *)(extraout_EAX_00 + 0x10) /
                                                (float10)*(float *)(in_stack_00000004[1].actor_name
                                                                   + 4)) * fVar18));
          local_18 = (int)ROUND(dVar20);
          *(int *)(extraout_EAX_01 + 0x1c) = local_18 + 0x20000;
          local_24 = local_24 + 1;
          iVar10 = extraout_EDX;
        } while (extraout_EDX < local_34);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < extraout_EAX);
  }
  local_6c = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pCVar1 = (CDemonActorTransformState *)(in_stack_00000004[1].create_event + 0x38);
    local_64 = pCVar1;
    do {
      iVar9 = 0;
      if (0 < *(int *)((int)(local_64 + 2) + 0xc)) {
        pCVar11 = local_64;
        do {
          iVar5 = *(int *)((int)(pCVar11 + 2) + 0x10);
          fVar15 = (local_64->orientation).x - *(float *)((int)pCVar1 + iVar5 * 0x74 + 0xc);
          fVar3 = (local_64->orientation).y - *(float *)((int)pCVar1 + iVar5 * 0x74 + 0x10);
          fVar4 = (local_64->orientation).z - *(float *)((int)pCVar1 + iVar5 * 0x74 + 0x14);
          iVar9 = iVar9 + 1;
          ((CVector3i *)((int)(pCVar11 + 3) + 4))->x =
               (int)SQRT(fVar4 * fVar4 + fVar15 * fVar15 + fVar3 * fVar3);
          pCVar11 = (CDemonActorTransformState *)((int)&pCVar11->position + 4);
        } while (iVar9 < *(int *)((int)(local_64 + 2) + 0xc));
      }
      local_64 = (CDemonActorTransformState *)((int)(local_64 + 4) + 4);
      local_6c = local_6c + 1;
    } while (local_6c < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  iVar9 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pfVar7 = (float *)(in_stack_00000004[1].create_event + 0x44);
    do {
      pcVar12 = in_stack_00000004[1].create_event + iVar9 * 0x74 + 0x38;
      if ((float *)pcVar12 != pfVar7) {
        *(float *)pcVar12 = *pfVar7;
        *(float *)(pcVar12 + 4) = pfVar7[1];
        *(float *)(pcVar12 + 8) = pfVar7[2];
      }
      pcVar12[0x34] = '\0';
      pcVar12[0x35] = '\0';
      pcVar12[0x36] = '\0';
      pcVar12[0x37] = '\0';
      iVar9 = iVar9 + 1;
      *(uint *)(pcVar12 + 0x30) = *(uint *)(pcVar12 + 0x34);
      *(uint *)(pcVar12 + 0x2c) = *(uint *)(pcVar12 + 0x30);
      pfVar7 = pfVar7 + 0x1d;
    } while (iVar9 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  piVar8 = &in_stack_00000004[0x175].field11_0xdc;
  pCVar13 = in_stack_00000004[0x318].orient_matrix.m + 2;
  local_30 = 0;
  if (0 < in_stack_00000004[0x152].field16_0x100) {
    do {
      local_20 = 0;
      if (0 < in_stack_00000004[0x152].is_transparent) {
        do {
          piVar8[5] = 0;
          ((CVector3f *)(piVar8 + 1))->x = 4.2039e-45;
          fVar15 = (float)piVar8[5];
          ((CVector3f *)(piVar8 + 4))->x = fVar15;
          piVar8[3] = (int)fVar15;
          piVar8[2] = (int)fVar15;
          pCVar13->y = 4.2039e-45;
          *(uint *)((int)(pCVar13 + 1) + 8) = 0;
          fVar15 = *(float *)((int)(pCVar13 + 1) + 8);
          *(float *)((int)(pCVar13 + 1) + 4) = fVar15;
          pCVar13[1].x = fVar15;
          pCVar13->z = fVar15;
          iVar5 = (in_stack_00000004[0x152].is_transparent + 1) * local_30;
          fVar15 = (float)(local_20 + iVar5);
          piVar8[6] = (int)fVar15;
          piVar8[7] = *(int *)(in_stack_00000004[1].create_event + (int)fVar15 * 0x74 + 0x50);
          piVar8[8] = *(int *)(in_stack_00000004[1].create_event + (int)fVar15 * 0x74 + 0x54);
          piVar8[9] = (int)fVar15 + 1;
          piVar8[10] = *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                               (int)fVar15 * 0x74 + 0x14);
          ((CVector3i *)(piVar8 + 0xb))->x =
               *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                       (int)fVar15 * 0x74 + 0x18);
          iVar9 = in_stack_00000004[0x152].is_transparent;
          piVar8[0xc] = (int)fVar15 + 1 + iVar9 + 1;
          iVar9 = local_20 * 0x74 + iVar5 * 0x74 + iVar9 * 0x74 + 0xe8;
          piVar8[0xd] = *(int *)((int)&in_stack_00000004[2].orient_matrix + iVar9 + -0xcc);
          piVar8[0xe] = *(int *)(in_stack_00000004[2].create_event + iVar9 + -0x104);
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 0x1c);
          *(int *)(pCVar13 + 2) = piVar8[0xc];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 0xd];
          piVar16[(uint)bVar17 * -2 + 1] = (piVar8 + (uint)bVar17 * -2 + 0xd)[(uint)bVar17 * -2 + 1]
          ;
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 0x28);
          *(int *)(pCVar13 + 3) = piVar8[9];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 10];
          piVar16[(uint)bVar17 * -2 + 1] = (piVar8 + (uint)bVar17 * -2 + 10)[(uint)bVar17 * -2 + 1];
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 0x34);
          *(int *)(pCVar13 + 4) = piVar8[6];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 7];
          piVar16[(uint)bVar17 * -2 + 1] = (piVar8 + (uint)bVar17 * -2 + 7)[(uint)bVar17 * -2 + 1];
          (((CDemonActorTransformState *)(piVar8 + 0x13))->position).x = 4.2039e-45;
          piVar8[0x17] = 0;
          fVar15 = (float)piVar8[0x17];
          ((CVector3f *)(piVar8 + 0x16))->x = fVar15;
          piVar8[0x15] = (int)fVar15;
          piVar8[0x14] = (int)fVar15;
          *(uint *)((int)(pCVar13 + 6) + 4) = 3;
          *(uint *)((int)(pCVar13 + 7) + 8) = 0;
          uVar2 = *(uint *)((int)(pCVar13 + 7) + 8);
          *(uint *)((int)(pCVar13 + 7) + 4) = uVar2;
          pCVar13[7].x = uVar2;
          *(uint *)((int)(pCVar13 + 6) + 8) = uVar2;
          iVar6 = (in_stack_00000004[0x152].is_transparent + 1) * local_30;
          fVar15 = (float)(iVar6 + local_20);
          piVar8[0x18] = (int)fVar15;
          piVar8[0x19] = *(int *)(in_stack_00000004[1].create_event + (int)fVar15 * 0x74 + 0x50);
          piVar8[0x1a] = *(int *)(in_stack_00000004[1].create_event + (int)fVar15 * 0x74 + 0x54);
          iVar9 = in_stack_00000004[0x152].is_transparent;
          iVar14 = (int)fVar15 + iVar9 + 2;
          piVar8[0x1b] = iVar14;
          iVar5 = iVar6 * 0x74 + local_20 * 0x74 + iVar9 * 0x74 + 0xe8;
          piVar8[0x1c] = (int)*(CDemonActor **)
                               ((int)&in_stack_00000004[2].orient_matrix + iVar5 + -0xcc);
          piVar8[0x1d] = *(int *)(in_stack_00000004[2].create_event + iVar5 + -0x104);
          piVar8[0x1e] = (int)(iVar14 + -1);
          iVar9 = iVar6 * 0x74 + local_20 * 0x74 + iVar9 * 0x74;
          piVar8[0x1f] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar9 + 0x14);
          piVar8[0x20] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar9 + 0x18);
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 100);
          *(CDemonActor_vtable **)(pCVar13 + 8) = (CDemonActor_vtable *)piVar8[0x1e];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 0x1f];
          piVar16[(uint)bVar17 * -2 + 1] =
               (piVar8 + (uint)bVar17 * -2 + 0x1f)[(uint)bVar17 * -2 + 1];
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 0x70);
          *(int *)(pCVar13 + 9) = piVar8[0x1b];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 0x1c];
          piVar16[(uint)bVar17 * -2 + 1] =
               (piVar8 + (uint)bVar17 * -2 + 0x1c)[(uint)bVar17 * -2 + 1];
          piVar16 = (int *)((int)pCVar13 + (uint)bVar17 * -8 + 0x7c);
          *(int *)(pCVar13 + 10) = piVar8[0x18];
          *piVar16 = piVar8[(uint)bVar17 * -2 + 0x19];
          piVar16[(uint)bVar17 * -2 + 1] =
               (piVar8 + (uint)bVar17 * -2 + 0x19)[(uint)bVar17 * -2 + 1];
          piVar8 = piVar8 + 0x24;
          pCVar13 = pCVar13 + 0xc;
          local_20 = local_20 + 1;
        } while (local_20 < in_stack_00000004[0x152].is_transparent);
      }
      local_30 = local_30 + 1;
    } while (local_30 < in_stack_00000004[0x152].field16_0x100);
  }
  core_curtain_cpp_FUN_00449e40();
  in_stack_00000004->is_transparent = (uint)((int)in_stack_00000004[1].location.position.y < 0xfde9)
  ;
  return;
}
