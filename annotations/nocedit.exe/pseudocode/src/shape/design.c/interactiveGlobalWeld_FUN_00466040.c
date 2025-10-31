// Name: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
// Address Range: [[00466040, 004661c9]]
// Convention: __cdecl
// Signature: void shape_design.c_interactiveGlobalWeld_FUN_00466040(float tolerance)
// Cross-references:
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464efd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_weld_point_0061c6e6
//   TerminatedCString s_Invalid_point_0061c6fa
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a94
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  SShapeEditorPolygon *pSVar6;
  uint local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffff90,0x32,0,0,"Enter weld point : ")
  ;
  iVar3 = -1;
  pcVar4 = &stack0xffffff90;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    uVar2 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff90);
    if (((int)uVar2 < 0) || (g_VertexCount + -1 < (int)uVar2)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        if (((ABS(g_LoadedVertices[uVar2].vertex.x - g_LoadedVertices[local_20].vertex.x) <
              tolerance) &&
            (ABS(g_LoadedVertices[uVar2].vertex.y - g_LoadedVertices[local_20].vertex.y) < tolerance
            )) && (ABS(g_LoadedVertices[uVar2].vertex.z - g_LoadedVertices[local_20].vertex.z) <
                   tolerance)) {
          pSVar6 = g_ModelPolygonData;
          for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < (int)pSVar6->vertex_indices_count; local_18 = local_18 + 1
                ) {
              if (pSVar6->vertex_indices[local_18] == local_20) {
                pSVar6->vertex_indices[local_18] = uVar2;
              }
            }
            pSVar6 = pSVar6 + 1;
          }
        }
      }
      shape_design_c_removeUnusedVertices_FUN_00463830();
    }
  }
  return;
}


// Assembly code:
// 00466040: PUSH EBX
//   Label: shape_design.c_interactiveGlobalWeld_FUN_00466040
// 00466041: PUSH ESI
// 00466042: PUSH EDI
// 00466043: PUSH EBP
// 00466044: MOV EBP,ESP
// 00466046: SUB ESP,0x64
// 0046604c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00466051: MOV ECX,0x61c6e6
//   XREF to: 0061c6e6 (DATA)
// 00466056: PUSH ECX
//   XREF to: 0061c6e6 (DATA)
// 00466057: PUSH 0x0
// 00466059: PUSH 0x0
// 0046605b: PUSH 0x32
// 0046605d: LEA ECX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00466060: PUSH ECX
// 00466061: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00466066: ADD ESP,0x14
// 00466069: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0046606c: SUB ECX,ECX
// 0046606e: DEC ECX
// 0046606f: XOR EAX,EAX
// 00466071: SCASB.REPNE ES:EDI
// 00466073: NOT ECX
// 00466075: DEC ECX
// 00466076: TEST ECX,ECX
// 00466078: JNZ 0x0046607f
//   XREF to: 0046607f (CONDITIONAL_JUMP)
// 0046607a: JMP 0x004661c3
//   XREF to: 004661c3 (UNCONDITIONAL_JUMP)
// 0046607f: LEA EAX,[EBP + -0x60]
//   Label: LAB_0046607f
//   XREF to: Stack[-0x70] (DATA)
// 00466082: PUSH EAX
// 00466083: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00466088: ADD ESP,0x4
// 0046608b: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046608e: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 00466092: JL 0x0046609f
//   XREF to: 0046609f (CONDITIONAL_JUMP)
// 00466094: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00466099: DEC EAX
// 0046609a: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046609d: JGE 0x004660c0
//   XREF to: 004660c0 (CONDITIONAL_JUMP)
// 0046609f: PUSH 0x16
//   Label: LAB_0046609f
// 004660a1: PUSH 0x0
// 004660a3: MOV EAX,0x61c6fa
//   XREF to: 0061c6fa (PARAM)
// 004660a8: PUSH EAX
//   XREF to: 0061c6fa (DATA)
// 004660a9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004660ae: ADD ESP,0xc
// 004660b1: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004660b6: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004660bb: JMP 0x004661c3
//   XREF to: 004661c3 (UNCONDITIONAL_JUMP)
// 004660c0: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_004660c0
//   XREF to: Stack[-0x20] (WRITE)
// 004660c7: JMP 0x004660cf
//   XREF to: 004660cf (UNCONDITIONAL_JUMP)
// 004660c9: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004660c9
//   XREF to: Stack[-0x20] (READ)
// 004660cc: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 004660cf: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_004660cf
//   XREF to: Stack[-0x20] (READ)
// 004660d2: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 004660d8: JGE 0x004661be
//   XREF to: 004661be (CONDITIONAL_JUMP)
// 004660de: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 004660e2: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 004660e6: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004660ec: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 004660f2: FABS
// 004660f4: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004660f7: FCOMPP
// 004660f9: FNSTSW AX
// 004660fb: SAHF
// 004660fc: JBE 0x0046611e
//   XREF to: 0046611e (CONDITIONAL_JUMP)
// 004660fe: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00466102: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00466106: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046610c: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00466112: FABS
// 00466114: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00466117: FCOMPP
// 00466119: FNSTSW AX
// 0046611b: SAHF
// 0046611c: JA 0x00466120
//   XREF to: 00466120 (CONDITIONAL_JUMP)
// 0046611e: JMP 0x00466140
//   Label: LAB_0046611e
//   XREF to: 00466140 (UNCONDITIONAL_JUMP)
// 00466120: IMUL EDX,dword ptr [EBP + -0x4],0x14
//   Label: LAB_00466120
//   XREF to: Stack[-0x14] (READ)
// 00466124: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00466128: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046612e: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466134: FABS
// 00466136: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00466139: FCOMPP
// 0046613b: FNSTSW AX
// 0046613d: SAHF
// 0046613e: JA 0x00466145
//   XREF to: 00466145 (CONDITIONAL_JUMP)
// 00466140: JMP 0x004661b9
//   Label: LAB_00466140
//   XREF to: 004661b9 (UNCONDITIONAL_JUMP)
// 00466145: MOV dword ptr [EBP + -0x64],0x16e9910
//   Label: LAB_00466145
//   XREF to: Stack[-0x74] (WRITE)
//   XREF to: 016e9910 (DATA)
// 0046614c: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00466153: JMP 0x00466165
//   XREF to: 00466165 (UNCONDITIONAL_JUMP)
// 00466155: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00466155
//   XREF to: Stack[-0x1c] (READ)
// 00466158: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046615b: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0046615e: ADD dword ptr [EBP + -0x64],0x184
//   XREF to: Stack[-0x74] (READ_WRITE)
//   XREF to: 016e9a94 (DATA)
// 00466165: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00466165
//   XREF to: Stack[-0x1c] (READ)
// 00466168: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046616e: JGE 0x004661b9
//   XREF to: 004661b9 (CONDITIONAL_JUMP)
// 00466170: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00466177: JMP 0x0046617f
//   XREF to: 0046617f (UNCONDITIONAL_JUMP)
// 00466179: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00466179
//   XREF to: Stack[-0x18] (READ)
// 0046617c: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0046617f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046617f
//   XREF to: Stack[-0x18] (READ)
// 00466182: MOV EDX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 00466185: CMP EAX,dword ptr [EDX + 0xa4]
//   XREF to: 016e99b4 (READ)
// 0046618b: JGE 0x004661b7
//   XREF to: 004661b7 (CONDITIONAL_JUMP)
// 0046618d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00466190: SHL EAX,0x2
// 00466193: ADD EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 00466196: MOV EAX,dword ptr [EAX + 0xb8]
//   XREF to: 016e99c8 (DATA)
// 0046619c: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046619f: JNZ 0x004661b5
//   XREF to: 004661b5 (CONDITIONAL_JUMP)
// 004661a1: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004661a4: SHL EAX,0x2
// 004661a7: MOV EDX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 004661aa: ADD EDX,EAX
// 004661ac: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004661af: MOV dword ptr [EDX + 0xb8],EAX
//   XREF to: 016e99c8 (DATA)
// 004661b5: JMP 0x00466179
//   Label: LAB_004661b5
//   XREF to: 00466179 (UNCONDITIONAL_JUMP)
// 004661b7: JMP 0x00466155
//   Label: LAB_004661b7
//   XREF to: 00466155 (UNCONDITIONAL_JUMP)
// 004661b9: JMP 0x004660c9
//   Label: LAB_004661b9
//   XREF to: 004660c9 (UNCONDITIONAL_JUMP)
// 004661be: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   Label: LAB_004661be
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 004661c3: MOV ESP,EBP
//   Label: LAB_004661c3
// 004661c5: POP EBP
// 004661c6: POP EDI
// 004661c7: POP ESI
// 004661c8: POP EBX
// 004661c9: RET
