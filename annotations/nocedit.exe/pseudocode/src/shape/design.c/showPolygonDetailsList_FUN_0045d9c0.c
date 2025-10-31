// Name: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// Address: 0045d9c0
// Address Range: [[0045d9c0, 0045dbdc]]
// Convention: unknown
// Signature: undefined shape_design.c_showPolygonDetailsList_FUN_0045d9c0()
// Globals:
//   TerminatedCString s_Poly_d_0061b416
//   TerminatedCString s_d_0061b420
//   TerminatedCString s_Part_s_0061b424
//   TerminatedCString s_Color_d_0061b42f
//   int g_WindowHeight = 0xc8
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a8c
//   SModelPartName[500] g_ModelPartNames
//   int g_CurrentPartIndex
//   int g_WireframeMode
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_showPolygonDetailsList_FUN_0045d9c0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_7c [80];
  char local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_1c = 0;
  do {
    if (g_PolygonCount <= local_1c) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_20 = 0;
    for (local_18 = local_1c; local_18 < g_WindowHeight / 0xb + local_1c; local_18 = local_18 + 1) {
      if ((((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
          (g_ModelPolygonData[local_18].part_assignment == g_CurrentPartIndex)) &&
         (local_18 < g_PolygonCount)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4,"Poly %d :");
        for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
            local_14 = local_14 + 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_2c," %d");
          pcVar3 = local_2c;
          iVar2 = -1;
          pcVar5 = &stack0xfffffee4;
          do {
            pcVar4 = pcVar5;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar4;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + -1;
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
        crt_stdio_c_sprintf_FUN_005fdbd0(local_7c," Part : %s");
        pcVar3 = local_7c;
        iVar2 = -1;
        pcVar5 = &stack0xfffffee4;
        do {
          pcVar4 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar4;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + -1;
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        crt_stdio_c_sprintf_FUN_005fdbd0(local_7c," Color : %d");
        pcVar3 = local_7c;
        iVar2 = -1;
        pcVar5 = &stack0xfffffee4;
        do {
          pcVar4 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar4;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + -1;
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffee4,0,local_20);
        local_20 = local_20 + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = local_1c + g_WindowHeight / 0xb;
  } while( true );
}


// Assembly code:
// 0045d9c0: PUSH EBX
//   Label: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// 0045d9c1: PUSH ESI
// 0045d9c2: PUSH EDI
// 0045d9c3: PUSH EBP
// 0045d9c4: MOV EBP,ESP
// 0045d9c6: SUB ESP,0x10c
// 0045d9cc: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045d9d1: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0045d9d8: JMP 0x0045d9f2
//   XREF to: 0045d9f2 (UNCONDITIONAL_JUMP)
// 0045d9da: MOV ECX,0xb
//   Label: LAB_0045d9da
// 0045d9df: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045d9e4: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045d9ea: SAR EDX,0x1f
// 0045d9ed: IDIV ECX
// 0045d9ef: ADD dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0045d9f2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045d9f2
//   XREF to: Stack[-0x1c] (READ)
// 0045d9f5: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045d9fb: JGE 0x0045dbd1
//   XREF to: 0045dbd1 (CONDITIONAL_JUMP)
// 0045da01: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045da06: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0045da0d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045da10: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045da13: JMP 0x0045da1b
//   XREF to: 0045da1b (UNCONDITIONAL_JUMP)
// 0045da15: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045da15
//   XREF to: Stack[-0x18] (READ)
// 0045da18: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045da1b: MOV ECX,0xb
//   Label: LAB_0045da1b
// 0045da20: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045da25: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045da2b: SAR EDX,0x1f
// 0045da2e: IDIV ECX
// 0045da30: ADD EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045da33: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045da36: JLE 0x0045dbc2
//   XREF to: 0045dbc2 (CONDITIONAL_JUMP)
// 0045da3c: CMP dword ptr [0x01e66158],0x0
//   XREF to: 01e66158 (READ)
// 0045da43: JZ 0x0045da4e
//   XREF to: 0045da4e (CONDITIONAL_JUMP)
// 0045da45: CMP dword ptr [0x01e6614c],-0x1
//   XREF to: 01e6614c (READ)
// 0045da4c: JNZ 0x0045da50
//   XREF to: 0045da50 (CONDITIONAL_JUMP)
// 0045da4e: JMP 0x0045da6a
//   Label: LAB_0045da4e
//   XREF to: 0045da6a (UNCONDITIONAL_JUMP)
// 0045da50: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0045da50
//   XREF to: Stack[-0x18] (READ)
// 0045da57: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0045da5d: CMP EAX,dword ptr [0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045da63: JZ 0x0045da6a
//   XREF to: 0045da6a (CONDITIONAL_JUMP)
// 0045da65: JMP 0x0045dbbd
//   XREF to: 0045dbbd (UNCONDITIONAL_JUMP)
// 0045da6a: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045da6a
//   XREF to: Stack[-0x18] (READ)
// 0045da6d: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045da73: JGE 0x0045dbbd
//   XREF to: 0045dbbd (CONDITIONAL_JUMP)
// 0045da79: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045da7c: PUSH EAX
// 0045da7d: MOV EAX,0x61b416
//   XREF to: 0061b416 (DATA)
// 0045da82: PUSH EAX
//   XREF to: 0061b416 (DATA)
// 0045da83: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0045da89: PUSH EAX
// 0045da8a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045da8f: ADD ESP,0xc
// 0045da92: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045da99: JMP 0x0045daa1
//   XREF to: 0045daa1 (UNCONDITIONAL_JUMP)
// 0045da9b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045da9b
//   XREF to: Stack[-0x14] (READ)
// 0045da9e: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045daa1: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0045daa1
//   XREF to: Stack[-0x18] (READ)
// 0045daa8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045daab: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045dab1: JGE 0x0045db07
//   XREF to: 0045db07 (CONDITIONAL_JUMP)
// 0045dab3: IMUL ESI,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0045daba: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045dabd: SHL EDI,0x2
// 0045dac0: ADD ESI,EDI
// 0045dac2: PUSH dword ptr [ESI + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045dac8: MOV ESI,0x61b420
//   XREF to: 0061b420 (DATA)
// 0045dacd: PUSH ESI
//   XREF to: 0061b420 (DATA)
// 0045dace: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045dad1: PUSH ESI
// 0045dad2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045dad7: ADD ESP,0xc
// 0045dada: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045dadd: LEA EDI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0045dae3: PUSH EDI
// 0045dae4: SUB ECX,ECX
// 0045dae6: DEC ECX
// 0045dae7: MOV AL,0x0
// 0045dae9: SCASB.REPNE ES:EDI
// 0045daeb: DEC EDI
// 0045daec: MOV AL,byte ptr [ESI]
//   Label: LAB_0045daec
//   XREF to: Stack[-0x2c] (DATA)
// 0045daee: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11c] (DATA)
// 0045daf0: CMP AL,0x0
// 0045daf2: JZ 0x0045db04
//   XREF to: 0045db04 (CONDITIONAL_JUMP)
// 0045daf4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2b] (READ)
// 0045daf7: ADD ESI,0x2
// 0045dafa: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11b] (WRITE)
// 0045dafd: ADD EDI,0x2
// 0045db00: CMP AL,0x0
// 0045db02: JNZ 0x0045daec
//   XREF to: 0045daec (CONDITIONAL_JUMP)
// 0045db04: POP EDI
//   Label: LAB_0045db04
// 0045db05: JMP 0x0045da9b
//   XREF to: 0045da9b (UNCONDITIONAL_JUMP)
// 0045db07: IMUL ESI,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0045db07
//   XREF to: Stack[-0x18] (READ)
// 0045db0e: IMUL ESI,dword ptr [ESI + 0x16e9a88],0x14
//   XREF to: 016e9a88 (DATA)
// 0045db15: MOV EDI,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0045db1a: ADD ESI,EDI
// 0045db1c: PUSH ESI
// 0045db1d: MOV ESI,0x61b424
//   XREF to: 0061b424 (DATA)
// 0045db22: PUSH ESI
//   XREF to: 0061b424 (DATA)
// 0045db23: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045db26: PUSH ESI
// 0045db27: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045db2c: ADD ESP,0xc
// 0045db2f: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045db32: LEA EDI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0045db38: PUSH EDI
// 0045db39: SUB ECX,ECX
// 0045db3b: DEC ECX
// 0045db3c: MOV AL,0x0
// 0045db3e: SCASB.REPNE ES:EDI
// 0045db40: DEC EDI
// 0045db41: MOV AL,byte ptr [ESI]
//   Label: LAB_0045db41
//   XREF to: Stack[-0x7c] (DATA)
// 0045db43: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11c] (DATA)
// 0045db45: CMP AL,0x0
// 0045db47: JZ 0x0045db59
//   XREF to: 0045db59 (CONDITIONAL_JUMP)
// 0045db49: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x7b] (READ)
// 0045db4c: ADD ESI,0x2
// 0045db4f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11b] (WRITE)
// 0045db52: ADD EDI,0x2
// 0045db55: CMP AL,0x0
// 0045db57: JNZ 0x0045db41
//   XREF to: 0045db41 (CONDITIONAL_JUMP)
// 0045db59: POP EDI
//   Label: LAB_0045db59
// 0045db5a: IMUL ESI,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0045db61: PUSH dword ptr [ESI + 0x16e9a8c]
//   XREF to: 016e9a8c (DATA)
// 0045db67: MOV ESI,0x61b42f
//   XREF to: 0061b42f (DATA)
// 0045db6c: PUSH ESI
//   XREF to: 0061b42f (DATA)
// 0045db6d: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045db70: PUSH ESI
// 0045db71: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045db76: ADD ESP,0xc
// 0045db79: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0045db7c: LEA EDI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0045db82: PUSH EDI
// 0045db83: SUB ECX,ECX
// 0045db85: DEC ECX
// 0045db86: MOV AL,0x0
// 0045db88: SCASB.REPNE ES:EDI
// 0045db8a: DEC EDI
// 0045db8b: MOV AL,byte ptr [ESI]
//   Label: LAB_0045db8b
//   XREF to: Stack[-0x7c] (DATA)
// 0045db8d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11c] (DATA)
// 0045db8f: CMP AL,0x0
// 0045db91: JZ 0x0045dba3
//   XREF to: 0045dba3 (CONDITIONAL_JUMP)
// 0045db93: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x7b] (READ)
// 0045db96: ADD ESI,0x2
// 0045db99: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11b] (WRITE)
// 0045db9c: ADD EDI,0x2
// 0045db9f: CMP AL,0x0
// 0045dba1: JNZ 0x0045db8b
//   XREF to: 0045db8b (CONDITIONAL_JUMP)
// 0045dba3: POP EDI
//   Label: LAB_0045dba3
// 0045dba4: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045dba7: PUSH ESI
// 0045dba8: PUSH 0x0
// 0045dbaa: LEA ESI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0045dbb0: PUSH ESI
// 0045dbb1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045dbb6: ADD ESP,0xc
// 0045dbb9: ADD dword ptr [EBP + -0x10],0xb
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0045dbbd: JMP 0x0045da15
//   Label: LAB_0045dbbd
//   XREF to: 0045da15 (UNCONDITIONAL_JUMP)
// 0045dbc2: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0045dbc2
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045dbc7: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045dbcc: JMP 0x0045d9da
//   XREF to: 0045d9da (UNCONDITIONAL_JUMP)
// 0045dbd1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045dbd1
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045dbd6: MOV ESP,EBP
// 0045dbd8: POP EBP
// 0045dbd9: POP EDI
// 0045dbda: POP ESI
// 0045dbdb: POP EBX
// 0045dbdc: RET
