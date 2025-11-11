// Name: sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
// Address: 005a45c0
// Address Range: [[005a45c0, 005a4c7c]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a537f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a5055 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa53d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9356 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064f583
//   TerminatedCString s_klp_0064f586
//   TerminatedCString s_sound_0064f58a
//   TerminatedCString s_sfx_0064f590
//   TerminatedCString s_sound_0064f594
//   TerminatedCString s_rb_0064f59a
//   TerminatedCString s_sound_0064f59d
//   TerminatedCString s_refDist_f_0064f5a3
//   TerminatedCString s_sound_sndmain_cpp_0064f5af
//   TerminatedCString s_Reference_distance_speci_0064f5c4
//   TerminatedCString s_sound_sndmain_cpp_0064f609
//   TerminatedCString s_Reference_volume_distanc_0064f61e
//   TerminatedCString s_minDist_f_0064f657
//   TerminatedCString s_sound_sndmain_cpp_0064f663
//   TerminatedCString s_Minimum_distance_specifi_0064f678
//   TerminatedCString s_sound_sndmain_cpp_0064f6bb
//   TerminatedCString s_Reference_volume_distanc_0064f6d0
//   TerminatedCString s_maxDist_f_0064f709
//   TerminatedCString s_maxVol_f_0064f715
//   TerminatedCString s_sound_sndmain_cpp_0064f720
//   TerminatedCString s_s_specified_maxVol_on_li_0064f735
//   TerminatedCString s_sound_sndmain_cpp_0064f780
//   TerminatedCString s_Minimum_distance_specifi_0064f795
//   TerminatedCString s_sound_sndmain_cpp_0064f7d8
//   TerminatedCString s_maxVol_g_is_too_small_in_0064f7ed
//   TerminatedCString s_length_d_0064f813
//   TerminatedCString s_sound_sndmain_cpp_0064f81e
//   TerminatedCString s_Length_for_s_already_kno_0064f833
//   TerminatedCString s_sound_sndmain_cpp_0064f873
//   TerminatedCString s_Invalid_length_d_in_s_li_0064f888
//   TerminatedCString s_loop_0064f8a8
//   TerminatedCString s_sound_sndmain_cpp_0064f8ad
//   TerminatedCString s_Error_parsing_s_line_d_s_0064f8c2
//   TerminatedCString s_sound_sndmain_cpp_0064f8df
//   double DOUBLE_0064f8f7 = 0.00100000000000000
//   double DOUBLE_0064f8ff = 0.100000000000000
//   float FLOAT_00663158 = 4
//   float FLOAT_0066315c = 20
//   float FLOAT_00663160 = 10000
//   double DOUBLE_00681b38 = 1
//   char[256] g_CharacterClassificationTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f5daa0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strstr_FUN_005fedd0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_CalculateDistanceMaybe_FUN_005a45c0(void)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  FILE *file_handle;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  byte bVar14;
  char *in_stack_00000004;
  char *pcVar15;
  char acStack_45c [4];
  char acStack_458 [4];
  undefined8 uStack_454;
  float fStack_44c;
  char acStack_448 [4];
  char acStack_444 [4];
  char acStack_440 [268];
  char acStack_334 [4];
  char acStack_330 [248];
  char local_238 [4];
  char acStack_234 [8];
  char acStack_22c [248];
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [4];
  char acStack_12c [4];
  char acStack_128 [4];
  char acStack_124 [4];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [244];
  undefined4 local_28 [2];
  int local_20;
  int local_1c;
  char *local_18;
  char *pcStack_14;
  
  bVar14 = 0;
  fVar5 = (float)DOUBLE_00681b38;
  fVar4 = FLOAT_0066315c * fVar5;
  fVar6 = _DAT_03f5daa0 * fVar5;
  fVar5 = FLOAT_00663160 * fVar5;
  in_stack_00000004[0x124] = '\x01';
  in_stack_00000004[0x125] = '\0';
  in_stack_00000004[0x126] = '\0';
  in_stack_00000004[0x127] = '\0';
  *(float *)(in_stack_00000004 + 0x114) = fVar4;
  *(float *)(in_stack_00000004 + 0x118) = fVar6;
  *(float *)(in_stack_00000004 + 0x11c) = fVar5;
  *(undefined4 *)(in_stack_00000004 + 0x128) = *(undefined4 *)(in_stack_00000004 + 0x110);
  in_stack_00000004[0x13c] = -1;
  in_stack_00000004[0x13d] = -1;
  in_stack_00000004[0x13e] = -1;
  in_stack_00000004[0x13f] = -1;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,local_238,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_334,(char *)0x0,(char *)0x0,acStack_234,"klp");
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_330);
  if (0 < iVar8) {
    in_stack_00000004[0x124] = '\x01';
    in_stack_00000004[0x125] = '\0';
    in_stack_00000004[0x126] = '\0';
    in_stack_00000004[0x127] = '\0';
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x110);
    in_stack_00000004[0x13c] = '\0';
    in_stack_00000004[0x13d] = '\0';
    in_stack_00000004[0x13e] = '\0';
    in_stack_00000004[0x13f] = '\0';
    *(undefined4 *)(in_stack_00000004 + 0x128) = uVar3;
  }
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_12c,(char *)0x0,(char *)0x0,acStack_22c,"sfx");
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_128);
  if ((iVar8 < 1) ||
     (file_handle = engine_dosio_c_getFile_FUN_00481a50("sound",acStack_124,"rb"),
     file_handle == (FILE *)0x0)) {
    return;
  }
  crt_stdio_c_ftell_FUN_00601560(file_handle);
  pcStack_14 = in_stack_00000004 + 0x11c;
  pcVar9 = in_stack_00000004 + 0x118;
  local_18 = in_stack_00000004 + 0x114;
  do {
    lVar10 = crt_stdio_c_ftell_FUN_00601560(unaff_ESI);
    if (((int)unaff_ESI <= lVar10) ||
       (pcVar11 = crt_stdio_c_fgets_FUN_005fefd0(acStack_444,300,unaff_ESI), pcVar11 == (char *)0x0)
       ) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x0,"..\\sound\\sndmain.cpp",0x2bf);
      return;
    }
    pcVar12 = crt_string_c_strstr_FUN_005fedd0(acStack_440,"//");
    pcVar11 = acStack_440;
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    do {
      pcVar12 = pcVar11;
      if (*pcVar11 == '\0') goto joined_r0x005a47dc;
      if (*pcVar11 == '\0') break;
      pcVar12 = pcVar11 + 1;
      if (*pcVar12 == '\0') goto joined_r0x005a47dc;
      pcVar11 = pcVar11 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
joined_r0x005a47dc:
    while ((acStack_440 < pcVar12 &&
           ((g_CharacterClassificationTable[(byte)(pcVar12[-1] + 1)] & 2U) != 0))) {
      pcVar12 = pcVar12 + -1;
    }
    *pcVar12 = '\0';
    while ((g_CharacterClassificationTable[(byte)(acStack_440[0] + 1)] & 2U) != 0) {
      uVar13 = 0xffffffff;
      pcVar11 = acStack_440;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
      } while (cVar2 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(acStack_440,acStack_440 + 1,~uVar13 - 1);
    }
    if (acStack_448[0] != '\0') {
      pcVar15 = "refDist =%f";
      pcVar11 = acStack_448;
      pcVar12 = local_18;
      iVar8 = crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"refDist =%f");
      if (iVar8 == 1) {
        if (local_1c != 0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x290;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference distance specified in %s on line %d, then again on line %d",auStack_134,local_1c,pcStack_14);
        }
        local_18 = pcVar9;
        if (fRam00000114 < (float)DOUBLE_0064f8ff) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x292;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference volume distance %g is too small in %s line %d!",SUB84((double)fRam00000114,0),
                     (int)((ulonglong)(double)fRam00000114 >> 0x20),auStack_130,pcVar9);
        }
        fRam00000118 = fRam00000114 / FLOAT_00663158;
      }
      else {
        iVar8 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xfffffba0,"minDist =%f",local_28[0]);
        if (iVar8 == 1) {
          if (pcStack_14 != (char *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x298;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Minimum distance specified in %s on line %d, then again on line %d",auStack_130,pcStack_14,pcVar9);
          }
          dVar1 = (double)fRam00000118;
          uStack_454 = dVar1;
          if (fRam00000118 < (float)DOUBLE_0064f8ff) {
            uStack_454._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
            uVar3 = uStack_454._4_4_;
            uStack_454._0_4_ = SUB84(dVar1,0);
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x29a;
            uVar7 = (float)uStack_454;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Reference volume distance %g is too small in %s line %d!","Reference volume distance %g is too small in %s line %d!",uVar7
                       ,uVar3,auStack_11c,0);
          }
        }
        else {
          iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_45c,"maxDist =%f",local_28[0]);
          if (iVar8 != 1) {
            iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_458,"maxVol =%f",acStack_45c);
            if (iVar8 == 1) {
              if (pcVar9 == (char *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a4;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("%s specified maxVol on line %d without first specifying reference distance",acStack_128,unaff_ESI);
              }
              if (unaff_ESI != (FILE *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("Minimum distance specified in %s on line %d, then again on line %d",acStack_124,unaff_ESI,0);
              }
              if ((float)uStack_454 < (float)DOUBLE_0064f8f7) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a7;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("maxVol %g is too small in %s line %d!",SUB84((double)(float)uStack_454,0),
                           (int)((ulonglong)(double)(float)uStack_454 >> 0x20),acStack_124,0);
              }
              unaff_ESI = (FILE *)0x0;
              fRam00000118 = fRam00000114 / fStack_44c;
            }
            else {
              iVar8 = crt_stdio_c_sscanf_FUN_0060013c
                                ((char *)&uStack_454,"length =%d",local_28,pcVar11,pcVar15,
                                 pcVar12);
              if (iVar8 == 1) {
                if (-1 < iRam00000110) {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 0x2ae;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Length for %s already known, then specified again in %s line %d",0,acStack_124,0);
                }
                if (local_20 < 1) {
                  g_CurrentLineNumber = 0x2af;
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Invalid length %d in %s line %d",local_20,auStack_120,0);
                }
                iRam00000110 = local_1c;
              }
              else {
                iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                  ((char *)((int)&uStack_454 + 4),"loop");
                if (iVar8 == 0) {
                  uRam00000124 = 1;
                  iRam00000128 = iRam00000110;
                  uRam0000013c = 0;
                }
                else {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 700;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Error parsing %s line %d: %s",auStack_120,0,&fStack_44c);
                }
              }
            }
          }
        }
      }
    }
  } while( true );
}


// Assembly code:
// 005a45c0: PUSH EBX
//   Label: sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
// 005a45c1: PUSH ESI
// 005a45c2: PUSH EDI
// 005a45c3: PUSH EBP
// 005a45c4: MOV EBP,ESP
// 005a45c6: SUB ESP,0x46c
// 005a45cc: AND ESP,0xfffffff8
// 005a45cf: FLD double ptr [0x00681b38]
//   XREF to: 00681b38 (READ)
// 005a45d5: FLD float ptr [0x0066315c]
//   XREF to: 0066315c (READ)
// 005a45db: FMUL ST1
// 005a45dd: FLD float ptr [0x03f5daa0]
//   XREF to: 03f5daa0 (READ)
// 005a45e3: FMUL ST2
// 005a45e5: FLD float ptr [0x00663160]
//   XREF to: 00663160 (READ)
// 005a45eb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a45ee: FMULP ST3
// 005a45f0: MOV dword ptr [EAX + 0x124],0x1
// 005a45fa: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a45fd: FXCH
// 005a45ff: FSTP float ptr [EAX + 0x114]
// 005a4605: FSTP float ptr [EAX + 0x118]
// 005a460b: FSTP float ptr [EAX + 0x11c]
// 005a4611: MOV EAX,dword ptr [EAX + 0x110]
// 005a4617: PUSH 0x0
// 005a4619: MOV dword ptr [ECX + 0x128],EAX
// 005a461f: LEA EAX,[ESP + 0x24c]
//   XREF to: Stack[-0x238] (DATA)
// 005a4626: PUSH EAX
// 005a4627: PUSH 0x0
// 005a4629: PUSH 0x0
// 005a462b: PUSH ECX
// 005a462c: MOV dword ptr [ECX + 0x13c],0xffffffff
// 005a4636: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a463b: ADD ESP,0x14
// 005a463e: PUSH 0x64f586
//   XREF to: 0064f586 (DATA)
// 005a4643: LEA EAX,[ESP + 0x24c]
//   XREF to: Stack[-0x238] (DATA)
// 005a464a: PUSH EAX
// 005a464b: PUSH 0x0
// 005a464d: PUSH 0x0
// 005a464f: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x338] (DATA)
// 005a4656: PUSH EAX
// 005a4657: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 005a465c: ADD ESP,0x14
// 005a465f: LEA EAX,[ESP + 0x148]
//   XREF to: Stack[-0x338] (DATA)
// 005a4666: PUSH EAX
// 005a4667: PUSH 0x64f58a
//   XREF to: 0064f58a (DATA)
// 005a466c: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a4671: ADD ESP,0x8
// 005a4674: TEST EAX,EAX
// 005a4676: JLE 0x005a469e
//   XREF to: 005a469e (CONDITIONAL_JUMP)
// 005a4678: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a467b: MOV dword ptr [EAX + 0x124],0x1
// 005a4685: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4688: MOV EAX,dword ptr [EAX + 0x110]
// 005a468e: MOV dword ptr [ECX + 0x13c],0x0
// 005a4698: MOV dword ptr [ECX + 0x128],EAX
// 005a469e: PUSH 0x64f590
//   Label: LAB_005a469e
//   XREF to: 0064f590 (DATA)
// 005a46a3: LEA EAX,[ESP + 0x24c]
//   XREF to: Stack[-0x238] (DATA)
// 005a46aa: PUSH EAX
// 005a46ab: PUSH 0x0
// 005a46ad: PUSH 0x0
// 005a46af: LEA EAX,[ESP + 0x358]
//   XREF to: Stack[-0x138] (DATA)
// 005a46b6: PUSH EAX
// 005a46b7: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 005a46bc: ADD ESP,0x14
// 005a46bf: LEA EAX,[ESP + 0x348]
//   XREF to: Stack[-0x138] (DATA)
// 005a46c6: PUSH EAX
// 005a46c7: PUSH 0x64f594
//   XREF to: 0064f594 (DATA)
// 005a46cc: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a46d1: MOV EBX,EAX
// 005a46d3: ADD ESP,0x8
// 005a46d6: TEST EAX,EAX
// 005a46d8: JG 0x005a46e1
//   XREF to: 005a46e1 (CONDITIONAL_JUMP)
// 005a46da: MOV ESP,EBP
//   Label: LAB_005a46da
// 005a46dc: POP EBP
// 005a46dd: POP EDI
// 005a46de: POP ESI
// 005a46df: POP EBX
// 005a46e0: RET
// 005a46e1: PUSH 0x64f59a
//   Label: LAB_005a46e1
//   XREF to: 0064f59a (DATA)
// 005a46e6: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a46ed: PUSH EAX
// 005a46ee: PUSH 0x64f59d
//   XREF to: 0064f59d (DATA)
// 005a46f3: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005a46f8: ADD ESP,0xc
// 005a46fb: MOV dword ptr [ESP + 0x45c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a4702: TEST EAX,EAX
// 005a4704: JZ 0x005a46da
//   XREF to: 005a46da (CONDITIONAL_JUMP)
// 005a4706: PUSH EAX
// 005a4707: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005a470c: ADD ESP,0x4
// 005a470f: ADD EBX,EAX
// 005a4711: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4714: ADD EAX,0x11c
// 005a4719: XOR ECX,ECX
// 005a471b: MOV dword ptr [ESP + 0x450],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005a4722: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4725: MOV dword ptr [ESP + 0x458],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005a472c: ADD EAX,0x118
// 005a4731: MOV dword ptr [ESP + 0x464],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a4738: MOV dword ptr [ESP + 0x454],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a473f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4742: MOV dword ptr [ESP + 0x460],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005a4749: ADD EAX,0x114
// 005a474e: MOV dword ptr [ESP + 0x468],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005a4755: MOV dword ptr [ESP + 0x44c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a475c: MOV EDI,dword ptr [ESP + 0x45c]
//   Label: LAB_005a475c
//   XREF to: Stack[-0x24] (READ)
// 005a4763: PUSH EDI
// 005a4764: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005a4769: ADD ESP,0x4
// 005a476c: CMP EAX,dword ptr [ESP + 0x458]
//   XREF to: Stack[-0x28] (READ)
// 005a4773: JGE 0x005a4c5c
//   XREF to: 005a4c5c (CONDITIONAL_JUMP)
// 005a4779: PUSH EDI
// 005a477a: MOV EBX,dword ptr [ESP + 0x46c]
//   XREF to: Stack[-0x18] (READ)
// 005a4781: PUSH 0x12c
// 005a4786: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a478a: INC EBX
// 005a478b: PUSH EAX
// 005a478c: MOV dword ptr [ESP + 0x474],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a4793: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005a4798: ADD ESP,0xc
// 005a479b: TEST EAX,EAX
// 005a479d: JZ 0x005a4c5c
//   XREF to: 005a4c5c (CONDITIONAL_JUMP)
// 005a47a3: PUSH 0x64f583
//   XREF to: 0064f583 (DATA)
// 005a47a8: LEA EBX,[ESP + 0x20]
//   XREF to: Stack[-0x464] (DATA)
// 005a47ac: PUSH EBX
// 005a47ad: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 005a47b2: ADD ESP,0x8
// 005a47b5: TEST EAX,EAX
// 005a47b7: JZ 0x005a47bc
//   XREF to: 005a47bc (CONDITIONAL_JUMP)
// 005a47b9: MOV byte ptr [EAX],0x0
// 005a47bc: MOV ESI,EBX
//   Label: LAB_005a47bc
// 005a47be: XOR DL,DL
// 005a47c0: MOV AL,byte ptr [ESI]
//   Label: LAB_005a47c0
//   XREF to: Stack[-0x464] (DATA)
// 005a47c2: CMP AL,DL
// 005a47c4: JZ 0x005a47d8
//   XREF to: 005a47d8 (CONDITIONAL_JUMP)
// 005a47c6: CMP AL,0x0
// 005a47c8: JZ 0x005a47d6
//   XREF to: 005a47d6 (CONDITIONAL_JUMP)
// 005a47ca: INC ESI
// 005a47cb: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x463] (DATA)
// 005a47cd: CMP AL,DL
// 005a47cf: JZ 0x005a47d8
//   XREF to: 005a47d8 (CONDITIONAL_JUMP)
// 005a47d1: INC ESI
// 005a47d2: CMP AL,0x0
// 005a47d4: JNZ 0x005a47c0
//   XREF to: 005a47c0 (CONDITIONAL_JUMP)
// 005a47d6: SUB ESI,ESI
//   Label: LAB_005a47d6
// 005a47d8: MOV EAX,ESI
//   Label: LAB_005a47d8
// 005a47da: CMP ESI,EBX
// 005a47dc: JBE 0x005a47f2
//   XREF to: 005a47f2 (CONDITIONAL_JUMP)
// 005a47de: MOV CL,byte ptr [EAX + -0x1]
//   Label: LAB_005a47de
//   XREF to: Stack[-0x462] (READ)
// 005a47e1: INC CL
// 005a47e3: AND ECX,0xff
// 005a47e9: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005a47f0: JNZ 0x005a4823
//   XREF to: 005a4823 (CONDITIONAL_JUMP)
// 005a47f2: LEA ESI,[EBX + 0x1]
//   Label: LAB_005a47f2
//   XREF to: Stack[-0x463] (DATA)
// 005a47f5: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x461] (DATA)
// 005a47f8: MOV AL,byte ptr [EBX]
//   Label: LAB_005a47f8
//   XREF to: Stack[-0x464] (DATA)
// 005a47fa: INC AL
// 005a47fc: AND EAX,0xff
// 005a4801: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005a4808: JZ 0x005a482a
//   XREF to: 005a482a (CONDITIONAL_JUMP)
// 005a480a: MOV EDI,EBX
// 005a480c: SUB ECX,ECX
// 005a480e: DEC ECX
// 005a480f: XOR EAX,EAX
// 005a4811: SCASB.REPNE ES:EDI
// 005a4813: NOT ECX
// 005a4815: DEC ECX
// 005a4816: PUSH ECX
// 005a4817: PUSH ESI
// 005a4818: PUSH EBX
// 005a4819: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005a481e: ADD ESP,0xc
// 005a4821: JMP 0x005a47f8
//   XREF to: 005a47f8 (UNCONDITIONAL_JUMP)
// 005a4823: DEC EAX
//   Label: LAB_005a4823
// 005a4824: CMP EAX,EBX
// 005a4826: JA 0x005a47de
//   XREF to: 005a47de (CONDITIONAL_JUMP)
// 005a4828: JMP 0x005a47f2
//   XREF to: 005a47f2 (UNCONDITIONAL_JUMP)
// 005a482a: CMP byte ptr [ESP + 0x1c],0x0
//   Label: LAB_005a482a
//   XREF to: Stack[-0x464] (READ)
// 005a482f: JZ 0x005a475c
//   XREF to: 005a475c (CONDITIONAL_JUMP)
// 005a4835: MOV EDI,dword ptr [ESP + 0x44c]
//   XREF to: Stack[-0x34] (READ)
// 005a483c: PUSH EDI
// 005a483d: PUSH 0x64f5a3
//   XREF to: 0064f5a3 (DATA)
// 005a4842: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a4846: PUSH EAX
// 005a4847: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005a484c: ADD ESP,0xc
// 005a484f: CMP EAX,0x1
// 005a4852: JNZ 0x005a4922
//   XREF to: 005a4922 (CONDITIONAL_JUMP)
// 005a4858: MOV EBX,dword ptr [ESP + 0x460]
//   XREF to: Stack[-0x20] (READ)
// 005a485f: TEST EBX,EBX
// 005a4861: JZ 0x005a4897
//   XREF to: 005a4897 (CONDITIONAL_JUMP)
// 005a4863: MOV EAX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a486a: PUSH EAX
// 005a486b: PUSH EBX
// 005a486c: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x138] (DATA)
// 005a4873: PUSH EAX
// 005a4874: MOV ESI,0x64f5af
//   XREF to: 0064f5af (DATA)
// 005a4879: MOV EDI,0x290
// 005a487e: PUSH 0x64f5c4
//   XREF to: 0064f5c4 (DATA)
// 005a4883: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a4889: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a488f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4894: ADD ESP,0x10
// 005a4897: MOV EAX,dword ptr [ESP + 0x468]
//   Label: LAB_005a4897
//   XREF to: Stack[-0x18] (READ)
// 005a489e: MOV dword ptr [ESP + 0x460],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a48a5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a48a8: FLD float ptr [EAX + 0x114]
// 005a48ae: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x478] (WRITE)
// 005a48b2: FCOMP double ptr [0x0064f8ff]
//   XREF to: 0064f8ff (READ)
// 005a48b8: FNSTSW AX
// 005a48ba: SAHF
// 005a48bb: JNC 0x005a48fa
//   XREF to: 005a48fa (CONDITIONAL_JUMP)
// 005a48bd: MOV ESI,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a48c4: PUSH ESI
// 005a48c5: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a48cc: PUSH EAX
// 005a48cd: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x474] (READ)
// 005a48d1: PUSH EDI
// 005a48d2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x478] (READ)
// 005a48d6: PUSH EAX
// 005a48d7: MOV ECX,0x64f609
//   XREF to: 0064f609 (PARAM)
// 005a48dc: MOV EBX,0x292
// 005a48e1: PUSH 0x64f61e
//   XREF to: 0064f61e (DATA)
// 005a48e6: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a48ec: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a48f2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a48f7: ADD ESP,0x14
// 005a48fa: CMP dword ptr [ESP + 0x464],0x0
//   Label: LAB_005a48fa
//   XREF to: Stack[-0x1c] (READ)
// 005a4902: JNZ 0x005a475c
//   XREF to: 005a475c (CONDITIONAL_JUMP)
// 005a4908: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a490b: FLD float ptr [EAX + 0x114]
// 005a4911: FDIV float ptr [0x00663158]
//   XREF to: 00663158 (READ)
// 005a4917: FSTP float ptr [EAX + 0x118]
// 005a491d: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a4922: MOV EAX,dword ptr [ESP + 0x454]
//   Label: LAB_005a4922
//   XREF to: Stack[-0x2c] (READ)
// 005a4929: PUSH EAX
// 005a492a: PUSH 0x64f657
//   XREF to: 0064f657 (DATA)
// 005a492f: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a4933: PUSH EAX
// 005a4934: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005a4939: ADD ESP,0xc
// 005a493c: CMP EAX,0x1
// 005a493f: JNZ 0x005a49ef
//   XREF to: 005a49ef (CONDITIONAL_JUMP)
// 005a4945: MOV EDI,dword ptr [ESP + 0x464]
//   XREF to: Stack[-0x1c] (READ)
// 005a494c: TEST EDI,EDI
// 005a494e: JZ 0x005a4983
//   XREF to: 005a4983 (CONDITIONAL_JUMP)
// 005a4950: MOV ECX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a4957: PUSH ECX
// 005a4958: MOV EAX,0x64f663
//   XREF to: 0064f663 (DATA)
// 005a495d: PUSH EDI
// 005a495e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a4963: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x138] (DATA)
// 005a496a: PUSH EAX
// 005a496b: MOV EDX,0x298
// 005a4970: PUSH 0x64f678
//   XREF to: 0064f678 (DATA)
// 005a4975: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a497b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4980: ADD ESP,0x10
// 005a4983: MOV EAX,dword ptr [ESP + 0x468]
//   Label: LAB_005a4983
//   XREF to: Stack[-0x18] (READ)
// 005a498a: MOV dword ptr [ESP + 0x464],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a4991: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4994: FLD float ptr [EAX + 0x118]
// 005a499a: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x470] (WRITE)
// 005a499e: FCOMP double ptr [0x0064f8ff]
//   XREF to: 0064f8ff (READ)
// 005a49a4: FNSTSW AX
// 005a49a6: SAHF
// 005a49a7: JNC 0x005a475c
//   XREF to: 005a475c (CONDITIONAL_JUMP)
// 005a49ad: MOV EAX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a49b4: PUSH EAX
// 005a49b5: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a49bc: PUSH EAX
// 005a49bd: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x46c] (READ)
// 005a49c1: PUSH EDX
// 005a49c2: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x470] (READ)
// 005a49c6: PUSH ECX
// 005a49c7: MOV ESI,0x64f6bb
//   XREF to: 0064f6bb (DATA)
// 005a49cc: MOV EDI,0x29a
// 005a49d1: PUSH 0x64f6d0
//   XREF to: 0064f6d0 (DATA)
// 005a49d6: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a49dc: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a49e2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a49e7: ADD ESP,0x14
// 005a49ea: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a49ef: MOV EDX,dword ptr [ESP + 0x450]
//   Label: LAB_005a49ef
//   XREF to: Stack[-0x30] (READ)
// 005a49f6: PUSH EDX
// 005a49f7: PUSH 0x64f709
//   XREF to: 0064f709 (DATA)
// 005a49fc: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a4a00: PUSH EAX
// 005a4a01: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005a4a06: ADD ESP,0xc
// 005a4a09: CMP EAX,0x1
// 005a4a0c: JZ 0x005a475c
//   XREF to: 005a475c (CONDITIONAL_JUMP)
// 005a4a12: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x468] (DATA)
// 005a4a16: PUSH EAX
// 005a4a17: PUSH 0x64f715
//   XREF to: 0064f715 (DATA)
// 005a4a1c: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a4a20: PUSH EAX
// 005a4a21: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005a4a26: ADD ESP,0xc
// 005a4a29: CMP EAX,0x1
// 005a4a2c: JNZ 0x005a4b24
//   XREF to: 005a4b24 (CONDITIONAL_JUMP)
// 005a4a32: CMP dword ptr [ESP + 0x460],0x0
//   XREF to: Stack[-0x20] (READ)
// 005a4a3a: JNZ 0x005a4a6f
//   XREF to: 005a4a6f (CONDITIONAL_JUMP)
// 005a4a3c: MOV EAX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a4a43: PUSH EAX
// 005a4a44: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a4a4b: PUSH EAX
// 005a4a4c: MOV ESI,0x64f720
//   XREF to: 0064f720 (DATA)
// 005a4a51: MOV EDI,0x2a4
// 005a4a56: PUSH 0x64f735
//   XREF to: 0064f735 (DATA)
// 005a4a5b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a4a61: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a4a67: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4a6c: ADD ESP,0xc
// 005a4a6f: MOV EDX,dword ptr [ESP + 0x464]
//   Label: LAB_005a4a6f
//   XREF to: Stack[-0x1c] (READ)
// 005a4a76: TEST EDX,EDX
// 005a4a78: JZ 0x005a4aae
//   XREF to: 005a4aae (CONDITIONAL_JUMP)
// 005a4a7a: MOV ESI,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a4a81: PUSH ESI
// 005a4a82: PUSH EDX
// 005a4a83: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x138] (DATA)
// 005a4a8a: PUSH EAX
// 005a4a8b: MOV ECX,0x64f780
//   XREF to: 0064f780 (PARAM)
// 005a4a90: MOV EBX,0x2a5
// 005a4a95: PUSH 0x64f795
//   XREF to: 0064f795 (DATA)
// 005a4a9a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a4aa0: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a4aa6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4aab: ADD ESP,0x10
// 005a4aae: FLD float ptr [ESP + 0x18]
//   Label: LAB_005a4aae
//   XREF to: Stack[-0x468] (READ)
// 005a4ab2: MOV EAX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a4ab9: FST double ptr [ESP]
//   XREF to: Stack[-0x480] (DATA)
// 005a4abc: MOV dword ptr [ESP + 0x464],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a4ac3: FCOMP double ptr [0x0064f8f7]
//   XREF to: 0064f8f7 (READ)
// 005a4ac9: FNSTSW AX
// 005a4acb: SAHF
// 005a4acc: JC 0x005a4ae6
//   XREF to: 005a4ae6 (CONDITIONAL_JUMP)
// 005a4ace: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005a4ace
//   XREF to: Stack[0x4] (READ)
// 005a4ad1: FLD float ptr [EAX + 0x114]
// 005a4ad7: FDIV float ptr [ESP + 0x18]
//   XREF to: Stack[-0x468] (READ)
// 005a4adb: FSTP float ptr [EAX + 0x118]
// 005a4ae1: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a4ae6: MOV ECX,dword ptr [ESP + 0x468]
//   Label: LAB_005a4ae6
//   XREF to: Stack[-0x18] (READ)
// 005a4aed: MOV EAX,0x64f7d8
//   XREF to: 0064f7d8 (DATA)
// 005a4af2: PUSH ECX
// 005a4af3: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a4af8: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a4aff: PUSH EAX
// 005a4b00: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x47c] (READ)
// 005a4b04: PUSH EBX
// 005a4b05: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x480] (READ)
// 005a4b09: PUSH ESI
// 005a4b0a: MOV EDX,0x2a7
// 005a4b0f: PUSH 0x64f7ed
//   XREF to: 0064f7ed (DATA)
// 005a4b14: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a4b1a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4b1f: ADD ESP,0x14
// 005a4b22: JMP 0x005a4ace
//   XREF to: 005a4ace (UNCONDITIONAL_JUMP)
// 005a4b24: LEA EAX,[ESP + 0x448]
//   Label: LAB_005a4b24
//   XREF to: Stack[-0x38] (DATA)
// 005a4b2b: PUSH EAX
// 005a4b2c: PUSH 0x64f813
//   XREF to: 0064f813 (DATA)
// 005a4b31: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x464] (DATA)
// 005a4b35: PUSH EAX
// 005a4b36: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005a4b3b: ADD ESP,0xc
// 005a4b3e: CMP EAX,0x1
// 005a4b41: JNZ 0x005a4bde
//   XREF to: 005a4bde (CONDITIONAL_JUMP)
// 005a4b47: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4b4a: CMP dword ptr [EAX + 0x110],0x0
// 005a4b51: JL 0x005a4b89
//   XREF to: 005a4b89 (CONDITIONAL_JUMP)
// 005a4b53: MOV ECX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x18] (READ)
// 005a4b5a: MOV EAX,0x64f81e
//   XREF to: 0064f81e (DATA)
// 005a4b5f: PUSH ECX
// 005a4b60: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a4b65: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a4b6c: PUSH EAX
// 005a4b6d: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4b70: PUSH EBX
// 005a4b71: MOV EDX,0x2ae
// 005a4b76: PUSH 0x64f833
//   XREF to: 0064f833 (DATA)
// 005a4b7b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a4b81: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4b86: ADD ESP,0x10
// 005a4b89: MOV ESI,dword ptr [ESP + 0x448]
//   Label: LAB_005a4b89
//   XREF to: Stack[-0x38] (READ)
// 005a4b90: TEST ESI,ESI
// 005a4b92: JLE 0x005a4ba9
//   XREF to: 005a4ba9 (CONDITIONAL_JUMP)
// 005a4b94: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_005a4b94
//   XREF to: Stack[0x4] (READ)
// 005a4b97: MOV EAX,dword ptr [ESP + 0x448]
//   XREF to: Stack[-0x38] (READ)
// 005a4b9e: MOV dword ptr [ECX + 0x110],EAX
// 005a4ba4: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a4ba9: MOV EDX,dword ptr [ESP + 0x468]
//   Label: LAB_005a4ba9
//   XREF to: Stack[-0x18] (READ)
// 005a4bb0: MOV EAX,0x2af
// 005a4bb5: PUSH EDX
// 005a4bb6: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a4bbb: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x138] (DATA)
// 005a4bc2: PUSH EAX
// 005a4bc3: PUSH ESI
// 005a4bc4: MOV EDI,0x64f873
//   XREF to: 0064f873 (DATA)
// 005a4bc9: PUSH 0x64f888
//   XREF to: 0064f888 (DATA)
// 005a4bce: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a4bd4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4bd9: ADD ESP,0x10
// 005a4bdc: JMP 0x005a4b94
//   XREF to: 005a4b94 (UNCONDITIONAL_JUMP)
// 005a4bde: PUSH 0x64f8a8
//   Label: LAB_005a4bde
//   XREF to: 0064f8a8 (DATA)
// 005a4be3: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x464] (DATA)
// 005a4be7: PUSH EAX
// 005a4be8: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a4bed: ADD ESP,0x8
// 005a4bf0: TEST EAX,EAX
// 005a4bf2: JNZ 0x005a4c1f
//   XREF to: 005a4c1f (CONDITIONAL_JUMP)
// 005a4bf4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4bf7: MOV dword ptr [EAX + 0x124],0x1
// 005a4c01: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4c04: MOV EAX,dword ptr [EAX + 0x110]
// 005a4c0a: MOV dword ptr [ECX + 0x13c],0x0
// 005a4c14: MOV dword ptr [ECX + 0x128],EAX
// 005a4c1a: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a4c1f: LEA EAX,[ESP + 0x1c]
//   Label: LAB_005a4c1f
//   XREF to: Stack[-0x464] (DATA)
// 005a4c23: PUSH EAX
// 005a4c24: MOV ESI,dword ptr [ESP + 0x46c]
//   XREF to: Stack[-0x18] (READ)
// 005a4c2b: PUSH ESI
// 005a4c2c: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x138] (DATA)
// 005a4c33: PUSH EAX
// 005a4c34: MOV ECX,0x64f8ad
//   XREF to: 0064f8ad (PARAM)
// 005a4c39: MOV EBX,0x2bc
// 005a4c3e: PUSH 0x64f8c2
//   XREF to: 0064f8c2 (DATA)
// 005a4c43: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a4c49: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a4c4f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4c54: ADD ESP,0x10
// 005a4c57: JMP 0x005a475c
//   XREF to: 005a475c (UNCONDITIONAL_JUMP)
// 005a4c5c: PUSH 0x2bf
//   Label: LAB_005a4c5c
// 005a4c61: PUSH 0x64f8df
//   XREF to: 0064f8df (DATA)
// 005a4c66: MOV ESI,dword ptr [ESP + 0x464]
//   XREF to: Stack[-0x24] (READ)
// 005a4c6d: PUSH ESI
// 005a4c6e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005a4c73: ADD ESP,0xc
// 005a4c76: MOV ESP,EBP
// 005a4c78: POP EBP
// 005a4c79: POP EDI
// 005a4c7a: POP ESI
// 005a4c7b: POP EBX
// 005a4c7c: RET
