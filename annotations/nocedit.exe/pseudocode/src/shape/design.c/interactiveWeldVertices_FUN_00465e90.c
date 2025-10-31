// Name: shape_design.c_interactiveWeldVertices_FUN_00465e90
// Address: 00465e90
// Address Range: [[00465e90, 00466038]]
// Convention: __cdecl
// Signature: void shape_design.c_interactiveWeldVertices_FUN_00465e90(int polygon_index, float tolerance)
// Cross-references:
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464eea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_weld_points_a_b_we_0061c694
//   TerminatedCString s_d_d_0061c6bb
//   TerminatedCString s_Invalid_point_0061c6c1
//   TerminatedCString s_Point_not_on_polygon_0061c6d0
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_interactiveWeldVertices_FUN_00465e90(int polygon_index,float tolerance)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff90,0x32,0,0,"Enter weld points a,b (weld a -> b) : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffff90;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 != -2) &&
     (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff90,"%d,%d"), iVar2 == 2)) {
    if (((int)local_20 < 0) ||
       ((((int)local_1c < 0 || (g_VertexCount + -1 < (int)local_20)) ||
        (g_VertexCount + -1 < (int)local_1c)))) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      local_14 = -1;
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        if (local_20 == g_ModelPolygonData[polygon_index].vertex_indices[local_18]) {
          local_14 = local_18;
          break;
        }
      }
      if (local_14 == -1) {
        engine_2d_c_drawText_FUN_00401fd0("Point not on polygon.",0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      else if (((ABS(g_LoadedVertices[local_20].vertex.x - g_LoadedVertices[local_1c].vertex.x) <
                 tolerance) &&
               (ABS(g_LoadedVertices[local_20].vertex.y - g_LoadedVertices[local_1c].vertex.y) <
                tolerance)) &&
              (ABS(g_LoadedVertices[local_20].vertex.z - g_LoadedVertices[local_1c].vertex.z) <
               tolerance)) {
        g_ModelPolygonData[polygon_index].vertex_indices[local_14] = local_1c;
        shape_design_c_removeUnusedVertices_FUN_00463830();
      }
    }
  }
  return;
}


// Assembly code:
// 00465e90: PUSH EBX
//   Label: shape_design.c_interactiveWeldVertices_FUN_00465e90
// 00465e91: PUSH ESI
// 00465e92: PUSH EDI
// 00465e93: PUSH EBP
// 00465e94: MOV EBP,ESP
// 00465e96: SUB ESP,0x60
// 00465e9c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00465ea1: MOV ECX,0x61c694
//   XREF to: 0061c694 (DATA)
// 00465ea6: PUSH ECX
//   XREF to: 0061c694 (DATA)
// 00465ea7: PUSH 0x0
// 00465ea9: PUSH 0x0
// 00465eab: PUSH 0x32
// 00465ead: LEA ECX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465eb0: PUSH ECX
// 00465eb1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00465eb6: ADD ESP,0x14
// 00465eb9: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465ebc: SUB ECX,ECX
// 00465ebe: DEC ECX
// 00465ebf: XOR EAX,EAX
// 00465ec1: SCASB.REPNE ES:EDI
// 00465ec3: NOT ECX
// 00465ec5: DEC ECX
// 00465ec6: TEST ECX,ECX
// 00465ec8: JNZ 0x00465ecf
//   XREF to: 00465ecf (CONDITIONAL_JUMP)
// 00465eca: JMP 0x00466032
//   XREF to: 00466032 (UNCONDITIONAL_JUMP)
// 00465ecf: LEA EAX,[EBP + -0xc]
//   Label: LAB_00465ecf
//   XREF to: Stack[-0x1c] (DATA)
// 00465ed2: PUSH EAX
// 00465ed3: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00465ed6: PUSH EAX
// 00465ed7: MOV EAX,0x61c6bb
//   XREF to: 0061c6bb (DATA)
// 00465edc: PUSH EAX
//   XREF to: 0061c6bb (DATA)
// 00465edd: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00465ee0: PUSH EAX
// 00465ee1: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00465ee6: ADD ESP,0x10
// 00465ee9: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00465eec: CMP dword ptr [EBP + -0x8],0x2
//   XREF to: Stack[-0x18] (READ)
// 00465ef0: JZ 0x00465ef7
//   XREF to: 00465ef7 (CONDITIONAL_JUMP)
// 00465ef2: JMP 0x00466032
//   XREF to: 00466032 (UNCONDITIONAL_JUMP)
// 00465ef7: CMP dword ptr [EBP + -0x10],0x0
//   Label: LAB_00465ef7
//   XREF to: Stack[-0x20] (READ)
// 00465efb: JL 0x00465f03
//   XREF to: 00465f03 (CONDITIONAL_JUMP)
// 00465efd: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 00465f01: JGE 0x00465f05
//   XREF to: 00465f05 (CONDITIONAL_JUMP)
// 00465f03: JMP 0x00465f10
//   Label: LAB_00465f03
//   XREF to: 00465f10 (UNCONDITIONAL_JUMP)
// 00465f05: MOV EAX,[0x01626408]
//   Label: LAB_00465f05
//   XREF to: 01626408 (READ)
// 00465f0a: DEC EAX
// 00465f0b: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465f0e: JGE 0x00465f12
//   XREF to: 00465f12 (CONDITIONAL_JUMP)
// 00465f10: JMP 0x00465f1d
//   Label: LAB_00465f10
//   XREF to: 00465f1d (UNCONDITIONAL_JUMP)
// 00465f12: MOV EAX,[0x01626408]
//   Label: LAB_00465f12
//   XREF to: 01626408 (READ)
// 00465f17: DEC EAX
// 00465f18: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00465f1b: JGE 0x00465f3e
//   XREF to: 00465f3e (CONDITIONAL_JUMP)
// 00465f1d: PUSH 0x16
//   Label: LAB_00465f1d
// 00465f1f: PUSH 0x0
// 00465f21: MOV EAX,0x61c6c1
//   XREF to: 0061c6c1 (PARAM)
// 00465f26: PUSH EAX
//   XREF to: 0061c6c1 (DATA)
// 00465f27: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00465f2c: ADD ESP,0xc
// 00465f2f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00465f34: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00465f39: JMP 0x00466032
//   XREF to: 00466032 (UNCONDITIONAL_JUMP)
// 00465f3e: MOV dword ptr [EBP + -0x4],0xffffffff
//   Label: LAB_00465f3e
//   XREF to: Stack[-0x14] (WRITE)
// 00465f45: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00465f4c: JMP 0x00465f54
//   XREF to: 00465f54 (UNCONDITIONAL_JUMP)
// 00465f4e: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00465f4e
//   XREF to: Stack[-0x18] (READ)
// 00465f51: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00465f54: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00465f54
//   XREF to: Stack[0x4] (READ)
// 00465f5b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465f5e: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00465f64: JGE 0x00465f8a
//   XREF to: 00465f8a (CONDITIONAL_JUMP)
// 00465f66: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00465f6d: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465f70: SHL EAX,0x2
// 00465f73: ADD EDX,EAX
// 00465f75: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00465f78: CMP EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00465f7e: JNZ 0x00465f88
//   XREF to: 00465f88 (CONDITIONAL_JUMP)
// 00465f80: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00465f83: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00465f86: JMP 0x00465f8a
//   XREF to: 00465f8a (UNCONDITIONAL_JUMP)
// 00465f88: JMP 0x00465f4e
//   Label: LAB_00465f88
//   XREF to: 00465f4e (UNCONDITIONAL_JUMP)
// 00465f8a: CMP dword ptr [EBP + -0x4],-0x1
//   Label: LAB_00465f8a
//   XREF to: Stack[-0x14] (READ)
// 00465f8e: JNZ 0x00465fb1
//   XREF to: 00465fb1 (CONDITIONAL_JUMP)
// 00465f90: PUSH 0x16
// 00465f92: PUSH 0x0
// 00465f94: MOV EAX,0x61c6d0
//   XREF to: 0061c6d0 (PARAM)
// 00465f99: PUSH EAX
//   XREF to: 0061c6d0 (DATA)
// 00465f9a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00465f9f: ADD ESP,0xc
// 00465fa2: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00465fa7: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00465fac: JMP 0x00466032
//   XREF to: 00466032 (UNCONDITIONAL_JUMP)
// 00465fb1: IMUL EDX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_00465fb1
//   XREF to: Stack[-0x20] (READ)
// 00465fb5: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00465fb9: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465fbf: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00465fc5: FABS
// 00465fc7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465fca: FCOMPP
// 00465fcc: FNSTSW AX
// 00465fce: SAHF
// 00465fcf: JBE 0x00465ff1
//   XREF to: 00465ff1 (CONDITIONAL_JUMP)
// 00465fd1: IMUL EDX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00465fd5: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00465fd9: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00465fdf: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00465fe5: FABS
// 00465fe7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00465fea: FCOMPP
// 00465fec: FNSTSW AX
// 00465fee: SAHF
// 00465fef: JA 0x00465ff3
//   XREF to: 00465ff3 (CONDITIONAL_JUMP)
// 00465ff1: JMP 0x00466013
//   Label: LAB_00465ff1
//   XREF to: 00466013 (UNCONDITIONAL_JUMP)
// 00465ff3: IMUL EDX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_00465ff3
//   XREF to: Stack[-0x20] (READ)
// 00465ff7: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00465ffb: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466001: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00466007: FABS
// 00466009: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046600c: FCOMPP
// 0046600e: FNSTSW AX
// 00466010: SAHF
// 00466011: JA 0x00466015
//   XREF to: 00466015 (CONDITIONAL_JUMP)
// 00466013: JMP 0x00466032
//   Label: LAB_00466013
//   XREF to: 00466032 (UNCONDITIONAL_JUMP)
// 00466015: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00466015
//   XREF to: Stack[0x4] (READ)
// 0046601c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046601f: SHL EAX,0x2
// 00466022: ADD EDX,EAX
// 00466024: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00466027: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 0046602d: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00466032: MOV ESP,EBP
//   Label: LAB_00466032
// 00466034: POP EBP
// 00466035: POP EDI
// 00466036: POP ESI
// 00466037: POP EBX
// 00466038: RET
