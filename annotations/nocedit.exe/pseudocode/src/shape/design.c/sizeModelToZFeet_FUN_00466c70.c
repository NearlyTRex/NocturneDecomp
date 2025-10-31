// Name: shape_design.c_sizeModelToZFeet_FUN_00466c70
// Address: 00466c70
// Address Range: [[00466c70, 00466e30]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelToZFeet_FUN_00466c70(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f75e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_Z_distance_in_feet_0061c7c5
//   TerminatedCString s_f_d_d_0061c80c
//   TerminatedCString s_Need_distance_and_two_po_0061c815
//   TerminatedCString s_Invalid_point_0061c833
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_sizeModelToZFeet_FUN_00466c70(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  
  bVar5 = 0;
  local_18 = 999999.9;
  local_14 = -999999.9;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff84,0x14,0,0x16,"Enter Z distance in feet (,min,max for user-defined min/max points) : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffff84;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    return;
  }
  iVar3 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff84,"%f,%d,%d",local_20);
  if (iVar3 < 2) {
    for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
      fVar2 = g_LoadedVertices[local_2c].vertex.z;
      if (local_14 < fVar2) {
        local_14 = fVar2;
      }
      if (fVar2 < local_18) {
        local_18 = fVar2;
      }
    }
  }
  else {
    if (iVar3 != 3) {
      engine_2d_c_drawText_FUN_00401fd0("Need distance and two points.",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    if ((((local_24 < 0) || (local_28 < 0)) || (g_VertexCount + -1 < local_24)) ||
       (g_VertexCount + -1 < local_28)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    local_14 = g_LoadedVertices[local_28].vertex.z;
    local_18 = g_LoadedVertices[local_24].vertex.z;
  }
  local_20[0] = local_20[0] / (local_14 - local_18);
  for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
    g_LoadedVertices[local_2c].vertex.x = g_LoadedVertices[local_2c].vertex.x * local_20[0];
    g_LoadedVertices[local_2c].vertex.y = g_LoadedVertices[local_2c].vertex.y * local_20[0];
    g_LoadedVertices[local_2c].vertex.z = g_LoadedVertices[local_2c].vertex.z * local_20[0];
  }
  return;
}


// Assembly code:
// 00466c70: PUSH EBX
//   Label: shape_design.c_sizeModelToZFeet_FUN_00466c70
// 00466c71: PUSH ESI
// 00466c72: PUSH EDI
// 00466c73: PUSH EBP
// 00466c74: MOV EBP,ESP
// 00466c76: SUB ESP,0x6c
// 00466c7c: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 00466c83: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 00466c8a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00466c8f: MOV ECX,0x61c7c5
//   XREF to: 0061c7c5 (DATA)
// 00466c94: PUSH ECX
//   XREF to: 0061c7c5 (DATA)
// 00466c95: PUSH 0x16
// 00466c97: PUSH 0x0
// 00466c99: PUSH 0x14
// 00466c9b: LEA ECX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466c9e: PUSH ECX
// 00466c9f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00466ca4: ADD ESP,0x14
// 00466ca7: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466caa: SUB ECX,ECX
// 00466cac: DEC ECX
// 00466cad: XOR EAX,EAX
// 00466caf: SCASB.REPNE ES:EDI
// 00466cb1: NOT ECX
// 00466cb3: DEC ECX
// 00466cb4: TEST ECX,ECX
// 00466cb6: JNZ 0x00466cbd
//   XREF to: 00466cbd (CONDITIONAL_JUMP)
// 00466cb8: JMP 0x00466e2a
//   XREF to: 00466e2a (UNCONDITIONAL_JUMP)
// 00466cbd: LEA EAX,[EBP + -0x18]
//   Label: LAB_00466cbd
//   XREF to: Stack[-0x28] (DATA)
// 00466cc0: PUSH EAX
// 00466cc1: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 00466cc4: PUSH EAX
// 00466cc5: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00466cc8: PUSH EAX
// 00466cc9: MOV EAX,0x61c80c
//   XREF to: 0061c80c (DATA)
// 00466cce: PUSH EAX
//   XREF to: 0061c80c (DATA)
// 00466ccf: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466cd2: PUSH EAX
// 00466cd3: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00466cd8: ADD ESP,0x14
// 00466cdb: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00466cde: CMP dword ptr [EBP + -0x1c],0x1
//   XREF to: Stack[-0x2c] (READ)
// 00466ce2: JLE 0x00466d72
//   XREF to: 00466d72 (CONDITIONAL_JUMP)
// 00466ce8: CMP dword ptr [EBP + -0x1c],0x3
//   XREF to: Stack[-0x2c] (READ)
// 00466cec: JZ 0x00466d0f
//   XREF to: 00466d0f (CONDITIONAL_JUMP)
// 00466cee: PUSH 0x2c
// 00466cf0: PUSH 0x0
// 00466cf2: MOV EAX,0x61c815
//   XREF to: 0061c815 (PARAM)
// 00466cf7: PUSH EAX
//   XREF to: 0061c815 (DATA)
// 00466cf8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466cfd: ADD ESP,0xc
// 00466d00: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00466d05: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466d0a: JMP 0x00466e2a
//   XREF to: 00466e2a (UNCONDITIONAL_JUMP)
// 00466d0f: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_00466d0f
//   XREF to: Stack[-0x24] (READ)
// 00466d13: JL 0x00466d1b
//   XREF to: 00466d1b (CONDITIONAL_JUMP)
// 00466d15: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 00466d19: JGE 0x00466d1d
//   XREF to: 00466d1d (CONDITIONAL_JUMP)
// 00466d1b: JMP 0x00466d28
//   Label: LAB_00466d1b
//   XREF to: 00466d28 (UNCONDITIONAL_JUMP)
// 00466d1d: MOV EAX,[0x01626408]
//   Label: LAB_00466d1d
//   XREF to: 01626408 (READ)
// 00466d22: DEC EAX
// 00466d23: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00466d26: JGE 0x00466d2a
//   XREF to: 00466d2a (CONDITIONAL_JUMP)
// 00466d28: JMP 0x00466d35
//   Label: LAB_00466d28
//   XREF to: 00466d35 (UNCONDITIONAL_JUMP)
// 00466d2a: MOV EAX,[0x01626408]
//   Label: LAB_00466d2a
//   XREF to: 01626408 (READ)
// 00466d2f: DEC EAX
// 00466d30: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00466d33: JGE 0x00466d56
//   XREF to: 00466d56 (CONDITIONAL_JUMP)
// 00466d35: PUSH 0x2c
//   Label: LAB_00466d35
// 00466d37: PUSH 0x0
// 00466d39: MOV EAX,0x61c833
//   XREF to: 0061c833 (PARAM)
// 00466d3e: PUSH EAX
//   XREF to: 0061c833 (DATA)
// 00466d3f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466d44: ADD ESP,0xc
// 00466d47: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00466d4c: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466d51: JMP 0x00466e2a
//   XREF to: 00466e2a (UNCONDITIONAL_JUMP)
// 00466d56: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_00466d56
//   XREF to: Stack[-0x28] (READ)
// 00466d5a: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466d60: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00466d63: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 00466d67: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466d6d: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466d70: JMP 0x00466dbd
//   XREF to: 00466dbd (UNCONDITIONAL_JUMP)
// 00466d72: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00466d72
//   XREF to: Stack[-0x2c] (WRITE)
// 00466d79: JMP 0x00466d81
//   XREF to: 00466d81 (UNCONDITIONAL_JUMP)
// 00466d7b: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466d7b
//   XREF to: Stack[-0x2c] (READ)
// 00466d7e: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00466d81: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466d81
//   XREF to: Stack[-0x2c] (READ)
// 00466d84: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466d8a: JGE 0x00466dbd
//   XREF to: 00466dbd (CONDITIONAL_JUMP)
// 00466d8c: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466d90: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466d96: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00466d99: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466d9c: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00466d9f: FNSTSW AX
// 00466da1: SAHF
// 00466da2: JBE 0x00466daa
//   XREF to: 00466daa (CONDITIONAL_JUMP)
// 00466da4: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466da7: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00466daa: FLD float ptr [EBP + -0xc]
//   Label: LAB_00466daa
//   XREF to: Stack[-0x1c] (READ)
// 00466dad: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466db0: FNSTSW AX
// 00466db2: SAHF
// 00466db3: JNC 0x00466dbb
//   XREF to: 00466dbb (CONDITIONAL_JUMP)
// 00466db5: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466db8: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466dbb: JMP 0x00466d7b
//   Label: LAB_00466dbb
//   XREF to: 00466d7b (UNCONDITIONAL_JUMP)
// 00466dbd: FLD float ptr [EBP + -0x4]
//   Label: LAB_00466dbd
//   XREF to: Stack[-0x14] (READ)
// 00466dc0: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466dc3: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466dc6: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00466dc9: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00466dd0: JMP 0x00466dd8
//   XREF to: 00466dd8 (UNCONDITIONAL_JUMP)
// 00466dd2: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466dd2
//   XREF to: Stack[-0x2c] (READ)
// 00466dd5: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00466dd8: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466dd8
//   XREF to: Stack[-0x2c] (READ)
// 00466ddb: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466de1: JGE 0x00466e2a
//   XREF to: 00466e2a (CONDITIONAL_JUMP)
// 00466de3: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466de7: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466ded: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466df0: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466df4: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466dfa: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466dfe: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466e04: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466e07: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466e0b: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466e11: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466e15: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466e1b: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466e1e: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466e22: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466e28: JMP 0x00466dd2
//   XREF to: 00466dd2 (UNCONDITIONAL_JUMP)
// 00466e2a: MOV ESP,EBP
//   Label: LAB_00466e2a
// 00466e2c: POP EBP
// 00466e2d: POP EDI
// 00466e2e: POP ESI
// 00466e2f: POP EBX
// 00466e30: RET
