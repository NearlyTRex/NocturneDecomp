// Name: shape_design.c_sizeModelToXFeet_FUN_00466e40
// Address: 00466e40
// Address Range: [[00466e40, 00467000]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelToXFeet_FUN_00466e40(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f74a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_X_distance_in_feet_0061c842
//   TerminatedCString s_f_d_d_0061c889
//   TerminatedCString s_Need_distance_and_two_po_0061c892
//   TerminatedCString s_Invalid_point_0061c8b0
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

void __cdecl shape_design_c_sizeModelToXFeet_FUN_00466e40(void)

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
            (&stack0xffffff84,0x14,0,0x16,"Enter X distance in feet (,min,max for user-defined min/max points) : ");
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
      fVar2 = g_LoadedVertices[local_2c].vertex.x;
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
    local_14 = g_LoadedVertices[local_28].vertex.x;
    local_18 = g_LoadedVertices[local_24].vertex.x;
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
// 00466e40: PUSH EBX
//   Label: shape_design.c_sizeModelToXFeet_FUN_00466e40
// 00466e41: PUSH ESI
// 00466e42: PUSH EDI
// 00466e43: PUSH EBP
// 00466e44: MOV EBP,ESP
// 00466e46: SUB ESP,0x6c
// 00466e4c: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 00466e53: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 00466e5a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00466e5f: MOV ECX,0x61c842
//   XREF to: 0061c842 (DATA)
// 00466e64: PUSH ECX
//   XREF to: 0061c842 (DATA)
// 00466e65: PUSH 0x16
// 00466e67: PUSH 0x0
// 00466e69: PUSH 0x14
// 00466e6b: LEA ECX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466e6e: PUSH ECX
// 00466e6f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00466e74: ADD ESP,0x14
// 00466e77: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466e7a: SUB ECX,ECX
// 00466e7c: DEC ECX
// 00466e7d: XOR EAX,EAX
// 00466e7f: SCASB.REPNE ES:EDI
// 00466e81: NOT ECX
// 00466e83: DEC ECX
// 00466e84: TEST ECX,ECX
// 00466e86: JNZ 0x00466e8d
//   XREF to: 00466e8d (CONDITIONAL_JUMP)
// 00466e88: JMP 0x00466ffa
//   XREF to: 00466ffa (UNCONDITIONAL_JUMP)
// 00466e8d: LEA EAX,[EBP + -0x18]
//   Label: LAB_00466e8d
//   XREF to: Stack[-0x28] (DATA)
// 00466e90: PUSH EAX
// 00466e91: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 00466e94: PUSH EAX
// 00466e95: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00466e98: PUSH EAX
// 00466e99: MOV EAX,0x61c889
//   XREF to: 0061c889 (DATA)
// 00466e9e: PUSH EAX
//   XREF to: 0061c889 (DATA)
// 00466e9f: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00466ea2: PUSH EAX
// 00466ea3: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00466ea8: ADD ESP,0x14
// 00466eab: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00466eae: CMP dword ptr [EBP + -0x1c],0x1
//   XREF to: Stack[-0x2c] (READ)
// 00466eb2: JLE 0x00466f42
//   XREF to: 00466f42 (CONDITIONAL_JUMP)
// 00466eb8: CMP dword ptr [EBP + -0x1c],0x3
//   XREF to: Stack[-0x2c] (READ)
// 00466ebc: JZ 0x00466edf
//   XREF to: 00466edf (CONDITIONAL_JUMP)
// 00466ebe: PUSH 0x2c
// 00466ec0: PUSH 0x0
// 00466ec2: MOV EAX,0x61c892
//   XREF to: 0061c892 (PARAM)
// 00466ec7: PUSH EAX
//   XREF to: 0061c892 (DATA)
// 00466ec8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466ecd: ADD ESP,0xc
// 00466ed0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00466ed5: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466eda: JMP 0x00466ffa
//   XREF to: 00466ffa (UNCONDITIONAL_JUMP)
// 00466edf: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_00466edf
//   XREF to: Stack[-0x24] (READ)
// 00466ee3: JL 0x00466eeb
//   XREF to: 00466eeb (CONDITIONAL_JUMP)
// 00466ee5: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 00466ee9: JGE 0x00466eed
//   XREF to: 00466eed (CONDITIONAL_JUMP)
// 00466eeb: JMP 0x00466ef8
//   Label: LAB_00466eeb
//   XREF to: 00466ef8 (UNCONDITIONAL_JUMP)
// 00466eed: MOV EAX,[0x01626408]
//   Label: LAB_00466eed
//   XREF to: 01626408 (READ)
// 00466ef2: DEC EAX
// 00466ef3: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00466ef6: JGE 0x00466efa
//   XREF to: 00466efa (CONDITIONAL_JUMP)
// 00466ef8: JMP 0x00466f05
//   Label: LAB_00466ef8
//   XREF to: 00466f05 (UNCONDITIONAL_JUMP)
// 00466efa: MOV EAX,[0x01626408]
//   Label: LAB_00466efa
//   XREF to: 01626408 (READ)
// 00466eff: DEC EAX
// 00466f00: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00466f03: JGE 0x00466f26
//   XREF to: 00466f26 (CONDITIONAL_JUMP)
// 00466f05: PUSH 0x2c
//   Label: LAB_00466f05
// 00466f07: PUSH 0x0
// 00466f09: MOV EAX,0x61c8b0
//   XREF to: 0061c8b0 (PARAM)
// 00466f0e: PUSH EAX
//   XREF to: 0061c8b0 (DATA)
// 00466f0f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00466f14: ADD ESP,0xc
// 00466f17: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00466f1c: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00466f21: JMP 0x00466ffa
//   XREF to: 00466ffa (UNCONDITIONAL_JUMP)
// 00466f26: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_00466f26
//   XREF to: Stack[-0x28] (READ)
// 00466f2a: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466f30: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00466f33: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 00466f37: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466f3d: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466f40: JMP 0x00466f8d
//   XREF to: 00466f8d (UNCONDITIONAL_JUMP)
// 00466f42: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00466f42
//   XREF to: Stack[-0x2c] (WRITE)
// 00466f49: JMP 0x00466f51
//   XREF to: 00466f51 (UNCONDITIONAL_JUMP)
// 00466f4b: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466f4b
//   XREF to: Stack[-0x2c] (READ)
// 00466f4e: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00466f51: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466f51
//   XREF to: Stack[-0x2c] (READ)
// 00466f54: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466f5a: JGE 0x00466f8d
//   XREF to: 00466f8d (CONDITIONAL_JUMP)
// 00466f5c: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466f60: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466f66: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00466f69: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466f6c: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00466f6f: FNSTSW AX
// 00466f71: SAHF
// 00466f72: JBE 0x00466f7a
//   XREF to: 00466f7a (CONDITIONAL_JUMP)
// 00466f74: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466f77: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00466f7a: FLD float ptr [EBP + -0xc]
//   Label: LAB_00466f7a
//   XREF to: Stack[-0x1c] (READ)
// 00466f7d: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466f80: FNSTSW AX
// 00466f82: SAHF
// 00466f83: JNC 0x00466f8b
//   XREF to: 00466f8b (CONDITIONAL_JUMP)
// 00466f85: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466f88: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466f8b: JMP 0x00466f4b
//   Label: LAB_00466f8b
//   XREF to: 00466f4b (UNCONDITIONAL_JUMP)
// 00466f8d: FLD float ptr [EBP + -0x4]
//   Label: LAB_00466f8d
//   XREF to: Stack[-0x14] (READ)
// 00466f90: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466f93: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466f96: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00466f99: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00466fa0: JMP 0x00466fa8
//   XREF to: 00466fa8 (UNCONDITIONAL_JUMP)
// 00466fa2: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466fa2
//   XREF to: Stack[-0x2c] (READ)
// 00466fa5: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00466fa8: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00466fa8
//   XREF to: Stack[-0x2c] (READ)
// 00466fab: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00466fb1: JGE 0x00466ffa
//   XREF to: 00466ffa (CONDITIONAL_JUMP)
// 00466fb3: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466fb7: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466fbd: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466fc0: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466fc4: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00466fca: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466fce: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466fd4: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466fd7: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466fdb: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466fe1: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466fe5: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466feb: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00466fee: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00466ff2: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466ff8: JMP 0x00466fa2
//   XREF to: 00466fa2 (UNCONDITIONAL_JUMP)
// 00466ffa: MOV ESP,EBP
//   Label: LAB_00466ffa
// 00466ffc: POP EBP
// 00466ffd: POP EDI
// 00466ffe: POP ESI
// 00466fff: POP EBX
// 00467000: RET
