// Name: shape_design.c_sizeModelToYFeet_FUN_00467010
// Address: 00467010
// Address Range: [[00467010, 004671d0]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelToYFeet_FUN_00467010(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f754 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_Y_distance_in_feet_0061c8bf
//   TerminatedCString s_f_d_d_0061c906
//   TerminatedCString s_Need_distance_and_two_po_0061c90f
//   TerminatedCString s_Invalid_point_0061c92d
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

void __cdecl shape_design_c_sizeModelToYFeet_FUN_00467010(void)

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
            (&stack0xffffff84,0x14,0,0x16,"Enter Y distance in feet (,min,max for user-defined min/max points) : ");
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
      fVar2 = g_LoadedVertices[local_2c].vertex.y;
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
    local_14 = g_LoadedVertices[local_28].vertex.y;
    local_18 = g_LoadedVertices[local_24].vertex.y;
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
// 00467010: PUSH EBX
//   Label: shape_design.c_sizeModelToYFeet_FUN_00467010
// 00467011: PUSH ESI
// 00467012: PUSH EDI
// 00467013: PUSH EBP
// 00467014: MOV EBP,ESP
// 00467016: SUB ESP,0x6c
// 0046701c: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 00467023: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 0046702a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046702f: MOV ECX,0x61c8bf
//   XREF to: 0061c8bf (DATA)
// 00467034: PUSH ECX
//   XREF to: 0061c8bf (DATA)
// 00467035: PUSH 0x16
// 00467037: PUSH 0x0
// 00467039: PUSH 0x14
// 0046703b: LEA ECX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0046703e: PUSH ECX
// 0046703f: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467044: ADD ESP,0x14
// 00467047: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0046704a: SUB ECX,ECX
// 0046704c: DEC ECX
// 0046704d: XOR EAX,EAX
// 0046704f: SCASB.REPNE ES:EDI
// 00467051: NOT ECX
// 00467053: DEC ECX
// 00467054: TEST ECX,ECX
// 00467056: JNZ 0x0046705d
//   XREF to: 0046705d (CONDITIONAL_JUMP)
// 00467058: JMP 0x004671ca
//   XREF to: 004671ca (UNCONDITIONAL_JUMP)
// 0046705d: LEA EAX,[EBP + -0x18]
//   Label: LAB_0046705d
//   XREF to: Stack[-0x28] (DATA)
// 00467060: PUSH EAX
// 00467061: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 00467064: PUSH EAX
// 00467065: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00467068: PUSH EAX
// 00467069: MOV EAX,0x61c906
//   XREF to: 0061c906 (DATA)
// 0046706e: PUSH EAX
//   XREF to: 0061c906 (DATA)
// 0046706f: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00467072: PUSH EAX
// 00467073: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00467078: ADD ESP,0x14
// 0046707b: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046707e: CMP dword ptr [EBP + -0x1c],0x1
//   XREF to: Stack[-0x2c] (READ)
// 00467082: JLE 0x00467112
//   XREF to: 00467112 (CONDITIONAL_JUMP)
// 00467088: CMP dword ptr [EBP + -0x1c],0x3
//   XREF to: Stack[-0x2c] (READ)
// 0046708c: JZ 0x004670af
//   XREF to: 004670af (CONDITIONAL_JUMP)
// 0046708e: PUSH 0x2c
// 00467090: PUSH 0x0
// 00467092: MOV EAX,0x61c90f
//   XREF to: 0061c90f (PARAM)
// 00467097: PUSH EAX
//   XREF to: 0061c90f (DATA)
// 00467098: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046709d: ADD ESP,0xc
// 004670a0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004670a5: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004670aa: JMP 0x004671ca
//   XREF to: 004671ca (UNCONDITIONAL_JUMP)
// 004670af: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_004670af
//   XREF to: Stack[-0x24] (READ)
// 004670b3: JL 0x004670bb
//   XREF to: 004670bb (CONDITIONAL_JUMP)
// 004670b5: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 004670b9: JGE 0x004670bd
//   XREF to: 004670bd (CONDITIONAL_JUMP)
// 004670bb: JMP 0x004670c8
//   Label: LAB_004670bb
//   XREF to: 004670c8 (UNCONDITIONAL_JUMP)
// 004670bd: MOV EAX,[0x01626408]
//   Label: LAB_004670bd
//   XREF to: 01626408 (READ)
// 004670c2: DEC EAX
// 004670c3: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004670c6: JGE 0x004670ca
//   XREF to: 004670ca (CONDITIONAL_JUMP)
// 004670c8: JMP 0x004670d5
//   Label: LAB_004670c8
//   XREF to: 004670d5 (UNCONDITIONAL_JUMP)
// 004670ca: MOV EAX,[0x01626408]
//   Label: LAB_004670ca
//   XREF to: 01626408 (READ)
// 004670cf: DEC EAX
// 004670d0: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004670d3: JGE 0x004670f6
//   XREF to: 004670f6 (CONDITIONAL_JUMP)
// 004670d5: PUSH 0x2c
//   Label: LAB_004670d5
// 004670d7: PUSH 0x0
// 004670d9: MOV EAX,0x61c92d
//   XREF to: 0061c92d (PARAM)
// 004670de: PUSH EAX
//   XREF to: 0061c92d (DATA)
// 004670df: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004670e4: ADD ESP,0xc
// 004670e7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004670ec: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004670f1: JMP 0x004671ca
//   XREF to: 004671ca (UNCONDITIONAL_JUMP)
// 004670f6: IMUL EAX,dword ptr [EBP + -0x18],0x14
//   Label: LAB_004670f6
//   XREF to: Stack[-0x28] (READ)
// 004670fa: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467100: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00467103: IMUL EAX,dword ptr [EBP + -0x14],0x14
//   XREF to: Stack[-0x24] (READ)
// 00467107: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046710d: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00467110: JMP 0x0046715d
//   XREF to: 0046715d (UNCONDITIONAL_JUMP)
// 00467112: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00467112
//   XREF to: Stack[-0x2c] (WRITE)
// 00467119: JMP 0x00467121
//   XREF to: 00467121 (UNCONDITIONAL_JUMP)
// 0046711b: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046711b
//   XREF to: Stack[-0x2c] (READ)
// 0046711e: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00467121: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00467121
//   XREF to: Stack[-0x2c] (READ)
// 00467124: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046712a: JGE 0x0046715d
//   XREF to: 0046715d (CONDITIONAL_JUMP)
// 0046712c: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00467130: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467136: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00467139: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046713c: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046713f: FNSTSW AX
// 00467141: SAHF
// 00467142: JBE 0x0046714a
//   XREF to: 0046714a (CONDITIONAL_JUMP)
// 00467144: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467147: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046714a: FLD float ptr [EBP + -0xc]
//   Label: LAB_0046714a
//   XREF to: Stack[-0x1c] (READ)
// 0046714d: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467150: FNSTSW AX
// 00467152: SAHF
// 00467153: JNC 0x0046715b
//   XREF to: 0046715b (CONDITIONAL_JUMP)
// 00467155: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467158: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046715b: JMP 0x0046711b
//   Label: LAB_0046715b
//   XREF to: 0046711b (UNCONDITIONAL_JUMP)
// 0046715d: FLD float ptr [EBP + -0x4]
//   Label: LAB_0046715d
//   XREF to: Stack[-0x14] (READ)
// 00467160: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467163: FDIVR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00467166: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00467169: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00467170: JMP 0x00467178
//   XREF to: 00467178 (UNCONDITIONAL_JUMP)
// 00467172: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00467172
//   XREF to: Stack[-0x2c] (READ)
// 00467175: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00467178: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00467178
//   XREF to: Stack[-0x2c] (READ)
// 0046717b: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467181: JGE 0x004671ca
//   XREF to: 004671ca (CONDITIONAL_JUMP)
// 00467183: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00467187: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046718d: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00467190: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 00467194: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046719a: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 0046719e: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004671a4: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004671a7: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 004671ab: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004671b1: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 004671b5: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004671bb: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004671be: IMUL EAX,dword ptr [EBP + -0x1c],0x14
//   XREF to: Stack[-0x2c] (READ)
// 004671c2: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004671c8: JMP 0x00467172
//   XREF to: 00467172 (UNCONDITIONAL_JUMP)
// 004671ca: MOV ESP,EBP
//   Label: LAB_004671ca
// 004671cc: POP EBP
// 004671cd: POP EDI
// 004671ce: POP ESI
// 004671cf: POP EBX
// 004671d0: RET
