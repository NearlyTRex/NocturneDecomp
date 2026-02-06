// Name: core_curtain.cpp_CCurtain_setup_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  SCurtainVertex *pSVar9;
  SCurtainVertex *pSVar10;
  char *pcVar11;
  float fVar12;
  int iVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  int local_6c;
  SCurtainVertex *local_64;
  float local_48;
  float local_44;
  int local_34;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)this_ptr->unk1);
  while( true ) {
    fVar3 = 1.0 / this_ptr->patch_size;
    fVar2 = (this_ptr->curtain_size).y;
    dVar18 = round((double)((this_ptr->curtain_size).x * fVar3));
    fVar1 = (float)(int)ROUND(dVar18);
    dVar18 = round((double)(fVar2 * fVar3));
    fVar2 = (float)(int)ROUND(dVar18);
    iVar5 = (int)fVar2 + 1;
    *(int *)(this_ptr->unk4 + 4) = local_20;
    *(float *)(this_ptr->unk4 + 8) = fVar2;
    iVar6 = ((int)fVar1 + 1) * iVar5;
    this_ptr->unk2 = iVar6;
    if (iVar6 < 0x3e9) break;
    this_ptr->patch_size = this_ptr->patch_size * (float)2;
  }
  fVar12 = 0.0;
  fVar3 = (this_ptr->curtain_size).y;
  if (0 < iVar5) {
    do {
      fVar8 = 0.0;
      if (0 < local_34) {
        local_1c = local_24 * 0x74 + iVar5;
        do {
          *(uint *)(local_14 + 0x14) = 0;
          *(int *)(local_14 + 0xc) = local_24;
          *(int *)(local_14 + 0x10) = local_30;
          if (((((fVar12 == 0.0) && (this_ptr->cinched_top != 0)) ||
               ((fVar12 == fVar1 && (this_ptr->cinched_bottom != 0)))) ||
              ((fVar8 == 0.0 && (this_ptr->cinched_left != 0)))) ||
             ((fVar8 == fVar1 && (this_ptr->cinched_right != 0)))) {
            *(uint *)(local_14 + 0x68) = 1;
          }
          else {
            *(uint *)(local_14 + 0x68) = 0;
          }
          *(uint *)(local_14 + 0x70) = 0;
          if ((fVar8 == 0.0) && (fVar12 == 0.0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar8 == 0.0) && (fVar12 == fVar3)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar8 == fVar2) && (fVar12 == 0.0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar8 == local_48) && (fVar12 == local_44)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          *(uint *)(local_14 + 0x44) = 0;
          if (0 < (int)fVar12) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < (int)fVar8) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if ((int)fVar8 < (int)fVar1 + 1) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar15 = (float10)(this_ptr->curtain_size).x;
          fVar16 = (float10)252;
          fVar17 = (float10)65536;
          dVar18 = round
                             ((double)(((fVar15 * (float10)0.5 +
                                        (float10)*(float *)(local_14 + 0xc)) / fVar15) * fVar16 *
                                      fVar17));
          iVar6 = (int)ROUND(dVar18);
          *(int *)(local_14 + 0x18) = iVar6 + 0x20000;
          fVar8 = (float)((int)fVar8 + 1);
          local_1c = local_18 + 0x74;
          dVar18 = round
                             ((double)(fVar17 * ((float10)1 -
                                                (float10)*(float *)(local_14 + 0x10) /
                                                (float10)(this_ptr->curtain_size).y) * fVar16));
          local_18 = (int)ROUND(dVar18);
          *(int *)(local_14 + 0x1c) = local_18 + 0x20000;
          local_24 = local_24 + 1;
          local_14 = iVar6;
        } while ((int)fVar8 < local_34);
      }
      fVar12 = (float)((int)fVar12 + 1);
    } while ((int)fVar12 < (int)fVar1);
  }
  local_6c = 0;
  if (0 < this_ptr->unk2) {
    pSVar10 = this_ptr->unk3;
    local_64 = pSVar10;
    do {
      iVar5 = 0;
      if (0 < *(int *)(local_64->unk + 0x44)) {
        pSVar9 = local_64;
        do {
          iVar6 = *(int *)(pSVar9->unk + 0x48);
          fVar1 = *(float *)(local_64->unk + 0xc) - *(float *)(pSVar10[iVar6].unk + 0xc);
          fVar2 = *(float *)(local_64->unk + 0x10) - *(float *)(pSVar10[iVar6].unk + 0x10);
          fVar3 = *(float *)(local_64->unk + 0x14) - *(float *)(pSVar10[iVar6].unk + 0x14);
          iVar5 = iVar5 + 1;
          *(float *)(pSVar9->unk + 0x58) = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          pSVar9 = (SCurtainVertex *)(pSVar9->unk + 4);
        } while (iVar5 < *(int *)(local_64->unk + 0x44));
      }
      local_64 = local_64 + 1;
      local_6c = local_6c + 1;
    } while (local_6c < this_ptr->unk2);
  }
  iVar5 = 0;
  if (0 < this_ptr->unk2) {
    pcVar7 = this_ptr->unk3[0].unk + 0xc;
    do {
      pSVar10 = this_ptr->unk3 + iVar5;
      if (pSVar10 != (SCurtainVertex *)pcVar7) {
        *(uint *)pSVar10->unk = *(uint *)pcVar7;
        *(uint *)(pSVar10->unk + 4) = *(uint *)(pcVar7 + 4);
        *(uint *)(pSVar10->unk + 8) = *(uint *)(pcVar7 + 8);
      }
      pSVar10->unk[0x34] = '\0';
      pSVar10->unk[0x35] = '\0';
      pSVar10->unk[0x36] = '\0';
      pSVar10->unk[0x37] = '\0';
      iVar5 = iVar5 + 1;
      *(uint *)(pSVar10->unk + 0x30) = *(uint *)(pSVar10->unk + 0x34);
      *(uint *)(pSVar10->unk + 0x2c) = *(uint *)(pSVar10->unk + 0x30);
      pcVar7 = pcVar7 + 0x74;
    } while (iVar5 < this_ptr->unk2);
  }
  pcVar7 = this_ptr->unk4 + 0x2eec;
  pcVar11 = this_ptr->unk4 + 0x2616c;
  local_30 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 8)) {
    do {
      local_20 = 0;
      if (0 < *(int *)(this_ptr->unk4 + 4)) {
        do {
          pcVar7[0x14] = '\0';
          pcVar7[0x15] = '\0';
          pcVar7[0x16] = '\0';
          pcVar7[0x17] = '\0';
          pcVar7[4] = '\x03';
          pcVar7[5] = '\0';
          pcVar7[6] = '\0';
          pcVar7[7] = '\0';
          uVar4 = *(uint *)(pcVar7 + 0x14);
          *(uint *)(pcVar7 + 0x10) = uVar4;
          *(uint *)(pcVar7 + 0xc) = uVar4;
          *(uint *)(pcVar7 + 8) = uVar4;
          pcVar11[4] = '\x03';
          pcVar11[5] = '\0';
          pcVar11[6] = '\0';
          pcVar11[7] = '\0';
          pcVar11[0x14] = '\0';
          pcVar11[0x15] = '\0';
          pcVar11[0x16] = '\0';
          pcVar11[0x17] = '\0';
          uVar4 = *(uint *)(pcVar11 + 0x14);
          *(uint *)(pcVar11 + 0x10) = uVar4;
          *(uint *)(pcVar11 + 0xc) = uVar4;
          *(uint *)(pcVar11 + 8) = uVar4;
          iVar6 = (*(int *)(this_ptr->unk4 + 4) + 1) * local_30;
          iVar13 = local_20 + iVar6;
          *(int *)(pcVar7 + 0x18) = iVar13;
          *(uint *)(pcVar7 + 0x1c) = *(uint *)(this_ptr->unk3[iVar13].unk + 0x18);
          *(uint *)(pcVar7 + 0x20) = *(uint *)(this_ptr->unk3[iVar13].unk + 0x1c);
          *(int *)(pcVar7 + 0x24) = iVar13 + 1;
          *(uint *)(pcVar7 + 0x28) = *(uint *)(this_ptr->unk3[iVar13 + 1].unk + 0x18);
          *(uint *)(pcVar7 + 0x2c) = *(uint *)(this_ptr->unk3[iVar13 + 1].unk + 0x1c);
          iVar5 = *(int *)(this_ptr->unk4 + 4);
          *(int *)(pcVar7 + 0x30) = iVar13 + 1 + iVar5 + 1;
          *(uint *)(pcVar7 + 0x34) =
               *(uint *)(this_ptr->unk3[iVar5 + iVar6 + local_20 + 2].unk + 0x18);
          *(uint *)(pcVar7 + 0x38) =
               *(uint *)(this_ptr->unk3[iVar5 + iVar6 + local_20 + 2].unk + 0x1c);
          *(uint *)(pcVar11 + 0x18) = *(uint *)(pcVar7 + 0x30);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x1c) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x34);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x1c + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x34 + (uint)bVar14 * -8 + 4);
          *(uint *)(pcVar11 + 0x24) = *(uint *)(pcVar7 + 0x24);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x28) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x28);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x28 + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x28 + (uint)bVar14 * -8 + 4);
          *(uint *)(pcVar11 + 0x30) = *(uint *)(pcVar7 + 0x18);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x34) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x1c);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x34 + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x1c + (uint)bVar14 * -8 + 4);
          pcVar7[0x4c] = '\x03';
          pcVar7[0x4d] = '\0';
          pcVar7[0x4e] = '\0';
          pcVar7[0x4f] = '\0';
          pcVar7[0x5c] = '\0';
          pcVar7[0x5d] = '\0';
          pcVar7[0x5e] = '\0';
          pcVar7[0x5f] = '\0';
          uVar4 = *(uint *)(pcVar7 + 0x5c);
          *(uint *)(pcVar7 + 0x58) = uVar4;
          *(uint *)(pcVar7 + 0x54) = uVar4;
          *(uint *)(pcVar7 + 0x50) = uVar4;
          pcVar11[0x4c] = '\x03';
          pcVar11[0x4d] = '\0';
          pcVar11[0x4e] = '\0';
          pcVar11[0x4f] = '\0';
          pcVar11[0x5c] = '\0';
          pcVar11[0x5d] = '\0';
          pcVar11[0x5e] = '\0';
          pcVar11[0x5f] = '\0';
          uVar4 = *(uint *)(pcVar11 + 0x5c);
          *(uint *)(pcVar11 + 0x58) = uVar4;
          *(uint *)(pcVar11 + 0x54) = uVar4;
          *(uint *)(pcVar11 + 0x50) = uVar4;
          iVar6 = (*(int *)(this_ptr->unk4 + 4) + 1) * local_30;
          iVar13 = iVar6 + local_20;
          *(int *)(pcVar7 + 0x60) = iVar13;
          *(uint *)(pcVar7 + 100) = *(uint *)(this_ptr->unk3[iVar13].unk + 0x18);
          *(uint *)(pcVar7 + 0x68) = *(uint *)(this_ptr->unk3[iVar13].unk + 0x1c);
          iVar5 = *(int *)(this_ptr->unk4 + 4);
          iVar13 = iVar13 + iVar5 + 2;
          *(int *)(pcVar7 + 0x6c) = iVar13;
          *(uint *)(pcVar7 + 0x70) =
               *(uint *)(this_ptr->unk3[iVar5 + local_20 + iVar6 + 2].unk + 0x18);
          *(uint *)(pcVar7 + 0x74) =
               *(uint *)(this_ptr->unk3[iVar5 + local_20 + iVar6 + 2].unk + 0x1c);
          *(int *)(pcVar7 + 0x78) = iVar13 + -1;
          *(uint *)(pcVar7 + 0x7c) =
               *(uint *)(this_ptr->unk3[iVar5 + local_20 + iVar6 + 1].unk + 0x18);
          *(uint *)(pcVar7 + 0x80) =
               *(uint *)(this_ptr->unk3[iVar5 + local_20 + iVar6 + 1].unk + 0x1c);
          *(uint *)(pcVar11 + 0x60) = *(uint *)(pcVar7 + 0x78);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 100) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x7c);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 100 + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x7c + (uint)bVar14 * -8 + 4);
          *(uint *)(pcVar11 + 0x6c) = *(uint *)(pcVar7 + 0x6c);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x70) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x70);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x70 + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 0x70 + (uint)bVar14 * -8 + 4);
          *(uint *)(pcVar11 + 0x78) = *(uint *)(pcVar7 + 0x60);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x7c) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 100);
          *(uint *)(pcVar11 + (uint)bVar14 * -8 + 0x7c + (uint)bVar14 * -8 + 4) =
               *(uint *)(pcVar7 + (uint)bVar14 * -8 + 100 + (uint)bVar14 * -8 + 4);
          pcVar7 = pcVar7 + 0x90;
          pcVar11 = pcVar11 + 0x90;
          local_20 = local_20 + 1;
        } while (local_20 < *(int *)(this_ptr->unk4 + 4));
      }
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(this_ptr->unk4 + 8));
  }
  core_curtain_cpp_CCurtain_FUN_00449e40(this_ptr);
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  return;
}
