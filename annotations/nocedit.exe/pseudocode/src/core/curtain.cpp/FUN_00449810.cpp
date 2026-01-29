// Name: core_curtain.cpp_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: unknown
// Signature: void core_curtain_cpp_FUN_00449810(void)

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_00449810(uint param_1) */

void core_curtain_cpp_FUN_00449810(void)

{
  CDemonActorTransformState *pCVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CDemonActorTransformState *pCVar13;
  char *pcVar14;
  CVector3f *pCVar15;
  int iVar16;
  float fVar17;
  int *piVar18;
  byte bVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
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
  
  bVar19 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  while( true ) {
    fVar4 = 1.0 / *(float *)(in_stack_00000004[1].create_event + 0x2c);
    fVar17 = *(float *)(in_stack_00000004[1].actor_name + 4);
    dVar22 = round
                       ((double)(*(float *)in_stack_00000004[1].actor_name * fVar4));
    iVar10 = (int)ROUND(dVar22);
    dVar22 = round((double)(fVar17 * fVar4));
    iVar11 = (int)ROUND(dVar22);
    iVar6 = iVar11 + 1;
    in_stack_00000004[0x152].is_transparent = local_20;
    in_stack_00000004[0x152].unk6 = iVar11;
    iVar7 = (iVar10 + 1) * iVar6;
    *(int *)(in_stack_00000004[1].create_event + 0x34) = iVar7;
    if (iVar7 < 0x3e9) break;
    *(float *)(in_stack_00000004[1].create_event + 0x2c) =
         *(float *)(in_stack_00000004[1].create_event + 0x2c) * (float)2;
  }
  iVar16 = 0;
  iVar7 = *(int *)(in_stack_00000004[1].actor_name + 4);
  if (0 < iVar6) {
    do {
      iVar12 = 0;
      if (0 < local_34) {
        local_1c = local_24 * 0x74 + iVar6;
        do {
          *(uint *)(local_14 + 0x14) = 0;
          *(int *)(local_14 + 0xc) = local_24;
          *(int *)(local_14 + 0x10) = local_30;
          if (((((iVar16 == 0) && (in_stack_00000004[1].location.position.z != 0.0)) ||
               ((iVar16 == iVar10 && (in_stack_00000004[1].orient.bank != 0.0)))) ||
              ((iVar12 == 0 && (in_stack_00000004[1].location.area_id != 0)))) ||
             ((iVar12 == iVar10 && (in_stack_00000004[1].orient.pitch != 0.0)))) {
            *(uint *)(local_14 + 0x68) = 1;
          }
          else {
            *(uint *)(local_14 + 0x68) = 0;
          }
          *(uint *)(local_14 + 0x70) = 0;
          if ((iVar12 == 0) && (iVar16 == 0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar12 == 0) && (iVar16 == iVar7)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar12 == iVar11) && (iVar16 == 0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((iVar12 == local_48) && (iVar16 == local_44)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          *(uint *)(local_14 + 0x44) = 0;
          if (0 < iVar16) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < iVar12) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (iVar12 < iVar10 + 1) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar20 = (float10)252;
          fVar21 = (float10)65536;
          dVar22 = round
                             ((double)((((float10)*(float *)in_stack_00000004[1].actor_name *
                                         (float10)0.5 +
                                        (float10)*(float *)(local_14 + 0xc)) /
                                       (float10)*(float *)in_stack_00000004[1].actor_name) * fVar20
                                      * fVar21));
          iVar2 = (int)ROUND(dVar22);
          *(int *)(local_14 + 0x18) = iVar2 + 0x20000;
          iVar12 = iVar12 + 1;
          local_1c = local_18 + 0x74;
          dVar22 = round
                             ((double)(fVar21 * ((float10)1 -
                                                (float10)*(float *)(local_14 + 0x10) /
                                                (float10)*(float *)(in_stack_00000004[1].actor_name
                                                                   + 4)) * fVar20));
          local_18 = (int)ROUND(dVar22);
          *(int *)(local_14 + 0x1c) = local_18 + 0x20000;
          local_24 = local_24 + 1;
          local_14 = iVar2;
        } while (iVar12 < local_34);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar10);
  }
  local_6c = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pCVar1 = (CDemonActorTransformState *)(in_stack_00000004[1].create_event + 0x38);
    local_64 = pCVar1;
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)(local_64 + 2) + 0xc)) {
        pCVar13 = local_64;
        do {
          iVar11 = *(int *)((int)(pCVar13 + 2) + 0x10);
          fVar17 = (local_64->orientation).x - *(float *)((int)pCVar1 + iVar11 * 0x74 + 0xc);
          fVar4 = (local_64->orientation).y - *(float *)((int)pCVar1 + iVar11 * 0x74 + 0x10);
          fVar5 = (local_64->orientation).z - *(float *)((int)pCVar1 + iVar11 * 0x74 + 0x14);
          iVar10 = iVar10 + 1;
          ((CVector3i *)((int)(pCVar13 + 3) + 4))->x =
               (int)SQRT(fVar5 * fVar5 + fVar17 * fVar17 + fVar4 * fVar4);
          pCVar13 = (CDemonActorTransformState *)((int)&pCVar13->position + 4);
        } while (iVar10 < *(int *)((int)(local_64 + 2) + 0xc));
      }
      local_64 = (CDemonActorTransformState *)((int)(local_64 + 4) + 4);
      local_6c = local_6c + 1;
    } while (local_6c < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pfVar8 = (float *)(in_stack_00000004[1].create_event + 0x44);
    do {
      pcVar14 = in_stack_00000004[1].create_event + iVar10 * 0x74 + 0x38;
      if ((float *)pcVar14 != pfVar8) {
        *(float *)pcVar14 = *pfVar8;
        *(float *)(pcVar14 + 4) = pfVar8[1];
        *(float *)(pcVar14 + 8) = pfVar8[2];
      }
      pcVar14[0x34] = '\0';
      pcVar14[0x35] = '\0';
      pcVar14[0x36] = '\0';
      pcVar14[0x37] = '\0';
      iVar10 = iVar10 + 1;
      *(uint *)(pcVar14 + 0x30) = *(uint *)(pcVar14 + 0x34);
      *(uint *)(pcVar14 + 0x2c) = *(uint *)(pcVar14 + 0x30);
      pfVar8 = pfVar8 + 0x1d;
    } while (iVar10 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  piVar9 = &in_stack_00000004[0x175].unk2;
  pCVar15 = in_stack_00000004[0x318].orient_matrix.m + 2;
  local_30 = 0;
  if (0 < in_stack_00000004[0x152].unk6) {
    do {
      local_20 = 0;
      if (0 < in_stack_00000004[0x152].is_transparent) {
        do {
          piVar9[5] = 0;
          ((CVector3f *)(piVar9 + 1))->x = 4.2039e-45;
          fVar17 = (float)piVar9[5];
          ((CVector3f *)(piVar9 + 4))->x = fVar17;
          piVar9[3] = (int)fVar17;
          piVar9[2] = (int)fVar17;
          pCVar15->y = 4.2039e-45;
          *(uint *)((int)(pCVar15 + 1) + 8) = 0;
          fVar17 = *(float *)((int)(pCVar15 + 1) + 8);
          *(float *)((int)(pCVar15 + 1) + 4) = fVar17;
          pCVar15[1].x = fVar17;
          pCVar15->z = fVar17;
          iVar11 = (in_stack_00000004[0x152].is_transparent + 1) * local_30;
          fVar17 = (float)(local_20 + iVar11);
          piVar9[6] = (int)fVar17;
          piVar9[7] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x50);
          piVar9[8] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x54);
          piVar9[9] = (int)fVar17 + 1;
          piVar9[10] = *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                               (int)fVar17 * 0x74 + 0x14);
          ((CVector3i *)(piVar9 + 0xb))->x =
               *(int *)((int)&in_stack_00000004[1].previous_transform_state +
                       (int)fVar17 * 0x74 + 0x18);
          iVar10 = in_stack_00000004[0x152].is_transparent;
          piVar9[0xc] = (int)fVar17 + 1 + iVar10 + 1;
          iVar10 = local_20 * 0x74 + iVar11 * 0x74 + iVar10 * 0x74 + 0xe8;
          piVar9[0xd] = *(int *)((int)&in_stack_00000004[2].orient_matrix + iVar10 + -0xcc);
          piVar9[0xe] = *(int *)(in_stack_00000004[2].create_event + iVar10 + -0x104);
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 0x1c);
          *(int *)(pCVar15 + 2) = piVar9[0xc];
          *piVar18 = piVar9[(uint)bVar19 * -2 + 0xd];
          piVar18[(uint)bVar19 * -2 + 1] = (piVar9 + (uint)bVar19 * -2 + 0xd)[(uint)bVar19 * -2 + 1]
          ;
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 0x28);
          *(int *)(pCVar15 + 3) = piVar9[9];
          *piVar18 = piVar9[(uint)bVar19 * -2 + 10];
          piVar18[(uint)bVar19 * -2 + 1] = (piVar9 + (uint)bVar19 * -2 + 10)[(uint)bVar19 * -2 + 1];
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 0x34);
          *(int *)(pCVar15 + 4) = piVar9[6];
          *piVar18 = piVar9[(uint)bVar19 * -2 + 7];
          piVar18[(uint)bVar19 * -2 + 1] = (piVar9 + (uint)bVar19 * -2 + 7)[(uint)bVar19 * -2 + 1];
          (((CDemonActorTransformState *)(piVar9 + 0x13))->position).x = 4.2039e-45;
          piVar9[0x17] = 0;
          fVar17 = (float)piVar9[0x17];
          ((CVector3f *)(piVar9 + 0x16))->x = fVar17;
          piVar9[0x15] = (int)fVar17;
          piVar9[0x14] = (int)fVar17;
          *(uint *)((int)(pCVar15 + 6) + 4) = 3;
          *(uint *)((int)(pCVar15 + 7) + 8) = 0;
          uVar3 = *(uint *)((int)(pCVar15 + 7) + 8);
          *(uint *)((int)(pCVar15 + 7) + 4) = uVar3;
          pCVar15[7].x = uVar3;
          *(uint *)((int)(pCVar15 + 6) + 8) = uVar3;
          iVar6 = (in_stack_00000004[0x152].is_transparent + 1) * local_30;
          fVar17 = (float)(iVar6 + local_20);
          piVar9[0x18] = (int)fVar17;
          piVar9[0x19] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x50);
          piVar9[0x1a] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x54);
          iVar10 = in_stack_00000004[0x152].is_transparent;
          iVar7 = (int)fVar17 + iVar10 + 2;
          piVar9[0x1b] = iVar7;
          iVar11 = iVar6 * 0x74 + local_20 * 0x74 + iVar10 * 0x74 + 0xe8;
          piVar9[0x1c] = (int)*(CDemonActor **)
                               ((int)&in_stack_00000004[2].orient_matrix + iVar11 + -0xcc);
          piVar9[0x1d] = *(int *)(in_stack_00000004[2].create_event + iVar11 + -0x104);
          ((CDemonActor_union_vtable *)(piVar9 + 0x1e))->_ub = (CDemonActor_vtable *)(iVar7 + -1);
          iVar10 = iVar6 * 0x74 + local_20 * 0x74 + iVar10 * 0x74;
          piVar9[0x1f] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar10 + 0x14);
          piVar9[0x20] = *(uint *)
                          ((int)&in_stack_00000004[1].previous_transform_state + iVar10 + 0x18);
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 100);
          *(CDemonActor_union_vtable *)(pCVar15 + 8) = *(CDemonActor_union_vtable *)(piVar9 + 0x1e);
          *piVar18 = piVar9[(uint)bVar19 * -2 + 0x1f];
          piVar18[(uint)bVar19 * -2 + 1] =
               (piVar9 + (uint)bVar19 * -2 + 0x1f)[(uint)bVar19 * -2 + 1];
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 0x70);
          *(int *)(pCVar15 + 9) = piVar9[0x1b];
          *piVar18 = piVar9[(uint)bVar19 * -2 + 0x1c];
          piVar18[(uint)bVar19 * -2 + 1] =
               (piVar9 + (uint)bVar19 * -2 + 0x1c)[(uint)bVar19 * -2 + 1];
          piVar18 = (int *)((int)pCVar15 + (uint)bVar19 * -8 + 0x7c);
          *(int *)(pCVar15 + 10) = piVar9[0x18];
          *piVar18 = piVar9[(uint)bVar19 * -2 + 0x19];
          piVar18[(uint)bVar19 * -2 + 1] =
               (piVar9 + (uint)bVar19 * -2 + 0x19)[(uint)bVar19 * -2 + 1];
          piVar9 = piVar9 + 0x24;
          pCVar15 = pCVar15 + 0xc;
          local_20 = local_20 + 1;
        } while (local_20 < in_stack_00000004[0x152].is_transparent);
      }
      local_30 = local_30 + 1;
    } while (local_30 < in_stack_00000004[0x152].unk6);
  }
  core_curtain_cpp_FUN_00449e40();
  in_stack_00000004->is_transparent = (uint)((int)in_stack_00000004[1].location.position.y < 0xfde9)
  ;
  return;
}
