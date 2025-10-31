// Name: sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40()
// Cross-references:
//   sound_mp3.cpp_FUN_00534a60 (00534a60) at 00534b44 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534ba0 (00534ba0) at 00534cb0 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534d10 (00534d10) at 00534d26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ac5a
//   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
//   TerminatedCString s_sound_mp3_cpp_0063aca4
//   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
//   undefined4 s_..\sound\mp3.cpp_0063b2b2
//   TerminatedCString s_Not_enough_main_data_to__0063b2c3
//   undefined4 s_ler$$_0067d820
//   undefined4 DAT_0067e218
//   undefined4 DAT_0067e258
//   undefined4 DAT_0067e3c0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   sound_mp3.cpp_CallReadOrWriteBits_FUN_0052f850
//   sound_mp3.cpp_FUN_0052ee50
//   sound_mp3.cpp_FUN_0052f160
//   sound_mp3.cpp_FUN_0052f320
//   sound_mp3.cpp_FUN_0052f670
//   sound_mp3.cpp_FUN_0052f7a0
//   sound_mp3.cpp_FUN_0052f8e0
//   sound_mp3.cpp_FUN_0052fb50
//   sound_mp3.cpp_FUN_0052fc50
//   sound_mp3.cpp_FUN_0052fee0
//   sound_mp3.cpp_FUN_005301b0
//   sound_mp3.cpp_FUN_005302f0
//   sound_mp3.cpp_FUN_005304f0
//   sound_mp3.cpp_FUN_00530d20
//   sound_mp3.cpp_FUN_00531480
//   sound_mp3.cpp_FUN_00531d50
//   sound_mp3.cpp_FUN_00532200
//   sound_mp3.cpp_FUN_005334b0
//   sound_mp3.cpp_FUN_00533ba0
//   sound_mp3.cpp_FUN_00533c50
//   sound_mp3.cpp_hPutBuf_FUN_0052f260
//   sound_mp3.cpp_HuffmanDecodeTableThing_FUN_00531680
//   sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   sound_mp3.cpp_ReadOrwriteMultiBits_FUN_0052f5b0
//   sound_mp3.cpp_SideInfoBadCheck_FUN_005307a0
//   sound_mp3.cpp_StereoProcessingFile_FUN_005325e0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: undefined1 sound_mp3.cpp_MpegLoadMaybe(undefined4 param_1, undefined4 param_2) */

int sound_mp3_cpp_MpegLoadMaybe_FUN_00534d40(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int ***pppiVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *****pppppiVar11;
  undefined2 *puVar12;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar13;
  int ****ppppiVar14;
  int iVar15;
  undefined1 *puVar16;
  int *****pppppiVar17;
  byte bVar18;
  float10 fVar19;
  double dVar20;
  undefined8 uVar21;
  int ****unaff_retaddr;
  int *****in_stack_00000004;
  undefined2 *in_stack_00000008;
  int in_stack_00000024;
  int iStack00000028;
  int *****pppppiStackY_60d4;
  int *****local_60d0;
  int *****pppppiStack_60c4;
  int *****pppppiStack_60c0;
  int *piStack_60bc;
  int *****pppppiStack_60b8;
  int *****pppppiStack_60b4;
  int *****pppppiStack_60b0;
  uint in_stack_ffff9f54;
  int ****ppppiStack_6098;
  undefined1 auStack_6094 [4604];
  int ****appppiStack_4e98 [1150];
  undefined1 auStack_3ca0 [4];
  undefined4 auStack_3c9c [572];
  undefined1 auStack_33ac [12];
  undefined2 auStack_33a0 [4];
  undefined2 auStack_3398 [1158];
  int ***apppiStack_2a8c [1152];
  float afStack_188c [567];
  undefined1 auStack_fb0 [4];
  int aiStack_fac [2];
  int ****appppiStack_fa4 [190];
  undefined1 auStack_cac [4];
  undefined1 auStack_ca8 [760];
  int ****ppppiStack_9b0;
  float fStack_9ac;
  undefined1 auStack_9a8 [4];
  undefined4 uStack_9a4;
  int ****appppiStack_9a0 [191];
  undefined1 auStack_6a4 [8];
  int ****appppiStack_69c [113];
  char local_4d8;
  int ****appppiStack_4c4 [4];
  undefined1 auStack_4b4 [4];
  int aiStack_4b0 [8];
  int ****ppppiStack_490;
  int ***apppiStack_48c [132];
  int ***pppiStack_27c;
  int ***pppiStack_278;
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [284];
  undefined4 auStack_154 [17];
  undefined1 local_110 [20];
  int local_fc;
  uint uStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  int *local_d4;
  int ***local_d0;
  int *local_cc;
  undefined4 local_c8;
  int local_c4;
  int ****ppppiStack_c0;
  int ****local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  int ****local_a8;
  int ****local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  int **local_94;
  int ****local_90;
  int local_8c;
  int ****local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *****local_70;
  float *local_64;
  int *local_60;
  int *****local_5c;
  int *****local_58;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_2c;
  int ****local_28;
  int ****local_18;
  undefined1 *local_14;
  int ****ppppiVar22;
  
  bVar18 = 0;
  local_e0 = local_110;
  local_b0 = (undefined4 *)0x0;
  local_d4 = (int *)0xffffffff;
  local_d8 = 0;
  local_b4 = 0;
  if (in_stack_00000004[0x14cf] == (int ****)0x0) {
    local_a8 = (int ****)0xfff;
    local_a4 = (int ****)0x1fff;
    if (((uint)in_stack_00000004[0x14cb] & 7) != 0) {
      pppppiStackY_60d4 = (int *****)(8 - ((uint)in_stack_00000004[0x14cb] & 7));
      sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
    }
    local_60d0 = (int *****)0xc;
    pppppiStackY_60d4 = in_stack_00000004 + 0x14c8;
    uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
    while (((local_9c & uVar2) != local_a0 && (in_stack_00000004[0x14cf] == (int ****)0x0))) {
      pppppiStackY_60d4 = (int *****)0x534dee;
      local_60d0 = in_stack_00000004 + 0x14c8;
      uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
      uVar2 = uVar2 << 8 | uVar3;
    }
    if (in_stack_00000004[0x14cf] == (int ****)0x0) {
      local_a8 = in_stack_00000004[0x14cb];
      local_60d0 = in_stack_00000004 + 0x14c8;
      pppppiStackY_60d4 = (int *****)0x534e49;
      sound_mp3_cpp_ReadOrwriteMultiBits_FUN_0052f5b0();
      piVar10 = local_d4;
      local_d0 = (int ***)local_d4[7];
      local_c4 = (local_d0 != (int ***)0x3) + 1;
      if (local_d4[1] == 2) {
        local_90 = local_bc;
        local_80 = *local_d4;
        local_8c = 1;
        local_88 = (int ****)local_d4[3];
        iVar9 = local_d4[4] * 8 + local_80 * 0x20;
        fVar19 = (float10)*(double *)(&DAT_0067e218 + iVar9);
        local_94 = &local_d4;
        dVar20 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44(iVar9,*(int *)((int)local_88 * 4 + local_80 * 0xb4 +
                                                           0x67e294) / local_c4));
        iVar9 = SUB84(dVar20,0);
        local_80 = (int)ROUND(fVar19);
        if (local_7c == 1) {
          if (((local_80 == 0x30) && (0x37 < iVar9)) || ((0x37 < iVar9 && (iVar9 < 0x51)))) {
            pppiVar4 = (int ***)0x0;
          }
          else if ((local_80 == 0x30) || (iVar9 < 0x60)) {
            if ((local_80 == 0x20) || (0x30 < iVar9)) {
              pppiVar4 = (int ***)0x3;
            }
            else {
              pppiVar4 = (int ***)0x2;
            }
          }
          else {
            pppiVar4 = (int ***)0x1;
          }
        }
        else {
          pppiVar4 = (int ***)0x4;
        }
        if (pppiVar4 != local_90[3]) {
          pppppiStack_60c4 = (int *****)&DAT_02f68188;
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        local_bc = local_88;
      }
      else {
        local_bc = (int ****)0x20;
      }
      ppppiStack_c0 = local_bc;
      if (piVar10[7] == 1) {
        local_74 = piVar10[1];
        pppppiVar11 = (int *****)piVar10[8];
        if ((((local_74 < 1) || (3 < local_74)) || ((int)pppppiVar11 < 0)) || (3 < (int)pppppiVar11)
           ) {
          pppppiStack_60c0 = (int *****)&DAT_02f68188;
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          local_60d0 = (int *****)0x534fee;
          pppppiStack_60c4 = pppppiVar11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        ppppiStack_c0 =
             *(int *****)
              ("$CMotionController$$" + (int)pppppiVar11 * 4 + local_74 * 0x10 + 0xf);
      }
      local_a4 = local_bc;
      local_98 = (*local_cc != 0) + 1;
      pppppiVar11 = in_stack_00000004 + 0x14c8;
      if (uStack_f8 < 2) {
        if (uStack_f8 == 1) {
          pppppiStack_60c0 = (int *****)&local_cc;
          pppppiStack_60c4 = (int *****)&pppiStack_27c;
          piStack_60bc = (undefined4 *)0x20;
          pppppiStack_60b8 = (int *****)0x180;
          sound_mp3_cpp_FUN_0052f7a0();
          pppppiStack_60c4 = (int *****)&local_d0;
          pppppiStackY_60d4 = (int *****)0x535098;
          local_60d0 = pppppiVar11;
          sound_mp3_cpp_CallReadOrWriteBits_FUN_0052f850();
          iVar9 = 0;
          local_70 = pppppiVar11;
          do {
            pppppiStack_60c0 = (int *****)&local_cc;
            pppppiStack_60c4 = (int *****)&pppiStack_27c;
            local_60d0 = (int *****)0x5350d0;
            sound_mp3_cpp_FUN_0052fb50();
            piStack_60bc = &local_c8;
            pppppiStack_60c0 = (int *****)&pppiStack_278;
            pppppiStack_60c4 = &ppppiStack_9b0;
            sound_mp3_cpp_FUN_005301b0();
            local_64 = &fStack_9ac;
            local_60 = aiStack_fac;
            local_40 = 0;
            do {
              iVar7 = 0;
              if (0 < local_b4) {
                piVar10 = (int *)((int)local_60 + local_40);
                pfVar5 = (float *)((int)local_64 + local_40);
                do {
                  iVar15 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar7 = iVar7 + 1;
                  *pfVar5 = *pfVar5 * (float)*(double *)(&DAT_0067e3c0 + iVar15 * 8);
                  pfVar5 = pfVar5 + 0x60;
                } while (iVar7 < local_b4);
              }
              local_40 = local_40 + 4;
            } while (local_40 != 0x80);
            pppppiVar11 = (int *****)0x0;
            local_40 = 0x80;
            if (0 < (int)local_9c) {
              pppppiStack_60c0 = (int *****)auStack_33ac;
              do {
                puVar16 = (undefined1 *)((int)pppppiStack_60c0 + 0x480);
                local_60d0 = (int *****)0x5351b5;
                pppppiStack_60c4 = pppppiVar11;
                sound_mp3_cpp_FUN_005304f0();
                pppppiVar11 = (int *****)((int)pppppiVar11 + 1);
                pppppiStack_60c0 = (int *****)puVar16;
              } while ((int)pppppiVar11 < (int)local_a4);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0xc);
        }
      }
      else if (uStack_f8 < 3) {
        pppppiStack_60b8 = (int *****)0x480;
        pppppiStack_60c0 = (int *****)&local_cc;
        pppppiStack_60c4 = (int *****)&pppiStack_27c;
        piStack_60bc = (int *)0x8;
        sound_mp3_cpp_FUN_0052f670();
        piStack_60bc = &local_c8;
        pppppiStack_60c0 = (int *****)auStack_fb0;
        pppppiStack_60c4 = (int *****)&pppiStack_278;
        local_60d0 = (int *****)0x5353f7;
        sound_mp3_cpp_FUN_0052f8e0();
        local_a0 = 0;
        local_5c = pppppiVar11;
        do {
          pppppiStack_60b8 = (int *****)&local_c4;
          piStack_60bc = (int *)auStack_274;
          pppppiStack_60c0 = (int *****)auStack_cac;
          pppppiStack_60c4 = local_5c;
          sound_mp3_cpp_FUN_0052fc50();
          pppppiStack_60b4 = &ppppiStack_c0;
          pppppiStack_60b8 = (int *****)auStack_9a8;
          piStack_60bc = (int *)auStack_270;
          pppppiStack_60c0 = (int *****)auStack_ca8;
          pppppiStack_60c4 = (int *****)0x535457;
          sound_mp3_cpp_FUN_0052fee0();
          pppppiStack_60b0 = (int *****)(local_98 >> 2);
          pppppiStack_60b4 = &local_bc;
          pppppiStack_60b8 = (int *****)(aiStack_fac + 2);
          piStack_60bc = &uStack_9a4;
          pppppiStack_60c0 = (int *****)0x535482;
          sound_mp3_cpp_FUN_005302f0();
          if (in_stack_00000008 != (undefined2 *)0x0) {
            iVar7 = 0;
            iVar9 = 0;
            do {
              pppppiVar11 = (int *****)0x0;
              if (0 < (int)local_90) {
                pppppiVar17 = (int *****)((int)appppiStack_9a0 + iVar9);
                do {
                  pppppiStack_60b8 = in_stack_00000004;
                  piStack_60bc = (undefined4 *)0x5354fd;
                  pppppiStack_60b4 = pppppiVar17;
                  pppppiStack_60b0 = pppppiVar11;
                  sound_mp3_cpp_FUN_005304f0();
                  pppppiVar11 = (int *****)((int)pppppiVar11 + 1);
                  pppppiVar17 = pppppiVar17 + 0x60;
                  iVar9 = iVar9 + 0x480;
                } while ((int)pppppiVar11 < local_8c);
              }
              iVar7 = iVar7 + 0x40;
              iVar9 = iVar9 + 0x80;
            } while (iVar7 != 0xc0);
            in_stack_00000004 = (int *****)0x0;
            local_94 = (int **)0x0;
            do {
              iVar9 = 0;
              do {
                iVar7 = 0;
                if (0 < (int)local_90) {
                  puVar16 = (undefined1 *)(iVar9 + (int)in_stack_00000004);
                  puVar12 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar12 + 1;
                    iVar7 = iVar7 + 1;
                    *puVar12 = *(undefined2 *)((int)auStack_33a0 + (int)puVar16);
                    puVar16 = puVar16 + 0x480;
                    puVar12 = in_stack_00000008;
                  } while (iVar7 < (int)local_90);
                }
                iVar9 = iVar9 + 2;
              } while (iVar9 != 0x40);
              in_stack_00000004 = in_stack_00000004 + 0x10;
            } while (in_stack_00000004 != (int *****)0xc0);
          }
          local_a0 = local_a0 + 1;
        } while ((int)local_a0 < 0xc);
      }
      else if (uStack_f8 == 3) {
        piStack_60bc = (int *)0x8;
        if (*local_cc == 0) {
          pppppiStack_60b8 = (int *****)0x240;
        }
        else {
          pppppiStack_60b8 = (int *****)0x480;
        }
        pppppiStack_60c0 = (int *****)&local_cc;
        pppppiStack_60c4 = appppiStack_4c4;
        local_58 = in_stack_00000004 + 0x14c8;
        local_60d0 = (int *****)0x535611;
        sound_mp3_cpp_SideInfoBadCheck_FUN_005307a0();
        puVar13 = &local_c8;
        pppppiVar11 = (int *****)&pppppiStackY_60d4;
        for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pppppiVar11 = (int ****)*puVar13;
          puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
          pppppiVar11 = pppppiVar11 + (uint)bVar18 * -2 + 1;
        }
        iVar9 = sound_mp3_cpp_FUN_00533c50();
        uVar1 = local_50;
        iVar7 = iVar9;
        for (; 0 < iVar9; iVar9 = iVar9 + -1) {
          pppppiStack_60b8 = (int *****)0x8;
          piStack_60bc = (int *)0x8;
          pppppiStack_60c0 = (int *****)uVar1;
          pppppiStack_60c0 = (int *****)sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
          pppppiStack_60c4 = in_stack_00000004;
          iVar7 = sound_mp3_cpp_hPutBuf_FUN_0052f260();
        }
        pppppiStack_60b8 = in_stack_00000004;
        piStack_60bc = (undefined4 *)0x535669;
        uVar2 = sound_mp3_cpp_FUN_0052f160(iVar7);
        pppppiStack_60b4 = in_stack_00000004;
        pppppiStack_60b8 = (int *****)0x535677;
        uVar3 = sound_mp3_cpp_FUN_0052f160();
        uVar2 = uVar2 >> 3;
        if (uVar3 % in_stack_ffff9f54 != 0) {
          pppppiStack_60b0 = (int *****)(in_stack_ffff9f54 - uVar3 % in_stack_ffff9f54);
          pppppiStack_60b4 = in_stack_00000004;
          uVar2 = uVar2 + 1;
          pppppiStack_60b8 = (int *****)0x535694;
          sound_mp3_cpp_MemoryCheckOverflow_FUN_0052f170();
        }
        local_48 = (int)in_stack_00000004[0x14d3] + (-aiStack_4b0[0] - uVar2);
        if (0x1000 < uVar2) {
          pppppiStack_60b0 = in_stack_00000004;
          in_stack_00000004[0x14d3] = in_stack_00000004[0x14d3] + -0x400;
          pppppiStack_60b4 = (int *****)0x5356da;
          sound_mp3_cpp_FUN_0052f320();
        }
        puVar13 = &local_b8;
        pppppiVar11 = (int *****)&pppppiStack_60c4;
        for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pppppiVar11 = (int ****)*puVar13;
          puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
          pppppiVar11 = pppppiVar11 + (uint)bVar18 * -2 + 1;
        }
        iVar9 = sound_mp3_cpp_FUN_00533c50();
        in_stack_00000004[0x14d3] = (int ****)((int)in_stack_00000004[0x14d3] + iVar9);
        if (local_44 < 0) {
          g_CurrentFilename = "@..\\sound\\mp3.cpp" + 1;
          g_CurrentLineNumber = 0xf9a;
          pppppiStack_60b0 = (int *****)0x53576f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (iVar9 = local_40, 0 < local_40) {
          sound_mp3_cpp_MemoryCheckOverflow_FUN_0052f170();
          local_3c = iVar9 + -1;
        }
        if ((in_stack_00000008 != (undefined2 *)0x0) && (local_44 = 0, 0 < local_7c)) {
          iVar9 = 0;
          do {
            iVar7 = 0;
            if (0 < (int)local_88) {
              local_28 = (int ****)appppiStack_4e98;
              pppppiVar11 = (int *****)((int)&ppppiStack_490 + iVar9);
              do {
                pppppiStack_60b8 = (int *****)0x5357e4;
                local_44 = sound_mp3_cpp_FUN_0052f160();
                pppppiStack_60b4 = (int *****)iVar7;
                if (*local_bc == (int ***)0x0) {
                  pppppiStack_60b0 = &local_bc;
                  pppppiStack_60b8 = (int *****)local_50;
                  piStack_60bc = (int *)auStack_4b4;
                  pppppiStack_60c0 = (int *****)auStack_6a4;
                  pppppiStack_60c4 = in_stack_00000004;
                  sound_mp3_cpp_FUN_00531480();
                }
                else {
                  pppppiStack_60b0 = &local_bc;
                  pppppiStack_60b8 = (int *****)local_50;
                  piStack_60bc = (int *)auStack_4b4;
                  pppppiStack_60c0 = (int *****)auStack_6a4;
                  pppppiStack_60c4 = in_stack_00000004;
                  sound_mp3_cpp_FUN_00530d20();
                }
                pppppiStack_60b0 = (int *****)local_40;
                pppppiStack_60b4 = (int *****)local_4c;
                piStack_60bc = aiStack_4b0;
                pppppiStack_60c0 = (int *****)auStack_3ca0;
                pppppiStack_60c4 = in_stack_00000004;
                pppppiStack_60b8 = (int *****)iVar7;
                sound_mp3_cpp_HuffmanDecodeTableThing_FUN_00531680();
                pppppiStack_60b4 = appppiStack_69c;
                pppppiStack_60b8 = (int *****)local_2c;
                piStack_60bc = auStack_3c9c;
                pppppiStack_60c0 = (int *****)0x535887;
                pppppiStack_60b0 = pppppiVar11;
                sound_mp3_cpp_FUN_00531d50();
                iVar7 = iVar7 + 1;
                pppppiVar11 = pppppiVar11 + 0x28;
                local_28 = local_28 + 0x240;
              } while (iVar7 < (int)local_88);
            }
            pppppiStack_60b0 = &ppppiStack_6098;
            pppppiStack_60b4 = appppiStack_4e98;
            pppppiStack_60b8 = (int *****)0x5358de;
            sound_mp3_cpp_StereoProcessingFile_FUN_005325e0();
            if (0 < local_84) {
              local_18 = (int ****)((int)apppiStack_48c + (int)unaff_retaddr);
              local_14 = auStack_6094;
              ppppiVar22 = local_18;
              do {
                pppppiStack_60b0 = (int *****)0x535958;
                sound_mp3_cpp_FUN_00532200();
                sound_mp3_cpp_FUN_005334b0();
                local_18 = apppiStack_2a8c;
                iVar7 = 0;
                local_28 = ppppiVar22;
                do {
                  ppppiStack_6098 = (int ****)&local_a4;
                  pppppiStack_60b0 = in_stack_00000004;
                  pppppiStack_60b4 = (int *****)0x5359cc;
                  sound_mp3_cpp_FUN_00533ba0();
                  iVar7 = iVar7 + 1;
                  local_14 = local_14 + 0x48;
                } while (iVar7 < 0x20);
                ppppiVar22 = (int ****)0x0;
                iStack00000028 = 0;
                do {
                  iVar7 = 0;
                  ppppiVar14 = ppppiVar22;
                  do {
                    if ((iStack00000028 % 2 != 0) && (iVar7 % 2 != 0)) {
                      *(float *)((int)(afStack_188c + 1) + (int)ppppiVar14) =
                           -*(float *)((int)(afStack_188c + 1) + (int)ppppiVar14);
                    }
                    iVar7 = iVar7 + 1;
                    ppppiVar14 = ppppiVar14 + 0x12;
                  } while (iVar7 < 0x20);
                  iStack00000028 = iStack00000028 + 1;
                  ppppiVar22 = ppppiVar22 + 1;
                } while (iStack00000028 < 0x12);
                iVar7 = 0;
                ppppiVar14 = unaff_retaddr;
                do {
                  iVar15 = 0;
                  iVar8 = iVar7;
                  do {
                    iVar6 = iVar15 + 4;
                    puVar13 = (undefined4 *)((int)afStack_188c + iVar8);
                    iVar8 = iVar8 + 0x48;
                    *(undefined4 *)((int)auStack_154 + iVar15) = *puVar13;
                    iVar15 = iVar6;
                  } while (iVar6 != 0x80);
                  iVar7 = iVar7 + 4;
                  ppppiStack_6098 = ppppiVar14;
                  sound_mp3_cpp_FUN_005304f0();
                  ppppiVar14 = ppppiVar14 + 0x10;
                } while (iVar7 != 0x48);
                iVar9 = iVar9 + 0xa0;
                unaff_retaddr = unaff_retaddr + 0x120;
                in_stack_00000024 = in_stack_00000024 + 1;
              } while (in_stack_00000024 < local_78);
            }
            iVar7 = 0;
            do {
              iVar15 = 0;
              do {
                iVar8 = 0;
                if (0 < (int)local_88) {
                  iVar6 = iVar15 + iVar7;
                  puVar12 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar12 + 1;
                    iVar8 = iVar8 + 1;
                    *puVar12 = *(undefined2 *)((int)auStack_3398 + iVar6);
                    iVar6 = iVar6 + 0x480;
                    puVar12 = in_stack_00000008;
                  } while (iVar8 < (int)local_88);
                }
                iVar15 = iVar15 + 2;
              } while (iVar15 != 0x40);
              iVar7 = iVar7 + 0x40;
            } while (iVar7 != 0x480);
            iVar9 = iVar9 + 0x48;
            local_44 = local_44 + 1;
          } while (local_44 < local_7c);
        }
      }
      if (0 < local_f0) {
        local_ac = 0;
        local_b0 = piStack_60bc;
        fVar19 = (((float10)pppppiStack_60b8 /
                  (float10)*(double *)(&DAT_0067e218 + iStack_ec * 8 + local_fc * 0x20)) *
                 (float10)*(int *)(&DAT_0067e258 +
                                  local_f0 * 4 + (uStack_f8 - 1) * 0x3c + local_fc * 0xb4)) /
                 (float10)piStack_60bc;
        pppppiStack_60c0 = (int *****)0x53528b;
        dVar20 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pppppiStack_60b8,piStack_60bc));
        local_4c = (int)ROUND(fVar19);
        if (iStack_e8 != 0) {
          local_4c = local_4c + 1;
        }
        iVar9 = (int)in_stack_00000004[0x14cb] + (0xc - local_9c);
        uVar21 = CONCAT44((int)((ulonglong)dVar20 >> 0x20),iVar9);
        local_4c = local_4c * (int)piStack_60bc - iVar9;
        iVar9 = 0;
        if (0 < local_4c) {
          do {
            pppppiStack_60c4 = (int *****)0x5352ed;
            pppppiStack_60c0 = in_stack_00000004 + 0x14c8;
            uVar21 = sound_mp3_cpp_FUN_0052ee50((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_4c);
        }
      }
      return local_98 * 0x240;
    }
  }
  return 0;
}


// Assembly code:
// 00534d40: PUSH EBX
//   Label: sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40
// 00534d41: PUSH ESI
// 00534d42: PUSH EDI
// 00534d43: PUSH EBP
// 00534d44: MOV EBP,ESP
// 00534d46: SUB ESP,0x60c0
// 00534d4c: AND ESP,0xfffffff8
// 00534d4f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00534d52: LEA EAX,[ESP + 0x5fc0]
//   XREF to: Stack[-0x110] (DATA)
// 00534d59: XOR EDX,EDX
// 00534d5b: MOV ESI,0xffffffff
// 00534d60: MOV dword ptr [ESP + 0x6020],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00534d67: MOV dword ptr [ESP + 0x5ff0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00534d6e: MOV dword ptr [ESP + 0x5ffc],ESI
//   XREF to: Stack[-0xd4] (WRITE)
// 00534d75: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00534d78: MOV dword ptr [ESP + 0x5ff8],EDX
//   XREF to: Stack[-0xd8] (WRITE)
// 00534d7f: MOV dword ptr [ESP + 0x601c],EDX
//   XREF to: Stack[-0xb4] (WRITE)
// 00534d86: MOV EDX,dword ptr [EAX + 0x533c]
// 00534d8c: ADD EAX,0x5320
// 00534d91: TEST EDX,EDX
// 00534d93: JNZ 0x00534df5
//   XREF to: 00534df5 (CONDITIONAL_JUMP)
// 00534d95: MOV EDX,0xfff
// 00534d9a: MOV ESI,0xc
// 00534d9f: MOV ECX,0x1fff
// 00534da4: MOV EDI,EAX
// 00534da6: MOV dword ptr [ESP + 0x6028],EDX
//   XREF to: Stack[-0xa8] (WRITE)
// 00534dad: MOV EDX,dword ptr [EAX + 0xc]
// 00534db0: MOV dword ptr [ESP + 0x602c],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 00534db7: AND EDX,0x7
// 00534dba: JNZ 0x00534e00
//   XREF to: 00534e00 (CONDITIONAL_JUMP)
// 00534dbc: PUSH ESI
//   Label: LAB_00534dbc
// 00534dbd: PUSH EDI
// 00534dbe: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00534dc3: ADD ESP,0x8
// 00534dc6: MOV ESI,EAX
// 00534dc8: MOV EAX,dword ptr [ESP + 0x602c]
//   Label: LAB_00534dc8
//   XREF to: Stack[-0xa4] (READ)
// 00534dcf: MOV EDX,dword ptr [ESP + 0x6028]
//   XREF to: Stack[-0xa8] (READ)
// 00534dd6: AND EAX,ESI
// 00534dd8: CMP EAX,EDX
// 00534dda: JZ 0x00534e13
//   XREF to: 00534e13 (CONDITIONAL_JUMP)
// 00534ddc: MOV EAX,dword ptr [EDI + 0x1c]
// 00534ddf: TEST EAX,EAX
// 00534de1: JNZ 0x00534e13
//   XREF to: 00534e13 (CONDITIONAL_JUMP)
// 00534de3: PUSH 0x8
// 00534de5: PUSH EDI
// 00534de6: SHL ESI,0x8
// 00534de9: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00534dee: ADD ESP,0x8
// 00534df1: OR ESI,EAX
// 00534df3: JMP 0x00534dc8
//   XREF to: 00534dc8 (UNCONDITIONAL_JUMP)
// 00534df5: XOR ESI,ESI
//   Label: LAB_00534df5
// 00534df7: MOV EAX,ESI
// 00534df9: MOV ESP,EBP
// 00534dfb: POP EBP
// 00534dfc: POP EDI
// 00534dfd: POP ESI
// 00534dfe: POP EBX
// 00534dff: RET
// 00534e00: MOV ECX,0x8
//   Label: LAB_00534e00
// 00534e05: SUB ECX,EDX
// 00534e07: PUSH ECX
// 00534e08: PUSH EAX
// 00534e09: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00534e0e: ADD ESP,0x8
// 00534e11: JMP 0x00534dbc
//   XREF to: 00534dbc (UNCONDITIONAL_JUMP)
// 00534e13: MOV EAX,dword ptr [EDI + 0x1c]
//   Label: LAB_00534e13
// 00534e16: TEST EAX,EAX
// 00534e18: JNZ 0x00534df5
//   XREF to: 00534df5 (CONDITIONAL_JUMP)
// 00534e1a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00534e1d: MOV ECX,dword ptr [ESP + 0x6020]
//   XREF to: Stack[-0xb0] (READ)
// 00534e24: MOV EDX,dword ptr [EAX + 0x532c]
// 00534e2a: SUB EDX,ECX
// 00534e2c: LEA ESI,[ECX + EDX*0x1]
// 00534e2f: LEA EDX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00534e36: PUSH EDX
// 00534e37: ADD EAX,0x5320
// 00534e3c: PUSH EAX
// 00534e3d: MOV dword ptr [ESP + 0x6028],ESI
//   XREF to: Stack[-0xb0] (WRITE)
// 00534e44: CALL sound_mp3.cpp_ReadOrwriteMultiBits_FUN_0052f5b0
//   XREF to: 0052f5b0 (UNCONDITIONAL_CALL)
// 00534e49: ADD ESP,0x8
// 00534e4c: MOV EDI,dword ptr [ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (READ)
// 00534e53: LEA ESI,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00534e5a: MOV EAX,dword ptr [EDI + 0x1c]
//   XREF to: Stack[-0xf4] (READ)
// 00534e5d: XOR ECX,ECX
// 00534e5f: MOV dword ptr [ESP + 0x5ff4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00534e66: CMP EAX,0x3
// 00534e69: SETNZ AL
// 00534e6c: MOV CL,AL
// 00534e6e: INC ECX
// 00534e6f: MOV dword ptr [ESP + 0x6000],ECX
//   XREF to: Stack[-0xd0] (WRITE)
// 00534e76: MOV EDX,dword ptr [EDI + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 00534e79: CMP EDX,0x2
// 00534e7c: JNZ 0x00535370
//   XREF to: 00535370 (CONDITIONAL_JUMP)
// 00534e82: MOV EAX,dword ptr [ESP + 0x6008]
//   XREF to: Stack[-0xc8] (READ)
// 00534e89: MOV dword ptr [ESP + 0x6034],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00534e90: MOV EAX,dword ptr [EDI]
//   XREF to: Stack[-0x110] (DATA)
// 00534e92: MOV dword ptr [ESP + 0x6044],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00534e99: LEA EAX,[EDX + -0x1]
// 00534e9c: MOV dword ptr [ESP + 0x6038],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00534ea3: MOV EAX,dword ptr [EDI + 0xc]
//   XREF to: Stack[-0x104] (READ)
// 00534ea6: MOV EDX,dword ptr [ESP + 0x6044]
//   XREF to: Stack[-0x8c] (READ)
// 00534ead: MOV dword ptr [ESP + 0x603c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00534eb4: LEA EAX,[EDX*0x4 + 0x0]
// 00534ebb: SUB EAX,EDX
// 00534ebd: SHL EAX,0x2
// 00534ec0: MOV EDX,EAX
// 00534ec2: SHL EAX,0x4
// 00534ec5: SUB EAX,EDX
// 00534ec7: MOV dword ptr [ESP + 0x60bc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00534ece: MOV EAX,dword ptr [ESP + 0x6038]
//   XREF to: Stack[-0x98] (READ)
// 00534ed5: SHL EAX,0x2
// 00534ed8: MOV EDX,EAX
// 00534eda: SHL EAX,0x4
// 00534edd: SUB EAX,EDX
// 00534edf: MOV EDX,dword ptr [ESP + 0x60bc]
//   XREF to: Stack[-0x14] (READ)
// 00534ee6: ADD EDX,EAX
// 00534ee8: MOV dword ptr [ESP + 0x60bc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00534eef: MOV EDX,dword ptr [ESP + 0x603c]
//   XREF to: Stack[-0x94] (READ)
// 00534ef6: MOV EAX,dword ptr [ESP + 0x60bc]
//   XREF to: Stack[-0x14] (READ)
// 00534efd: SHL EDX,0x2
// 00534f00: ADD EDX,EAX
// 00534f02: MOV EAX,dword ptr [EDX + 0x67e258]
//   XREF to: 0067e258 (DATA)
// 00534f08: MOV EDX,EAX
// 00534f0a: SAR EDX,0x1f
// 00534f0d: IDIV ECX
// 00534f0f: MOV ECX,dword ptr [ESP + 0x6044]
//   XREF to: Stack[-0x8c] (READ)
// 00534f16: MOV EDX,dword ptr [EDI + 0x10]
//   XREF to: Stack[-0x100] (READ)
// 00534f19: SHL ECX,0x5
// 00534f1c: SHL EDX,0x3
// 00534f1f: ADD EDX,ECX
// 00534f21: MOV dword ptr [ESP + 0x6030],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 00534f28: FLD double ptr [EDX + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 00534f2e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00534f33: MOV EDX,dword ptr [ESP + 0x6044]
//   XREF to: Stack[-0x8c] (READ)
// 00534f3a: FISTP dword ptr [ESP + 0x6040]
//   XREF to: Stack[-0x90] (WRITE)
// 00534f41: CMP EDX,0x1
// 00534f44: JNZ 0x00535366
//   XREF to: 00535366 (CONDITIONAL_JUMP)
// 00534f4a: CMP dword ptr [ESP + 0x6040],0x30
//   XREF to: Stack[-0x90] (READ)
// 00534f52: JNZ 0x0053531c
//   XREF to: 0053531c (CONDITIONAL_JUMP)
// 00534f58: CMP EAX,0x38
// 00534f5b: JL 0x0053531c
//   XREF to: 0053531c (CONDITIONAL_JUMP)
// 00534f61: XOR EAX,EAX
//   Label: LAB_00534f61
// 00534f63: MOV EDX,dword ptr [ESP + 0x6030]
//   Label: LAB_00534f63
//   XREF to: Stack[-0xa0] (READ)
// 00534f6a: CMP EAX,dword ptr [EDX + 0xc]
//   XREF to: Stack[-0xd4] (READ)
// 00534f6d: JZ 0x00534f96
//   XREF to: 00534f96 (CONDITIONAL_JUMP)
// 00534f6f: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00534f74: MOV EAX,0x63ac5a
//   XREF to: 0063ac5a (PARAM)
// 00534f79: MOV EDX,0x1a2
// 00534f7e: PUSH 0x63ac6b
//   XREF to: 0063ac6b (DATA)
// 00534f83: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00534f88: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00534f8e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534f93: ADD ESP,0x8
// 00534f96: MOV EAX,dword ptr [ESP + 0x6034]
//   Label: LAB_00534f96
//   XREF to: Stack[-0x9c] (READ)
// 00534f9d: MOV dword ptr [ESI + 0x18],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00534fa0: MOV ECX,dword ptr [EDI + 0x1c]
//   Label: LAB_00534fa0
//   XREF to: Stack[-0xf4] (READ)
// 00534fa3: CMP ECX,0x1
// 00534fa6: JNZ 0x0053539f
//   XREF to: 0053539f (CONDITIONAL_JUMP)
// 00534fac: MOV EAX,dword ptr [EDI + 0x4]
//   XREF to: Stack[-0x10c] (READ)
// 00534faf: MOV dword ptr [ESP + 0x6048],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00534fb6: MOV EDI,dword ptr [EDI + 0x20]
//   XREF to: Stack[-0xf0] (READ)
// 00534fb9: CMP EAX,ECX
// 00534fbb: JGE 0x00535380
//   XREF to: 00535380 (CONDITIONAL_JUMP)
// 00534fc1: PUSH 0x2f68188
//   Label: LAB_00534fc1
//   XREF to: 02f68188 (DATA)
// 00534fc6: PUSH EDI
// 00534fc7: MOV EDX,dword ptr [ESP + 0x6050]
//   XREF to: Stack[-0x88] (READ)
// 00534fce: PUSH EDX
// 00534fcf: MOV ECX,0x63aca4
//   XREF to: 0063aca4 (PARAM)
// 00534fd4: MOV EAX,0x1b2
// 00534fd9: PUSH 0x63acb5
//   XREF to: 0063acb5 (DATA)
// 00534fde: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00534fe4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00534fe9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534fee: ADD ESP,0x10
// 00534ff1: MOV EAX,dword ptr [ESP + 0x6048]
//   Label: LAB_00534ff1
//   XREF to: Stack[-0x88] (READ)
// 00534ff8: SHL EAX,0x4
// 00534ffb: MOV EAX,dword ptr [EAX + EDI*0x4 + 0x67d820]
//   XREF to: 0067d820 (DATA)
// 00535002: MOV dword ptr [ESI + 0x14],EAX
//   Label: LAB_00535002
//   XREF to: Stack[-0xcc] (WRITE)
// 00535005: MOV EAX,dword ptr [ESP + 0x6000]
//   XREF to: Stack[-0xd0] (READ)
// 0053500c: MOV dword ptr [ESP + 0x6018],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00535013: MOV EAX,dword ptr [ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (READ)
// 0053501a: CMP dword ptr [EAX],0x0
//   XREF to: Stack[-0x110] (DATA)
// 0053501d: SETNZ AL
// 00535020: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535023: AND EAX,0xff
// 00535028: MOV EDI,dword ptr [ESP + 0x5fc4]
//   XREF to: Stack[-0x10c] (READ)
// 0053502f: INC EAX
// 00535030: ADD ESI,0x5320
// 00535036: MOV dword ptr [ESP + 0x6024],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0053503d: CMP EDI,0x2
// 00535040: JNC 0x00535c0a
//   XREF to: 00535c0a (CONDITIONAL_JUMP)
// 00535046: CMP EDI,0x1
// 00535049: JNZ 0x005351e2
//   XREF to: 005351e2 (CONDITIONAL_JUMP)
// 0053504f: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535056: PUSH EAX
// 00535057: LEA EAX,[ESP + 0x5e44]
//   XREF to: Stack[-0x290] (DATA)
// 0053505e: PUSH EAX
// 0053505f: MOV EBX,0x20
// 00535064: MOV EDI,0x180
// 00535069: PUSH ESI
// 0053506a: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x60d0] (WRITE)
// 0053506e: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x60cc] (WRITE)
// 00535072: CALL sound_mp3.cpp_FUN_0052f7a0
//   XREF to: 0052f7a0 (UNCONDITIONAL_CALL)
// 00535077: ADD ESP,0xc
// 0053507a: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535081: PUSH EAX
// 00535082: LEA EAX,[ESP + 0x510c]
//   XREF to: Stack[-0xfc8] (DATA)
// 00535089: PUSH EAX
// 0053508a: LEA EAX,[ESP + 0x5e48]
//   XREF to: Stack[-0x290] (DATA)
// 00535091: PUSH EAX
// 00535092: PUSH ESI
// 00535093: CALL sound_mp3.cpp_CallReadOrWriteBits_FUN_0052f850
//   XREF to: 0052f850 (UNCONDITIONAL_CALL)
// 00535098: ADD ESP,0x10
// 0053509b: XOR EAX,EAX
// 0053509d: MOV dword ptr [ESP + 0x60b0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005350a4: MOV dword ptr [ESP + 0x604c],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 005350ab: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_005350ab
//   XREF to: Stack[-0xe0] (DATA)
// 005350b2: PUSH EAX
// 005350b3: LEA EAX,[ESP + 0x5e44]
//   XREF to: Stack[-0x290] (DATA)
// 005350ba: PUSH EAX
// 005350bb: LEA EAX,[ESP + 0x5410]
//   XREF to: Stack[-0xcc8] (DATA)
// 005350c2: PUSH EAX
// 005350c3: MOV EBX,dword ptr [ESP + 0x6058]
//   XREF to: Stack[-0x84] (READ)
// 005350ca: PUSH EBX
// 005350cb: CALL sound_mp3.cpp_FUN_0052fb50
//   XREF to: 0052fb50 (UNCONDITIONAL_CALL)
// 005350d0: ADD ESP,0x10
// 005350d3: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 005350da: PUSH EAX
// 005350db: LEA EAX,[ESP + 0x5e44]
//   XREF to: Stack[-0x290] (DATA)
// 005350e2: PUSH EAX
// 005350e3: LEA EAX,[ESP + 0x5710]
//   XREF to: Stack[-0x9c8] (DATA)
// 005350ea: PUSH EAX
// 005350eb: LEA EAX,[ESP + 0x5414]
//   XREF to: Stack[-0xcc8] (DATA)
// 005350f2: PUSH EAX
// 005350f3: XOR EDI,EDI
// 005350f5: CALL sound_mp3.cpp_FUN_005301b0
//   XREF to: 005301b0 (UNCONDITIONAL_CALL)
// 005350fa: ADD ESP,0x10
// 005350fd: LEA EAX,[ESP + 0x5708]
//   XREF to: Stack[-0x9c8] (DATA)
// 00535104: MOV ESI,dword ptr [ESP + 0x6000]
//   XREF to: Stack[-0xd0] (READ)
// 0053510b: MOV dword ptr [ESP + 0x6050],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00535112: LEA EAX,[ESP + 0x5108]
//   XREF to: Stack[-0xfc8] (DATA)
// 00535119: MOV dword ptr [ESP + 0x6074],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 00535120: MOV dword ptr [ESP + 0x6054],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00535127: MOV ECX,EDI
//   Label: LAB_00535127
// 00535129: TEST ESI,ESI
// 0053512b: JLE 0x00535170
//   XREF to: 00535170 (CONDITIONAL_JUMP)
// 0053512d: MOV EDX,dword ptr [ESP + 0x6074]
//   XREF to: Stack[-0x5c] (READ)
// 00535134: MOV EBX,dword ptr [ESP + 0x6054]
//   XREF to: Stack[-0x7c] (READ)
// 0053513b: MOV EAX,dword ptr [ESP + 0x6074]
//   XREF to: Stack[-0x5c] (READ)
// 00535142: ADD EDX,EBX
// 00535144: ADD EAX,dword ptr [ESP + 0x6050]
//   XREF to: Stack[-0x80] (READ)
// 0053514b: FLD float ptr [EAX]
//   Label: LAB_0053514b
// 0053514d: MOV EBX,dword ptr [EDX]
// 0053514f: FLD ST0
// 00535151: FMUL double ptr [EBX*0x8 + 0x67e3c0]
//   XREF to: 0067e3c0 (DATA)
// 00535158: ADD EDX,0x180
// 0053515e: ADD EAX,0x180
// 00535163: INC ECX
// 00535164: FSTP ST1
// 00535166: FSTP float ptr [EAX + 0xfffffe80]
// 0053516c: CMP ECX,ESI
// 0053516e: JL 0x0053514b
//   XREF to: 0053514b (CONDITIONAL_JUMP)
// 00535170: MOV EAX,dword ptr [ESP + 0x6074]
//   Label: LAB_00535170
//   XREF to: Stack[-0x5c] (READ)
// 00535177: ADD EAX,0x4
// 0053517a: MOV dword ptr [ESP + 0x6074],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00535181: CMP EAX,0x80
// 00535186: JNZ 0x00535127
//   XREF to: 00535127 (CONDITIONAL_JUMP)
// 00535188: MOV ECX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 0053518f: XOR EBX,EBX
// 00535191: TEST ECX,ECX
// 00535193: JLE 0x005351ca
//   XREF to: 005351ca (CONDITIONAL_JUMP)
// 00535195: LEA EDI,[ESP + 0x2d08]
//   XREF to: Stack[-0x33c8] (DATA)
// 0053519c: LEA ESI,[ESP + 0x5708]
//   XREF to: Stack[-0x9c8] (DATA)
// 005351a3: PUSH EDI
//   Label: LAB_005351a3
// 005351a4: PUSH EBX
// 005351a5: PUSH ESI
// 005351a6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005351a9: PUSH EAX
// 005351aa: ADD EDI,0x480
// 005351b0: CALL sound_mp3.cpp_FUN_005304f0
//   XREF to: 005304f0 (UNCONDITIONAL_CALL)
// 005351b5: ADD ESP,0x10
// 005351b8: INC EBX
// 005351b9: MOV EDX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 005351c0: ADD ESI,0x180
// 005351c6: CMP EBX,EDX
// 005351c8: JL 0x005351a3
//   XREF to: 005351a3 (CONDITIONAL_JUMP)
// 005351ca: MOV ECX,dword ptr [ESP + 0x60b0]
//   Label: LAB_005351ca
//   XREF to: Stack[-0x20] (READ)
// 005351d1: INC ECX
// 005351d2: MOV dword ptr [ESP + 0x60b0],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005351d9: CMP ECX,0xc
// 005351dc: JL 0x005350ab
//   XREF to: 005350ab (CONDITIONAL_JUMP)
// 005351e2: CMP dword ptr [ESP + 0x5fcc],0x0
//   Label: LAB_005351e2
//   XREF to: Stack[-0x104] (READ)
// 005351ea: JLE 0x00535300
//   XREF to: 00535300 (CONDITIONAL_JUMP)
// 005351f0: MOV EAX,dword ptr [ESP + 0x5fc4]
//   XREF to: Stack[-0x10c] (READ)
// 005351f7: DEC EAX
// 005351f8: SHL EAX,0x2
// 005351fb: MOV ECX,EAX
// 005351fd: SHL ECX,0x4
// 00535200: MOV EDX,dword ptr [ESP + 0x5fc0]
//   XREF to: Stack[-0x110] (READ)
// 00535207: SUB ECX,EAX
// 00535209: LEA EAX,[EDX*0x4 + 0x0]
// 00535210: SUB EAX,EDX
// 00535212: SHL EAX,0x2
// 00535215: MOV EDX,EAX
// 00535217: SHL EAX,0x4
// 0053521a: SUB EAX,EDX
// 0053521c: ADD ECX,EAX
// 0053521e: MOV EAX,dword ptr [ESP + 0x5fcc]
//   XREF to: Stack[-0x104] (READ)
// 00535225: MOV EDX,dword ptr [ESP + 0x5fc0]
//   XREF to: Stack[-0x110] (READ)
// 0053522c: FILD dword ptr [ECX + EAX*0x4 + 0x67e258]
//   XREF to: 0067e258 (DATA)
// 00535233: MOV EAX,dword ptr [ESP + 0x5fd0]
//   XREF to: Stack[-0x100] (READ)
// 0053523a: SHL EDX,0x5
// 0053523d: SHL EAX,0x3
// 00535240: XOR ECX,ECX
// 00535242: ADD EAX,EDX
// 00535244: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x60cc] (READ)
// 00535248: MOV dword ptr [ESP + 0x6010],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 0053524f: MOV dword ptr [ESP + 0x600c],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00535256: FILD qword ptr [ESP + 0x600c]
//   XREF to: Stack[-0xc4] (READ)
// 0053525d: FDIV double ptr [EAX + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 00535263: FMULP
// 00535265: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x60d0] (DATA)
// 00535268: MOV dword ptr [ESP + 0x6010],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 0053526f: MOV dword ptr [ESP + 0x600c],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00535276: FILD qword ptr [ESP + 0x600c]
//   XREF to: Stack[-0xc4] (READ)
// 0053527d: FDIVP
// 0053527f: MOV ESI,dword ptr [ESP + 0x5fd4]
//   XREF to: Stack[-0xfc] (READ)
// 00535286: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0053528b: FISTP dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x60] (WRITE)
// 00535292: TEST ESI,ESI
// 00535294: JZ 0x0053529d
//   XREF to: 0053529d (CONDITIONAL_JUMP)
// 00535296: INC dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x60] (READ_WRITE)
// 0053529d: MOV EAX,dword ptr [ESP + 0x6070]
//   Label: LAB_0053529d
//   XREF to: Stack[-0x60] (READ)
// 005352a4: IMUL EAX,dword ptr [ESP]
//   XREF to: Stack[-0x60d0] (DATA)
// 005352a8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005352ab: MOV ECX,dword ptr [ESP + 0x6020]
//   XREF to: Stack[-0xb0] (READ)
// 005352b2: MOV dword ptr [ESP + 0x6070],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005352b9: MOV EAX,dword ptr [ESI + 0x532c]
// 005352bf: SUB EAX,ECX
// 005352c1: MOV EBX,dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x60] (READ)
// 005352c8: ADD EAX,0xc
// 005352cb: SUB EBX,EAX
// 005352cd: MOV dword ptr [ESP + 0x6070],EBX
//   XREF to: Stack[-0x60] (WRITE)
// 005352d4: ADD ESI,0x5320
// 005352da: MOV EDI,dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x60] (READ)
// 005352e1: XOR EBX,EBX
// 005352e3: TEST EDI,EDI
// 005352e5: JLE 0x00535300
//   XREF to: 00535300 (CONDITIONAL_JUMP)
// 005352e7: PUSH ESI
//   Label: LAB_005352e7
// 005352e8: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005352ed: ADD ESP,0x4
// 005352f0: INC EBX
// 005352f1: CMP EBX,dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x60] (READ)
// 005352f8: JL 0x005352e7
//   XREF to: 005352e7 (CONDITIONAL_JUMP)
// 005352fa: LEA EAX,[EAX]
// 00535300: MOV EDX,dword ptr [ESP + 0x6024]
//   Label: LAB_00535300
//   XREF to: Stack[-0xac] (READ)
// 00535307: LEA ESI,[EDX*0x8 + 0x0]
// 0053530e: ADD ESI,EDX
// 00535310: SHL ESI,0x6
// 00535313: MOV EAX,ESI
// 00535315: MOV ESP,EBP
// 00535317: POP EBP
// 00535318: POP EDI
// 00535319: POP ESI
// 0053531a: POP EBX
// 0053531b: RET
// 0053531c: CMP EAX,0x38
//   Label: LAB_0053531c
// 0053531f: JL 0x0053532a
//   XREF to: 0053532a (CONDITIONAL_JUMP)
// 00535321: CMP EAX,0x50
// 00535324: JLE 0x00534f61
//   XREF to: 00534f61 (CONDITIONAL_JUMP)
// 0053532a: CMP dword ptr [ESP + 0x6040],0x30
//   Label: LAB_0053532a
//   XREF to: Stack[-0x90] (READ)
// 00535332: JZ 0x00535343
//   XREF to: 00535343 (CONDITIONAL_JUMP)
// 00535334: CMP EAX,0x60
// 00535337: JL 0x00535343
//   XREF to: 00535343 (CONDITIONAL_JUMP)
// 00535339: MOV EAX,0x1
// 0053533e: JMP 0x00534f63
//   XREF to: 00534f63 (UNCONDITIONAL_JUMP)
// 00535343: CMP dword ptr [ESP + 0x6040],0x20
//   Label: LAB_00535343
//   XREF to: Stack[-0x90] (READ)
// 0053534b: JZ 0x0053535c
//   XREF to: 0053535c (CONDITIONAL_JUMP)
// 0053534d: CMP EAX,0x30
// 00535350: JG 0x0053535c
//   XREF to: 0053535c (CONDITIONAL_JUMP)
// 00535352: MOV EAX,0x2
// 00535357: JMP 0x00534f63
//   XREF to: 00534f63 (UNCONDITIONAL_JUMP)
// 0053535c: MOV EAX,0x3
//   Label: LAB_0053535c
// 00535361: JMP 0x00534f63
//   XREF to: 00534f63 (UNCONDITIONAL_JUMP)
// 00535366: MOV EAX,0x4
//   Label: LAB_00535366
// 0053536b: JMP 0x00534f63
//   XREF to: 00534f63 (UNCONDITIONAL_JUMP)
// 00535370: MOV dword ptr [ESP + 0x6008],0x20
//   Label: LAB_00535370
//   XREF to: Stack[-0xc8] (WRITE)
// 0053537b: JMP 0x00534fa0
//   XREF to: 00534fa0 (UNCONDITIONAL_JUMP)
// 00535380: CMP EAX,0x3
//   Label: LAB_00535380
// 00535383: JG 0x00534fc1
//   XREF to: 00534fc1 (CONDITIONAL_JUMP)
// 00535389: TEST EDI,EDI
// 0053538b: JL 0x00534fc1
//   XREF to: 00534fc1 (CONDITIONAL_JUMP)
// 00535391: CMP EDI,0x3
// 00535394: JG 0x00534fc1
//   XREF to: 00534fc1 (CONDITIONAL_JUMP)
// 0053539a: JMP 0x00534ff1
//   XREF to: 00534ff1 (UNCONDITIONAL_JUMP)
// 0053539f: MOV EAX,dword ptr [ESI + 0x18]
//   Label: LAB_0053539f
//   XREF to: Stack[-0xc8] (READ)
// 005353a2: JMP 0x00535002
//   XREF to: 00535002 (UNCONDITIONAL_JUMP)
// 005353a7: MOV dword ptr [ESP + 0x4],0x480
//   Label: LAB_005353a7
//   XREF to: Stack[-0x60cc] (WRITE)
// 005353af: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 005353b6: PUSH EAX
// 005353b7: LEA EAX,[ESP + 0x5e44]
//   XREF to: Stack[-0x290] (DATA)
// 005353be: PUSH EAX
// 005353bf: MOV EDI,0x8
// 005353c4: PUSH ESI
// 005353c5: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x60d0] (WRITE)
// 005353c9: CALL sound_mp3.cpp_FUN_0052f670
//   XREF to: 0052f670 (UNCONDITIONAL_CALL)
// 005353ce: ADD ESP,0xc
// 005353d1: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 005353d8: PUSH EAX
// 005353d9: LEA EAX,[ESP + 0x510c]
//   XREF to: Stack[-0xfc8] (DATA)
// 005353e0: PUSH EAX
// 005353e1: LEA EAX,[ESP + 0x5e48]
//   XREF to: Stack[-0x290] (DATA)
// 005353e8: PUSH EAX
// 005353e9: LEA EAX,[ESP + 0x5d4c]
//   XREF to: Stack[-0x390] (DATA)
// 005353f0: PUSH EAX
// 005353f1: PUSH ESI
// 005353f2: CALL sound_mp3.cpp_FUN_0052f8e0
//   XREF to: 0052f8e0 (UNCONDITIONAL_CALL)
// 005353f7: ADD ESP,0x14
// 005353fa: XOR EDX,EDX
// 005353fc: MOV dword ptr [ESP + 0x6014],EDX
//   XREF to: Stack[-0xbc] (WRITE)
// 00535403: MOV dword ptr [ESP + 0x6058],ESI
//   XREF to: Stack[-0x78] (WRITE)
// 0053540a: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_0053540a
//   XREF to: Stack[-0xe0] (DATA)
// 00535411: PUSH EAX
// 00535412: LEA EAX,[ESP + 0x5e44]
//   XREF to: Stack[-0x290] (DATA)
// 00535419: PUSH EAX
// 0053541a: LEA EAX,[ESP + 0x5410]
//   XREF to: Stack[-0xcc8] (DATA)
// 00535421: PUSH EAX
// 00535422: MOV EDI,dword ptr [ESP + 0x6064]
//   XREF to: Stack[-0x78] (READ)
// 00535429: PUSH EDI
// 0053542a: CALL sound_mp3.cpp_FUN_0052fc50
//   XREF to: 0052fc50 (UNCONDITIONAL_CALL)
// 0053542f: ADD ESP,0x10
// 00535432: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535439: PUSH EAX
// 0053543a: LEA EAX,[ESP + 0x570c]
//   XREF to: Stack[-0x9c8] (DATA)
// 00535441: PUSH EAX
// 00535442: LEA EAX,[ESP + 0x5e48]
//   XREF to: Stack[-0x290] (DATA)
// 00535449: PUSH EAX
// 0053544a: LEA EAX,[ESP + 0x5414]
//   XREF to: Stack[-0xcc8] (DATA)
// 00535451: PUSH EAX
// 00535452: CALL sound_mp3.cpp_FUN_0052fee0
//   XREF to: 0052fee0 (UNCONDITIONAL_CALL)
// 00535457: ADD ESP,0x10
// 0053545a: MOV EAX,dword ptr [ESP + 0x6014]
//   XREF to: Stack[-0xbc] (READ)
// 00535461: SAR EAX,0x2
// 00535464: PUSH EAX
// 00535465: LEA EAX,[ESP + 0x5ff4]
//   XREF to: Stack[-0xe0] (DATA)
// 0053546c: PUSH EAX
// 0053546d: LEA EAX,[ESP + 0x5110]
//   XREF to: Stack[-0xfc8] (DATA)
// 00535474: PUSH EAX
// 00535475: LEA EAX,[ESP + 0x5714]
//   XREF to: Stack[-0x9c8] (DATA)
// 0053547c: PUSH EAX
// 0053547d: CALL sound_mp3.cpp_FUN_005302f0
//   XREF to: 005302f0 (UNCONDITIONAL_CALL)
// 00535482: ADD ESP,0x10
// 00535485: TEST EBX,EBX
// 00535487: JNZ 0x005354a6
//   XREF to: 005354a6 (CONDITIONAL_JUMP)
// 00535489: MOV EDI,dword ptr [ESP + 0x6014]
//   Label: LAB_00535489
//   XREF to: Stack[-0xbc] (READ)
// 00535490: INC EDI
// 00535491: MOV dword ptr [ESP + 0x6014],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 00535498: CMP EDI,0xc
// 0053549b: JL 0x0053540a
//   XREF to: 0053540a (CONDITIONAL_JUMP)
// 005354a1: JMP 0x005351e2
//   XREF to: 005351e2 (UNCONDITIONAL_JUMP)
// 005354a6: XOR EAX,EAX
//   Label: LAB_005354a6
// 005354a8: MOV dword ptr [ESP + 0x60a8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005354af: MOV dword ptr [ESP + 0x60a4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005354b6: MOV ECX,dword ptr [ESP + 0x6018]
//   Label: LAB_005354b6
//   XREF to: Stack[-0xb8] (READ)
// 005354bd: XOR ESI,ESI
// 005354bf: TEST ECX,ECX
// 005354c1: JLE 0x00535526
//   XREF to: 00535526 (CONDITIONAL_JUMP)
// 005354c3: MOV EDI,dword ptr [ESP + 0x60a4]
//   XREF to: Stack[-0x2c] (READ)
// 005354ca: LEA EAX,[ESP + 0x5708]
//   XREF to: Stack[-0x9c8] (DATA)
// 005354d1: MOV EDX,dword ptr [ESP + 0x60a8]
//   XREF to: Stack[-0x28] (READ)
// 005354d8: ADD EDI,EAX
// 005354da: LEA EAX,[ESP + 0x2d08]
//   XREF to: Stack[-0x33c8] (DATA)
// 005354e1: ADD EAX,EDX
// 005354e3: MOV dword ptr [ESP + 0x60a0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005354ea: MOV EAX,dword ptr [ESP + 0x60a0]
//   Label: LAB_005354ea
//   XREF to: Stack[-0x30] (READ)
// 005354f1: PUSH EAX
// 005354f2: PUSH ESI
// 005354f3: PUSH EDI
// 005354f4: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005354f7: PUSH EDX
// 005354f8: CALL sound_mp3.cpp_FUN_005304f0
//   XREF to: 005304f0 (UNCONDITIONAL_CALL)
// 005354fd: ADD ESP,0x10
// 00535500: INC ESI
// 00535501: MOV ECX,dword ptr [ESP + 0x60a0]
//   XREF to: Stack[-0x30] (READ)
// 00535508: ADD EDI,0x180
// 0053550e: ADD ECX,0x480
// 00535514: MOV EAX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 0053551b: MOV dword ptr [ESP + 0x60a0],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00535522: CMP ESI,EAX
// 00535524: JL 0x005354ea
//   XREF to: 005354ea (CONDITIONAL_JUMP)
// 00535526: MOV ECX,dword ptr [ESP + 0x60a8]
//   Label: LAB_00535526
//   XREF to: Stack[-0x28] (READ)
// 0053552d: MOV EDX,dword ptr [ESP + 0x60a4]
//   XREF to: Stack[-0x2c] (READ)
// 00535534: ADD ECX,0x40
// 00535537: ADD EDX,0x80
// 0053553d: MOV dword ptr [ESP + 0x60a8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00535544: MOV dword ptr [ESP + 0x60a4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0053554b: CMP ECX,0xc0
// 00535551: JNZ 0x005354b6
//   XREF to: 005354b6 (CONDITIONAL_JUMP)
// 00535557: XOR EDI,EDI
// 00535559: MOV dword ptr [ESP + 0x60ac],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00535560: MOV dword ptr [ESP + 0x6014],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 00535567: MOV EDI,dword ptr [ESP + 0x60ac]
//   Label: LAB_00535567
//   XREF to: Stack[-0x24] (READ)
// 0053556e: XOR ESI,ESI
// 00535570: MOV ECX,dword ptr [ESP + 0x6018]
//   Label: LAB_00535570
//   XREF to: Stack[-0xb8] (READ)
// 00535577: XOR EAX,EAX
// 00535579: TEST ECX,ECX
// 0053557b: JLE 0x005355a1
//   XREF to: 005355a1 (CONDITIONAL_JUMP)
// 0053557d: LEA ECX,[ESI + EDI*0x1]
// 00535580: ADD EBX,0x2
//   Label: LAB_00535580
// 00535583: MOV DX,word ptr [ESP + ECX*0x1 + 0x2d08]
// 0053558b: INC EAX
// 0053558c: MOV word ptr [EBX + -0x2],DX
// 00535590: MOV EDX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 00535597: ADD ECX,0x480
// 0053559d: CMP EAX,EDX
// 0053559f: JL 0x00535580
//   XREF to: 00535580 (CONDITIONAL_JUMP)
// 005355a1: ADD ESI,0x2
//   Label: LAB_005355a1
// 005355a4: CMP ESI,0x40
// 005355a7: JNZ 0x00535570
//   XREF to: 00535570 (CONDITIONAL_JUMP)
// 005355a9: MOV ECX,dword ptr [ESP + 0x60ac]
//   XREF to: Stack[-0x24] (READ)
// 005355b0: ADD ECX,ESI
// 005355b2: MOV dword ptr [ESP + 0x60ac],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005355b9: CMP ECX,0xc0
// 005355bf: JZ 0x00535489
//   XREF to: 00535489 (CONDITIONAL_JUMP)
// 005355c5: JMP 0x00535567
//   XREF to: 00535567 (UNCONDITIONAL_JUMP)
// 005355c7: MOV EAX,dword ptr [ESP + 0x5ff0]
//   Label: LAB_005355c7
//   XREF to: Stack[-0xe0] (READ)
// 005355ce: MOV ECX,0x8
// 005355d3: MOV ESI,dword ptr [EAX]
//   XREF to: Stack[-0x110] (DATA)
// 005355d5: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x60d0] (DATA)
// 005355d8: TEST ESI,ESI
// 005355da: JZ 0x00535739
//   XREF to: 00535739 (CONDITIONAL_JUMP)
// 005355e0: MOV dword ptr [ESP + 0x4],0x480
//   XREF to: Stack[-0x60cc] (WRITE)
// 005355e8: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_005355e8
//   XREF to: Stack[-0xe0] (DATA)
// 005355ef: PUSH EAX
// 005355f0: LEA EAX,[ESP + 0x5bfc]
//   XREF to: Stack[-0x4d8] (DATA)
// 005355f7: PUSH EAX
// 005355f8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005355fb: ADD EAX,0x5320
// 00535600: PUSH EAX
// 00535601: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535604: PUSH ECX
// 00535605: MOV dword ptr [ESP + 0x6074],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0053560c: CALL sound_mp3.cpp_SideInfoBadCheck_FUN_005307a0
//   XREF to: 005307a0 (UNCONDITIONAL_CALL)
// 00535611: ADD ESP,0x10
// 00535614: LEA ESI,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 0053561b: SUB ESP,0x1c
// 0053561e: MOV ECX,0x7
// 00535623: MOV EDI,ESP
// 00535625: MOVSD.REP ES:EDI,ESI
// 00535627: CALL sound_mp3.cpp_FUN_00533c50
//   XREF to: 00533c50 (UNCONDITIONAL_CALL)
// 0053562c: ADD ESP,0x1c
// 0053562f: MOV ESI,EAX
// 00535631: TEST EAX,EAX
// 00535633: JLE 0x00535660
//   XREF to: 00535660 (CONDITIONAL_JUMP)
// 00535635: MOV EDI,dword ptr [ESP + 0x6064]
//   XREF to: Stack[-0x6c] (READ)
// 0053563c: PUSH 0x8
//   Label: LAB_0053563c
// 0053563e: PUSH 0x8
// 00535640: PUSH EDI
// 00535641: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00535646: ADD ESP,0x8
// 00535649: PUSH EAX
// 0053564a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053564d: PUSH EDX
// 0053564e: DEC ESI
// 0053564f: CALL sound_mp3.cpp_hPutBuf_FUN_0052f260
//   XREF to: 0052f260 (UNCONDITIONAL_CALL)
// 00535654: ADD ESP,0xc
// 00535657: TEST ESI,ESI
// 00535659: JG 0x0053563c
//   XREF to: 0053563c (CONDITIONAL_JUMP)
// 0053565b: LEA EAX,[EAX]
// 0053565e: MOV ECX,ECX
// 00535660: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00535660
//   XREF to: Stack[0x4] (READ)
// 00535663: PUSH ECX
// 00535664: CALL sound_mp3.cpp_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00535669: ADD ESP,0x4
// 0053566c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053566f: PUSH EDI
// 00535670: MOV ESI,EAX
// 00535672: CALL sound_mp3.cpp_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00535677: ADD ESP,0x4
// 0053567a: XOR EDX,EDX
// 0053567c: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x60d0] (DATA)
// 0053567f: DIV ECX
// 00535681: SHR ESI,0x3
// 00535684: TEST EDX,EDX
// 00535686: JZ 0x00535697
//   XREF to: 00535697 (CONDITIONAL_JUMP)
// 00535688: MOV EAX,ECX
// 0053568a: SUB EAX,EDX
// 0053568c: PUSH EAX
// 0053568d: PUSH EDI
// 0053568e: INC ESI
// 0053568f: CALL sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00535694: ADD ESP,0x8
// 00535697: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00535697
//   XREF to: Stack[0x4] (READ)
// 0053569a: MOV EAX,dword ptr [EAX + 0x534c]
// 005356a0: MOV EDX,dword ptr [ESP + 0x5bf8]
//   XREF to: Stack[-0x4d8] (READ)
// 005356a7: SUB EAX,ESI
// 005356a9: SUB EAX,EDX
// 005356ab: MOV dword ptr [ESP + 0x6060],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005356b2: CMP ESI,0x1000
// 005356b8: JLE 0x005356dd
//   XREF to: 005356dd (CONDITIONAL_JUMP)
// 005356ba: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005356bd: MOV ESI,dword ptr [ECX + 0x534c]
// 005356c3: PUSH 0x1000
// 005356c8: SUB ESI,0x1000
// 005356ce: PUSH ECX
// 005356cf: MOV dword ptr [ECX + 0x534c],ESI
// 005356d5: CALL sound_mp3.cpp_FUN_0052f320
//   XREF to: 0052f320 (UNCONDITIONAL_CALL)
// 005356da: ADD ESP,0x8
// 005356dd: MOV ECX,0x7
//   Label: LAB_005356dd
// 005356e2: SUB ESP,0x1c
// 005356e5: LEA ESI,[ESP + 0x600c]
//   XREF to: Stack[-0xe0] (DATA)
// 005356ec: MOV EDI,ESP
// 005356ee: MOVSD.REP ES:EDI,ESI
// 005356f0: CALL sound_mp3.cpp_FUN_00533c50
//   XREF to: 00533c50 (UNCONDITIONAL_CALL)
// 005356f5: ADD ESP,0x1c
// 005356f8: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005356fb: MOV EDI,dword ptr [EDX + 0x534c]
// 00535701: ADD EDI,EAX
// 00535703: MOV EAX,dword ptr [ESP + 0x6060]
//   XREF to: Stack[-0x70] (READ)
// 0053570a: MOV dword ptr [EDX + 0x534c],EDI
// 00535710: TEST EAX,EAX
// 00535712: JL 0x00535746
//   XREF to: 00535746 (CONDITIONAL_JUMP)
// 00535714: MOV ESI,dword ptr [ESP + 0x6060]
//   Label: LAB_00535714
//   XREF to: Stack[-0x70] (READ)
// 0053571b: TEST ESI,ESI
// 0053571d: JLE 0x00535774
//   XREF to: 00535774 (CONDITIONAL_JUMP)
// 0053571f: PUSH 0x8
// 00535721: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535724: PUSH EDX
// 00535725: CALL sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 0053572a: ADD ESP,0x8
// 0053572d: LEA ECX,[ESI + -0x1]
// 00535730: MOV dword ptr [ESP + 0x6060],ECX
//   XREF to: Stack[-0x70] (WRITE)
// 00535737: JMP 0x00535714
//   XREF to: 00535714 (UNCONDITIONAL_JUMP)
// 00535739: MOV dword ptr [ESP + 0x4],0x240
//   Label: LAB_00535739
//   XREF to: Stack[-0x60cc] (WRITE)
// 00535741: JMP 0x005355e8
//   XREF to: 005355e8 (UNCONDITIONAL_JUMP)
// 00535746: MOV EAX,dword ptr [ESP + 0x601c]
//   Label: LAB_00535746
//   XREF to: Stack[-0xb4] (READ)
// 0053574d: DEC EAX
// 0053574e: PUSH EAX
// 0053574f: MOV EDX,0x63b2b2
//   XREF to: 0063b2b2 (PARAM)
// 00535754: MOV ECX,0xf9a
// 00535759: PUSH 0x63b2c3
//   XREF to: 0063b2c3 (DATA)
// 0053575e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00535764: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0053576a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053576f: ADD ESP,0x8
// 00535772: JMP 0x00535714
//   XREF to: 00535714 (UNCONDITIONAL_JUMP)
// 00535774: TEST EBX,EBX
//   Label: LAB_00535774
// 00535776: JZ 0x005351e2
//   XREF to: 005351e2 (CONDITIONAL_JUMP)
// 0053577c: XOR EDI,EDI
// 0053577e: MOV EAX,dword ptr [ESP + 0x6024]
//   XREF to: Stack[-0xac] (READ)
// 00535785: MOV dword ptr [ESP + 0x605c],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 0053578c: TEST EAX,EAX
// 0053578e: JLE 0x005351e2
//   XREF to: 005351e2 (CONDITIONAL_JUMP)
// 00535794: LEA EAX,[ESP + 0x5c10]
//   XREF to: Stack[-0x4c0] (DATA)
// 0053579b: MOV dword ptr [ESP + 0x609c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005357a2: MOV dword ptr [ESP + 0x6098],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005357a9: MOV EDI,dword ptr [ESP + 0x6018]
//   Label: LAB_005357a9
//   XREF to: Stack[-0xb8] (READ)
// 005357b0: XOR ESI,ESI
// 005357b2: TEST EDI,EDI
// 005357b4: JLE 0x005358b4
//   XREF to: 005358b4 (CONDITIONAL_JUMP)
// 005357ba: LEA EAX,[ESP + 0x1208]
//   XREF to: Stack[-0x4ec8] (DATA)
// 005357c1: MOV EDI,dword ptr [ESP + 0x609c]
//   XREF to: Stack[-0x34] (READ)
// 005357c8: MOV dword ptr [ESP + 0x6078],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005357cf: ADD EDI,0x10
// 005357d2: LEA EAX,[ESP + 0x5c00]
//   XREF to: Stack[-0x4d0] (DATA)
// 005357d9: ADD EDI,EAX
// 005357db: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005357db
//   XREF to: Stack[0x4] (READ)
// 005357de: PUSH EDX
// 005357df: CALL sound_mp3.cpp_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 005357e4: ADD ESP,0x4
// 005357e7: MOV dword ptr [ESP + 0x6068],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005357ee: MOV EAX,dword ptr [ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (READ)
// 005357f5: CMP dword ptr [EAX],0x0
//   XREF to: Stack[-0x110] (DATA)
// 005357f8: JZ 0x00535bdb
//   XREF to: 00535bdb (CONDITIONAL_JUMP)
// 005357fe: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535805: PUSH EAX
// 00535806: PUSH ESI
// 00535807: MOV ECX,dword ptr [ESP + 0x6064]
//   XREF to: Stack[-0x74] (READ)
// 0053580e: PUSH ECX
// 0053580f: LEA EAX,[ESP + 0x5c04]
//   XREF to: Stack[-0x4d8] (DATA)
// 00535816: PUSH EAX
// 00535817: LEA EAX,[ESP + 0x5a18]
//   XREF to: Stack[-0x6c8] (DATA)
// 0053581e: PUSH EAX
// 0053581f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535822: PUSH EAX
// 00535823: CALL sound_mp3.cpp_FUN_00530d20
//   XREF to: 00530d20 (UNCONDITIONAL_CALL)
// 00535828: ADD ESP,0x18
//   Label: LAB_00535828
// 0053582b: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535832: PUSH EAX
// 00535833: MOV EAX,dword ptr [ESP + 0x606c]
//   XREF to: Stack[-0x68] (READ)
// 0053583a: PUSH EAX
// 0053583b: MOV EDX,dword ptr [ESP + 0x6064]
//   XREF to: Stack[-0x74] (READ)
// 00535842: PUSH EDX
// 00535843: PUSH ESI
// 00535844: LEA EAX,[ESP + 0x5c08]
//   XREF to: Stack[-0x4d8] (DATA)
// 0053584b: PUSH EAX
// 0053584c: LEA EAX,[ESP + 0x241c]
//   XREF to: Stack[-0x3cc8] (DATA)
// 00535853: PUSH EAX
// 00535854: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535857: PUSH ECX
// 00535858: CALL sound_mp3.cpp_HuffmanDecodeTableThing_FUN_00531680
//   XREF to: 00531680 (UNCONDITIONAL_CALL)
// 0053585d: ADD ESP,0x1c
// 00535860: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535867: PUSH EAX
// 00535868: PUSH ESI
// 00535869: PUSH EDI
// 0053586a: LEA EAX,[ESP + 0x5a14]
//   XREF to: Stack[-0x6c8] (DATA)
// 00535871: PUSH EAX
// 00535872: MOV EAX,dword ptr [ESP + 0x6088]
//   XREF to: Stack[-0x58] (READ)
// 00535879: PUSH EAX
// 0053587a: LEA EAX,[ESP + 0x241c]
//   XREF to: Stack[-0x3cc8] (DATA)
// 00535881: PUSH EAX
// 00535882: CALL sound_mp3.cpp_FUN_00531d50
//   XREF to: 00531d50 (UNCONDITIONAL_CALL)
// 00535887: ADD ESP,0x18
// 0053588a: INC ESI
// 0053588b: MOV EDX,dword ptr [ESP + 0x6078]
//   XREF to: Stack[-0x58] (READ)
// 00535892: ADD EDI,0xa0
// 00535898: ADD EDX,0x900
// 0053589e: MOV ECX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 005358a5: MOV dword ptr [ESP + 0x6078],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005358ac: CMP ESI,ECX
// 005358ae: JL 0x005357db
//   XREF to: 005357db (CONDITIONAL_JUMP)
// 005358b4: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_005358b4
//   XREF to: Stack[-0xe0] (DATA)
// 005358bb: PUSH EAX
// 005358bc: MOV ESI,dword ptr [ESP + 0x609c]
//   XREF to: Stack[-0x38] (READ)
// 005358c3: PUSH ESI
// 005358c4: LEA EAX,[ESP + 0x5a10]
//   XREF to: Stack[-0x6c8] (DATA)
// 005358cb: PUSH EAX
// 005358cc: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x60c8] (DATA)
// 005358d0: PUSH EAX
// 005358d1: LEA EAX,[ESP + 0x1218]
//   XREF to: Stack[-0x4ec8] (DATA)
// 005358d8: PUSH EAX
// 005358d9: CALL sound_mp3.cpp_StereoProcessingFile_FUN_005325e0
//   XREF to: 005325e0 (UNCONDITIONAL_CALL)
// 005358de: ADD ESP,0x14
// 005358e1: XOR EDI,EDI
// 005358e3: MOV EAX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 005358ea: MOV dword ptr [ESP + 0x60b4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005358f1: TEST EAX,EAX
// 005358f3: JLE 0x00535b34
//   XREF to: 00535b34 (CONDITIONAL_JUMP)
// 005358f9: MOV EAX,dword ptr [ESP + 0x609c]
//   XREF to: Stack[-0x34] (READ)
// 00535900: LEA EDX,[ESP + 0x5c00]
//   XREF to: Stack[-0x4d0] (DATA)
// 00535907: ADD EAX,0x10
// 0053590a: ADD EAX,EDX
// 0053590c: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x60c8] (DATA)
// 00535910: MOV dword ptr [ESP + 0x6084],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00535917: MOV dword ptr [ESP + 0x608c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0053591e: LEA EAX,[ESP + 0x2d08]
//   XREF to: Stack[-0x33c8] (DATA)
// 00535925: MOV dword ptr [ESP + 0x6088],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0053592c: MOV dword ptr [ESP + 0x6090],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00535933: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_00535933
//   XREF to: Stack[-0xe0] (DATA)
// 0053593a: PUSH EAX
// 0053593b: MOV ESI,dword ptr [ESP + 0x6090]
//   XREF to: Stack[-0x44] (READ)
// 00535942: PUSH ESI
// 00535943: LEA EAX,[ESP + 0x3f10]
//   XREF to: Stack[-0x21c8] (DATA)
// 0053594a: PUSH EAX
// 0053594b: MOV EDI,dword ptr [ESP + 0x6094]
//   XREF to: Stack[-0x48] (READ)
// 00535952: PUSH EDI
// 00535953: CALL sound_mp3.cpp_FUN_00532200
//   XREF to: 00532200 (UNCONDITIONAL_CALL)
// 00535958: ADD ESP,0x10
// 0053595b: LEA EAX,[ESP + 0x5ff0]
//   XREF to: Stack[-0xe0] (DATA)
// 00535962: PUSH EAX
// 00535963: PUSH ESI
// 00535964: LEA EAX,[ESP + 0x3610]
//   XREF to: Stack[-0x2ac8] (DATA)
// 0053596b: PUSH EAX
// 0053596c: LEA EAX,[ESP + 0x3f14]
//   XREF to: Stack[-0x21c8] (DATA)
// 00535973: PUSH EAX
// 00535974: CALL sound_mp3.cpp_FUN_005334b0
//   XREF to: 005334b0 (UNCONDITIONAL_CALL)
// 00535979: ADD ESP,0x10
// 0053597c: MOV EAX,dword ptr [ESP + 0x6084]
//   XREF to: Stack[-0x4c] (READ)
// 00535983: LEA EDI,[ESP + 0x4808]
//   XREF to: Stack[-0x18c8] (DATA)
// 0053598a: MOV dword ptr [ESP + 0x606c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00535991: LEA EAX,[ESP + 0x3608]
//   XREF to: Stack[-0x2ac8] (DATA)
// 00535998: XOR ESI,ESI
// 0053599a: MOV dword ptr [ESP + 0x607c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005359a1: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_005359a1
//   XREF to: Stack[-0xe0] (DATA)
// 005359a8: PUSH EAX
// 005359a9: MOV EDX,dword ptr [ESP + 0x6070]
//   XREF to: Stack[-0x64] (READ)
// 005359b0: PUSH EDX
// 005359b1: MOV ECX,dword ptr [ESP + 0x60bc]
//   XREF to: Stack[-0x1c] (READ)
// 005359b8: PUSH ECX
// 005359b9: PUSH ESI
// 005359ba: PUSH EDI
// 005359bb: MOV EAX,dword ptr [ESP + 0x6090]
//   XREF to: Stack[-0x54] (READ)
// 005359c2: PUSH EAX
// 005359c3: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005359c6: PUSH EDX
// 005359c7: CALL sound_mp3.cpp_FUN_00533ba0
//   XREF to: 00533ba0 (UNCONDITIONAL_CALL)
// 005359cc: ADD ESP,0x1c
// 005359cf: MOV ECX,dword ptr [ESP + 0x607c]
//   XREF to: Stack[-0x54] (READ)
// 005359d6: INC ESI
// 005359d7: ADD ECX,0x48
// 005359da: ADD EDI,0x48
// 005359dd: MOV dword ptr [ESP + 0x607c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005359e4: CMP ESI,0x20
// 005359e7: JL 0x005359a1
//   XREF to: 005359a1 (CONDITIONAL_JUMP)
// 005359e9: XOR ESI,ESI
// 005359eb: MOV dword ptr [ESP + 0x6080],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 005359f2: MOV dword ptr [ESP + 0x60b8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005359f9: MOV EAX,dword ptr [ESP + 0x60b8]
//   Label: LAB_005359f9
//   XREF to: Stack[-0x18] (READ)
// 00535a00: MOV EDX,EAX
// 00535a02: MOV ESI,0x2
// 00535a07: SAR EDX,0x1f
// 00535a0a: IDIV ESI
// 00535a0c: XOR ECX,ECX
// 00535a0e: MOV ESI,dword ptr [ESP + 0x6080]
//   XREF to: Stack[-0x50] (READ)
// 00535a15: MOV EDI,EDX
// 00535a17: TEST EDI,EDI
//   Label: LAB_00535a17
// 00535a19: JZ 0x00535a48
//   XREF to: 00535a48 (CONDITIONAL_JUMP)
// 00535a1b: MOV dword ptr [ESP + 0x60bc],0x2
//   XREF to: Stack[-0x14] (WRITE)
// 00535a26: MOV EDX,ECX
// 00535a28: MOV EAX,ECX
// 00535a2a: SAR EDX,0x1f
// 00535a2d: IDIV dword ptr [ESP + 0x60bc]
//   XREF to: Stack[-0x14] (READ)
// 00535a34: TEST EDX,EDX
// 00535a36: JZ 0x00535a48
//   XREF to: 00535a48 (CONDITIONAL_JUMP)
// 00535a38: FLD float ptr [ESP + ESI*0x1 + 0x4808]
// 00535a3f: FCHS
// 00535a41: FSTP float ptr [ESP + ESI*0x1 + 0x4808]
// 00535a48: INC ECX
//   Label: LAB_00535a48
// 00535a49: ADD ESI,0x48
// 00535a4c: CMP ECX,0x20
// 00535a4f: JL 0x00535a17
//   XREF to: 00535a17 (CONDITIONAL_JUMP)
// 00535a51: MOV EDX,dword ptr [ESP + 0x60b8]
//   XREF to: Stack[-0x18] (READ)
// 00535a58: MOV EAX,dword ptr [ESP + 0x6080]
//   XREF to: Stack[-0x50] (READ)
// 00535a5f: INC EDX
// 00535a60: ADD EAX,0x4
// 00535a63: MOV dword ptr [ESP + 0x60b8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00535a6a: MOV dword ptr [ESP + 0x6080],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00535a71: CMP EDX,0x12
// 00535a74: JL 0x005359f9
//   XREF to: 005359f9 (CONDITIONAL_JUMP)
// 00535a76: MOV EDI,dword ptr [ESP + 0x6090]
//   XREF to: Stack[-0x40] (READ)
// 00535a7d: XOR ESI,ESI
// 00535a7f: MOV ECX,ESI
//   Label: LAB_00535a7f
// 00535a81: XOR EAX,EAX
// 00535a83: ADD EAX,0x4
//   Label: LAB_00535a83
// 00535a86: FLD float ptr [ESP + ECX*0x1 + 0x4808]
// 00535a8d: ADD ECX,0x48
// 00535a90: FSTP float ptr [ESP + EAX*0x1 + 0x5f3c]
// 00535a97: CMP EAX,0x80
// 00535a9c: JNZ 0x00535a83
//   XREF to: 00535a83 (CONDITIONAL_JUMP)
// 00535a9e: PUSH EDI
// 00535a9f: MOV EAX,dword ptr [ESP + 0x60b8]
//   XREF to: Stack[-0x1c] (READ)
// 00535aa6: PUSH EAX
// 00535aa7: LEA EAX,[ESP + 0x5f48]
//   XREF to: Stack[-0x190] (DATA)
// 00535aae: PUSH EAX
// 00535aaf: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535ab2: PUSH EDX
// 00535ab3: ADD ESI,0x4
// 00535ab6: ADD EDI,0x40
// 00535ab9: CALL sound_mp3.cpp_FUN_005304f0
//   XREF to: 005304f0 (UNCONDITIONAL_CALL)
// 00535abe: ADD ESP,0x10
// 00535ac1: CMP ESI,0x48
// 00535ac4: JNZ 0x00535a7f
//   XREF to: 00535a7f (CONDITIONAL_JUMP)
// 00535ac6: MOV EDX,dword ptr [ESP + 0x6084]
//   XREF to: Stack[-0x4c] (READ)
// 00535acd: MOV ECX,dword ptr [ESP + 0x6088]
//   XREF to: Stack[-0x48] (READ)
// 00535ad4: MOV ESI,dword ptr [ESP + 0x608c]
//   XREF to: Stack[-0x44] (READ)
// 00535adb: MOV EDI,dword ptr [ESP + 0x6090]
//   XREF to: Stack[-0x40] (READ)
// 00535ae2: MOV EAX,dword ptr [ESP + 0x60b4]
//   XREF to: Stack[-0x1c] (READ)
// 00535ae9: ADD EDX,0xa0
// 00535aef: ADD ECX,0x900
// 00535af5: ADD ESI,0xa0
// 00535afb: ADD EDI,0x480
// 00535b01: INC EAX
// 00535b02: MOV dword ptr [ESP + 0x6084],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00535b09: MOV dword ptr [ESP + 0x6088],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00535b10: MOV dword ptr [ESP + 0x608c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 00535b17: MOV dword ptr [ESP + 0x6090],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 00535b1e: MOV EDX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 00535b25: MOV dword ptr [ESP + 0x60b4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00535b2c: CMP EAX,EDX
// 00535b2e: JL 0x00535933
//   XREF to: 00535933 (CONDITIONAL_JUMP)
// 00535b34: XOR ECX,ECX
//   Label: LAB_00535b34
// 00535b36: MOV dword ptr [ESP + 0x6094],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00535b3d: MOV EDI,dword ptr [ESP + 0x6094]
//   Label: LAB_00535b3d
//   XREF to: Stack[-0x3c] (READ)
// 00535b44: XOR ESI,ESI
// 00535b46: MOV EAX,dword ptr [ESP + 0x6018]
//   Label: LAB_00535b46
//   XREF to: Stack[-0xb8] (READ)
// 00535b4d: XOR ECX,ECX
// 00535b4f: TEST EAX,EAX
// 00535b51: JLE 0x00535b76
//   XREF to: 00535b76 (CONDITIONAL_JUMP)
// 00535b53: LEA EAX,[ESI + EDI*0x1]
// 00535b56: ADD EBX,0x2
//   Label: LAB_00535b56
// 00535b59: MOV DX,word ptr [ESP + EAX*0x1 + 0x2d08]
// 00535b61: INC ECX
// 00535b62: MOV word ptr [EBX + -0x2],DX
// 00535b66: MOV EDX,dword ptr [ESP + 0x6018]
//   XREF to: Stack[-0xb8] (READ)
// 00535b6d: ADD EAX,0x480
// 00535b72: CMP ECX,EDX
// 00535b74: JL 0x00535b56
//   XREF to: 00535b56 (CONDITIONAL_JUMP)
// 00535b76: ADD ESI,0x2
//   Label: LAB_00535b76
// 00535b79: CMP ESI,0x40
// 00535b7c: JNZ 0x00535b46
//   XREF to: 00535b46 (CONDITIONAL_JUMP)
// 00535b7e: MOV ECX,dword ptr [ESP + 0x6094]
//   XREF to: Stack[-0x3c] (READ)
// 00535b85: ADD ECX,ESI
// 00535b87: MOV dword ptr [ESP + 0x6094],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00535b8e: CMP ECX,0x480
// 00535b94: JNZ 0x00535b3d
//   XREF to: 00535b3d (CONDITIONAL_JUMP)
// 00535b96: MOV ESI,dword ptr [ESP + 0x6098]
//   XREF to: Stack[-0x38] (READ)
// 00535b9d: MOV EDI,dword ptr [ESP + 0x609c]
//   XREF to: Stack[-0x34] (READ)
// 00535ba4: MOV EAX,dword ptr [ESP + 0x605c]
//   XREF to: Stack[-0x74] (READ)
// 00535bab: MOV EDX,dword ptr [ESP + 0x6024]
//   XREF to: Stack[-0xac] (READ)
// 00535bb2: ADD ESI,0x48
// 00535bb5: ADD EDI,0x48
// 00535bb8: INC EAX
// 00535bb9: MOV dword ptr [ESP + 0x6098],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00535bc0: MOV dword ptr [ESP + 0x609c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00535bc7: MOV dword ptr [ESP + 0x605c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00535bce: CMP EAX,EDX
// 00535bd0: JGE 0x005351e2
//   XREF to: 005351e2 (CONDITIONAL_JUMP)
// 00535bd6: JMP 0x005357a9
//   XREF to: 005357a9 (UNCONDITIONAL_JUMP)
// 00535bdb: LEA EAX,[ESP + 0x5ff0]
//   Label: LAB_00535bdb
//   XREF to: Stack[-0xe0] (DATA)
// 00535be2: PUSH EAX
// 00535be3: PUSH ESI
// 00535be4: MOV EAX,dword ptr [ESP + 0x6064]
//   XREF to: Stack[-0x74] (READ)
// 00535beb: PUSH EAX
// 00535bec: LEA EAX,[ESP + 0x5c04]
//   XREF to: Stack[-0x4d8] (DATA)
// 00535bf3: PUSH EAX
// 00535bf4: LEA EAX,[ESP + 0x5a18]
//   XREF to: Stack[-0x6c8] (DATA)
// 00535bfb: PUSH EAX
// 00535bfc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00535bff: PUSH EDX
// 00535c00: CALL sound_mp3.cpp_FUN_00531480
//   XREF to: 00531480 (UNCONDITIONAL_CALL)
// 00535c05: JMP 0x00535828
//   XREF to: 00535828 (UNCONDITIONAL_JUMP)
// 00535c0a: CMP EDI,0x2
//   Label: LAB_00535c0a
// 00535c0d: JBE 0x005353a7
//   XREF to: 005353a7 (CONDITIONAL_JUMP)
// 00535c13: CMP EDI,0x3
// 00535c16: JZ 0x005355c7
//   XREF to: 005355c7 (CONDITIONAL_JUMP)
// 00535c1c: JMP 0x005351e2
//   XREF to: 005351e2 (UNCONDITIONAL_JUMP)
