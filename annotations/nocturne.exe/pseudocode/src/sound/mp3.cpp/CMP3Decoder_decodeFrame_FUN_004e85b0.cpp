// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
// Address: 004e85b0
// Address Range: [[004e85b0, 004e9490]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(int **param_1,undefined2 *param_2)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(int **param_1,ushort *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  ushort *puVar12;
  int **ppiVar13;
  int ***pppiVar14;
  byte bVar15;
  float10 fVar16;
  int **ppiStack_60f0;
  int **ppiStack_60ec;
  int **ppiStack_60e8;
  int **ppiStack_60e4;
  int **ppiStack_60e0;
  int **ppiStack_60dc;
  int **ppiStack_60d8;
  uint **ppuStack_60d4;
  uint local_60d0;
  int *local_60cc [1152];
  byte auStack_4ecc [4608];
  byte auStack_3ccc [2304];
  ushort auStack_33cc [1152];
  byte auStack_2acc [2304];
  byte auStack_21cc [2304];
  float afStack_18cc [576];
  int *apiStack_fcc [192];
  int *apiStack_ccc [192];
  int *apiStack_9cc [192];
  int *apiStack_6cc [124];
  int aiStack_4dc [6];
  int *apiStack_4c4 [76];
  byte auStack_394 [256];
  int *apiStack_294 [64];
  int *apiStack_194 [32];
  int iStack_114;
  uint local_110 [2];
  int iStack_108;
  int local_104;
  int local_100;
  int *piStack_e4;
  uint *local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint **local_cc;
  uint **local_c8;
  uint local_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int *local_b0;
  uint local_a8;
  uint local_a4;
  uint **local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int **local_8c;
  int **local_88;
  int **local_84;
  int **local_80;
  int **local_7c;
  int local_78;
  int local_74;
  int **local_70;
  uint local_6c;
  int local_68;
  int local_60;
  byte *local_5c;
  byte *local_58;
  int local_54;
  int local_50;
  int **local_4c;
  int local_48;
  ushort *local_44;
  int local_40;
  int **local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int **local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar15 = 0;
  local_e0 = local_110;
  local_b0 = (int *)0x0;
  local_d4 = -1;
  local_d8 = 0;
  local_b4 = 0;
  ppiVar11 = param_1 + 0x14c8;
  if (param_1[0x14cf] == (int *)0x0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    if (((uint)param_1[0x14cb] & 7) != 0) {
      ppuStack_60d4 = (uint **)(8 - ((uint)param_1[0x14cb] & 7));
      ppiStack_60dc = (int **)0x4e867e;
      ppiStack_60d8 = ppiVar11;
      sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0();
    }
    ppuStack_60d4 = (uint **)0xc;
    ppiStack_60dc = (int **)0x4e8633;
    ppiStack_60d8 = ppiVar11;
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0();
    while (((local_a4 & uVar3) != local_a8 && (param_1[0x14cf] == (int *)0x0))) {
      ppuStack_60d4 = (uint **)0x8;
      ppiStack_60dc = (int **)0x4e865e;
      ppiStack_60d8 = ppiVar11;
      uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0();
      uVar3 = uVar3 << 8 | uVar4;
    }
    if (param_1[0x14cf] == (int *)0x0) {
      local_b0 = param_1[0x14cb];
      ppuStack_60d4 = &local_e0;
      ppiStack_60d8 = param_1 + 0x14c8;
      ppiStack_60dc = (int **)0x4e86b9;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130();
      puVar2 = local_e0;
      local_dc = local_e0[7];
      local_d0 = (local_dc != 3) + 1;
      if (local_e0[1] == 2) {
        local_9c = local_c8;
        local_8c = (int **)*local_e0;
        local_98 = 1;
        local_94 = local_e0[3];
        local_14 = (int)local_8c * 0xb4 + 0x3c;
        iVar5 = *(int *)(&DAT_005bbc88 + local_94 * 4 + local_14) / local_d0;
        ppuStack_60d4 = (uint **)0x4e87a3;
        local_a0 = &local_e0;
        fVar16 = (float10)round
                                    ((float10)*(double *)
                                               (&DAT_005bbc48 +
                                               local_e0[4] * 8 + (int)local_8c * 0x20));
        local_94 = (uint)ROUND(fVar16);
        if (local_90 == 1) {
          if (((local_94 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
            iVar5 = 0;
          }
          else if ((local_94 == 0x30) || (iVar5 < 0x60)) {
            if ((local_94 == 0x20) || (0x30 < iVar5)) {
              iVar5 = 3;
            }
            else {
              iVar5 = 2;
            }
          }
          else {
            iVar5 = 1;
          }
        }
        else {
          iVar5 = 4;
        }
        if (iVar5 != *(int *)(local_a4 + 0xc)) {
          ppiStack_60d8 = (int **)&DAT_01cd8b28;
          ppiStack_60dc = (int **)"MPEG Layer 2 - pick_table - can't load tables!  File: %s";
          PTR_01cc4800 = "..\\sound\\mp3.cpp";
          INT_01cc4804 = 0x1a1;
          ppiStack_60e0 = (int **)0x4e8803;
          core_main_c_FUN_004c8440();
        }
        local_c8 = local_a0;
      }
      else {
        local_c8 = (uint **)0x20;
      }
      local_cc = local_c8;
      if (puVar2[7] == 1) {
        local_8c = (int **)puVar2[1];
        ppiVar11 = (int **)puVar2[8];
        if (((((int)local_8c < 1) || (3 < (int)local_8c)) || ((int)ppiVar11 < 0)) ||
           (3 < (int)ppiVar11)) {
          ppiStack_60d8 = (int **)&DAT_01cd8b28;
          ppiStack_60e4 = (int **)"js_bound bad layer/modext (%d/%d)  File: %s";
          PTR_01cc4800 = "..\\sound\\mp3.cpp";
          INT_01cc4804 = 0x1b1;
          ppiStack_60e8 = (int **)0x4e885e;
          ppiStack_60e0 = local_8c;
          ppiStack_60dc = ppiVar11;
          core_main_c_FUN_004c8440();
        }
        local_cc = *(uint ***)
                    ("$CMotionController$$" + (int)ppiVar11 * 4 + (int)local_8c * 0x10 + 10);
      }
      local_bc = local_d4;
      local_b0 = (int *)((*piStack_e4 != 0) + 1);
      ppiVar11 = param_1 + 0x14c8;
      if (local_110[0] < 2) {
        if (local_110[0] == 1) {
          ppiStack_60d8 = &piStack_e4;
          ppiStack_60dc = apiStack_294;
          ppuStack_60d4 = (uint **)0x20;
          local_60d0 = 0x180;
          ppiStack_60e4 = (int **)0x4e88e7;
          ppiStack_60e0 = ppiVar11;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004e3320();
          ppiStack_60d8 = &piStack_e4;
          ppiStack_60dc = apiStack_fcc;
          ppiStack_60e0 = apiStack_294;
          ppiStack_60e8 = (int **)0x4e8908;
          ppiStack_60e4 = ppiVar11;
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004e33d0();
          local_24 = 0;
          local_88 = ppiVar11;
          do {
            ppiStack_60d8 = &piStack_e4;
            ppiStack_60dc = apiStack_294;
            ppiStack_60e0 = apiStack_ccc;
            ppiStack_60e4 = local_88;
            ppiStack_60e8 = (int **)0x4e8940;
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0();
            ppiStack_60d8 = &piStack_e4;
            ppiStack_60dc = apiStack_294;
            ppiStack_60e0 = apiStack_9cc;
            ppiStack_60e4 = apiStack_ccc;
            ppiStack_60e8 = (int **)0x4e896a;
            sound_mp3_cpp_requantizeSamples_FUN_004e3d30();
            local_84 = apiStack_9cc;
            local_80 = apiStack_fcc;
            local_60 = 0;
            do {
              iVar5 = 0;
              if (0 < local_d4) {
                piVar10 = (int *)((int)local_80 + local_60);
                pfVar6 = (float *)((int)local_84 + local_60);
                do {
                  iVar8 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar5 = iVar5 + 1;
                  *pfVar6 = *pfVar6 * (float)*(double *)(&DAT_005bbdf0 + iVar8 * 8);
                  pfVar6 = pfVar6 + 0x60;
                } while (iVar5 < local_d4);
              }
              local_60 = local_60 + 4;
            } while (local_60 != 0x80);
            ppiVar11 = (int **)0x0;
            local_60 = 0x80;
            if (0 < local_bc) {
              ppiVar13 = apiStack_9cc;
              ppiStack_60d8 = (int **)auStack_33cc;
              do {
                ppiStack_60e4 = param_1;
                puVar12 = (ushort *)((int)ppiStack_60d8 + 0x480);
                ppiStack_60e8 = (int **)0x4e8a25;
                ppiStack_60e0 = ppiVar13;
                ppiStack_60dc = ppiVar11;
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070();
                ppiVar11 = (int **)((int)ppiVar11 + 1);
                ppiVar13 = ppiVar13 + 0x60;
                ppiStack_60d8 = (int **)puVar12;
              } while ((int)ppiVar11 < local_bc);
            }
            local_24 = local_24 + 1;
          } while (local_24 < 0xc);
        }
      }
      else if (local_110[0] < 3) {
        local_60d0 = 0x480;
        ppiStack_60d8 = &piStack_e4;
        ppiStack_60dc = apiStack_294;
        ppuStack_60d4 = (uint **)0x8;
        ppiStack_60e4 = (int **)0x4e8c3e;
        ppiStack_60e0 = ppiVar11;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0();
        ppiStack_60d8 = &piStack_e4;
        ppiStack_60dc = apiStack_fcc;
        ppiStack_60e0 = apiStack_294;
        ppiStack_60e4 = (int **)auStack_394;
        ppiStack_60ec = (int **)0x4e8c67;
        ppiStack_60e8 = ppiVar11;
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460();
        iStack_c0 = 0;
        local_7c = ppiVar11;
        do {
          ppiStack_60d8 = &piStack_e4;
          ppiStack_60dc = apiStack_294;
          ppiStack_60e0 = apiStack_ccc;
          ppiStack_60e4 = local_7c;
          ppiStack_60e8 = (int **)0x4e8c9f;
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0();
          ppiStack_60d8 = &piStack_e4;
          ppiStack_60dc = apiStack_9cc;
          ppiStack_60e0 = apiStack_294;
          ppiStack_60e4 = apiStack_ccc;
          ppiStack_60e8 = (int **)0x4e8cc7;
          sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004e3a60();
          ppiStack_60d8 = (int **)(iStack_c0 >> 2);
          ppiStack_60dc = &piStack_e4;
          ppiStack_60e0 = apiStack_fcc;
          ppiStack_60e4 = apiStack_9cc;
          ppiStack_60e8 = (int **)0x4e8cf2;
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70();
          if (param_2 != (ushort *)0x0) {
            local_2c = 0;
            local_30 = 0;
            do {
              ppiVar11 = (int **)0x0;
              if (0 < local_bc) {
                ppiVar13 = (int **)((int)apiStack_9cc + local_30);
                local_34 = (int)auStack_33cc + local_2c;
                do {
                  ppiStack_60d8 = (int **)local_34;
                  ppiStack_60e4 = param_1;
                  ppiStack_60e8 = (int **)0x4e8d6d;
                  ppiStack_60e0 = ppiVar13;
                  ppiStack_60dc = ppiVar11;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070();
                  ppiVar11 = (int **)((int)ppiVar11 + 1);
                  ppiVar13 = ppiVar13 + 0x60;
                  local_34 = local_34 + 0x480;
                } while ((int)ppiVar11 < local_bc);
              }
              local_2c = local_2c + 0x40;
              local_30 = local_30 + 0x80;
            } while (local_2c != 0xc0);
            local_28 = 0;
            iStack_c0 = 0;
            do {
              iVar5 = 0;
              do {
                iVar8 = 0;
                if (0 < local_bc) {
                  iVar9 = iVar5 + local_28;
                  puVar12 = param_2;
                  do {
                    param_2 = puVar12 + 1;
                    iVar8 = iVar8 + 1;
                    *puVar12 = *(ushort *)((int)auStack_33cc + iVar9);
                    iVar9 = iVar9 + 0x480;
                    puVar12 = param_2;
                  } while (iVar8 < local_bc);
                }
                iVar5 = iVar5 + 2;
              } while (iVar5 != 0x40);
              local_28 = local_28 + 0x40;
            } while (local_28 != 0xc0);
          }
          iStack_c0 = iStack_c0 + 1;
        } while (iStack_c0 < 0xc);
      }
      else if (local_110[0] == 3) {
        ppuStack_60d4 = (uint **)0x8;
        if (*piStack_e4 == 0) {
          local_60d0 = 0x240;
        }
        else {
          local_60d0 = 0x480;
        }
        ppiStack_60d8 = &piStack_e4;
        ppiStack_60dc = (int **)aiStack_4dc;
        ppiStack_60e0 = param_1 + 0x14c8;
        ppiStack_60e4 = param_1;
        ppiStack_60e8 = (int **)0x4e8e81;
        local_70 = ppiStack_60e0;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320();
        ppiVar11 = &piStack_e4;
        pppiVar14 = &ppiStack_60f0;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pppiVar14 = (int **)*ppiVar11;
          ppiVar11 = ppiVar11 + (uint)bVar15 * -2 + 1;
          pppiVar14 = pppiVar14 + (uint)bVar15 * -2 + 1;
        }
        iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0();
        ppiVar11 = local_70;
        for (; 0 < iVar5; iVar5 = iVar5 + -1) {
          ppiStack_60d8 = (int **)0x8;
          ppiStack_60dc = (int **)0x8;
          ppiStack_60e0 = ppiVar11;
          ppiStack_60e4 = (int **)0x4e8eb6;
          ppiStack_60dc = (int **)sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0();
          ppiStack_60e0 = param_1;
          ppiStack_60e4 = (int **)0x4e8ec4;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0();
        }
        ppiStack_60d8 = param_1;
        ppiStack_60dc = (int **)0x4e8ed9;
        uVar3 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0();
        ppiStack_60d8 = param_1;
        ppiStack_60dc = (int **)0x4e8ee7;
        uVar4 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0();
        uVar3 = uVar3 >> 3;
        if (uVar4 % (uint)ppuStack_60d4 != 0) {
          ppiStack_60d8 = (int **)((int)ppuStack_60d4 - uVar4 % (uint)ppuStack_60d4);
          ppiStack_60dc = param_1;
          uVar3 = uVar3 + 1;
          ppiStack_60e0 = (int **)0x4e8f04;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0();
        }
        local_74 = (int)param_1[0x14d3] + (-aiStack_4dc[0] - uVar3);
        if (0x1000 < uVar3) {
          ppiStack_60d8 = (int **)0x1000;
          ppiStack_60dc = param_1;
          param_1[0x14d3] = param_1[0x14d3] + -0x400;
          ppiStack_60e0 = (int **)0x4e8f4a;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0();
        }
        ppiVar11 = &piStack_e4;
        pppiVar14 = &ppiStack_60f0;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pppiVar14 = (int **)*ppiVar11;
          ppiVar11 = ppiVar11 + (uint)bVar15 * -2 + 1;
          pppiVar14 = pppiVar14 + (uint)bVar15 * -2 + 1;
        }
        iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0();
        param_1[0x14d3] = (int *)((int)param_1[0x14d3] + iVar5);
        if (local_74 < 0) {
          ppiStack_60d8 = (int **)(local_b8 + -1);
          ppiStack_60dc = (int **)"Not enough main data to decode frame %d.";
          PTR_01cc4800 = "..\\sound\\mp3.cpp";
          INT_01cc4804 = 0xf90;
          ppiStack_60e0 = (int **)0x4e8fdf;
          core_main_c_FUN_004c8440();
        }
        while (iVar5 = local_74, 0 < local_74) {
          ppiStack_60d8 = (int **)0x8;
          ppiStack_60dc = param_1;
          ppiStack_60e0 = (int **)0x4e8f9a;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0();
          local_74 = iVar5 + -1;
        }
        if ((param_2 != (ushort *)0x0) && (local_78 = 0, 0 < (int)local_b0)) {
          local_3c = apiStack_4c4;
          local_38 = 0;
          do {
            iVar5 = 0;
            if (0 < local_bc) {
              local_5c = auStack_4ecc;
              ppiVar11 = (int **)((int)apiStack_4c4 + local_38);
              do {
                ppiStack_60d8 = param_1;
                ppiStack_60dc = (int **)0x4e9054;
                local_6c = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0();
                ppiStack_60dc = (int **)iVar5;
                if (*piStack_e4 == 0) {
                  ppiStack_60d8 = &piStack_e4;
                  ppiStack_60e0 = (int **)local_78;
                  ppiStack_60e4 = (int **)aiStack_4dc;
                  ppiStack_60e8 = apiStack_6cc;
                  ppiStack_60ec = param_1;
                  ppiStack_60f0 = (int **)0x4e9475;
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000();
                }
                else {
                  ppiStack_60d8 = &piStack_e4;
                  ppiStack_60e0 = (int **)local_78;
                  ppiStack_60e4 = (int **)aiStack_4dc;
                  ppiStack_60e8 = apiStack_6cc;
                  ppiStack_60ec = param_1;
                  ppiStack_60f0 = (int **)0x4e9098;
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0();
                }
                ppiStack_60d8 = &piStack_e4;
                ppiStack_60dc = (int **)local_6c;
                ppiStack_60e0 = (int **)local_78;
                ppiStack_60e8 = (int **)aiStack_4dc;
                ppiStack_60ec = (int **)auStack_3ccc;
                ppiStack_60f0 = param_1;
                ppiStack_60e4 = (int **)iVar5;
                sound_mp3_cpp_FUN_004e5200();
                ppiStack_60d8 = &piStack_e4;
                ppiStack_60e4 = apiStack_6cc;
                ppiStack_60e8 = (int **)local_5c;
                ppiStack_60ec = (int **)auStack_3ccc;
                ppiStack_60f0 = (int **)0x4e90f7;
                ppiStack_60e0 = ppiVar11;
                ppiStack_60dc = (int **)iVar5;
                sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0();
                iVar5 = iVar5 + 1;
                ppiVar11 = ppiVar11 + 0x28;
                local_5c = local_5c + 0x900;
              } while (iVar5 < local_bc);
            }
            ppiStack_60d8 = &piStack_e4;
            ppiStack_60dc = local_3c;
            ppiStack_60e0 = apiStack_6cc;
            ppiStack_60e4 = local_60cc;
            ppiStack_60e8 = (int **)auStack_4ecc;
            ppiStack_60ec = (int **)0x4e914e;
            sound_mp3_cpp_FUN_004e6160();
            local_20 = (int **)0x0;
            if (0 < local_bc) {
              local_50 = (int)apiStack_4c4 + local_38;
              local_4c = local_60cc;
              local_44 = auStack_33cc;
              local_48 = local_50;
              do {
                iVar5 = local_48;
                ppiStack_60d8 = &piStack_e4;
                ppiStack_60dc = (int **)local_48;
                ppiStack_60e0 = (int **)auStack_21cc;
                ppiStack_60e4 = local_4c;
                ppiStack_60e8 = (int **)0x4e91c8;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80();
                ppiStack_60d8 = &piStack_e4;
                ppiStack_60dc = (int **)iVar5;
                ppiStack_60e0 = (int **)auStack_2acc;
                ppiStack_60e4 = (int **)auStack_21cc;
                ppiStack_60e8 = (int **)0x4e91e9;
                sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030();
                pfVar6 = afStack_18cc;
                local_68 = local_50;
                local_58 = auStack_2acc;
                iVar5 = 0;
                do {
                  ppiStack_60d8 = &piStack_e4;
                  ppiStack_60dc = (int **)local_68;
                  ppiStack_60e0 = local_20;
                  ppiStack_60ec = (int **)local_58;
                  ppiStack_60f0 = param_1;
                  ppiStack_60e8 = (int **)pfVar6;
                  ppiStack_60e4 = (int **)iVar5;
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720();
                  iVar5 = iVar5 + 1;
                  pfVar6 = pfVar6 + 0x12;
                  local_58 = local_58 + 0x48;
                } while (iVar5 < 0x20);
                local_54 = 0;
                local_1c = 0;
                do {
                  iVar8 = 0;
                  iVar5 = local_54;
                  do {
                    if ((local_1c % 2 != 0) && (local_18 = 2, iVar8 % 2 != 0)) {
                      *(float *)((int)afStack_18cc + iVar5) = -*(float *)((int)afStack_18cc + iVar5)
                      ;
                    }
                    iVar8 = iVar8 + 1;
                    iVar5 = iVar5 + 0x48;
                  } while (iVar8 < 0x20);
                  local_1c = local_1c + 1;
                  local_54 = local_54 + 4;
                } while (local_1c < 0x12);
                iVar5 = 0;
                ppiStack_60d8 = (int **)local_44;
                do {
                  iVar8 = 0;
                  iVar9 = iVar5;
                  do {
                    iVar7 = iVar8 + 4;
                    puVar1 = (uint *)((int)afStack_18cc + iVar9);
                    iVar9 = iVar9 + 0x48;
                    *(uint *)((int)apiStack_194 + iVar8) = *puVar1;
                    iVar8 = iVar7;
                  } while (iVar7 != 0x80);
                  ppiStack_60dc = local_20;
                  ppiStack_60e0 = apiStack_194;
                  ppiStack_60e4 = param_1;
                  iVar5 = iVar5 + 4;
                  puVar12 = (ushort *)((int)ppiStack_60d8 + 0x40);
                  ppiStack_60e8 = (int **)0x4e932e;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070();
                  ppiStack_60d8 = (int **)puVar12;
                } while (iVar5 != 0x48);
                local_20 = (int **)((int)local_20 + 1);
                local_50 = local_50 + 0xa0;
                local_4c = local_4c + 0x240;
                local_48 = local_48 + 0xa0;
                local_44 = local_44 + 0x240;
              } while ((int)local_20 < local_bc);
            }
            local_40 = 0;
            do {
              iVar5 = 0;
              do {
                iVar8 = 0;
                if (0 < local_bc) {
                  iVar9 = iVar5 + local_40;
                  puVar12 = param_2;
                  do {
                    param_2 = puVar12 + 1;
                    iVar8 = iVar8 + 1;
                    *puVar12 = *(ushort *)((int)auStack_33cc + iVar9);
                    iVar9 = iVar9 + 0x480;
                    puVar12 = param_2;
                  } while (iVar8 < local_bc);
                }
                iVar5 = iVar5 + 2;
              } while (iVar5 != 0x40);
              local_40 = local_40 + 0x40;
            } while (local_40 != 0x480);
            local_3c = local_3c + 0x12;
            local_38 = local_38 + 0x48;
            local_78 = local_78 + 1;
          } while (local_78 < (int)local_b0);
        }
      }
      if (0 < iStack_108) {
        local_c4 = 0;
        local_c8 = ppuStack_60d4;
        ppiStack_60d8 = (int **)0x4e8afb;
        fVar16 = (float10)round
                                    ((((float10)local_60d0 /
                                      (float10)*(double *)
                                                (&DAT_005bbc48 + local_104 * 8 + iStack_114 * 0x20))
                                     * (float10)*(int *)(&DAT_005bbc88 +
                                                        iStack_108 * 4 +
                                                        (local_110[0] - 1) * 0x3c +
                                                        iStack_114 * 0xb4)) / (float10)ppuStack_60d4
                                    );
        local_68 = (int)ROUND(fVar16);
        if (local_100 != 0) {
          local_68 = local_68 + 1;
        }
        local_68 = local_68 * (int)ppiStack_60d8 - ((int)param_1[0x14cb] + (0xc - local_b8));
        iVar5 = 0;
        if (0 < local_68) {
          do {
            ppiStack_60e0 = (int **)0x4e8b5d;
            ppiStack_60dc = param_1 + 0x14c8;
            sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0();
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_68);
        }
      }
      return (int)local_b0 * 0x240;
    }
  }
  return 0;
}
