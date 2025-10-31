// Name: shape_design.c_validateModelTextures_FUN_00459a20
// Address: 00459a20
// Address Range: [[00459a20, 00459dd9]]
// Convention: __cdecl
// Signature: int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
// Cross-references:
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045b9cd [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a1e9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Checking_texture_files_0061acc5
//   TerminatedCString s_TGA_0061acdf
//   undefined4 DAT_0061ace0
//   undefined4 DAT_0061ace1
//   undefined4 s_A_0061ace2
//   TerminatedCString s_WARNING_The_following_te_0061ace4
//   TerminatedCString s_NO_TEXTURE_object_not_ma_0061ad12
//   TerminatedCString s_s_12s_texture_not_found_0061ad36
//   TerminatedCString s_s_12s_invalid_texture_si_0061ad53
//   TerminatedCString s_Hit_a_key_0061ad73
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFileSize_FUN_00481880
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl shape_design_c_validateModelTextures_FUN_00459a20(char *directory_path,int mode)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char local_14c [200];
  char local_84 [80];
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  int local_14;
  
  if ((mode == 0) || (mode == 1)) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Checking texture files...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_14 = 0;
    for (local_1c = 0; local_1c < 200; local_1c = local_1c + 1) {
      (&stack0xffffc034)[local_1c * 0x50] = 0;
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      pcVar3 = g_ModelPolygonData[local_1c].texture_name;
      pcVar4 = local_84;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      if (local_84[0] != '\0') {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      local_28 = (uint)(local_84[0] == '\0');
      if (mode == 1) {
        pcVar4 = local_84;
        do {
          local_18 = pcVar4;
          if (*pcVar4 == '.') goto LAB_00459b17;
          if (*pcVar4 == '\0') break;
          local_18 = pcVar4 + 1;
          if (*local_18 == '.') goto LAB_00459b17;
          pcVar4 = pcVar4 + 2;
        } while (*local_18 != '\0');
        local_18 = (char *)0x0;
LAB_00459b17:
        if (local_18 != (char *)0x0) {
          pcVar3 = ".TGA";
          pcVar4 = local_18;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
        }
      }
      local_30 = engine_dosio_c_getFileSize_FUN_00481880(directory_path,local_84);
      local_2c = 0;
      if (mode == 0) {
        if (local_30 < 0x4000) {
          if (local_30 < 0x400) {
            if (local_30 != 0x100) goto LAB_00459b94;
          }
          else if ((0x400 < local_30) && (local_30 != 0x1000)) {
LAB_00459b94:
            local_2c = 1;
          }
        }
        else if (0x4000 < local_30) {
          if (local_30 < 0x40000) {
            if (local_30 != 0x10000) goto LAB_00459b94;
          }
          else if ((0x40000 < local_30) && (local_30 != 0xffffffff)) goto LAB_00459b94;
        }
      }
      if ((local_30 == 0xffffffff) || (local_2c != 0)) {
        local_24 = 0;
        for (local_34 = 0; local_34 < local_14; local_34 = local_34 + 1) {
          iVar2 = crt_string_c_strcmp_FUN_005fef20(local_84,&stack0xffffc034 + local_34 * 0x50);
          if (iVar2 == 0) {
            local_24 = 1;
            break;
          }
        }
        if ((local_24 == 0) || (local_28 != 0)) {
          if ((local_14 < 200) && (local_28 == 0)) {
            pcVar4 = local_84;
            pcVar3 = &stack0xffffc034 + local_14 * 0x50;
            do {
              cVar1 = *pcVar4;
              *pcVar3 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar4[1];
              pcVar4 = pcVar4 + 2;
              pcVar3[1] = cVar1;
              pcVar3 = pcVar3 + 2;
            } while (cVar1 != '\0');
          }
          local_14 = local_14 + 1;
          if (local_14 == 1) {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_drawText_FUN_00401fd0("WARNING: The following textures were invalid:",0,0);
          }
          if (local_28 == 0) {
            if (local_30 == 0xffffffff) {
              crt_stdio_c_sprintf_FUN_005fdbd0(local_14c,"  %-12s  (texture not found)");
              engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 1) * 0xb);
            }
            else {
              crt_stdio_c_sprintf_FUN_005fdbd0(local_14c,"  %-12s  (invalid texture size)");
              engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 1) * 0xb);
            }
          }
          else {
            crt_stdio_c_sprintf_FUN_005fdbd0(local_14c,"  NO TEXTURE    (object not mapped)");
            engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 1) * 0xb);
          }
        }
        g_ModelPolygonData[local_1c].texture_name[0] = '\0';
      }
    }
    if (local_14 != 0) {
      engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_14 + 3) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    local_20 = local_14;
  }
  else {
    local_20 = -1;
  }
  return local_20;
}


// Assembly code:
// 00459a20: PUSH EBX
//   Label: shape_design.c_validateModelTextures_FUN_00459a20
// 00459a21: PUSH ESI
// 00459a22: PUSH EDI
// 00459a23: PUSH EBP
// 00459a24: MOV EBP,ESP
// 00459a26: SUB ESP,0x3fc0
// 00459a2c: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 00459a30: JZ 0x00459a38
//   XREF to: 00459a38 (CONDITIONAL_JUMP)
// 00459a32: CMP dword ptr [EBP + 0x18],0x1
//   XREF to: Stack[0x8] (READ)
// 00459a36: JNZ 0x00459a3a
//   XREF to: 00459a3a (CONDITIONAL_JUMP)
// 00459a38: JMP 0x00459a46
//   Label: LAB_00459a38
//   XREF to: 00459a46 (UNCONDITIONAL_JUMP)
// 00459a3a: MOV dword ptr [EBP + -0x10],0xffffffff
//   Label: LAB_00459a3a
//   XREF to: Stack[-0x20] (WRITE)
// 00459a41: JMP 0x00459dd0
//   XREF to: 00459dd0 (UNCONDITIONAL_JUMP)
// 00459a46: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00459a46
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00459a4b: PUSH 0x0
// 00459a4d: PUSH 0x0
// 00459a4f: MOV EAX,0x61acc5
//   XREF to: 0061acc5 (PARAM)
// 00459a54: PUSH EAX
//   XREF to: 0061acc5 (DATA)
// 00459a55: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459a5a: ADD ESP,0xc
// 00459a5d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00459a62: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00459a69: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00459a70: JMP 0x00459a78
//   XREF to: 00459a78 (UNCONDITIONAL_JUMP)
// 00459a72: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459a72
//   XREF to: Stack[-0x1c] (READ)
// 00459a75: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00459a78: CMP dword ptr [EBP + -0xc],0xc8
//   Label: LAB_00459a78
//   XREF to: Stack[-0x1c] (READ)
// 00459a7f: JGE 0x00459a8f
//   XREF to: 00459a8f (CONDITIONAL_JUMP)
// 00459a81: IMUL EAX,dword ptr [EBP + -0xc],0x50
//   XREF to: Stack[-0x1c] (READ)
// 00459a85: MOV byte ptr [EAX + EBP*0x1 + 0xffffc044],0x0
// 00459a8d: JMP 0x00459a72
//   XREF to: 00459a72 (UNCONDITIONAL_JUMP)
// 00459a8f: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00459a8f
//   XREF to: Stack[-0x1c] (WRITE)
// 00459a96: JMP 0x00459a9e
//   XREF to: 00459a9e (UNCONDITIONAL_JUMP)
// 00459a98: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459a98
//   XREF to: Stack[-0x1c] (READ)
// 00459a9b: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00459a9e: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00459a9e
//   XREF to: Stack[-0x1c] (READ)
// 00459aa1: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00459aa7: JGE 0x00459da0
//   XREF to: 00459da0 (CONDITIONAL_JUMP)
// 00459aad: IMUL EDI,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 00459ab4: MOV ESI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00459ab9: ADD ESI,EDI
// 00459abb: ADD ESI,0x4
// 00459abe: LEA EDI,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00459ac1: PUSH EDI
// 00459ac2: MOV AL,byte ptr [ESI]
//   Label: LAB_00459ac2
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 00459ac4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x84] (DATA)
// 00459ac6: CMP AL,0x0
// 00459ac8: JZ 0x00459ada
//   XREF to: 00459ada (CONDITIONAL_JUMP)
// 00459aca: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 00459acd: ADD ESI,0x2
// 00459ad0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x83] (WRITE)
// 00459ad3: ADD EDI,0x2
// 00459ad6: CMP AL,0x0
// 00459ad8: JNZ 0x00459ac2
//   XREF to: 00459ac2 (CONDITIONAL_JUMP)
// 00459ada: POP EDI
//   Label: LAB_00459ada
// 00459adb: CMP byte ptr [EBP + -0x74],0x0
//   XREF to: Stack[-0x84] (READ)
// 00459adf: JNZ 0x00459aea
//   XREF to: 00459aea (CONDITIONAL_JUMP)
// 00459ae1: MOV dword ptr [EBP + -0x18],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 00459ae8: JMP 0x00459af1
//   XREF to: 00459af1 (UNCONDITIONAL_JUMP)
// 00459aea: MOV dword ptr [EBP + -0x18],0x0
//   Label: LAB_00459aea
//   XREF to: Stack[-0x28] (WRITE)
// 00459af1: CMP dword ptr [EBP + 0x18],0x1
//   Label: LAB_00459af1
//   XREF to: Stack[0x8] (READ)
// 00459af5: JNZ 0x00459b42
//   XREF to: 00459b42 (CONDITIONAL_JUMP)
// 00459af7: MOV EDX,0x2e
// 00459afc: LEA ESI,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00459aff: MOV AL,byte ptr [ESI]
//   Label: LAB_00459aff
//   XREF to: Stack[-0x84] (DATA)
// 00459b01: CMP AL,DL
// 00459b03: JZ 0x00459b17
//   XREF to: 00459b17 (CONDITIONAL_JUMP)
// 00459b05: CMP AL,0x0
// 00459b07: JZ 0x00459b15
//   XREF to: 00459b15 (CONDITIONAL_JUMP)
// 00459b09: INC ESI
// 00459b0a: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x83] (DATA)
// 00459b0c: CMP AL,DL
// 00459b0e: JZ 0x00459b17
//   XREF to: 00459b17 (CONDITIONAL_JUMP)
// 00459b10: INC ESI
// 00459b11: CMP AL,0x0
// 00459b13: JNZ 0x00459aff
//   XREF to: 00459aff (CONDITIONAL_JUMP)
// 00459b15: SUB ESI,ESI
//   Label: LAB_00459b15
// 00459b17: MOV dword ptr [EBP + -0x8],ESI
//   Label: LAB_00459b17
//   XREF to: Stack[-0x18] (WRITE)
// 00459b1a: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 00459b1e: JZ 0x00459b42
//   XREF to: 00459b42 (CONDITIONAL_JUMP)
// 00459b20: MOV ESI,0x61acdf
//   XREF to: 0061acdf (DATA)
// 00459b25: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00459b28: PUSH EDI
// 00459b29: MOV AL,byte ptr [ESI]
//   Label: LAB_00459b29
//   XREF to: 0061acdf (READ)
//   XREF to: 0061ace1 (READ)
// 00459b2b: MOV byte ptr [EDI],AL
// 00459b2d: CMP AL,0x0
// 00459b2f: JZ 0x00459b41
//   XREF to: 00459b41 (CONDITIONAL_JUMP)
// 00459b31: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061ace0 (READ)
//   XREF to: 0061ace2 (READ)
// 00459b34: ADD ESI,0x2
// 00459b37: MOV byte ptr [EDI + 0x1],AL
// 00459b3a: ADD EDI,0x2
// 00459b3d: CMP AL,0x0
// 00459b3f: JNZ 0x00459b29
//   XREF to: 00459b29 (CONDITIONAL_JUMP)
// 00459b41: POP EDI
//   Label: LAB_00459b41
// 00459b42: LEA EAX,[EBP + -0x74]
//   Label: LAB_00459b42
//   XREF to: Stack[-0x84] (DATA)
// 00459b45: PUSH EAX
// 00459b46: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00459b49: PUSH EAX
// 00459b4a: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00459b4f: ADD ESP,0x8
// 00459b52: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00459b55: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00459b5c: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 00459b60: JNZ 0x00459c28
//   XREF to: 00459c28 (CONDITIONAL_JUMP)
// 00459b66: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00459b69: MOV dword ptr [EBP + 0xffffc040],EAX
//   XREF to: Stack[-0x3fd0] (WRITE)
// 00459b6f: JMP 0x00459ba0
//   XREF to: 00459ba0 (UNCONDITIONAL_JUMP)
// 00459b71: JMP 0x00459c28
//   Label: LAB_00459b71
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b76: JMP 0x00459c28
//   Label: LAB_00459b76
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b7b: JMP 0x00459c28
//   Label: LAB_00459b7b
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b80: JMP 0x00459c28
//   Label: LAB_00459b80
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b85: JMP 0x00459c28
//   Label: LAB_00459b85
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b8a: JMP 0x00459c28
//   Label: LAB_00459b8a
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b8f: JMP 0x00459c28
//   Label: LAB_00459b8f
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459b94: MOV dword ptr [EBP + -0x1c],0x1
//   Label: LAB_00459b94
//   XREF to: Stack[-0x2c] (WRITE)
// 00459b9b: JMP 0x00459c28
//   XREF to: 00459c28 (UNCONDITIONAL_JUMP)
// 00459ba0: CMP dword ptr [EBP + 0xffffc040],0x4000
//   Label: LAB_00459ba0
//   XREF to: Stack[-0x3fd0] (READ)
// 00459baa: JC 0x00459be9
//   XREF to: 00459be9 (CONDITIONAL_JUMP)
// 00459bac: CMP dword ptr [EBP + 0xffffc040],0x4000
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bb6: JBE 0x00459b7b
//   XREF to: 00459b7b (CONDITIONAL_JUMP)
// 00459bb8: CMP dword ptr [EBP + 0xffffc040],0x40000
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bc2: JC 0x00459bdb
//   XREF to: 00459bdb (CONDITIONAL_JUMP)
// 00459bc4: CMP dword ptr [EBP + 0xffffc040],0x40000
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bce: JBE 0x00459b71
//   XREF to: 00459b71 (CONDITIONAL_JUMP)
// 00459bd0: CMP dword ptr [EBP + 0xffffc040],-0x1
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bd7: JZ 0x00459b8f
//   XREF to: 00459b8f (CONDITIONAL_JUMP)
// 00459bd9: JMP 0x00459b94
//   XREF to: 00459b94 (UNCONDITIONAL_JUMP)
// 00459bdb: CMP dword ptr [EBP + 0xffffc040],0x10000
//   Label: LAB_00459bdb
//   XREF to: Stack[-0x3fd0] (READ)
// 00459be5: JZ 0x00459b76
//   XREF to: 00459b76 (CONDITIONAL_JUMP)
// 00459be7: JMP 0x00459b94
//   XREF to: 00459b94 (UNCONDITIONAL_JUMP)
// 00459be9: CMP dword ptr [EBP + 0xffffc040],0x400
//   Label: LAB_00459be9
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bf3: JC 0x00459c13
//   XREF to: 00459c13 (CONDITIONAL_JUMP)
// 00459bf5: CMP dword ptr [EBP + 0xffffc040],0x400
//   XREF to: Stack[-0x3fd0] (READ)
// 00459bff: JBE 0x00459b85
//   XREF to: 00459b85 (CONDITIONAL_JUMP)
// 00459c01: CMP dword ptr [EBP + 0xffffc040],0x1000
//   XREF to: Stack[-0x3fd0] (READ)
// 00459c0b: JZ 0x00459b80
//   XREF to: 00459b80 (CONDITIONAL_JUMP)
// 00459c11: JMP 0x00459b94
//   XREF to: 00459b94 (UNCONDITIONAL_JUMP)
// 00459c13: CMP dword ptr [EBP + 0xffffc040],0x100
//   Label: LAB_00459c13
//   XREF to: Stack[-0x3fd0] (READ)
// 00459c1d: JZ 0x00459b8a
//   XREF to: 00459b8a (CONDITIONAL_JUMP)
// 00459c23: JMP 0x00459b94
//   XREF to: 00459b94 (UNCONDITIONAL_JUMP)
// 00459c28: CMP dword ptr [EBP + -0x20],-0x1
//   Label: LAB_00459c28
//   XREF to: Stack[-0x30] (READ)
// 00459c2c: JZ 0x00459c38
//   XREF to: 00459c38 (CONDITIONAL_JUMP)
// 00459c2e: CMP dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (READ)
// 00459c32: JZ 0x00459d9b
//   XREF to: 00459d9b (CONDITIONAL_JUMP)
// 00459c38: MOV dword ptr [EBP + -0x14],0x0
//   Label: LAB_00459c38
//   XREF to: Stack[-0x24] (WRITE)
// 00459c3f: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 00459c46: JMP 0x00459c4e
//   XREF to: 00459c4e (UNCONDITIONAL_JUMP)
// 00459c48: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00459c48
//   XREF to: Stack[-0x34] (READ)
// 00459c4b: INC dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ_WRITE)
// 00459c4e: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00459c4e
//   XREF to: Stack[-0x34] (READ)
// 00459c51: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459c54: JGE 0x00459c7e
//   XREF to: 00459c7e (CONDITIONAL_JUMP)
// 00459c56: IMUL EDX,dword ptr [EBP + -0x24],0x50
//   XREF to: Stack[-0x34] (READ)
// 00459c5a: LEA EAX,[EBP + 0xffffc044]
//   XREF to: Stack[-0x3fcc] (DATA)
// 00459c60: ADD EAX,EDX
// 00459c62: PUSH EAX
// 00459c63: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00459c66: PUSH EAX
// 00459c67: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00459c6c: ADD ESP,0x8
// 00459c6f: TEST EAX,EAX
// 00459c71: JNZ 0x00459c7c
//   XREF to: 00459c7c (CONDITIONAL_JUMP)
// 00459c73: MOV dword ptr [EBP + -0x14],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00459c7a: JMP 0x00459c7e
//   XREF to: 00459c7e (UNCONDITIONAL_JUMP)
// 00459c7c: JMP 0x00459c48
//   Label: LAB_00459c7c
//   XREF to: 00459c48 (UNCONDITIONAL_JUMP)
// 00459c7e: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_00459c7e
//   XREF to: Stack[-0x24] (READ)
// 00459c82: JZ 0x00459c8e
//   XREF to: 00459c8e (CONDITIONAL_JUMP)
// 00459c84: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 00459c88: JZ 0x00459d8d
//   XREF to: 00459d8d (CONDITIONAL_JUMP)
// 00459c8e: CMP dword ptr [EBP + -0x4],0xc8
//   Label: LAB_00459c8e
//   XREF to: Stack[-0x14] (READ)
// 00459c95: JGE 0x00459c9d
//   XREF to: 00459c9d (CONDITIONAL_JUMP)
// 00459c97: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 00459c9b: JZ 0x00459c9f
//   XREF to: 00459c9f (CONDITIONAL_JUMP)
// 00459c9d: JMP 0x00459cc8
//   Label: LAB_00459c9d
//   XREF to: 00459cc8 (UNCONDITIONAL_JUMP)
// 00459c9f: LEA ESI,[EBP + -0x74]
//   Label: LAB_00459c9f
//   XREF to: Stack[-0x84] (DATA)
// 00459ca2: IMUL EDI,dword ptr [EBP + -0x4],0x50
//   XREF to: Stack[-0x14] (READ)
// 00459ca6: LEA EAX,[EBP + 0xffffc044]
//   XREF to: Stack[-0x3fcc] (DATA)
// 00459cac: ADD EDI,EAX
// 00459cae: PUSH EDI
// 00459caf: MOV AL,byte ptr [ESI]
//   Label: LAB_00459caf
//   XREF to: Stack[-0x84] (DATA)
// 00459cb1: MOV byte ptr [EDI],AL
// 00459cb3: CMP AL,0x0
// 00459cb5: JZ 0x00459cc7
//   XREF to: 00459cc7 (CONDITIONAL_JUMP)
// 00459cb7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x83] (READ)
// 00459cba: ADD ESI,0x2
// 00459cbd: MOV byte ptr [EDI + 0x1],AL
// 00459cc0: ADD EDI,0x2
// 00459cc3: CMP AL,0x0
// 00459cc5: JNZ 0x00459caf
//   XREF to: 00459caf (CONDITIONAL_JUMP)
// 00459cc7: POP EDI
//   Label: LAB_00459cc7
// 00459cc8: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00459cc8
//   XREF to: Stack[-0x14] (READ)
// 00459ccb: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00459cce: CMP dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (READ)
// 00459cd2: JNZ 0x00459ceb
//   XREF to: 00459ceb (CONDITIONAL_JUMP)
// 00459cd4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00459cd9: PUSH 0x0
// 00459cdb: PUSH 0x0
// 00459cdd: MOV EAX,0x61ace4
//   XREF to: 0061ace4 (PARAM)
// 00459ce2: PUSH EAX
//   XREF to: 0061ace4 (DATA)
// 00459ce3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459ce8: ADD ESP,0xc
// 00459ceb: CMP dword ptr [EBP + -0x18],0x0
//   Label: LAB_00459ceb
//   XREF to: Stack[-0x28] (READ)
// 00459cef: JZ 0x00459d21
//   XREF to: 00459d21 (CONDITIONAL_JUMP)
// 00459cf1: MOV EAX,0x61ad12
//   XREF to: 0061ad12 (DATA)
// 00459cf6: PUSH EAX
//   XREF to: 0061ad12 (DATA)
// 00459cf7: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459cfd: PUSH EAX
// 00459cfe: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00459d03: ADD ESP,0x8
// 00459d06: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459d09: INC EAX
// 00459d0a: IMUL EAX,EAX,0xb
// 00459d0d: PUSH EAX
// 00459d0e: PUSH 0x0
// 00459d10: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459d16: PUSH EAX
// 00459d17: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459d1c: ADD ESP,0xc
// 00459d1f: JMP 0x00459d8d
//   XREF to: 00459d8d (UNCONDITIONAL_JUMP)
// 00459d21: CMP dword ptr [EBP + -0x20],-0x1
//   Label: LAB_00459d21
//   XREF to: Stack[-0x30] (READ)
// 00459d25: JNZ 0x00459d5b
//   XREF to: 00459d5b (CONDITIONAL_JUMP)
// 00459d27: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00459d2a: PUSH EAX
// 00459d2b: MOV EAX,0x61ad36
//   XREF to: 0061ad36 (DATA)
// 00459d30: PUSH EAX
//   XREF to: 0061ad36 (DATA)
// 00459d31: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459d37: PUSH EAX
// 00459d38: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00459d3d: ADD ESP,0xc
// 00459d40: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459d43: INC EAX
// 00459d44: IMUL EAX,EAX,0xb
// 00459d47: PUSH EAX
// 00459d48: PUSH 0x0
// 00459d4a: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459d50: PUSH EAX
// 00459d51: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459d56: ADD ESP,0xc
// 00459d59: JMP 0x00459d8d
//   XREF to: 00459d8d (UNCONDITIONAL_JUMP)
// 00459d5b: LEA EAX,[EBP + -0x74]
//   Label: LAB_00459d5b
//   XREF to: Stack[-0x84] (DATA)
// 00459d5e: PUSH EAX
// 00459d5f: MOV EAX,0x61ad53
//   XREF to: 0061ad53 (DATA)
// 00459d64: PUSH EAX
//   XREF to: 0061ad53 (DATA)
// 00459d65: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459d6b: PUSH EAX
// 00459d6c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00459d71: ADD ESP,0xc
// 00459d74: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459d77: INC EAX
// 00459d78: IMUL EAX,EAX,0xb
// 00459d7b: PUSH EAX
// 00459d7c: PUSH 0x0
// 00459d7e: LEA EAX,[EBP + 0xfffffec4]
//   XREF to: Stack[-0x14c] (DATA)
// 00459d84: PUSH EAX
// 00459d85: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459d8a: ADD ESP,0xc
// 00459d8d: IMUL EAX,dword ptr [EBP + -0xc],0x184
//   Label: LAB_00459d8d
//   XREF to: Stack[-0x1c] (READ)
// 00459d94: MOV byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 00459d9b: JMP 0x00459a98
//   Label: LAB_00459d9b
//   XREF to: 00459a98 (UNCONDITIONAL_JUMP)
// 00459da0: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_00459da0
//   XREF to: Stack[-0x14] (READ)
// 00459da4: JZ 0x00459dca
//   XREF to: 00459dca (CONDITIONAL_JUMP)
// 00459da6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00459da9: ADD EAX,0x3
// 00459dac: IMUL EAX,EAX,0xb
// 00459daf: PUSH EAX
// 00459db0: PUSH 0x0
// 00459db2: MOV EAX,0x61ad73
//   XREF to: 0061ad73 (PARAM)
// 00459db7: PUSH EAX
//   XREF to: 0061ad73 (DATA)
// 00459db8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00459dbd: ADD ESP,0xc
// 00459dc0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00459dc5: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00459dca: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00459dca
//   XREF to: Stack[-0x14] (READ)
// 00459dcd: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00459dd0: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00459dd0
//   XREF to: Stack[-0x20] (READ)
// 00459dd3: MOV ESP,EBP
// 00459dd5: POP EBP
// 00459dd6: POP EDI
// 00459dd7: POP ESI
// 00459dd8: POP EBX
// 00459dd9: RET
