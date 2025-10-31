// Name: shape_design.c_loadPalette_FUN_0046e810
// Address: 0046e810
// Address Range: [[0046e810, 0046eb7d]]
// Convention: unknown
// Signature: undefined shape_design.c_loadPalette_FUN_0046e810()
// Globals:
//   TerminatedCString s_s_1_Load_model_palette_0061df26
//   TerminatedCString s_s_2_Load_ACT_file_palett_0061df3e
//   TerminatedCString s_s_3_Load_default_editor__0061df5a
//   TerminatedCString s_Enter_option_1_0061df7b
//   TerminatedCString s_No_model_loaded_Hit_a_ke_0061df8f
//   TerminatedCString s_ACT_0061dfae
//   undefined4 DAT_0061dfaf
//   undefined4 DAT_0061dfb0
//   undefined4 s_T_0061dfb1
//   TerminatedCString s_ACT_0061dfb3
//   undefined4 DAT_0061dfb4
//   undefined4 DAT_0061dfb5
//   undefined4 s_T_0061dfb6
//   TerminatedCString s_art_0061dfb8
//   TerminatedCString s_File_not_found_Hit_a_key_0061dfbc
//   TerminatedCString s_Enter_ACT_filename_0061dfda
//   TerminatedCString s_ACT_0061dff1
//   undefined4 DAT_0061dff2
//   undefined4 DAT_0061dff3
//   undefined4 s_T_0061dff4
//   TerminatedCString s_ACT_0061dff6
//   undefined4 DAT_0061dff7
//   undefined4 DAT_0061dff8
//   undefined4 s_T_0061dff9
//   TerminatedCString s_art_0061dffb
//   TerminatedCString s_File_not_found_Hit_a_key_0061dfff
//   TerminatedCString s_vga_act_0061e01d
//   TerminatedCString s_vga_lte_0061e025
//   TerminatedCString s_vga_act_0061e02d
//   TerminatedCString s_vga_act_0061e035
//   TerminatedCString s_Invalid_option_Hit_a_key_0061e03d
//   TerminatedCString s_New_palette_loaded_Hit_a_0061e05b
//   char[80] g_LoadedModelName
//   undefined4 s__0066eda9
//   undefined4 s__0066edaa
//   undefined4 DAT_0066edab
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_doNothing_FUN_00401590
//   engine_2d.c_doNothing_FUN_00402860
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   engine_2d.c_loadPaletteFile_FUN_004015a0
//   engine_dosio.c_getFileSize_FUN_00481880
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_loadPalette_FUN_0046e810(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_68 [80];
  char *local_18;
  int local_14;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("  1) Load model palette",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("  2) Load .ACT file palette",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("  3) Load default editor palette",0,0x2c);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (&stack0xffffff48,0x14,0,0,"Enter option [1] : ");
  if (iVar2 == 0x1b) {
    return;
  }
  local_14 = 1;
  iVar2 = -1;
  pcVar5 = &stack0xffffff48;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff48);
  }
  if (local_14 == 1) {
    if (g_LoadedModelName[0] == '\0') {
      engine_2d_c_drawText_FUN_00401fd0("No model loaded.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    pcVar4 = g_LoadedModelName;
    pcVar5 = local_68;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar5 = local_68;
    do {
      pcVar4 = pcVar5;
      if (*pcVar5 == '.') goto LAB_0046e929;
      if (*pcVar5 == '\0') break;
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 == '.') goto LAB_0046e929;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_0046e929:
    local_18 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar5 = local_68;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 - 1 < 9) {
        pcVar4 = ".ACT";
        iVar2 = -1;
        pcVar5 = local_68;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + -1;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
      }
    }
    else {
      pcVar5 = ".ACT";
      do {
        cVar1 = *pcVar5;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",local_68);
    if (iVar2 == -1) {
      engine_2d_c_drawText_FUN_00401fd0("File not found.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    engine_2d_c_loadPaletteFile_FUN_004015a0(local_68);
    engine_2d_c_doNothing_FUN_00402860();
    engine_2d_c_loadOrBuildColorMap_FUN_00402930(local_68);
    engine_2d_c_doNothing_FUN_00401590();
  }
  else if (local_14 == 2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_68,0x4f,0,0x42,"Enter .ACT filename : ");
    pcVar5 = local_68;
    do {
      pcVar4 = pcVar5;
      if (*pcVar5 == '.') goto LAB_0046ea46;
      if (*pcVar5 == '\0') break;
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 == '.') goto LAB_0046ea46;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_0046ea46:
    local_18 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar5 = local_68;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 - 1 < 9) {
        pcVar4 = ".ACT";
        iVar2 = -1;
        pcVar5 = local_68;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + -1;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
      }
    }
    else {
      pcVar5 = ".ACT";
      do {
        cVar1 = *pcVar5;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",local_68);
    if (iVar2 == -1) {
      engine_2d_c_drawText_FUN_00401fd0("File not found.  Hit a key...",0,0x58);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  }
  else {
    if (local_14 != 3) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid option.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    engine_2d_c_loadPaletteFile_FUN_004015a0("vga.act");
    engine_2d_c_doNothing_FUN_00402860();
    engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.act");
    engine_2d_c_doNothing_FUN_00401590();
  }
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  engine_2d_c_drawText_FUN_00401fd0("New palette loaded.  Hit a key...",0,0x58);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0046e810: PUSH EBX
//   Label: shape_design.c_loadPalette_FUN_0046e810
// 0046e811: PUSH ESI
// 0046e812: PUSH EDI
// 0046e813: PUSH EBP
// 0046e814: MOV EBP,ESP
// 0046e816: SUB ESP,0xa8
// 0046e81c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046e821: PUSH 0x16
// 0046e823: PUSH 0x0
// 0046e825: MOV EAX,0x61df26
//   XREF to: 0061df26 (DATA)
// 0046e82a: PUSH EAX
//   XREF to: 0061df26 (DATA)
// 0046e82b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e830: ADD ESP,0xc
// 0046e833: PUSH 0x21
// 0046e835: PUSH 0x0
// 0046e837: MOV EAX,0x61df3e
//   XREF to: 0061df3e (DATA)
// 0046e83c: PUSH EAX
//   XREF to: 0061df3e (DATA)
// 0046e83d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e842: ADD ESP,0xc
// 0046e845: PUSH 0x2c
// 0046e847: PUSH 0x0
// 0046e849: MOV EAX,0x61df5a
//   XREF to: 0061df5a (DATA)
// 0046e84e: PUSH EAX
//   XREF to: 0061df5a (DATA)
// 0046e84f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e854: ADD ESP,0xc
// 0046e857: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046e85c: MOV EAX,0x61df7b
//   XREF to: 0061df7b (DATA)
// 0046e861: PUSH EAX
//   XREF to: 0061df7b (DATA)
// 0046e862: PUSH 0x0
// 0046e864: PUSH 0x0
// 0046e866: PUSH 0x14
// 0046e868: LEA EAX,[EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (DATA)
// 0046e86e: PUSH EAX
// 0046e86f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046e874: ADD ESP,0x14
// 0046e877: CMP EAX,0x1b
// 0046e87a: JNZ 0x0046e881
//   XREF to: 0046e881 (CONDITIONAL_JUMP)
// 0046e87c: JMP 0x0046eb77
//   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)
// 0046e881: MOV dword ptr [EBP + -0x4],0x1
//   Label: LAB_0046e881
//   XREF to: Stack[-0x14] (WRITE)
// 0046e888: LEA EDI,[EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (DATA)
// 0046e88e: SUB ECX,ECX
// 0046e890: DEC ECX
// 0046e891: XOR EAX,EAX
// 0046e893: SCASB.REPNE ES:EDI
// 0046e895: NOT ECX
// 0046e897: DEC ECX
// 0046e898: TEST ECX,ECX
// 0046e89a: JZ 0x0046e8ae
//   XREF to: 0046e8ae (CONDITIONAL_JUMP)
// 0046e89c: LEA EAX,[EBP + 0xffffff58]
//   XREF to: Stack[-0xb8] (DATA)
// 0046e8a2: PUSH EAX
// 0046e8a3: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0046e8a8: ADD ESP,0x4
// 0046e8ab: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046e8ae: CMP dword ptr [EBP + -0x4],0x1
//   Label: LAB_0046e8ae
//   XREF to: Stack[-0x14] (READ)
// 0046e8b2: JNZ 0x0046ea04
//   XREF to: 0046ea04 (CONDITIONAL_JUMP)
// 0046e8b8: CMP byte ptr [0x0066eda8],0x0
//   XREF to: 0066eda8 (READ)
// 0046e8bf: JNZ 0x0046e8e7
//   XREF to: 0046e8e7 (CONDITIONAL_JUMP)
// 0046e8c1: PUSH 0x42
// 0046e8c3: PUSH 0x0
// 0046e8c5: MOV EAX,0x61df8f
//   XREF to: 0061df8f (DATA)
// 0046e8ca: PUSH EAX
//   XREF to: 0061df8f (DATA)
// 0046e8cb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e8d0: ADD ESP,0xc
// 0046e8d3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046e8d8: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046e8dd: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046e8e2: JMP 0x0046eb77
//   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)
// 0046e8e7: MOV ESI,0x66eda8
//   Label: LAB_0046e8e7
//   XREF to: 0066eda8 (DATA)
// 0046e8ec: LEA EDI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e8ef: PUSH EDI
// 0046e8f0: MOV AL,byte ptr [ESI]
//   Label: LAB_0046e8f0
//   XREF to: 0066eda8 (READ)
//   XREF to: 0066edaa (READ)
// 0046e8f2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x68] (DATA)
// 0046e8f4: CMP AL,0x0
// 0046e8f6: JZ 0x0046e908
//   XREF to: 0046e908 (CONDITIONAL_JUMP)
// 0046e8f8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0066eda9 (READ)
//   XREF to: 0066edab (READ)
// 0046e8fb: ADD ESI,0x2
// 0046e8fe: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x67] (WRITE)
// 0046e901: ADD EDI,0x2
// 0046e904: CMP AL,0x0
// 0046e906: JNZ 0x0046e8f0
//   XREF to: 0046e8f0 (CONDITIONAL_JUMP)
// 0046e908: POP EDI
//   Label: LAB_0046e908
// 0046e909: MOV EDX,0x2e
// 0046e90e: LEA ESI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e911: MOV AL,byte ptr [ESI]
//   Label: LAB_0046e911
//   XREF to: Stack[-0x68] (DATA)
// 0046e913: CMP AL,DL
// 0046e915: JZ 0x0046e929
//   XREF to: 0046e929 (CONDITIONAL_JUMP)
// 0046e917: CMP AL,0x0
// 0046e919: JZ 0x0046e927
//   XREF to: 0046e927 (CONDITIONAL_JUMP)
// 0046e91b: INC ESI
// 0046e91c: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x67] (DATA)
// 0046e91e: CMP AL,DL
// 0046e920: JZ 0x0046e929
//   XREF to: 0046e929 (CONDITIONAL_JUMP)
// 0046e922: INC ESI
// 0046e923: CMP AL,0x0
// 0046e925: JNZ 0x0046e911
//   XREF to: 0046e911 (CONDITIONAL_JUMP)
// 0046e927: SUB ESI,ESI
//   Label: LAB_0046e927
// 0046e929: MOV dword ptr [EBP + -0x8],ESI
//   Label: LAB_0046e929
//   XREF to: Stack[-0x18] (WRITE)
// 0046e92c: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 0046e930: JZ 0x0046e956
//   XREF to: 0046e956 (CONDITIONAL_JUMP)
// 0046e932: MOV ESI,0x61dfae
//   XREF to: 0061dfae (DATA)
// 0046e937: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046e93a: PUSH EDI
// 0046e93b: MOV AL,byte ptr [ESI]
//   Label: LAB_0046e93b
//   XREF to: 0061dfae (READ)
//   XREF to: 0061dfb0 (READ)
// 0046e93d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x65] (DATA)
// 0046e93f: CMP AL,0x0
// 0046e941: JZ 0x0046e953
//   XREF to: 0046e953 (CONDITIONAL_JUMP)
// 0046e943: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061dfaf (READ)
//   XREF to: 0061dfb1 (READ)
// 0046e946: ADD ESI,0x2
// 0046e949: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x65] (WRITE)
// 0046e94c: ADD EDI,0x2
// 0046e94f: CMP AL,0x0
// 0046e951: JNZ 0x0046e93b
//   XREF to: 0046e93b (CONDITIONAL_JUMP)
// 0046e953: POP EDI
//   Label: LAB_0046e953
// 0046e954: JMP 0x0046e992
//   XREF to: 0046e992 (UNCONDITIONAL_JUMP)
// 0046e956: LEA EDI,[EBP + -0x58]
//   Label: LAB_0046e956
//   XREF to: Stack[-0x68] (DATA)
// 0046e959: SUB ECX,ECX
// 0046e95b: DEC ECX
// 0046e95c: XOR EAX,EAX
// 0046e95e: SCASB.REPNE ES:EDI
// 0046e960: NOT ECX
// 0046e962: DEC ECX
// 0046e963: CMP ECX,0x8
// 0046e966: JA 0x0046e992
//   XREF to: 0046e992 (CONDITIONAL_JUMP)
// 0046e968: MOV ESI,0x61dfb3
//   XREF to: 0061dfb3 (DATA)
// 0046e96d: LEA EDI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e970: PUSH EDI
// 0046e971: SUB ECX,ECX
// 0046e973: DEC ECX
// 0046e974: MOV AL,0x0
// 0046e976: SCASB.REPNE ES:EDI
// 0046e978: DEC EDI
// 0046e979: MOV AL,byte ptr [ESI]
//   Label: LAB_0046e979
//   XREF to: 0061dfb3 (READ)
//   XREF to: 0061dfb5 (READ)
// 0046e97b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x68] (DATA)
// 0046e97d: CMP AL,0x0
// 0046e97f: JZ 0x0046e991
//   XREF to: 0046e991 (CONDITIONAL_JUMP)
// 0046e981: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061dfb4 (READ)
//   XREF to: 0061dfb6 (READ)
// 0046e984: ADD ESI,0x2
// 0046e987: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x67] (WRITE)
// 0046e98a: ADD EDI,0x2
// 0046e98d: CMP AL,0x0
// 0046e98f: JNZ 0x0046e979
//   XREF to: 0046e979 (CONDITIONAL_JUMP)
// 0046e991: POP EDI
//   Label: LAB_0046e991
// 0046e992: LEA EAX,[EBP + -0x58]
//   Label: LAB_0046e992
//   XREF to: Stack[-0x68] (DATA)
// 0046e995: PUSH EAX
// 0046e996: MOV EAX,0x61dfb8
//   XREF to: 0061dfb8 (DATA)
// 0046e99b: PUSH EAX
//   XREF to: 0061dfb8 (DATA)
// 0046e99c: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0046e9a1: ADD ESP,0x8
// 0046e9a4: CMP EAX,-0x1
// 0046e9a7: JNZ 0x0046e9cf
//   XREF to: 0046e9cf (CONDITIONAL_JUMP)
// 0046e9a9: PUSH 0x42
// 0046e9ab: PUSH 0x0
// 0046e9ad: MOV EAX,0x61dfbc
//   XREF to: 0061dfbc (DATA)
// 0046e9b2: PUSH EAX
//   XREF to: 0061dfbc (DATA)
// 0046e9b3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e9b8: ADD ESP,0xc
// 0046e9bb: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046e9c0: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046e9c5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046e9ca: JMP 0x0046eb77
//   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)
// 0046e9cf: LEA EAX,[EBP + -0x58]
//   Label: LAB_0046e9cf
//   XREF to: Stack[-0x68] (DATA)
// 0046e9d2: PUSH EAX
// 0046e9d3: CALL engine_2d.c_loadPaletteFile_FUN_004015a0
//   XREF to: 004015a0 (UNCONDITIONAL_CALL)
// 0046e9d8: ADD ESP,0x4
// 0046e9db: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e9de: PUSH EAX
// 0046e9df: CALL engine_2d.c_doNothing_FUN_00402860
//   XREF to: 00402860 (UNCONDITIONAL_CALL)
// 0046e9e4: ADD ESP,0x4
// 0046e9e7: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e9ea: PUSH EAX
// 0046e9eb: CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   XREF to: 00402930 (UNCONDITIONAL_CALL)
// 0046e9f0: ADD ESP,0x4
// 0046e9f3: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046e9f6: PUSH EAX
// 0046e9f7: CALL engine_2d.c_doNothing_FUN_00401590
//   XREF to: 00401590 (UNCONDITIONAL_CALL)
// 0046e9fc: ADD ESP,0x4
// 0046e9ff: JMP 0x0046eb51
//   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)
// 0046ea04: CMP dword ptr [EBP + -0x4],0x2
//   Label: LAB_0046ea04
//   XREF to: Stack[-0x14] (READ)
// 0046ea08: JNZ 0x0046eaee
//   XREF to: 0046eaee (CONDITIONAL_JUMP)
// 0046ea0e: MOV EDX,0x61dfda
//   XREF to: 0061dfda (DATA)
// 0046ea13: PUSH EDX
//   XREF to: 0061dfda (DATA)
// 0046ea14: PUSH 0x42
// 0046ea16: PUSH 0x0
// 0046ea18: PUSH 0x4f
// 0046ea1a: LEA EDX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046ea1d: PUSH EDX
// 0046ea1e: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046ea23: ADD ESP,0x14
// 0046ea26: MOV EDX,0x2e
// 0046ea2b: LEA ESI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046ea2e: MOV AL,byte ptr [ESI]
//   Label: LAB_0046ea2e
//   XREF to: Stack[-0x68] (DATA)
// 0046ea30: CMP AL,DL
// 0046ea32: JZ 0x0046ea46
//   XREF to: 0046ea46 (CONDITIONAL_JUMP)
// 0046ea34: CMP AL,0x0
// 0046ea36: JZ 0x0046ea44
//   XREF to: 0046ea44 (CONDITIONAL_JUMP)
// 0046ea38: INC ESI
// 0046ea39: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x67] (DATA)
// 0046ea3b: CMP AL,DL
// 0046ea3d: JZ 0x0046ea46
//   XREF to: 0046ea46 (CONDITIONAL_JUMP)
// 0046ea3f: INC ESI
// 0046ea40: CMP AL,0x0
// 0046ea42: JNZ 0x0046ea2e
//   XREF to: 0046ea2e (CONDITIONAL_JUMP)
// 0046ea44: SUB ESI,ESI
//   Label: LAB_0046ea44
// 0046ea46: MOV dword ptr [EBP + -0x8],ESI
//   Label: LAB_0046ea46
//   XREF to: Stack[-0x18] (WRITE)
// 0046ea49: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 0046ea4d: JZ 0x0046ea73
//   XREF to: 0046ea73 (CONDITIONAL_JUMP)
// 0046ea4f: MOV ESI,0x61dff1
//   XREF to: 0061dff1 (DATA)
// 0046ea54: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046ea57: PUSH EDI
// 0046ea58: MOV AL,byte ptr [ESI]
//   Label: LAB_0046ea58
//   XREF to: 0061dff1 (READ)
//   XREF to: 0061dff3 (READ)
// 0046ea5a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x65] (DATA)
// 0046ea5c: CMP AL,0x0
// 0046ea5e: JZ 0x0046ea70
//   XREF to: 0046ea70 (CONDITIONAL_JUMP)
// 0046ea60: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061dff2 (READ)
//   XREF to: 0061dff4 (READ)
// 0046ea63: ADD ESI,0x2
// 0046ea66: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x65] (WRITE)
// 0046ea69: ADD EDI,0x2
// 0046ea6c: CMP AL,0x0
// 0046ea6e: JNZ 0x0046ea58
//   XREF to: 0046ea58 (CONDITIONAL_JUMP)
// 0046ea70: POP EDI
//   Label: LAB_0046ea70
// 0046ea71: JMP 0x0046eaaf
//   XREF to: 0046eaaf (UNCONDITIONAL_JUMP)
// 0046ea73: LEA EDI,[EBP + -0x58]
//   Label: LAB_0046ea73
//   XREF to: Stack[-0x68] (DATA)
// 0046ea76: SUB ECX,ECX
// 0046ea78: DEC ECX
// 0046ea79: XOR EAX,EAX
// 0046ea7b: SCASB.REPNE ES:EDI
// 0046ea7d: NOT ECX
// 0046ea7f: DEC ECX
// 0046ea80: CMP ECX,0x8
// 0046ea83: JA 0x0046eaaf
//   XREF to: 0046eaaf (CONDITIONAL_JUMP)
// 0046ea85: MOV ESI,0x61dff6
//   XREF to: 0061dff6 (DATA)
// 0046ea8a: LEA EDI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0046ea8d: PUSH EDI
// 0046ea8e: SUB ECX,ECX
// 0046ea90: DEC ECX
// 0046ea91: MOV AL,0x0
// 0046ea93: SCASB.REPNE ES:EDI
// 0046ea95: DEC EDI
// 0046ea96: MOV AL,byte ptr [ESI]
//   Label: LAB_0046ea96
//   XREF to: 0061dff6 (READ)
//   XREF to: 0061dff8 (READ)
// 0046ea98: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x68] (DATA)
// 0046ea9a: CMP AL,0x0
// 0046ea9c: JZ 0x0046eaae
//   XREF to: 0046eaae (CONDITIONAL_JUMP)
// 0046ea9e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061dff7 (READ)
//   XREF to: 0061dff9 (READ)
// 0046eaa1: ADD ESI,0x2
// 0046eaa4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x67] (WRITE)
// 0046eaa7: ADD EDI,0x2
// 0046eaaa: CMP AL,0x0
// 0046eaac: JNZ 0x0046ea96
//   XREF to: 0046ea96 (CONDITIONAL_JUMP)
// 0046eaae: POP EDI
//   Label: LAB_0046eaae
// 0046eaaf: LEA EAX,[EBP + -0x58]
//   Label: LAB_0046eaaf
//   XREF to: Stack[-0x68] (DATA)
// 0046eab2: PUSH EAX
// 0046eab3: MOV EAX,0x61dffb
//   XREF to: 0061dffb (DATA)
// 0046eab8: PUSH EAX
//   XREF to: 0061dffb (DATA)
// 0046eab9: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0046eabe: ADD ESP,0x8
// 0046eac1: CMP EAX,-0x1
// 0046eac4: JNZ 0x0046eaec
//   XREF to: 0046eaec (CONDITIONAL_JUMP)
// 0046eac6: PUSH 0x58
// 0046eac8: PUSH 0x0
// 0046eaca: MOV EAX,0x61dfff
//   XREF to: 0061dfff (DATA)
// 0046eacf: PUSH EAX
//   XREF to: 0061dfff (DATA)
// 0046ead0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046ead5: ADD ESP,0xc
// 0046ead8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046eadd: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046eae2: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046eae7: JMP 0x0046eb77
//   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)
// 0046eaec: JMP 0x0046eb51
//   Label: LAB_0046eaec
//   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)
// 0046eaee: CMP dword ptr [EBP + -0x4],0x3
//   Label: LAB_0046eaee
//   XREF to: Stack[-0x14] (READ)
// 0046eaf2: JNZ 0x0046eb2e
//   XREF to: 0046eb2e (CONDITIONAL_JUMP)
// 0046eaf4: MOV EAX,0x61e01d
//   XREF to: 0061e01d (DATA)
// 0046eaf9: PUSH EAX
//   XREF to: 0061e01d (DATA)
// 0046eafa: CALL engine_2d.c_loadPaletteFile_FUN_004015a0
//   XREF to: 004015a0 (UNCONDITIONAL_CALL)
// 0046eaff: ADD ESP,0x4
// 0046eb02: MOV EAX,0x61e025
//   XREF to: 0061e025 (DATA)
// 0046eb07: PUSH EAX
//   XREF to: 0061e025 (DATA)
// 0046eb08: CALL engine_2d.c_doNothing_FUN_00402860
//   XREF to: 00402860 (UNCONDITIONAL_CALL)
// 0046eb0d: ADD ESP,0x4
// 0046eb10: MOV EAX,0x61e02d
//   XREF to: 0061e02d (DATA)
// 0046eb15: PUSH EAX
//   XREF to: 0061e02d (DATA)
// 0046eb16: CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   XREF to: 00402930 (UNCONDITIONAL_CALL)
// 0046eb1b: ADD ESP,0x4
// 0046eb1e: MOV EAX,0x61e035
//   XREF to: 0061e035 (DATA)
// 0046eb23: PUSH EAX
//   XREF to: 0061e035 (DATA)
// 0046eb24: CALL engine_2d.c_doNothing_FUN_00401590
//   XREF to: 00401590 (UNCONDITIONAL_CALL)
// 0046eb29: ADD ESP,0x4
// 0046eb2c: JMP 0x0046eb51
//   XREF to: 0046eb51 (UNCONDITIONAL_JUMP)
// 0046eb2e: PUSH 0x42
//   Label: LAB_0046eb2e
// 0046eb30: PUSH 0x0
// 0046eb32: MOV EAX,0x61e03d
//   XREF to: 0061e03d (DATA)
// 0046eb37: PUSH EAX
//   XREF to: 0061e03d (DATA)
// 0046eb38: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046eb3d: ADD ESP,0xc
// 0046eb40: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046eb45: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046eb4a: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046eb4f: JMP 0x0046eb77
//   XREF to: 0046eb77 (UNCONDITIONAL_JUMP)
// 0046eb51: CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   Label: LAB_0046eb51
//   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)
// 0046eb56: PUSH 0x58
// 0046eb58: PUSH 0x0
// 0046eb5a: MOV EAX,0x61e05b
//   XREF to: 0061e05b (DATA)
// 0046eb5f: PUSH EAX
//   XREF to: 0061e05b (DATA)
// 0046eb60: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046eb65: ADD ESP,0xc
// 0046eb68: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046eb6d: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046eb72: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046eb77: MOV ESP,EBP
//   Label: LAB_0046eb77
// 0046eb79: POP EBP
// 0046eb7a: POP EDI
// 0046eb7b: POP ESI
// 0046eb7c: POP EBX
// 0046eb7d: RET
