// Name: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
// Address Range: [[0045ea90, 0045ec8d]]
// Convention: unknown
// Signature: undefined shape_design.c_centerVerticesAroundPoint_FUN_0045ea90()
// Globals:
//   TerminatedCString s_Bias_around_what_point_o_0061b5be
//   TerminatedCString s_Invalid_point_0061b5f2
//   TerminatedCString s_Enter_point_0061b601
//   TerminatedCString s_Which_axis_to_use_X_Y_or_0061b610
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

void shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  char *in_stack_ffffffb0;
  float local_28;
  float local_24;
  float local_20;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffac,10,0,0,"Bias around what point? (or -1 for user-defined) : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffffac;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffac);
    if ((iVar3 < -1) || (g_VertexCount + -1 < iVar3)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      if (iVar3 == -1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xffffffac,0x32,0,0xb,"Enter point : ");
        iVar3 = -1;
        pcVar4 = &stack0xffffffac;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 == -2) {
          return;
        }
        dVar6 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffffb0);
        local_28 = (float)dVar6;
        local_24 = local_28;
        local_20 = local_28;
      }
      else {
        local_28 = g_LoadedVertices[iVar3].vertex.x;
        local_24 = g_LoadedVertices[iVar3].vertex.y;
        local_20 = g_LoadedVertices[iVar3].vertex.z;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (uVar2 < 0x59) {
        if (uVar2 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x - local_28;
          }
        }
      }
      else if (uVar2 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - local_24;
        }
      }
      else if (uVar2 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z - local_20;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045ea90: PUSH EBX
//   Label: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// 0045ea91: PUSH ESI
// 0045ea92: PUSH EDI
// 0045ea93: PUSH EBP
// 0045ea94: MOV EBP,ESP
// 0045ea96: SUB ESP,0x50
// 0045ea9c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045eaa1: MOV ECX,0x61b5be
//   XREF to: 0061b5be (DATA)
// 0045eaa6: PUSH ECX
//   XREF to: 0061b5be (DATA)
// 0045eaa7: PUSH 0x0
// 0045eaa9: PUSH 0x0
// 0045eaab: PUSH 0xa
// 0045eaad: LEA ECX,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 0045eab0: PUSH ECX
// 0045eab1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045eab6: ADD ESP,0x14
// 0045eab9: LEA EDI,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 0045eabc: SUB ECX,ECX
// 0045eabe: DEC ECX
// 0045eabf: XOR EAX,EAX
// 0045eac1: SCASB.REPNE ES:EDI
// 0045eac3: NOT ECX
// 0045eac5: DEC ECX
// 0045eac6: TEST ECX,ECX
// 0045eac8: JNZ 0x0045eacf
//   XREF to: 0045eacf (CONDITIONAL_JUMP)
// 0045eaca: JMP 0x0045ec87
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045eacf: LEA EAX,[EBP + -0x44]
//   Label: LAB_0045eacf
//   XREF to: Stack[-0x54] (DATA)
// 0045ead2: PUSH EAX
// 0045ead3: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045ead8: ADD ESP,0x4
// 0045eadb: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0045eade: CMP dword ptr [EBP + -0x1c],-0x1
//   XREF to: Stack[-0x2c] (READ)
// 0045eae2: JL 0x0045eaef
//   XREF to: 0045eaef (CONDITIONAL_JUMP)
// 0045eae4: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045eae9: DEC EAX
// 0045eaea: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045eaed: JGE 0x0045eb10
//   XREF to: 0045eb10 (CONDITIONAL_JUMP)
// 0045eaef: PUSH 0x16
//   Label: LAB_0045eaef
// 0045eaf1: PUSH 0x0
// 0045eaf3: MOV EAX,0x61b5f2
//   XREF to: 0061b5f2 (DATA)
// 0045eaf8: PUSH EAX
//   XREF to: 0061b5f2 (DATA)
// 0045eaf9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045eafe: ADD ESP,0xc
// 0045eb01: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045eb06: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045eb0b: JMP 0x0045ec87
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045eb10: CMP dword ptr [EBP + -0x1c],-0x1
//   Label: LAB_0045eb10
//   XREF to: Stack[-0x2c] (READ)
// 0045eb14: JNZ 0x0045eb70
//   XREF to: 0045eb70 (CONDITIONAL_JUMP)
// 0045eb16: MOV ECX,0x61b601
//   XREF to: 0061b601 (DATA)
// 0045eb1b: PUSH ECX
//   XREF to: 0061b601 (DATA)
// 0045eb1c: PUSH 0xb
// 0045eb1e: PUSH 0x0
// 0045eb20: PUSH 0x32
// 0045eb22: LEA ECX,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 0045eb25: PUSH ECX
// 0045eb26: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045eb2b: ADD ESP,0x14
// 0045eb2e: LEA EDI,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 0045eb31: SUB ECX,ECX
// 0045eb33: DEC ECX
// 0045eb34: XOR EAX,EAX
// 0045eb36: SCASB.REPNE ES:EDI
// 0045eb38: NOT ECX
// 0045eb3a: DEC ECX
// 0045eb3b: TEST ECX,ECX
// 0045eb3d: JNZ 0x0045eb44
//   XREF to: 0045eb44 (CONDITIONAL_JUMP)
// 0045eb3f: JMP 0x0045ec87
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045eb44: LEA EAX,[EBP + -0x44]
//   Label: LAB_0045eb44
//   XREF to: Stack[-0x54] (DATA)
// 0045eb47: PUSH EAX
// 0045eb48: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 0045eb4d: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0045eb50: MOV dword ptr [EBP + -0x48],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0045eb53: FLD double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0045eb56: ADD ESP,0x4
// 0045eb59: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045eb5c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045eb5f: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0045eb62: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045eb65: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0045eb68: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045eb6b: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045eb6e: JMP 0x0045eb97
//   XREF to: 0045eb97 (UNCONDITIONAL_JUMP)
// 0045eb70: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   Label: LAB_0045eb70
//   XREF to: Stack[-0x2c] (READ)
// 0045eb74: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045eb7a: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0045eb7d: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 0045eb81: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045eb87: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0045eb8a: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 0045eb8e: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045eb94: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045eb97: PUSH 0x16
//   Label: LAB_0045eb97
// 0045eb99: PUSH 0x0
// 0045eb9b: MOV EAX,0x61b610
//   XREF to: 0061b610 (DATA)
// 0045eba0: PUSH EAX
//   XREF to: 0061b610 (DATA)
// 0045eba1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045eba6: ADD ESP,0xc
// 0045eba9: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ebae: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045ebb3: AND EAX,0xff
// 0045ebb8: PUSH EAX
// 0045ebb9: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045ebbe: ADD ESP,0x4
// 0045ebc1: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045ebc4: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045ebc7: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0045ebca: JMP 0x0045ec67
//   XREF to: 0045ec67 (UNCONDITIONAL_JUMP)
// 0045ebcf: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045ebcf
//   XREF to: Stack[-0x14] (WRITE)
// 0045ebd6: JMP 0x0045ebde
//   XREF to: 0045ebde (UNCONDITIONAL_JUMP)
// 0045ebd8: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ebd8
//   XREF to: Stack[-0x14] (READ)
// 0045ebdb: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045ebde: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ebde
//   XREF to: Stack[-0x14] (READ)
// 0045ebe1: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ebe7: JGE 0x0045ebfe
//   XREF to: 0045ebfe (CONDITIONAL_JUMP)
// 0045ebe9: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045ebed: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ebf3: FSUB float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045ebf6: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045ebfc: JMP 0x0045ebd8
//   XREF to: 0045ebd8 (UNCONDITIONAL_JUMP)
// 0045ebfe: JMP 0x0045ec87
//   Label: LAB_0045ebfe
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045ec03: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045ec03
//   XREF to: Stack[-0x14] (WRITE)
// 0045ec0a: JMP 0x0045ec12
//   XREF to: 0045ec12 (UNCONDITIONAL_JUMP)
// 0045ec0c: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ec0c
//   XREF to: Stack[-0x14] (READ)
// 0045ec0f: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045ec12: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ec12
//   XREF to: Stack[-0x14] (READ)
// 0045ec15: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ec1b: JGE 0x0045ec32
//   XREF to: 0045ec32 (CONDITIONAL_JUMP)
// 0045ec1d: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045ec21: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ec27: FSUB float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045ec2a: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045ec30: JMP 0x0045ec0c
//   XREF to: 0045ec0c (UNCONDITIONAL_JUMP)
// 0045ec32: JMP 0x0045ec87
//   Label: LAB_0045ec32
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045ec34: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045ec34
//   XREF to: Stack[-0x14] (WRITE)
// 0045ec3b: JMP 0x0045ec43
//   XREF to: 0045ec43 (UNCONDITIONAL_JUMP)
// 0045ec3d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ec3d
//   XREF to: Stack[-0x14] (READ)
// 0045ec40: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045ec43: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045ec43
//   XREF to: Stack[-0x14] (READ)
// 0045ec46: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045ec4c: JGE 0x0045ec63
//   XREF to: 0045ec63 (CONDITIONAL_JUMP)
// 0045ec4e: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045ec52: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ec58: FSUB float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045ec5b: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045ec61: JMP 0x0045ec3d
//   XREF to: 0045ec3d (UNCONDITIONAL_JUMP)
// 0045ec63: JMP 0x0045ec87
//   Label: LAB_0045ec63
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045ec65: JMP 0x0045ec87
//   Label: LAB_0045ec65
//   XREF to: 0045ec87 (UNCONDITIONAL_JUMP)
// 0045ec67: CMP dword ptr [EBP + -0x50],0x59
//   Label: LAB_0045ec67
//   XREF to: Stack[-0x60] (READ)
// 0045ec6b: JC 0x0045ec7b
//   XREF to: 0045ec7b (CONDITIONAL_JUMP)
// 0045ec6d: CMP dword ptr [EBP + -0x50],0x59
//   XREF to: Stack[-0x60] (READ)
// 0045ec71: JBE 0x0045ec03
//   XREF to: 0045ec03 (CONDITIONAL_JUMP)
// 0045ec73: CMP dword ptr [EBP + -0x50],0x5a
//   XREF to: Stack[-0x60] (READ)
// 0045ec77: JZ 0x0045ec34
//   XREF to: 0045ec34 (CONDITIONAL_JUMP)
// 0045ec79: JMP 0x0045ec65
//   XREF to: 0045ec65 (UNCONDITIONAL_JUMP)
// 0045ec7b: CMP dword ptr [EBP + -0x50],0x58
//   Label: LAB_0045ec7b
//   XREF to: Stack[-0x60] (READ)
// 0045ec7f: JZ 0x0045ebcf
//   XREF to: 0045ebcf (CONDITIONAL_JUMP)
// 0045ec85: JMP 0x0045ec65
//   XREF to: 0045ec65 (UNCONDITIONAL_JUMP)
// 0045ec87: MOV ESP,EBP
//   Label: LAB_0045ec87
// 0045ec89: POP EBP
// 0045ec8a: POP EDI
// 0045ec8b: POP ESI
// 0045ec8c: POP EBX
// 0045ec8d: RET
