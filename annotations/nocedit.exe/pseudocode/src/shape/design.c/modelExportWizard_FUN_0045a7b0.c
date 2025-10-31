// Name: shape_design.c_modelExportWizard_FUN_0045a7b0
// Address: 0045a7b0
// Address Range: [[0045a7b0, 0045aa7a]]
// Convention: __cdecl
// Signature: void shape_design.c_modelExportWizard_FUN_0045a7b0(int export_format_type)
// Cross-references:
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045ba4b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Binary_filename_to_write_0061af3e
//   TerminatedCString s_ASM_0061af5a
//   undefined4 DAT_0061af5b
//   undefined4 DAT_0061af5c
//   undefined4 DAT_0061af5d
//   TerminatedCString s_BIN_0061af5f
//   undefined4 DAT_0061af60
//   undefined4 DAT_0061af61
//   undefined4 DAT_0061af62
//   TerminatedCString s_N_No_reset_depth_0061af64
//   TerminatedCString s_T_Transparent_0061af76
//   TerminatedCString s_Y_Reset_depth_0061af85
//   TerminatedCString s_X_No_sort_0061af94
//   TerminatedCString s_Z_Perspective_reset_dept_0061af9f
//   TerminatedCString s_R_Z_buffered_Tree_0061afca
//   TerminatedCString s_G_Giant_bigger_than_255__0061afdd
//   TerminatedCString s_H_Huge_flat_track_0061b009
//   TerminatedCString s_s_1_Scale_to_fit_0061b01c
//   TerminatedCString s_s_2_Normalize_X_0061b02c
//   TerminatedCString s_s_3_Normalize_Y_0061b03b
//   TerminatedCString s_s_4_Normalize_Z_0061b04a
//   TerminatedCString s_s_5_Do_not_scale_0061b059
//   TerminatedCString s_s_6_Animated_model_scale_0061b069
//   TerminatedCString s_Include_texture_maps_Y_N_0061b081
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_exportModelToBIN_FUN_0045aa80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)

{
  char cVar1;
  int scale_mode;
  int include_textures;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff94,0x28,0,0,"Binary filename to write : ");
  iVar2 = -1;
  pcVar5 = &stack0xffffff94;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    return;
  }
  pcVar5 = &stack0xffffff94;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_0045a814;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_0045a814;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0045a814:
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = &stack0xffffff94;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 9) {
      if (export_format_type == 0) {
        pcVar4 = ".ASM";
        iVar2 = -1;
        pcVar5 = &stack0xffffff94;
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
      else if (export_format_type == 1) {
        pcVar4 = ".BIN";
        iVar2 = -1;
        pcVar5 = &stack0xffffff94;
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
  }
  do {
    engine_2d_c_drawText_FUN_00401fd0("N) No reset depth",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("T) Transparent",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Y) Reset depth",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("X) No sort",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Z) Perspective reset depth for big objects",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("R) Z buffered Tree",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("G) Giant (bigger than 255 feet wide) object",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("H) Huge flat track",0,99);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar3 & 0xff);
    if ((((iVar2 == 0x4e) || (iVar2 == 0x59)) || (iVar2 == 0x58)) ||
       ((iVar2 == 0x5a || (iVar2 == 0x54)))) {
LAB_0045a97c:
      do {
        do {
          engine_2d_c_drawText_FUN_00401fd0("1. Scale to fit",0,0x79);
          engine_2d_c_drawText_FUN_00401fd0("2. Normalize X",0,0x84);
          engine_2d_c_drawText_FUN_00401fd0("3. Normalize Y",0,0x8f);
          engine_2d_c_drawText_FUN_00401fd0("4. Normalize Z",0,0x9a);
          engine_2d_c_drawText_FUN_00401fd0("5. Do not scale",0,0xa5);
          engine_2d_c_drawText_FUN_00401fd0("6. Animated model scale",0,0xb0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          scale_mode = crt_ctype_c_toupper_FUN_005ff9e0(uVar3 & 0xff);
        } while (scale_mode < 0x31);
      } while (0x36 < scale_mode);
      engine_2d_c_drawText_FUN_00401fd0("Include texture maps? (Y/N) ",0,0xd1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      include_textures = crt_ctype_c_toupper_FUN_005ff9e0(uVar3 & 0xff);
      shape_design_c_exportModelToBIN_FUN_0045aa80
                (&stack0xffffff94,iVar2,scale_mode,export_format_type,include_textures);
      return;
    }
    if ((iVar2 == 0x52) || ((iVar2 == 0x47 || (iVar2 == 0x48)))) goto LAB_0045a97c;
  } while( true );
}


// Assembly code:
// 0045a7b0: PUSH EBX
//   Label: shape_design.c_modelExportWizard_FUN_0045a7b0
// 0045a7b1: PUSH ESI
// 0045a7b2: PUSH EDI
// 0045a7b3: PUSH EBP
// 0045a7b4: MOV EBP,ESP
// 0045a7b6: SUB ESP,0x5c
// 0045a7bc: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045a7c1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045a7c6: MOV ECX,0x61af3e
//   XREF to: 0061af3e (DATA)
// 0045a7cb: PUSH ECX
//   XREF to: 0061af3e (DATA)
// 0045a7cc: PUSH 0x0
// 0045a7ce: PUSH 0x0
// 0045a7d0: PUSH 0x28
// 0045a7d2: LEA ECX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a7d5: PUSH ECX
// 0045a7d6: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045a7db: ADD ESP,0x14
// 0045a7de: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a7e1: SUB ECX,ECX
// 0045a7e3: DEC ECX
// 0045a7e4: XOR EAX,EAX
// 0045a7e6: SCASB.REPNE ES:EDI
// 0045a7e8: NOT ECX
// 0045a7ea: DEC ECX
// 0045a7eb: TEST ECX,ECX
// 0045a7ed: JNZ 0x0045a7f4
//   XREF to: 0045a7f4 (CONDITIONAL_JUMP)
// 0045a7ef: JMP 0x0045aa74
//   XREF to: 0045aa74 (UNCONDITIONAL_JUMP)
// 0045a7f4: MOV EDX,0x2e
//   Label: LAB_0045a7f4
// 0045a7f9: LEA ESI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a7fc: MOV AL,byte ptr [ESI]
//   Label: LAB_0045a7fc
//   XREF to: Stack[-0x6c] (DATA)
// 0045a7fe: CMP AL,DL
// 0045a800: JZ 0x0045a814
//   XREF to: 0045a814 (CONDITIONAL_JUMP)
// 0045a802: CMP AL,0x0
// 0045a804: JZ 0x0045a812
//   XREF to: 0045a812 (CONDITIONAL_JUMP)
// 0045a806: INC ESI
// 0045a807: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6b] (DATA)
// 0045a809: CMP AL,DL
// 0045a80b: JZ 0x0045a814
//   XREF to: 0045a814 (CONDITIONAL_JUMP)
// 0045a80d: INC ESI
// 0045a80e: CMP AL,0x0
// 0045a810: JNZ 0x0045a7fc
//   XREF to: 0045a7fc (CONDITIONAL_JUMP)
// 0045a812: SUB ESI,ESI
//   Label: LAB_0045a812
// 0045a814: TEST ESI,ESI
//   Label: LAB_0045a814
// 0045a816: JNZ 0x0045a82a
//   XREF to: 0045a82a (CONDITIONAL_JUMP)
// 0045a818: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a81b: SUB ECX,ECX
// 0045a81d: DEC ECX
// 0045a81e: XOR EAX,EAX
// 0045a820: SCASB.REPNE ES:EDI
// 0045a822: NOT ECX
// 0045a824: DEC ECX
// 0045a825: CMP ECX,0x8
// 0045a828: JBE 0x0045a82c
//   XREF to: 0045a82c (CONDITIONAL_JUMP)
// 0045a82a: JMP 0x0045a88e
//   Label: LAB_0045a82a
//   XREF to: 0045a88e (UNCONDITIONAL_JUMP)
// 0045a82c: CMP dword ptr [EBP + 0x14],0x0
//   Label: LAB_0045a82c
//   XREF to: Stack[0x4] (READ)
// 0045a830: JNZ 0x0045a85e
//   XREF to: 0045a85e (CONDITIONAL_JUMP)
// 0045a832: MOV ESI,0x61af5a
//   XREF to: 0061af5a (DATA)
// 0045a837: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a83a: PUSH EDI
// 0045a83b: SUB ECX,ECX
// 0045a83d: DEC ECX
// 0045a83e: MOV AL,0x0
// 0045a840: SCASB.REPNE ES:EDI
// 0045a842: DEC EDI
// 0045a843: MOV AL,byte ptr [ESI]
//   Label: LAB_0045a843
//   XREF to: 0061af5a (READ)
//   XREF to: 0061af5c (READ)
// 0045a845: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6c] (DATA)
// 0045a847: CMP AL,0x0
// 0045a849: JZ 0x0045a85b
//   XREF to: 0045a85b (CONDITIONAL_JUMP)
// 0045a84b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061af5b (READ)
//   XREF to: 0061af5d (READ)
// 0045a84e: ADD ESI,0x2
// 0045a851: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6b] (WRITE)
// 0045a854: ADD EDI,0x2
// 0045a857: CMP AL,0x0
// 0045a859: JNZ 0x0045a843
//   XREF to: 0045a843 (CONDITIONAL_JUMP)
// 0045a85b: POP EDI
//   Label: LAB_0045a85b
// 0045a85c: JMP 0x0045a88e
//   XREF to: 0045a88e (UNCONDITIONAL_JUMP)
// 0045a85e: CMP dword ptr [EBP + 0x14],0x1
//   Label: LAB_0045a85e
//   XREF to: Stack[0x4] (READ)
// 0045a862: JNZ 0x0045a88e
//   XREF to: 0045a88e (CONDITIONAL_JUMP)
// 0045a864: MOV ESI,0x61af5f
//   XREF to: 0061af5f (DATA)
// 0045a869: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045a86c: PUSH EDI
// 0045a86d: SUB ECX,ECX
// 0045a86f: DEC ECX
// 0045a870: MOV AL,0x0
// 0045a872: SCASB.REPNE ES:EDI
// 0045a874: DEC EDI
// 0045a875: MOV AL,byte ptr [ESI]
//   Label: LAB_0045a875
//   XREF to: 0061af5f (READ)
//   XREF to: 0061af61 (READ)
// 0045a877: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6c] (DATA)
// 0045a879: CMP AL,0x0
// 0045a87b: JZ 0x0045a88d
//   XREF to: 0045a88d (CONDITIONAL_JUMP)
// 0045a87d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061af60 (READ)
//   XREF to: 0061af62 (READ)
// 0045a880: ADD ESI,0x2
// 0045a883: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6b] (WRITE)
// 0045a886: ADD EDI,0x2
// 0045a889: CMP AL,0x0
// 0045a88b: JNZ 0x0045a875
//   XREF to: 0045a875 (CONDITIONAL_JUMP)
// 0045a88d: POP EDI
//   Label: LAB_0045a88d
// 0045a88e: PUSH 0x16
//   Label: LAB_0045a88e
// 0045a890: PUSH 0x0
// 0045a892: MOV EAX,0x61af64
//   XREF to: 0061af64 (PARAM)
// 0045a897: PUSH EAX
//   XREF to: 0061af64 (DATA)
// 0045a898: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a89d: ADD ESP,0xc
// 0045a8a0: PUSH 0x21
// 0045a8a2: PUSH 0x0
// 0045a8a4: MOV EAX,0x61af76
//   XREF to: 0061af76 (PARAM)
// 0045a8a9: PUSH EAX
//   XREF to: 0061af76 (DATA)
// 0045a8aa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a8af: ADD ESP,0xc
// 0045a8b2: PUSH 0x2c
// 0045a8b4: PUSH 0x0
// 0045a8b6: MOV EAX,0x61af85
//   XREF to: 0061af85 (PARAM)
// 0045a8bb: PUSH EAX
//   XREF to: 0061af85 (DATA)
// 0045a8bc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a8c1: ADD ESP,0xc
// 0045a8c4: PUSH 0x37
// 0045a8c6: PUSH 0x0
// 0045a8c8: MOV EAX,0x61af94
//   XREF to: 0061af94 (PARAM)
// 0045a8cd: PUSH EAX
//   XREF to: 0061af94 (DATA)
// 0045a8ce: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a8d3: ADD ESP,0xc
// 0045a8d6: PUSH 0x42
// 0045a8d8: PUSH 0x0
// 0045a8da: MOV EAX,0x61af9f
//   XREF to: 0061af9f (PARAM)
// 0045a8df: PUSH EAX
//   XREF to: 0061af9f (DATA)
// 0045a8e0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a8e5: ADD ESP,0xc
// 0045a8e8: PUSH 0x4d
// 0045a8ea: PUSH 0x0
// 0045a8ec: MOV EAX,0x61afca
//   XREF to: 0061afca (PARAM)
// 0045a8f1: PUSH EAX
//   XREF to: 0061afca (DATA)
// 0045a8f2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a8f7: ADD ESP,0xc
// 0045a8fa: PUSH 0x58
// 0045a8fc: PUSH 0x0
// 0045a8fe: MOV EAX,0x61afdd
//   XREF to: 0061afdd (PARAM)
// 0045a903: PUSH EAX
//   XREF to: 0061afdd (DATA)
// 0045a904: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a909: ADD ESP,0xc
// 0045a90c: PUSH 0x63
// 0045a90e: PUSH 0x0
// 0045a910: MOV EAX,0x61b009
//   XREF to: 0061b009 (PARAM)
// 0045a915: PUSH EAX
//   XREF to: 0061b009 (DATA)
// 0045a916: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a91b: ADD ESP,0xc
// 0045a91e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045a923: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045a928: AND EAX,0xff
// 0045a92d: PUSH EAX
// 0045a92e: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045a933: ADD ESP,0x4
// 0045a936: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a939: CMP dword ptr [EBP + -0xc],0x4e
//   XREF to: Stack[-0x1c] (READ)
// 0045a93d: JZ 0x0045a945
//   XREF to: 0045a945 (CONDITIONAL_JUMP)
// 0045a93f: CMP dword ptr [EBP + -0xc],0x59
//   XREF to: Stack[-0x1c] (READ)
// 0045a943: JNZ 0x0045a947
//   XREF to: 0045a947 (CONDITIONAL_JUMP)
// 0045a945: JMP 0x0045a94d
//   Label: LAB_0045a945
//   XREF to: 0045a94d (UNCONDITIONAL_JUMP)
// 0045a947: CMP dword ptr [EBP + -0xc],0x58
//   Label: LAB_0045a947
//   XREF to: Stack[-0x1c] (READ)
// 0045a94b: JNZ 0x0045a94f
//   XREF to: 0045a94f (CONDITIONAL_JUMP)
// 0045a94d: JMP 0x0045a955
//   Label: LAB_0045a94d
//   XREF to: 0045a955 (UNCONDITIONAL_JUMP)
// 0045a94f: CMP dword ptr [EBP + -0xc],0x5a
//   Label: LAB_0045a94f
//   XREF to: Stack[-0x1c] (READ)
// 0045a953: JNZ 0x0045a957
//   XREF to: 0045a957 (CONDITIONAL_JUMP)
// 0045a955: JMP 0x0045a95d
//   Label: LAB_0045a955
//   XREF to: 0045a95d (UNCONDITIONAL_JUMP)
// 0045a957: CMP dword ptr [EBP + -0xc],0x54
//   Label: LAB_0045a957
//   XREF to: Stack[-0x1c] (READ)
// 0045a95b: JNZ 0x0045a95f
//   XREF to: 0045a95f (CONDITIONAL_JUMP)
// 0045a95d: JMP 0x0045a965
//   Label: LAB_0045a95d
//   XREF to: 0045a965 (UNCONDITIONAL_JUMP)
// 0045a95f: CMP dword ptr [EBP + -0xc],0x52
//   Label: LAB_0045a95f
//   XREF to: Stack[-0x1c] (READ)
// 0045a963: JNZ 0x0045a967
//   XREF to: 0045a967 (CONDITIONAL_JUMP)
// 0045a965: JMP 0x0045a96d
//   Label: LAB_0045a965
//   XREF to: 0045a96d (UNCONDITIONAL_JUMP)
// 0045a967: CMP dword ptr [EBP + -0xc],0x47
//   Label: LAB_0045a967
//   XREF to: Stack[-0x1c] (READ)
// 0045a96b: JNZ 0x0045a96f
//   XREF to: 0045a96f (CONDITIONAL_JUMP)
// 0045a96d: JMP 0x0045a975
//   Label: LAB_0045a96d
//   XREF to: 0045a975 (UNCONDITIONAL_JUMP)
// 0045a96f: CMP dword ptr [EBP + -0xc],0x48
//   Label: LAB_0045a96f
//   XREF to: Stack[-0x1c] (READ)
// 0045a973: JNZ 0x0045a977
//   XREF to: 0045a977 (CONDITIONAL_JUMP)
// 0045a975: JMP 0x0045a97c
//   Label: LAB_0045a975
//   XREF to: 0045a97c (UNCONDITIONAL_JUMP)
// 0045a977: JMP 0x0045a88e
//   Label: LAB_0045a977
//   XREF to: 0045a88e (UNCONDITIONAL_JUMP)
// 0045a97c: PUSH 0x79
//   Label: LAB_0045a97c
// 0045a97e: PUSH 0x0
// 0045a980: MOV EAX,0x61b01c
//   XREF to: 0061b01c (PARAM)
// 0045a985: PUSH EAX
//   XREF to: 0061b01c (DATA)
// 0045a986: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a98b: ADD ESP,0xc
// 0045a98e: PUSH 0x84
// 0045a993: PUSH 0x0
// 0045a995: MOV EAX,0x61b02c
//   XREF to: 0061b02c (PARAM)
// 0045a99a: PUSH EAX
//   XREF to: 0061b02c (DATA)
// 0045a99b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a9a0: ADD ESP,0xc
// 0045a9a3: PUSH 0x8f
// 0045a9a8: PUSH 0x0
// 0045a9aa: MOV EAX,0x61b03b
//   XREF to: 0061b03b (PARAM)
// 0045a9af: PUSH EAX
//   XREF to: 0061b03b (DATA)
// 0045a9b0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a9b5: ADD ESP,0xc
// 0045a9b8: PUSH 0x9a
// 0045a9bd: PUSH 0x0
// 0045a9bf: MOV EAX,0x61b04a
//   XREF to: 0061b04a (PARAM)
// 0045a9c4: PUSH EAX
//   XREF to: 0061b04a (DATA)
// 0045a9c5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a9ca: ADD ESP,0xc
// 0045a9cd: PUSH 0xa5
// 0045a9d2: PUSH 0x0
// 0045a9d4: MOV EAX,0x61b059
//   XREF to: 0061b059 (PARAM)
// 0045a9d9: PUSH EAX
//   XREF to: 0061b059 (DATA)
// 0045a9da: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a9df: ADD ESP,0xc
// 0045a9e2: PUSH 0xb0
// 0045a9e7: PUSH 0x0
// 0045a9e9: MOV EAX,0x61b069
//   XREF to: 0061b069 (PARAM)
// 0045a9ee: PUSH EAX
//   XREF to: 0061b069 (DATA)
// 0045a9ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045a9f4: ADD ESP,0xc
// 0045a9f7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045a9fc: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045aa01: AND EAX,0xff
// 0045aa06: PUSH EAX
// 0045aa07: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045aa0c: ADD ESP,0x4
// 0045aa0f: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045aa12: CMP dword ptr [EBP + -0x4],0x31
//   XREF to: Stack[-0x14] (READ)
// 0045aa16: JL 0x0045aa1e
//   XREF to: 0045aa1e (CONDITIONAL_JUMP)
// 0045aa18: CMP dword ptr [EBP + -0x4],0x36
//   XREF to: Stack[-0x14] (READ)
// 0045aa1c: JLE 0x0045aa23
//   XREF to: 0045aa23 (CONDITIONAL_JUMP)
// 0045aa1e: JMP 0x0045a97c
//   Label: LAB_0045aa1e
//   XREF to: 0045a97c (UNCONDITIONAL_JUMP)
// 0045aa23: PUSH 0xd1
//   Label: LAB_0045aa23
// 0045aa28: PUSH 0x0
// 0045aa2a: MOV EAX,0x61b081
//   XREF to: 0061b081 (PARAM)
// 0045aa2f: PUSH EAX
//   XREF to: 0061b081 (DATA)
// 0045aa30: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045aa35: ADD ESP,0xc
// 0045aa38: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045aa3d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045aa42: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045aa47: AND EAX,0xff
// 0045aa4c: PUSH EAX
// 0045aa4d: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045aa52: ADD ESP,0x4
// 0045aa55: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045aa58: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045aa5b: PUSH EAX
// 0045aa5c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045aa5f: PUSH EAX
// 0045aa60: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045aa63: PUSH EAX
// 0045aa64: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045aa67: PUSH EAX
// 0045aa68: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045aa6b: PUSH EAX
// 0045aa6c: CALL shape_design.c_exportModelToBIN_FUN_0045aa80
//   XREF to: 0045aa80 (UNCONDITIONAL_CALL)
// 0045aa71: ADD ESP,0x14
// 0045aa74: MOV ESP,EBP
//   Label: LAB_0045aa74
// 0045aa76: POP EBP
// 0045aa77: POP EDI
// 0045aa78: POP ESI
// 0045aa79: POP EBX
// 0045aa7a: RET
