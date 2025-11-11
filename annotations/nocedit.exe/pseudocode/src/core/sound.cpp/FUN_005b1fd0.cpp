// Name: core_sound.cpp_FUN_005b1fd0
// Address: 005b1fd0
// Address Range: [[005b1fd0, 005b26e9]]
// Convention: __cdecl
// Signature: int core_sound.cpp_FUN_005b1fd0(void)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b3a40 (005b3a40) at 005b3a5a [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3a70 (005b3a70) at 005b3a88 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3ae0 (005b3ae0) at 005b3b12 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3b30 (005b3b30) at 005b3b5f [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20 (005b3a20) at 005b3a34 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3aa0 (005b3aa0) at 005b3acc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_n_0065255a
//   TerminatedCString s_core_sound_cpp_00652564
//   TerminatedCString s_Invalid_sfx_string_s_00652576
//   undefined4 DAT_0065258d
//   undefined4 DAT_0065258f
//   TerminatedCString s_wav_00652591
//   undefined4 DAT_00652592
//   undefined4 DAT_00652593
//   undefined4 DAT_00652594
//   TerminatedCString s_Can_t_find_wav_s_00652596
//   TerminatedCString s_core_sound_cpp_006525aa
//   TerminatedCString s_at_006525bc
//   TerminatedCString s_q_xfer_fletch_missingwav_006525bf
//   TerminatedCString s_anon_006525df
//   TerminatedCString s_Missing_s_00652621
//   TerminatedCString s_Time_s_0065262e
//   TerminatedCString s_USERNAME_00652637
//   TerminatedCString s_USERNAME_s_00652640
//   TerminatedCString s_COMPUTERNAME_0065264e
//   TerminatedCString s_COMPUTERNAME_s_0065265b
//   TerminatedCString s_core_sound_cpp_0065266d
//   TerminatedCString s_f_n_0065267f
//   TerminatedCString s_core_sound_cpp_00652685
//   TerminatedCString s_Invalid_sfx_string_s_00652697
//   TerminatedCString s_f_n_006526ae
//   TerminatedCString s_core_sound_cpp_006526b4
//   TerminatedCString s_Invalid_sfx_string_s_006526c6
//   TerminatedCString s_core_sound_cpp_006526dd
//   TerminatedCString s_Invalid_sfx_string_s_006526ef
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   WatcomStaticDestructorNode DAT_00681ee0
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_006820b0
//   undefined4 DAT_006820b4
//   char[256] g_CharacterClassificationTable
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03f6af50
//   undefined1 DAT_03f6af60
//   CSound g_CSoundInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056fac0
//   core_sound.cpp_CSound_FUN_005b1ed0
//   crt_env.c_getenv_FUN_006013f0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_stdlib.c_atexit_FUN_005ff060
//   crt_time.c_asctime_FUN_00601768
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   sound_sndmain.cpp_FUN_005a88e0
//   sound_sndmain.cpp_FUN_005a8940
//   sound_sndmain.cpp_FUN_005a8a60
//   sound_sndmain.cpp_FUN_005a8a80
//   sound_sndmain.cpp_FUN_005a8b70
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_sound_cpp_FUN_005b1fd0(void)

{
  char *pcVar1;
  float *pfVar2;
  int iVar3;
  FILE *file;
  tm *timeptr;
  char *pcVar4;
  char cVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  char *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float *in_stack_00000018;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  char acStack_110 [16];
  char acStack_100 [4];
  char acStack_fc [80];
  undefined4 uStack_ac;
  char cStack_a8;
  char cStack_a4;
  float local_48;
  float local_44;
  float local_40;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  char *pcStack_14;
  
  bVar11 = 0;
  iVar3 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = 0;
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    cVar5 = *in_stack_00000008;
    local_34 = in_stack_00000008;
    pcVar7 = acStack_110;
    while ((((cVar5 != '\0' && ((g_CharacterClassificationTable[(byte)(*local_34 + 1)] & 2U) == 0))
            && (cVar5 = *local_34, cVar5 != '@')) && (cVar5 != '*'))) {
      if (cVar5 == '[') {
        uVar12 = CONCAT44(&local_30,local_28);
        local_30 = (char *)0xffffffff;
        crt_stdio_c_sscanf_FUN_0060013c(local_34,"[%d,%d]%n");
        if (((int)local_38 < 5) || ((int)local_30 < (int)local_34)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x137;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
        }
        iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,&DAT_0065258d,uVar12);
        pcVar6 = pcVar7 + iVar3;
        if (9 < (int)local_2c) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar6,&DAT_0065258f);
          pcVar6 = pcVar6 + iVar3;
        }
        local_34 = local_34 + (int)local_30;
      }
      else {
        pcVar6 = pcVar7 + 1;
        *pcVar7 = cVar5;
        local_34 = local_34 + 1;
      }
      cVar5 = *local_34;
      pcVar7 = pcVar6;
    }
    *pcVar7 = '\0';
    pcVar7 = acStack_110;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '.') goto LAB_005b2052;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '.') goto LAB_005b2052;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_005b2052:
    if (pcVar6 == (char *)0x0) {
      pcVar6 = ".wav";
      iVar3 = -1;
      pcVar7 = acStack_110;
      do {
        pcVar9 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar7 + (uint)bVar11 * -2 + 1;
        cVar5 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar5 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar5 = *pcVar6;
        *pcVar9 = cVar5;
        if (cVar5 == '\0') break;
        cVar5 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar5;
        pcVar9 = pcVar9 + 2;
      } while (cVar5 != '\0');
    }
    puVar8 = &DAT_006820b0;
    puVar10 = &uStack_ac;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    pcVar7 = acStack_110;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '!') goto LAB_005b20b2;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '!') goto LAB_005b20b2;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_005b20b2:
    if (pcVar6 == (char *)0x0) {
      core_sound_cpp_CSound_FUN_005b1ed0(g_CSoundPtr);
    }
    else {
      local_48 = in_stack_0000000c;
      local_44 = in_stack_00000010;
      local_40 = in_stack_00000014;
      if (in_stack_00000018 != (float *)0x0) {
        local_48 = in_stack_0000000c + *in_stack_00000018;
        local_44 = in_stack_00000010 + in_stack_00000018[1];
        local_40 = in_stack_00000014 + in_stack_00000018[2];
      }
      pcVar7 = (char *)core_set_cpp_CDemonSet_FUN_0056fac0(g_CDemonSetPtr);
      pcStack_14 = pcVar7;
      local_38 = pcVar7 + 5;
      do {
        iVar3 = 0;
        local_34 = pcStack_14;
        do {
          pcVar6 = pcVar7;
          if (iVar3 == 0) {
            pcVar6 = local_34;
          }
          if ((-1 < (int)pcVar6) && ((int)pcVar6 < 6)) {
            pcVar9 = acStack_110 + 4;
            pcVar4 = &stack0xfffffe90;
            cVar5 = acStack_110[4];
            while (cVar5 != '\0') {
              cVar5 = *pcVar9;
              if (cVar5 == '!') {
                cVar5 = (char)pcVar6 + '0';
              }
              *pcVar4 = cVar5;
              pcVar4 = pcVar4 + 1;
              pcVar1 = pcVar9 + 1;
              pcVar9 = pcVar9 + 1;
              cVar5 = *pcVar1;
            }
            *pcVar4 = '\0';
            core_sound_cpp_CSound_FUN_005b1ed0(g_CSoundPtr);
            if (cStack_a4 != '\0') break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2);
        if (cStack_a8 != '\0') break;
        pcStack_14 = pcStack_14 + 1;
        pcVar7 = pcVar7 + -1;
      } while ((int)pcStack_14 < (int)local_38);
    }
    if (cStack_a8 == '\0') {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Can't find wav: %s\n",acStack_110 + 4);
      if ((DAT_03f6af60 & 1) == 0) {
        DAT_03f6af60 = DAT_03f6af60 | 1;
        shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&DAT_03f6af50);
        crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681ee0);
      }
      iVar3 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                        ((CStrList *)&DAT_03f6af50,acStack_100);
      if (iVar3 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&DAT_03f6af50,acStack_fc);
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         ("\\\\q\\xfer\\fletch\\missingwavs.txt",(char *)0x0,"at",
                          "..\\core\\sound.cpp",0x181);
        if (file != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"----------------------------------------------------------------\n");
          crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0xfffffffc);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Missing: %s\n");
          timeptr = crt_time_c_localtime_FUN_00600288((time_t *)&stack0x00000004);
          crt_time_c_asctime_FUN_00601768(timeptr);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Time: %s");
          pcVar7 = crt_env_c_getenv_FUN_006013f0("USERNAME");
          if (pcVar7 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"USERNAME: %s\n");
          }
          pcVar7 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME");
          if (pcVar7 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"COMPUTERNAME: %s\n");
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\sound.cpp",400);
          return 0;
        }
      }
      return 0;
    }
    fVar13 = 1.0;
    fVar14 = 1.0;
    cVar5 = *local_30;
    pfVar2 = in_stack_00000018;
    while (cVar5 != '\0') {
      in_stack_00000018 = pfVar2;
      if ((g_CharacterClassificationTable[(byte)(*local_30 + 1)] & 2U) == 0) {
        if (*local_30 == '@') {
          local_1c = -1;
          crt_stdio_c_sscanf_FUN_0060013c
                    (local_30,"@%f%n","@%f%n",&stack0xfffffe8c,&local_1c);
          if ((local_1c < 2) || (fVar14 < 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1a4;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Invalid sfx string: %s",in_stack_00000008);
            local_2c = local_2c + local_18;
          }
          else {
            local_30 = local_30 + local_1c;
          }
        }
        else if (*local_30 == '*') {
          local_18 = -1;
          crt_stdio_c_sscanf_FUN_0060013c(local_30,"*%f%n");
          if ((local_18 < 2) || (fVar13 <= 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1aa;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Invalid sfx string: %s",in_stack_00000008);
            local_2c = local_2c + (int)pcStack_14;
          }
          else {
            local_30 = local_30 + local_18;
          }
        }
        else {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x1ad;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
        }
      }
      else {
        local_30 = local_30 + 1;
      }
      pfVar2 = in_stack_00000018;
      cVar5 = *local_30;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    if (pfVar2 == (float *)0x0) {
      sound_sndmain_cpp_FUN_005a88e0();
    }
    else {
      sound_sndmain_cpp_FUN_005a8940();
    }
    sound_sndmain_cpp_FUN_005a8b70();
    sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(0);
    sound_sndmain_cpp_FUN_005a8a60();
    sound_sndmain_cpp_FUN_005a8a80();
    iVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return iVar3;
}


// Assembly code:
// 005b1fd0: PUSH EBX
//   Label: core_sound.cpp_FUN_005b1fd0
// 005b1fd1: PUSH ESI
// 005b1fd2: PUSH EDI
// 005b1fd3: PUSH EBP
// 005b1fd4: MOV EBP,ESP
// 005b1fd6: SUB ESP,0x16c
// 005b1fdc: AND ESP,0xfffffff8
// 005b1fdf: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005b1fe4: TEST EAX,EAX
// 005b1fe6: JNZ 0x005b2224
//   XREF to: 005b2224 (CONDITIONAL_JUMP)
// 005b1fec: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b1fef: TEST EDX,EDX
// 005b1ff1: JZ 0x005b221d
//   XREF to: 005b221d (CONDITIONAL_JUMP)
// 005b1ff7: CMP byte ptr [EDX],0x0
// 005b1ffa: JZ 0x005b221d
//   XREF to: 005b221d (CONDITIONAL_JUMP)
// 005b2000: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b2003: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x114] (DATA)
// 005b2007: MOV DH,byte ptr [EAX]
// 005b2009: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005b2010: TEST DH,DH
// 005b2012: JZ 0x005b2031
//   XREF to: 005b2031 (CONDITIONAL_JUMP)
// 005b2014: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b2014
//   XREF to: Stack[-0x38] (READ)
// 005b201b: MOV AL,byte ptr [EAX]
// 005b201d: INC AL
// 005b201f: AND EAX,0xff
// 005b2024: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005b202b: JZ 0x005b222d
//   XREF to: 005b222d (CONDITIONAL_JUMP)
// 005b2031: MOV DL,0x2e
//   Label: LAB_005b2031
// 005b2033: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x114] (DATA)
// 005b2036: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x114] (DATA)
// 005b203a: MOV AL,byte ptr [ESI]
//   Label: LAB_005b203a
//   XREF to: Stack[-0x114] (DATA)
// 005b203c: CMP AL,DL
// 005b203e: JZ 0x005b2052
//   XREF to: 005b2052 (CONDITIONAL_JUMP)
// 005b2040: CMP AL,0x0
// 005b2042: JZ 0x005b2050
//   XREF to: 005b2050 (CONDITIONAL_JUMP)
// 005b2044: INC ESI
// 005b2045: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005b2047: CMP AL,DL
// 005b2049: JZ 0x005b2052
//   XREF to: 005b2052 (CONDITIONAL_JUMP)
// 005b204b: INC ESI
// 005b204c: CMP AL,0x0
// 005b204e: JNZ 0x005b203a
//   XREF to: 005b203a (CONDITIONAL_JUMP)
// 005b2050: SUB ESI,ESI
//   Label: LAB_005b2050
// 005b2052: TEST ESI,ESI
//   Label: LAB_005b2052
// 005b2054: JNZ 0x005b2081
//   XREF to: 005b2081 (CONDITIONAL_JUMP)
// 005b2056: MOV ESI,0x652591
//   XREF to: 00652591 (DATA)
// 005b205b: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x114] (DATA)
// 005b205f: PUSH EDI
// 005b2060: SUB ECX,ECX
// 005b2062: DEC ECX
// 005b2063: MOV AL,0x0
// 005b2065: SCASB.REPNE ES:EDI
// 005b2067: DEC EDI
// 005b2068: MOV AL,byte ptr [ESI]
//   Label: LAB_005b2068
//   XREF to: 00652591 (READ)
//   XREF to: 00652593 (READ)
// 005b206a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005b206c: CMP AL,0x0
// 005b206e: JZ 0x005b2080
//   XREF to: 005b2080 (CONDITIONAL_JUMP)
// 005b2070: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652592 (READ)
//   XREF to: 00652594 (READ)
// 005b2073: ADD ESI,0x2
// 005b2076: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005b2079: ADD EDI,0x2
// 005b207c: CMP AL,0x0
// 005b207e: JNZ 0x005b2068
//   XREF to: 005b2068 (CONDITIONAL_JUMP)
// 005b2080: POP EDI
//   Label: LAB_005b2080
// 005b2081: MOV ECX,0x19
//   Label: LAB_005b2081
// 005b2086: LEA EDI,[ESP + 0xd0]
//   XREF to: Stack[-0xb0] (DATA)
// 005b208d: MOV ESI,0x6820b0
//   XREF to: 006820b0 (DATA)
// 005b2092: MOVSD.REP ES:EDI,ESI
//   XREF to: 006820b0 (READ)
//   XREF to: 006820b4 (READ)
// 005b2094: MOV DL,0x21
// 005b2096: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x114] (DATA)
// 005b209a: MOV AL,byte ptr [ESI]
//   Label: LAB_005b209a
//   XREF to: Stack[-0x114] (DATA)
// 005b209c: CMP AL,DL
// 005b209e: JZ 0x005b20b2
//   XREF to: 005b20b2 (CONDITIONAL_JUMP)
// 005b20a0: CMP AL,0x0
// 005b20a2: JZ 0x005b20b0
//   XREF to: 005b20b0 (CONDITIONAL_JUMP)
// 005b20a4: INC ESI
// 005b20a5: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005b20a7: CMP AL,DL
// 005b20a9: JZ 0x005b20b2
//   XREF to: 005b20b2 (CONDITIONAL_JUMP)
// 005b20ab: INC ESI
// 005b20ac: CMP AL,0x0
// 005b20ae: JNZ 0x005b209a
//   XREF to: 005b209a (CONDITIONAL_JUMP)
// 005b20b0: SUB ESI,ESI
//   Label: LAB_005b20b0
// 005b20b2: TEST ESI,ESI
//   Label: LAB_005b20b2
// 005b20b4: JZ 0x005b23ed
//   XREF to: 005b23ed (CONDITIONAL_JUMP)
// 005b20ba: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b20bd: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005b20c4: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005b20c7: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005b20ce: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b20d1: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005b20d4: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005b20db: TEST EBX,EBX
// 005b20dd: JNZ 0x005b232e
//   XREF to: 005b232e (CONDITIONAL_JUMP)
// 005b20e3: LEA EAX,[ESP + 0x134]
//   Label: LAB_005b20e3
//   XREF to: Stack[-0x4c] (DATA)
// 005b20ea: PUSH EAX
// 005b20eb: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b20f1: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005b20f2: CALL core_set.cpp_CDemonSet_FUN_0056fac0
//   XREF to: 0056fac0 (UNCONDITIONAL_CALL)
// 005b20f7: ADD ESP,0x8
// 005b20fa: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005b2101: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b2108: ADD EAX,0x5
// 005b210b: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005b2112: MOV BH,0x21
// 005b2114: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_005b2114
//   XREF to: Stack[-0x1c] (READ)
// 005b211b: MOV EDI,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x18] (READ)
// 005b2122: XOR ESI,ESI
// 005b2124: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005b212b: TEST ESI,ESI
//   Label: LAB_005b212b
// 005b212d: JNZ 0x005b238f
//   XREF to: 005b238f (CONDITIONAL_JUMP)
// 005b2133: MOV ECX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x3c] (READ)
// 005b213a: TEST ECX,ECX
//   Label: LAB_005b213a
// 005b213c: JL 0x005b2147
//   XREF to: 005b2147 (CONDITIONAL_JUMP)
// 005b213e: CMP ECX,0x5
// 005b2141: JLE 0x005b2396
//   XREF to: 005b2396 (CONDITIONAL_JUMP)
// 005b2147: INC ESI
//   Label: LAB_005b2147
// 005b2148: CMP ESI,0x2
// 005b214b: JL 0x005b212b
//   XREF to: 005b212b (CONDITIONAL_JUMP)
// 005b214d: CMP byte ptr [ESP + 0xd0],0x0
//   Label: LAB_005b214d
//   XREF to: Stack[-0xb0] (READ)
// 005b2155: JZ 0x005b235d
//   XREF to: 005b235d (CONDITIONAL_JUMP)
// 005b215b: CMP byte ptr [ESP + 0xd0],0x0
//   Label: LAB_005b215b
//   XREF to: Stack[-0xb0] (READ)
// 005b2163: JZ 0x005b240e
//   XREF to: 005b240e (CONDITIONAL_JUMP)
// 005b2169: MOV EDI,0x3f800000
// 005b216e: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x38] (READ)
// 005b2175: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x180] (DATA)
// 005b2178: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x17c] (WRITE)
// 005b217c: CMP byte ptr [EAX],0x0
// 005b217f: JZ 0x005b21ba
//   XREF to: 005b21ba (CONDITIONAL_JUMP)
// 005b2181: MOV ESI,0xffffffff
// 005b2186: MOV EBX,0x2
// 005b218b: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b218b
//   XREF to: Stack[-0x38] (READ)
// 005b2192: MOV AL,byte ptr [EAX]
// 005b2194: INC AL
// 005b2196: AND EAX,0xff
// 005b219b: TEST byte ptr [EAX + 0x6849c4],BL
//   XREF to: 006849c4 (DATA)
// 005b21a1: JZ 0x005b2565
//   XREF to: 005b2565 (CONDITIONAL_JUMP)
// 005b21a7: INC dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b21ae: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b21ae
//   XREF to: Stack[-0x38] (READ)
// 005b21b5: CMP byte ptr [EAX],0x0
// 005b21b8: JNZ 0x005b218b
//   XREF to: 005b218b (CONDITIONAL_JUMP)
// 005b21ba: MOV EBX,dword ptr [EBP + 0x28]
//   Label: LAB_005b21ba
//   XREF to: Stack[0x18] (READ)
// 005b21bd: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b21c2: TEST EBX,EBX
// 005b21c4: JZ 0x005b26c2
//   XREF to: 005b26c2 (CONDITIONAL_JUMP)
// 005b21ca: PUSH EBX
// 005b21cb: CALL sound_sndmain.cpp_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 005b21d0: ADD ESP,0x4
// 005b21d3: MOV EDI,dword ptr [EBP + 0x2c]
//   Label: LAB_005b21d3
//   XREF to: Stack[0x1c] (READ)
// 005b21d6: PUSH EDI
// 005b21d7: CALL sound_sndmain.cpp_FUN_005a8b70
//   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
// 005b21dc: ADD ESP,0x4
// 005b21df: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b21e2: PUSH EAX
// 005b21e3: PUSH 0x0
// 005b21e5: CALL sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
//   XREF to: 005a8aa0 (UNCONDITIONAL_CALL)
// 005b21ea: ADD ESP,0x8
// 005b21ed: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x17c] (READ)
// 005b21f1: CALL sound_sndmain.cpp_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005b21f6: ADD ESP,0x4
// 005b21f9: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005b21fc: CALL sound_sndmain.cpp_FUN_005a8a80
//   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
// 005b2201: ADD ESP,0x4
// 005b2204: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0xb0] (DATA)
// 005b220b: PUSH EAX
// 005b220c: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b2211: ADD ESP,0x4
// 005b2214: MOV ESI,EAX
// 005b2216: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b221b: MOV EAX,ESI
// 005b221d: MOV ESP,EBP
//   Label: LAB_005b221d
// 005b221f: POP EBP
// 005b2220: POP EDI
// 005b2221: POP ESI
// 005b2222: POP EBX
// 005b2223: RET
// 005b2224: XOR EAX,EAX
//   Label: LAB_005b2224
// 005b2226: MOV ESP,EBP
// 005b2228: POP EBP
// 005b2229: POP EDI
// 005b222a: POP ESI
// 005b222b: POP EBX
// 005b222c: RET
// 005b222d: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b222d
//   XREF to: Stack[-0x38] (READ)
// 005b2234: MOV BH,byte ptr [EAX]
// 005b2236: CMP BH,0x40
// 005b2239: JZ 0x005b2031
//   XREF to: 005b2031 (CONDITIONAL_JUMP)
// 005b223f: CMP BH,0x2a
// 005b2242: JZ 0x005b2031
//   XREF to: 005b2031 (CONDITIONAL_JUMP)
// 005b2248: CMP BH,0x5b
// 005b224b: JNZ 0x005b231e
//   XREF to: 005b231e (CONDITIONAL_JUMP)
// 005b2251: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0x34] (DATA)
// 005b2258: PUSH EAX
// 005b2259: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x2c] (DATA)
// 005b2260: PUSH EAX
// 005b2261: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x30] (DATA)
// 005b2268: PUSH EAX
// 005b2269: PUSH 0x65255a
//   XREF to: 0065255a (DATA)
// 005b226e: MOV EDI,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x38] (READ)
// 005b2275: MOV EBX,0xffffffff
// 005b227a: PUSH EDI
// 005b227b: MOV dword ptr [ESP + 0x160],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 005b2282: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005b2287: ADD ESP,0x14
// 005b228a: CMP dword ptr [ESP + 0x14c],0x5
//   XREF to: Stack[-0x34] (READ)
// 005b2292: JGE 0x005b2308
//   XREF to: 005b2308 (CONDITIONAL_JUMP)
// 005b2294: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_005b2294
//   XREF to: Stack[0x8] (READ)
// 005b2297: PUSH EDI
// 005b2298: MOV ECX,0x652564
//   XREF to: 00652564 (PARAM)
// 005b229d: MOV EBX,0x137
// 005b22a2: PUSH 0x652576
//   XREF to: 00652576 (DATA)
// 005b22a7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005b22ad: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005b22b3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005b22b8: ADD ESP,0x8
// 005b22bb: PUSH 0x65258d
//   Label: LAB_005b22bb
//   XREF to: 0065258d (DATA)
// 005b22c0: PUSH ESI
// 005b22c1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b22c6: ADD ESP,0x8
// 005b22c9: ADD ESI,EAX
// 005b22cb: CMP dword ptr [ESP + 0x154],0x9
//   XREF to: Stack[-0x2c] (READ)
// 005b22d3: JLE 0x005b22e5
//   XREF to: 005b22e5 (CONDITIONAL_JUMP)
// 005b22d5: PUSH 0x65258f
//   XREF to: 0065258f (DATA)
// 005b22da: PUSH ESI
// 005b22db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b22e0: ADD ESP,0x8
// 005b22e3: ADD ESI,EAX
// 005b22e5: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_005b22e5
//   XREF to: Stack[-0x34] (READ)
// 005b22ec: ADD dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b22f3: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b22f3
//   XREF to: Stack[-0x38] (READ)
// 005b22fa: CMP byte ptr [EAX],0x0
// 005b22fd: JNZ 0x005b2014
//   XREF to: 005b2014 (CONDITIONAL_JUMP)
// 005b2303: JMP 0x005b2031
//   XREF to: 005b2031 (UNCONDITIONAL_JUMP)
// 005b2308: MOV EAX,dword ptr [ESP + 0x150]
//   Label: LAB_005b2308
//   XREF to: Stack[-0x30] (READ)
// 005b230f: CMP EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x2c] (READ)
// 005b2316: JG 0x005b2294
//   XREF to: 005b2294 (CONDITIONAL_JUMP)
// 005b231c: JMP 0x005b22bb
//   XREF to: 005b22bb (UNCONDITIONAL_JUMP)
// 005b231e: INC ESI
//   Label: LAB_005b231e
// 005b231f: LEA ECX,[EAX + 0x1]
// 005b2322: MOV byte ptr [ESI + -0x1],BH
//   XREF to: Stack[-0x114] (WRITE)
// 005b2325: MOV dword ptr [ESP + 0x148],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 005b232c: JMP 0x005b22f3
//   XREF to: 005b22f3 (UNCONDITIONAL_JUMP)
// 005b232e: FLD float ptr [EBP + 0x1c]
//   Label: LAB_005b232e
//   XREF to: Stack[0xc] (READ)
// 005b2331: FADD float ptr [EBX]
// 005b2333: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005b2336: FXCH
// 005b2338: FSTP float ptr [ESP + 0x134]
//   XREF to: Stack[-0x4c] (WRITE)
// 005b233f: FADD float ptr [EBX + 0x4]
// 005b2342: FLD float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b2345: FXCH
// 005b2347: FSTP float ptr [ESP + 0x138]
//   XREF to: Stack[-0x48] (WRITE)
// 005b234e: FADD float ptr [EBX + 0x8]
// 005b2351: FSTP float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x44] (WRITE)
// 005b2358: JMP 0x005b20e3
//   XREF to: 005b20e3 (UNCONDITIONAL_JUMP)
// 005b235d: MOV ECX,dword ptr [ESP + 0x164]
//   Label: LAB_005b235d
//   XREF to: Stack[-0x1c] (READ)
// 005b2364: MOV EDX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x18] (READ)
// 005b236b: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x40] (READ)
// 005b2372: INC ECX
// 005b2373: DEC EDX
// 005b2374: MOV dword ptr [ESP + 0x164],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b237b: MOV dword ptr [ESP + 0x168],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005b2382: CMP ECX,ESI
// 005b2384: JL 0x005b2114
//   XREF to: 005b2114 (CONDITIONAL_JUMP)
// 005b238a: JMP 0x005b215b
//   XREF to: 005b215b (UNCONDITIONAL_JUMP)
// 005b238f: MOV ECX,EDI
//   Label: LAB_005b238f
// 005b2391: JMP 0x005b213a
//   XREF to: 005b213a (UNCONDITIONAL_JUMP)
// 005b2396: LEA EAX,[ESP + 0x6c]
//   Label: LAB_005b2396
//   XREF to: Stack[-0x114] (DATA)
// 005b239a: MOV BL,byte ptr [ESP + 0x6c]
//   XREF to: Stack[-0x114] (READ)
// 005b239e: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x178] (DATA)
// 005b23a2: TEST BL,BL
// 005b23a4: JZ 0x005b23bc
//   XREF to: 005b23bc (CONDITIONAL_JUMP)
// 005b23a6: MOV BL,byte ptr [EAX]
//   Label: LAB_005b23a6
//   XREF to: Stack[-0x114] (DATA)
// 005b23a8: CMP BH,BL
// 005b23aa: JNZ 0x005b23b1
//   XREF to: 005b23b1 (CONDITIONAL_JUMP)
// 005b23ac: MOV BL,CL
// 005b23ae: ADD BL,0x30
// 005b23b1: MOV byte ptr [EDX],BL
//   Label: LAB_005b23b1
//   XREF to: Stack[-0x178] (DATA)
// 005b23b3: INC EDX
// 005b23b4: MOV BL,byte ptr [EAX + 0x1]
//   XREF to: Stack[-0x113] (READ)
// 005b23b7: INC EAX
// 005b23b8: TEST BL,BL
// 005b23ba: JNZ 0x005b23a6
//   XREF to: 005b23a6 (CONDITIONAL_JUMP)
// 005b23bc: LEA EAX,[ESP + 0x8]
//   Label: LAB_005b23bc
//   XREF to: Stack[-0x178] (DATA)
// 005b23c0: PUSH EAX
// 005b23c1: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0xb0] (DATA)
// 005b23c8: PUSH EAX
// 005b23c9: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005b23ce: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 005b23cf: MOV byte ptr [EDX],0x0
//   XREF to: Stack[-0x177] (DATA)
// 005b23d2: CALL core_sound.cpp_CSound_FUN_005b1ed0
//   XREF to: 005b1ed0 (UNCONDITIONAL_CALL)
// 005b23d7: ADD ESP,0xc
// 005b23da: CMP byte ptr [ESP + 0xd0],0x0
//   XREF to: Stack[-0xb0] (READ)
// 005b23e2: JNZ 0x005b214d
//   XREF to: 005b214d (CONDITIONAL_JUMP)
// 005b23e8: JMP 0x005b2147
//   XREF to: 005b2147 (UNCONDITIONAL_JUMP)
// 005b23ed: LEA EAX,[ESP + 0x6c]
//   Label: LAB_005b23ed
//   XREF to: Stack[-0x114] (DATA)
// 005b23f1: PUSH EAX
// 005b23f2: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0xb0] (DATA)
// 005b23f9: PUSH EAX
// 005b23fa: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005b2400: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 005b2401: CALL core_sound.cpp_CSound_FUN_005b1ed0
//   XREF to: 005b1ed0 (UNCONDITIONAL_CALL)
// 005b2406: ADD ESP,0xc
// 005b2409: JMP 0x005b215b
//   XREF to: 005b215b (UNCONDITIONAL_JUMP)
// 005b240e: LEA EAX,[ESP + 0x6c]
//   Label: LAB_005b240e
//   XREF to: Stack[-0x114] (DATA)
// 005b2412: PUSH EAX
// 005b2413: PUSH 0x652596
//   XREF to: 00652596 (DATA)
// 005b2418: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005b241e: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005b241f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005b2424: MOV DH,byte ptr [0x03f6af60]
//   XREF to: 03f6af60 (READ)
// 005b242a: ADD ESP,0xc
// 005b242d: TEST DH,0x1
// 005b2430: JZ 0x005b2451
//   XREF to: 005b2451 (CONDITIONAL_JUMP)
// 005b2432: LEA EAX,[ESP + 0x6c]
//   Label: LAB_005b2432
//   XREF to: Stack[-0x114] (DATA)
// 005b2436: PUSH EAX
// 005b2437: PUSH 0x3f6af50
//   XREF to: 03f6af50 (DATA)
// 005b243c: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 005b2441: ADD ESP,0x8
// 005b2444: TEST EAX,EAX
// 005b2446: JL 0x005b2478
//   XREF to: 005b2478 (CONDITIONAL_JUMP)
// 005b2448: XOR EAX,EAX
//   Label: LAB_005b2448
// 005b244a: MOV ESP,EBP
// 005b244c: POP EBP
// 005b244d: POP EDI
// 005b244e: POP ESI
// 005b244f: POP EBX
// 005b2450: RET
// 005b2451: MOV BL,DH
//   Label: LAB_005b2451
// 005b2453: OR BL,0x1
// 005b2456: PUSH 0x3f6af50
//   XREF to: 03f6af50 (DATA)
// 005b245b: MOV byte ptr [0x03f6af60],BL
//   XREF to: 03f6af60 (WRITE)
// 005b2461: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005b2466: ADD ESP,0x4
// 005b2469: PUSH 0x681ee0
//   XREF to: 00681ee0 (DATA)
// 005b246e: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005b2473: ADD ESP,0x4
// 005b2476: JMP 0x005b2432
//   XREF to: 005b2432 (UNCONDITIONAL_JUMP)
// 005b2478: LEA EAX,[ESP + 0x6c]
//   Label: LAB_005b2478
//   XREF to: Stack[-0x114] (DATA)
// 005b247c: PUSH EAX
// 005b247d: PUSH 0x3f6af50
//   XREF to: 03f6af50 (DATA)
// 005b2482: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005b2487: ADD ESP,0x8
// 005b248a: PUSH 0x181
// 005b248f: PUSH 0x6525aa
//   XREF to: 006525aa (DATA)
// 005b2494: PUSH 0x6525bc
//   XREF to: 006525bc (DATA)
// 005b2499: PUSH 0x0
// 005b249b: PUSH 0x6525bf
//   XREF to: 006525bf (DATA)
// 005b24a0: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005b24a5: MOV ESI,EAX
// 005b24a7: ADD ESP,0x14
// 005b24aa: MOV EDI,EAX
// 005b24ac: TEST EAX,EAX
// 005b24ae: JZ 0x005b2448
//   XREF to: 005b2448 (CONDITIONAL_JUMP)
// 005b24b0: PUSH 0x6525df
//   XREF to: 006525df (DATA)
// 005b24b5: PUSH EAX
// 005b24b6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005b24bb: ADD ESP,0x8
// 005b24be: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x28] (DATA)
// 005b24c5: PUSH EAX
// 005b24c6: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 005b24cb: ADD ESP,0x4
// 005b24ce: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x114] (DATA)
// 005b24d2: PUSH EAX
// 005b24d3: PUSH 0x652621
//   XREF to: 00652621 (DATA)
// 005b24d8: PUSH ESI
// 005b24d9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005b24de: ADD ESP,0xc
// 005b24e1: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x28] (DATA)
// 005b24e8: PUSH EAX
// 005b24e9: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 005b24ee: ADD ESP,0x4
// 005b24f1: PUSH EAX
// 005b24f2: CALL crt_time.c_asctime_FUN_00601768
//   XREF to: 00601768 (UNCONDITIONAL_CALL)
// 005b24f7: ADD ESP,0x4
// 005b24fa: PUSH EAX
// 005b24fb: PUSH 0x65262e
//   XREF to: 0065262e (DATA)
// 005b2500: PUSH ESI
// 005b2501: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005b2506: ADD ESP,0xc
// 005b2509: PUSH 0x652637
//   XREF to: 00652637 (DATA)
// 005b250e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005b2513: ADD ESP,0x4
// 005b2516: TEST EAX,EAX
// 005b2518: JZ 0x005b2529
//   XREF to: 005b2529 (CONDITIONAL_JUMP)
// 005b251a: PUSH EAX
// 005b251b: PUSH 0x652640
//   XREF to: 00652640 (DATA)
// 005b2520: PUSH ESI
// 005b2521: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005b2526: ADD ESP,0xc
// 005b2529: PUSH 0x65264e
//   Label: LAB_005b2529
//   XREF to: 0065264e (DATA)
// 005b252e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005b2533: ADD ESP,0x4
// 005b2536: TEST EAX,EAX
// 005b2538: JZ 0x005b2549
//   XREF to: 005b2549 (CONDITIONAL_JUMP)
// 005b253a: PUSH EAX
// 005b253b: PUSH 0x65265b
//   XREF to: 0065265b (DATA)
// 005b2540: PUSH EDI
// 005b2541: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005b2546: ADD ESP,0xc
// 005b2549: PUSH 0x190
//   Label: LAB_005b2549
// 005b254e: PUSH 0x65266d
//   XREF to: 0065266d (DATA)
// 005b2553: PUSH EDI
// 005b2554: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005b2559: ADD ESP,0xc
// 005b255c: XOR EAX,EAX
// 005b255e: MOV ESP,EBP
// 005b2560: POP EBP
// 005b2561: POP EDI
// 005b2562: POP ESI
// 005b2563: POP EBX
// 005b2564: RET
// 005b2565: MOV EAX,dword ptr [ESP + 0x148]
//   Label: LAB_005b2565
//   XREF to: Stack[-0x38] (READ)
// 005b256c: MOV CH,byte ptr [EAX]
// 005b256e: CMP CH,0x40
// 005b2571: JNZ 0x005b2603
//   XREF to: 005b2603 (CONDITIONAL_JUMP)
// 005b2577: LEA EAX,[ESP + 0x15c]
//   XREF to: Stack[-0x24] (DATA)
// 005b257e: PUSH EAX
// 005b257f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x17c] (DATA)
// 005b2583: PUSH EAX
// 005b2584: PUSH 0x65267f
//   XREF to: 0065267f (DATA)
// 005b2589: MOV EDI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x38] (READ)
// 005b2590: PUSH EDI
// 005b2591: MOV dword ptr [ESP + 0x16c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005b2598: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005b259d: ADD ESP,0x10
// 005b25a0: CMP EBX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x24] (READ)
// 005b25a7: JLE 0x005b25e3
//   XREF to: 005b25e3 (CONDITIONAL_JUMP)
// 005b25a9: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_005b25a9
//   XREF to: Stack[0x8] (READ)
// 005b25ac: PUSH EDI
// 005b25ad: MOV EDX,0x652685
//   XREF to: 00652685 (PARAM)
// 005b25b2: MOV ECX,0x1a4
// 005b25b7: PUSH 0x652697
//   XREF to: 00652697 (DATA)
// 005b25bc: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005b25c2: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005b25c8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005b25cd: ADD ESP,0x8
// 005b25d0: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x24] (READ)
// 005b25d7: ADD dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b25de: JMP 0x005b21ae
//   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
// 005b25e3: FLD float ptr [ESP + 0x4]
//   Label: LAB_005b25e3
//   XREF to: Stack[-0x17c] (READ)
// 005b25e7: FLDZ
// 005b25e9: FCOMPP
// 005b25eb: FNSTSW AX
// 005b25ed: SAHF
// 005b25ee: JA 0x005b25a9
//   XREF to: 005b25a9 (CONDITIONAL_JUMP)
// 005b25f0: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x24] (READ)
// 005b25f7: ADD dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b25fe: JMP 0x005b21ae
//   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
// 005b2603: CMP CH,0x2a
//   Label: LAB_005b2603
// 005b2606: JNZ 0x005b2696
//   XREF to: 005b2696 (CONDITIONAL_JUMP)
// 005b260c: LEA EAX,[ESP + 0x160]
//   XREF to: Stack[-0x20] (DATA)
// 005b2613: PUSH EAX
// 005b2614: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x180] (DATA)
// 005b2618: PUSH EAX
// 005b2619: PUSH 0x6526ae
//   XREF to: 006526ae (DATA)
// 005b261e: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x38] (READ)
// 005b2625: PUSH EDX
// 005b2626: MOV dword ptr [ESP + 0x170],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005b262d: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005b2632: ADD ESP,0x10
// 005b2635: CMP EBX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005b263c: JLE 0x005b2677
//   XREF to: 005b2677 (CONDITIONAL_JUMP)
// 005b263e: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_005b263e
//   XREF to: Stack[0x8] (READ)
// 005b2641: PUSH EDX
// 005b2642: MOV EDI,0x6526b4
//   XREF to: 006526b4 (DATA)
// 005b2647: MOV EAX,0x1aa
// 005b264c: PUSH 0x6526c6
//   XREF to: 006526c6 (DATA)
// 005b2651: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005b2657: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005b265c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005b2661: ADD ESP,0x8
// 005b2664: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005b266b: ADD dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b2672: JMP 0x005b21ae
//   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
// 005b2677: FLD float ptr [ESP]
//   Label: LAB_005b2677
//   XREF to: Stack[-0x180] (DATA)
// 005b267a: FLDZ
// 005b267c: FCOMPP
// 005b267e: FNSTSW AX
// 005b2680: SAHF
// 005b2681: JNC 0x005b263e
//   XREF to: 005b263e (CONDITIONAL_JUMP)
// 005b2683: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005b268a: ADD dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (READ_WRITE)
// 005b2691: JMP 0x005b21ae
//   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
// 005b2696: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005b2696
//   XREF to: Stack[0x8] (READ)
// 005b2699: PUSH EAX
// 005b269a: MOV ECX,0x6526dd
//   XREF to: 006526dd (PARAM)
// 005b269f: MOV EDI,0x1ad
// 005b26a4: PUSH 0x6526ef
//   XREF to: 006526ef (DATA)
// 005b26a9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005b26af: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005b26b5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005b26ba: ADD ESP,0x8
// 005b26bd: JMP 0x005b21ae
//   XREF to: 005b21ae (UNCONDITIONAL_JUMP)
// 005b26c2: FLD float ptr [EBP + 0x24]
//   Label: LAB_005b26c2
//   XREF to: Stack[0x14] (READ)
// 005b26c5: SUB ESP,0x8
// 005b26c8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x188] (DATA)
// 005b26cb: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005b26ce: SUB ESP,0x8
// 005b26d1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x190] (DATA)
// 005b26d4: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b26d7: SUB ESP,0x8
// 005b26da: FSTP double ptr [ESP]
//   XREF to: Stack[-0x198] (DATA)
// 005b26dd: CALL sound_sndmain.cpp_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 005b26e2: ADD ESP,0x18
// 005b26e5: JMP 0x005b21d3
//   XREF to: 005b21d3 (UNCONDITIONAL_JUMP)
