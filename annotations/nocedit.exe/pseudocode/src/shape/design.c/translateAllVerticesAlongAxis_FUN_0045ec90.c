// Name: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// Address: 0045ec90
// Address Range: [[0045ec90, 0045ee61]]
// Convention: unknown
// Signature: undefined shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90()
// Globals:
//   TerminatedCString s_Enter_distance_or_locati_0061b633
//   TerminatedCString s_Press_Enter_or_enter_poi_0061b659
//   TerminatedCString s_Invalid_point_0061b68c
//   TerminatedCString s_Which_axis_to_use_X_Y_or_0061b69b
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  undefined8 in_stack_ffffffb0;
  char *str;
  float local_1c;
  int local_14;
  
  str = (char *)((ulonglong)in_stack_ffffffb0 >> 0x20);
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffb8,10,0,0,"Enter distance or location in feet : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffffb8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    dVar6 = crt_string_c_strtod_FUN_005ff0f3(str);
    local_1c = (float)dVar6;
    iVar3 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (&stack0xffffffb8,0x14,0,0x16,"Press <Enter> or enter point to set to location : ");
    if (iVar3 != 0x1b) {
      iVar3 = -1;
      pcVar4 = &stack0xffffffb8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffb8);
        if ((iVar3 < 0) || (g_VertexCount + -1 < iVar3)) {
          engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        local_1c = local_1c - g_LoadedVertices[iVar3].vertex.x;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (uVar2 < 0x59) {
        if (uVar2 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x + local_1c;
          }
        }
      }
      else if (uVar2 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y + local_1c;
        }
      }
      else if (uVar2 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z + local_1c;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045ec90: PUSH EBX
//   Label: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// 0045ec91: PUSH ESI
// 0045ec92: PUSH EDI
// 0045ec93: PUSH EBP
// 0045ec94: MOV EBP,ESP
// 0045ec96: SUB ESP,0x44
// 0045ec9c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045eca1: MOV ECX,0x61b633
//   XREF to: 0061b633 (DATA)
// 0045eca6: PUSH ECX
//   XREF to: 0061b633 (DATA)
// 0045eca7: PUSH 0x0
// 0045eca9: PUSH 0x0
// 0045ecab: PUSH 0xa
// 0045ecad: LEA ECX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045ecb0: PUSH ECX
// 0045ecb1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045ecb6: ADD ESP,0x14
// 0045ecb9: LEA EDI,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045ecbc: SUB ECX,ECX
// 0045ecbe: DEC ECX
// 0045ecbf: XOR EAX,EAX
// 0045ecc1: SCASB.REPNE ES:EDI
// 0045ecc3: NOT ECX
// 0045ecc5: DEC ECX
// 0045ecc6: TEST ECX,ECX
// 0045ecc8: JNZ 0x0045eccf
//   XREF to: 0045eccf (CONDITIONAL_JUMP)
// 0045ecca: JMP 0x0045ee5b
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045eccf: LEA EAX,[EBP + -0x38]
//   Label: LAB_0045eccf
//   XREF to: Stack[-0x48] (DATA)
// 0045ecd2: PUSH EAX
// 0045ecd3: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 0045ecd8: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0045ecdb: MOV dword ptr [EBP + -0x3c],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0045ecde: FLD double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045ece1: ADD ESP,0x4
// 0045ece4: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045ece7: MOV EAX,0x61b659
//   XREF to: 0061b659 (DATA)
// 0045ecec: PUSH EAX
//   XREF to: 0061b659 (DATA)
// 0045eced: PUSH 0x16
// 0045ecef: PUSH 0x0
// 0045ecf1: PUSH 0x14
// 0045ecf3: LEA EAX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045ecf6: PUSH EAX
// 0045ecf7: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045ecfc: ADD ESP,0x14
// 0045ecff: CMP EAX,0x1b
// 0045ed02: JNZ 0x0045ed09
//   XREF to: 0045ed09 (CONDITIONAL_JUMP)
// 0045ed04: JMP 0x0045ee5b
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045ed09: LEA EDI,[EBP + -0x38]
//   Label: LAB_0045ed09
//   XREF to: Stack[-0x48] (DATA)
// 0045ed0c: SUB ECX,ECX
// 0045ed0e: DEC ECX
// 0045ed0f: XOR EAX,EAX
// 0045ed11: SCASB.REPNE ES:EDI
// 0045ed13: NOT ECX
// 0045ed15: DEC ECX
// 0045ed16: TEST ECX,ECX
// 0045ed18: JZ 0x0045ed6b
//   XREF to: 0045ed6b (CONDITIONAL_JUMP)
// 0045ed1a: LEA EAX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045ed1d: PUSH EAX
// 0045ed1e: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045ed23: ADD ESP,0x4
// 0045ed26: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045ed29: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (READ)
// 0045ed2d: JL 0x0045ed3a
//   XREF to: 0045ed3a (CONDITIONAL_JUMP)
// 0045ed2f: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045ed34: DEC EAX
// 0045ed35: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045ed38: JGE 0x0045ed5b
//   XREF to: 0045ed5b (CONDITIONAL_JUMP)
// 0045ed3a: PUSH 0x2c
//   Label: LAB_0045ed3a
// 0045ed3c: PUSH 0x0
// 0045ed3e: MOV EAX,0x61b68c
//   XREF to: 0061b68c (DATA)
// 0045ed43: PUSH EAX
//   XREF to: 0061b68c (DATA)
// 0045ed44: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045ed49: ADD ESP,0xc
// 0045ed4c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ed51: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045ed56: JMP 0x0045ee5b
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045ed5b: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_0045ed5b
//   XREF to: Stack[-0x20] (READ)
// 0045ed5f: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ed62: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ed68: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045ed6b: PUSH 0x2c
//   Label: LAB_0045ed6b
// 0045ed6d: PUSH 0x0
// 0045ed6f: MOV EAX,0x61b69b
//   XREF to: 0061b69b (DATA)
// 0045ed74: PUSH EAX
//   XREF to: 0061b69b (DATA)
// 0045ed75: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045ed7a: ADD ESP,0xc
// 0045ed7d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ed82: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045ed87: AND EAX,0xff
// 0045ed8c: PUSH EAX
// 0045ed8d: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045ed92: ADD ESP,0x4
// 0045ed95: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045ed98: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045ed9b: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0045ed9e: JMP 0x0045ee3b
//   XREF to: 0045ee3b (UNCONDITIONAL_JUMP)
// 0045eda3: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045eda3
//   XREF to: Stack[-0x14] (WRITE)
// 0045edaa: JMP 0x0045edb2
//   XREF to: 0045edb2 (UNCONDITIONAL_JUMP)
// 0045edac: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045edac
//   XREF to: Stack[-0x14] (READ)
// 0045edaf: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045edb2: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045edb2
//   XREF to: Stack[-0x14] (READ)
// 0045edb5: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045edbb: JGE 0x0045edd2
//   XREF to: 0045edd2 (CONDITIONAL_JUMP)
// 0045edbd: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045edc1: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045edc7: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045edca: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045edd0: JMP 0x0045edac
//   XREF to: 0045edac (UNCONDITIONAL_JUMP)
// 0045edd2: JMP 0x0045ee5b
//   Label: LAB_0045edd2
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045edd7: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045edd7
//   XREF to: Stack[-0x14] (WRITE)
// 0045edde: JMP 0x0045ede6
//   XREF to: 0045ede6 (UNCONDITIONAL_JUMP)
// 0045ede0: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ede0
//   XREF to: Stack[-0x14] (READ)
// 0045ede3: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045ede6: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ede6
//   XREF to: Stack[-0x14] (READ)
// 0045ede9: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045edef: JGE 0x0045ee06
//   XREF to: 0045ee06 (CONDITIONAL_JUMP)
// 0045edf1: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045edf5: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045edfb: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045edfe: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ee04: JMP 0x0045ede0
//   XREF to: 0045ede0 (UNCONDITIONAL_JUMP)
// 0045ee06: JMP 0x0045ee5b
//   Label: LAB_0045ee06
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045ee08: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045ee08
//   XREF to: Stack[-0x14] (WRITE)
// 0045ee0f: JMP 0x0045ee17
//   XREF to: 0045ee17 (UNCONDITIONAL_JUMP)
// 0045ee11: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ee11
//   XREF to: Stack[-0x14] (READ)
// 0045ee14: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045ee17: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ee17
//   XREF to: Stack[-0x14] (READ)
// 0045ee1a: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ee20: JGE 0x0045ee37
//   XREF to: 0045ee37 (CONDITIONAL_JUMP)
// 0045ee22: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045ee26: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ee2c: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045ee2f: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ee35: JMP 0x0045ee11
//   XREF to: 0045ee11 (UNCONDITIONAL_JUMP)
// 0045ee37: JMP 0x0045ee5b
//   Label: LAB_0045ee37
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045ee39: JMP 0x0045ee5b
//   Label: LAB_0045ee39
//   XREF to: 0045ee5b (UNCONDITIONAL_JUMP)
// 0045ee3b: CMP dword ptr [EBP + -0x44],0x59
//   Label: LAB_0045ee3b
//   XREF to: Stack[-0x54] (READ)
// 0045ee3f: JC 0x0045ee4f
//   XREF to: 0045ee4f (CONDITIONAL_JUMP)
// 0045ee41: CMP dword ptr [EBP + -0x44],0x59
//   XREF to: Stack[-0x54] (READ)
// 0045ee45: JBE 0x0045edd7
//   XREF to: 0045edd7 (CONDITIONAL_JUMP)
// 0045ee47: CMP dword ptr [EBP + -0x44],0x5a
//   XREF to: Stack[-0x54] (READ)
// 0045ee4b: JZ 0x0045ee08
//   XREF to: 0045ee08 (CONDITIONAL_JUMP)
// 0045ee4d: JMP 0x0045ee39
//   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)
// 0045ee4f: CMP dword ptr [EBP + -0x44],0x58
//   Label: LAB_0045ee4f
//   XREF to: Stack[-0x54] (READ)
// 0045ee53: JZ 0x0045eda3
//   XREF to: 0045eda3 (CONDITIONAL_JUMP)
// 0045ee59: JMP 0x0045ee39
//   XREF to: 0045ee39 (UNCONDITIONAL_JUMP)
// 0045ee5b: MOV ESP,EBP
//   Label: LAB_0045ee5b
// 0045ee5d: POP EBP
// 0045ee5e: POP EDI
// 0045ee5f: POP ESI
// 0045ee60: POP EBX
// 0045ee61: RET
