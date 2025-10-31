// Name: core_curtain.cpp_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449810()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_curtain.cpp_FUN_00449810(undefined4 param_1) */

void core_curtain_cpp_FUN_00449810(void)

{
  CDemonActorClassMetadata *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int extraout_EAX;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  undefined4 extraout_EDX;
  undefined4 uVar11;
  float fVar12;
  CDemonActorClassMetadata *pCVar13;
  char *pcVar14;
  CVector3f *pCVar15;
  int unaff_EBP;
  int unaff_ESI;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  byte bVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  double dVar25;
  CDemonActor *in_stack_00000004;
  float local_6c;
  int local_68;
  int local_64;
  CDemonActorClassMetadata *local_5c;
  float local_30;
  int local_2c;
  int local_28;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar21 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  iVar7 = extraout_EAX;
  uVar11 = extraout_EDX;
  while( true ) {
    fVar22 = (float10)1 / (float10)*(float *)(in_stack_00000004[1].create_event + 0x2c);
    fVar23 = (float10)*(float *)in_stack_00000004[1].actor_name * fVar22;
    fVar22 = (float10)*(float *)(in_stack_00000004[1].actor_name + 4) * fVar22;
    dVar25 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar11,iVar7));
    dVar25 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(int)ROUND(fVar23)));
    uVar11 = (undefined4)((ulonglong)dVar25 >> 0x20);
    fVar5 = SUB84(dVar25,0);
    fVar17 = (float)(int)ROUND(fVar22);
    fVar6 = (float)((int)fVar17 + 1);
    in_stack_00000004[0x152].is_transparent = unaff_ESI;
    in_stack_00000004[0x152].field16_0x100 = (int)fVar17;
    iVar7 = ((int)fVar5 + 1) * (int)fVar6;
    *(int *)(in_stack_00000004[1].create_event + 0x34) = iVar7;
    if (iVar7 < 0x3e9) break;
    *(float *)(in_stack_00000004[1].create_event + 0x2c) =
         *(float *)(in_stack_00000004[1].create_event + 0x2c) * (float)_DAT_00619bea;
  }
  fVar2 = *(float *)in_stack_00000004[1].actor_name;
  fVar16 = 0.0;
  if (0 < (int)fVar6) {
    do {
      fVar3 = *(float *)in_stack_00000004[1].actor_name;
      fVar4 = (float)_DAT_00619bf2;
      fVar12 = 0.0;
      if (0 < local_2c) {
        local_14 = local_1c * 0x74 + local_68;
        local_20 = (float)(local_1c - local_2c);
        do {
          *(undefined4 *)(local_14 + 0x14) = 0;
          *(float *)(local_14 + 0xc) = -fVar3 * fVar4;
          *(float *)(local_14 + 0x10) = local_30;
          if (((((fVar16 == 0.0) && (in_stack_00000004[1].location.position.z != 0.0)) ||
               ((fVar16 == fVar2 / (float)(int)fVar5 && (in_stack_00000004[1].orient.bank != 0.0))))
              || ((fVar12 == 0.0 && (in_stack_00000004[1].location.area_id != 0)))) ||
             ((fVar12 == fVar6 && (in_stack_00000004[1].orient.pitch != 0.0)))) {
            *(undefined4 *)(local_14 + 0x68) = 1;
          }
          else {
            *(undefined4 *)(local_14 + 0x68) = 0;
          }
          *(undefined4 *)(local_14 + 0x70) = 0;
          if ((fVar12 == 0.0) && (fVar16 == 0.0)) {
            *(undefined4 *)(local_14 + 0x70) = 1;
          }
          if ((fVar12 == 0.0) && (fVar16 == fVar5)) {
            *(undefined4 *)(local_14 + 0x70) = 1;
          }
          if ((fVar12 == fVar5) && (fVar16 == 0.0)) {
            *(undefined4 *)(local_14 + 0x70) = 1;
          }
          if ((fVar12 == fVar5) && (fVar16 == fVar17)) {
            *(undefined4 *)(local_14 + 0x70) = 1;
          }
          *(undefined4 *)(local_14 + 0x44) = 0;
          if (0 < (int)fVar16) {
            *(float *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < (int)fVar12) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if ((int)fVar12 < (int)fVar17) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar23 = (float10)_DAT_00619bfa;
          fVar24 = (float10)_DAT_00619c02;
          fVar22 = (((float10)*(float *)in_stack_00000004[1].actor_name * (float10)_DAT_00619bf2 +
                    (float10)*(float *)(local_14 + 0xc)) /
                   (float10)*(float *)in_stack_00000004[1].actor_name) * fVar23 * fVar24;
          dVar25 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(fVar12,local_14));
          iVar7 = SUB84(dVar25,0);
          *(int *)(iVar7 + 0x18) = (int)ROUND(fVar22) + 0x20000;
          fVar24 = fVar24 * ((float10)1 -
                            (float10)*(float *)(iVar7 + 0x10) /
                            (float10)*(float *)(in_stack_00000004[1].actor_name + 4)) * fVar23;
          local_14 = unaff_EBP + 0x74;
          dVar25 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20) + 1,iVar7));
          fVar12 = (float)((ulonglong)dVar25 >> 0x20);
          unaff_EBP = (int)ROUND(fVar24);
          *(int *)(SUB84(dVar25,0) + 0x1c) = unaff_EBP + 0x20000;
          local_20 = (float)((int)(local_20 + fVar5) + 1);
          local_1c = local_1c + 1;
        } while ((int)fVar12 < local_2c);
      }
      local_30 = local_30 - local_6c;
      fVar16 = (float)((int)fVar16 + 1);
    } while ((int)fVar16 < (int)(in_stack_00000004[1].create_event + 0x38));
  }
  local_64 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pCVar1 = (CDemonActorClassMetadata *)(in_stack_00000004[1].create_event + 0x38);
    local_5c = pCVar1;
    do {
      iVar7 = 0;
      if (0 < *(int *)((int)(local_5c + 1) + 0x14)) {
        pCVar13 = local_5c;
        do {
          iVar10 = *(int *)((int)(pCVar13 + 1) + 0x18);
          fVar17 = (local_5c->runtime_vector2).x - *(float *)((int)pCVar1 + iVar10 * 0x74 + 0xc);
          fVar5 = ((CVector3f *)((int)&local_5c->runtime_vector2 + 4))->x -
                  *(float *)((int)pCVar1 + iVar10 * 0x74 + 0x10);
          fVar6 = *(float *)((int)&local_5c->runtime_vector2 + 8) -
                  *(float *)((int)pCVar1 + iVar10 * 0x74 + 0x14);
          iVar7 = iVar7 + 1;
          ((CVector3i *)((int)(pCVar13 + 1) + 0x28))->x =
               (int)SQRT(fVar6 * fVar6 + fVar17 * fVar17 + fVar5 * fVar5);
          pCVar13 = (CDemonActorClassMetadata *)((int)&pCVar13->runtime_vector1 + 4);
        } while (iVar7 < *(int *)((int)(local_5c + 1) + 0x14));
      }
      local_5c = (CDemonActorClassMetadata *)((int)(local_5c + 2) + 0x14);
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    pfVar8 = (float *)(in_stack_00000004[1].create_event + 0x44);
    do {
      pcVar14 = in_stack_00000004[1].create_event + iVar7 * 0x74 + 0x38;
      if ((float *)pcVar14 != pfVar8) {
        *(float *)pcVar14 = *pfVar8;
        *(float *)(pcVar14 + 4) = pfVar8[1];
        *(float *)(pcVar14 + 8) = pfVar8[2];
      }
      pcVar14[0x34] = '\0';
      pcVar14[0x35] = '\0';
      pcVar14[0x36] = '\0';
      pcVar14[0x37] = '\0';
      iVar7 = iVar7 + 1;
      *(undefined4 *)(pcVar14 + 0x30) = *(undefined4 *)(pcVar14 + 0x34);
      *(undefined4 *)(pcVar14 + 0x2c) = *(undefined4 *)(pcVar14 + 0x30);
      pfVar8 = pfVar8 + 0x1d;
    } while (iVar7 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  piVar9 = &in_stack_00000004[0x175].field11_0xdc;
  pCVar15 = in_stack_00000004[0x318].orient_matrix.m + 2;
  local_28 = 0;
  if (0 < in_stack_00000004[0x152].field16_0x100) {
    do {
      local_18 = 0;
      if (0 < in_stack_00000004[0x152].is_transparent) {
        do {
          piVar9[5] = 0;
          ((CVector3f *)(piVar9 + 1))->x = 4.2039e-45;
          fVar17 = (float)piVar9[5];
          ((CVector3f *)(piVar9 + 4))->x = fVar17;
          piVar9[3] = (int)fVar17;
          piVar9[2] = (int)fVar17;
          pCVar15->y = 4.2039e-45;
          *(undefined4 *)((int)(pCVar15 + 1) + 8) = 0;
          fVar17 = *(float *)((int)(pCVar15 + 1) + 8);
          *(float *)((int)(pCVar15 + 1) + 4) = fVar17;
          pCVar15[1].x = fVar17;
          pCVar15->z = fVar17;
          iVar10 = (in_stack_00000004[0x152].is_transparent + 1) * local_28;
          fVar17 = (float)(local_18 + iVar10);
          piVar9[6] = (int)fVar17;
          piVar9[7] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x50);
          piVar9[8] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x54);
          piVar9[9] = (int)fVar17 + 1;
          piVar9[10] = *(int *)((int)&in_stack_00000004[1].metadata + (int)fVar17 * 0x74 + 0x14);
          ((CVector3i *)(piVar9 + 0xb))->x =
               *(int *)((int)&in_stack_00000004[1].metadata + (int)fVar17 * 0x74 + 0x18);
          iVar7 = in_stack_00000004[0x152].is_transparent;
          piVar9[0xc] = (int)fVar17 + 1 + iVar7 + 1;
          iVar7 = local_18 * 0x74 + iVar10 * 0x74 + iVar7 * 0x74 + 0xe8;
          piVar9[0xd] = *(int *)((int)&in_stack_00000004[2].orient_matrix + iVar7 + -0xcc);
          piVar9[0xe] = *(int *)(in_stack_00000004[2].create_event + iVar7 + -0x104);
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 0x1c);
          *(int *)(pCVar15 + 2) = piVar9[0xc];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 0xd];
          piVar20[(uint)bVar21 * -2 + 1] = (piVar9 + (uint)bVar21 * -2 + 0xd)[(uint)bVar21 * -2 + 1]
          ;
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 0x28);
          *(int *)(pCVar15 + 3) = piVar9[9];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 10];
          piVar20[(uint)bVar21 * -2 + 1] = (piVar9 + (uint)bVar21 * -2 + 10)[(uint)bVar21 * -2 + 1];
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 0x34);
          *(int *)(pCVar15 + 4) = piVar9[6];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 7];
          piVar20[(uint)bVar21 * -2 + 1] = (piVar9 + (uint)bVar21 * -2 + 7)[(uint)bVar21 * -2 + 1];
          (((CDemonActorClassMetadata *)(piVar9 + 0x13))->runtime_vector1).x = 4.2039e-45;
          piVar9[0x17] = 0;
          fVar17 = (float)piVar9[0x17];
          ((CVector3f *)(piVar9 + 0x16))->x = fVar17;
          piVar9[0x15] = (int)fVar17;
          piVar9[0x14] = (int)fVar17;
          *(undefined4 *)((int)(pCVar15 + 6) + 4) = 3;
          *(undefined4 *)((int)(pCVar15 + 7) + 8) = 0;
          uVar11 = *(undefined4 *)((int)(pCVar15 + 7) + 8);
          *(undefined4 *)((int)(pCVar15 + 7) + 4) = uVar11;
          pCVar15[7].x = uVar11;
          *(undefined4 *)((int)(pCVar15 + 6) + 8) = uVar11;
          iVar18 = (in_stack_00000004[0x152].is_transparent + 1) * local_28;
          fVar17 = (float)(iVar18 + local_18);
          piVar9[0x18] = (int)fVar17;
          piVar9[0x19] = *(int *)(in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x50);
          piVar9[0x1a] = *(undefined4 *)
                          (in_stack_00000004[1].create_event + (int)fVar17 * 0x74 + 0x54);
          iVar7 = in_stack_00000004[0x152].is_transparent;
          iVar19 = (int)fVar17 + iVar7 + 2;
          piVar9[0x1b] = iVar19;
          iVar10 = iVar18 * 0x74 + local_18 * 0x74 + iVar7 * 0x74 + 0xe8;
          piVar9[0x1c] = (int)*(CDemonActor **)
                               ((int)&in_stack_00000004[2].orient_matrix + iVar10 + -0xcc);
          piVar9[0x1d] = *(undefined4 *)(in_stack_00000004[2].create_event + iVar10 + -0x104);
          piVar9[0x1e] = (int)(iVar19 + -1);
          iVar7 = iVar18 * 0x74 + local_18 * 0x74 + iVar7 * 0x74;
          piVar9[0x1f] = *(undefined4 *)((int)&in_stack_00000004[1].metadata + iVar7 + 0x14);
          piVar9[0x20] = *(undefined4 *)((int)&in_stack_00000004[1].metadata + iVar7 + 0x18);
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 100);
          *(CDemonActor_vtable **)(pCVar15 + 8) = (CDemonActor_vtable *)piVar9[0x1e];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 0x1f];
          piVar20[(uint)bVar21 * -2 + 1] =
               (piVar9 + (uint)bVar21 * -2 + 0x1f)[(uint)bVar21 * -2 + 1];
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 0x70);
          *(int *)(pCVar15 + 9) = piVar9[0x1b];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 0x1c];
          piVar20[(uint)bVar21 * -2 + 1] =
               (piVar9 + (uint)bVar21 * -2 + 0x1c)[(uint)bVar21 * -2 + 1];
          piVar20 = (int *)((int)pCVar15 + (uint)bVar21 * -8 + 0x7c);
          *(int *)(pCVar15 + 10) = piVar9[0x18];
          *piVar20 = piVar9[(uint)bVar21 * -2 + 0x19];
          piVar20[(uint)bVar21 * -2 + 1] =
               (piVar9 + (uint)bVar21 * -2 + 0x19)[(uint)bVar21 * -2 + 1];
          piVar9 = piVar9 + 0x24;
          pCVar15 = pCVar15 + 0xc;
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


// Assembly code:
// 00449810: PUSH EBX
//   Label: core_curtain.cpp_FUN_00449810
// 00449811: PUSH ESI
// 00449812: PUSH EDI
// 00449813: PUSH EBP
// 00449814: MOV EBP,ESP
// 00449816: SUB ESP,0x78
// 00449819: AND ESP,0xfffffff8
// 0044981c: MOV EBX,dword ptr [EBP + 0x14]
// 0044981f: PUSH EBX
// 00449820: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
