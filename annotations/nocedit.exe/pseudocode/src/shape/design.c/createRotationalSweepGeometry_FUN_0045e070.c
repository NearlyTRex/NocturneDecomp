// Name: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e512]]
// Convention: unknown
// Signature: undefined shape_design.c_createRotationalSweepGeometry_FUN_0045e070()
// Globals:
//   TerminatedCString s_Sweep_around_X_Y_Z_axis_0061b4af
//   TerminatedCString s_Enter_in_point_list_0061b4cd
//   TerminatedCString s_d_d_d_d_d_d_d_d_0061b4e4
//   TerminatedCString s_Enter_in_of_sections_0061b4fc
//   TerminatedCString s_I_nside_O_utside_B_oth_0061b516
//   double g_DegreesInCircle = 360
//   double g_DegreesToRadiansFactor = 0.00555555555555555
//   double g_PiConstant = 3.14159265350000
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_createQuadPolygon_FUN_0045df60
//   shape_design.c_createReversedQuadPolygon_FUN_0045e040
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void shape_design_c_createRotationalSweepGeometry_FUN_0045e070(void)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  int local_74 [8];
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_drawText_FUN_00401fd0("Sweep around X) Y) Z) axis : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_54 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff3c,0x4f,0,0xb,"Enter in point list : ");
  local_50 = crt_stdio_c_sscanf_FUN_0060013c
                       (&stack0xffffff3c,"%d,%d,%d,%d,%d,%d,%d,%d",local_74,local_74 + 1);
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff3c,10,0,0x16,"Enter in # of sections : ");
  local_4c = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff3c);
  engine_2d_c_drawText_FUN_00401fd0("I)nside, O)utside, B)oth ?",0,0x21);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  local_14 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  if (((0 < local_50) && (local_50 < 7)) && (0 < local_4c)) {
    local_48 = (float)g_DegreesInCircle / (float)local_4c;
    local_44 = local_48;
    local_38 = g_VertexCount;
    for (local_40 = 0; local_40 <= local_4c; local_40 = local_40 + 1) {
      fVar2 = (float10)fsin((float10)local_44 * (float10)g_DegreesToRadiansFactor *
                            (float10)g_PiConstant);
      local_34 = (float)fVar2;
      fVar2 = (float10)fcos((float10)local_44 * (float10)g_DegreesToRadiansFactor *
                            (float10)g_PiConstant);
      local_30 = (float)fVar2;
      for (local_3c = 1; local_3c < local_50; local_3c = local_3c + 1) {
        if (local_54 == 0x58) {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.y -
                     g_LoadedVertices[local_74[0]].vertex.y;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.z -
                     g_LoadedVertices[local_74[0]].vertex.z;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = g_LoadedVertices[local_74[local_3c]].vertex.x;
          local_28 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.y;
          local_24 = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.z;
        }
        else if (local_54 == 0x59) {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.x -
                     g_LoadedVertices[local_74[0]].vertex.x;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.z -
                     g_LoadedVertices[local_74[0]].vertex.z;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.x;
          local_28 = g_LoadedVertices[local_74[local_3c]].vertex.y;
          local_24 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.z;
        }
        else {
          local_20 = g_LoadedVertices[local_74[local_3c]].vertex.x -
                     g_LoadedVertices[local_74[0]].vertex.x;
          local_1c = g_LoadedVertices[local_74[local_3c]].vertex.y -
                     g_LoadedVertices[local_74[0]].vertex.y;
          local_18 = SQRT(local_1c * local_1c + local_20 * local_20);
          local_2c = local_30 * local_18 + g_LoadedVertices[local_74[0]].vertex.x;
          local_28 = local_34 * local_18 + g_LoadedVertices[local_74[0]].vertex.y;
          local_24 = g_LoadedVertices[local_74[local_3c]].vertex.z;
        }
        g_LoadedVertices[g_VertexCount].vertex.x = local_2c;
        g_LoadedVertices[g_VertexCount].vertex.y = local_28;
        g_LoadedVertices[g_VertexCount].vertex.z = local_24;
        g_VertexCount = g_VertexCount + 1;
      }
      local_44 = local_44 + local_48;
    }
    if ((local_14 == 0x42) || (local_14 == 0x49)) {
      for (local_40 = 0; local_40 < local_4c; local_40 = local_40 + 1) {
        for (local_3c = 1; local_3c < local_50 + -1; local_3c = local_3c + 1) {
          shape_design_c_createReversedQuadPolygon_FUN_0045e040();
        }
      }
    }
    if ((local_14 == 0x42) || (local_14 == 0x4f)) {
      for (local_40 = 0; local_40 < local_4c; local_40 = local_40 + 1) {
        for (local_3c = 1; local_3c < local_50 + -1; local_3c = local_3c + 1) {
          shape_design_c_createQuadPolygon_FUN_0045df60();
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0045e070: PUSH EBX
//   Label: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
// 0045e071: PUSH ESI
// 0045e072: PUSH EDI
// 0045e073: PUSH EBP
// 0045e074: MOV EBP,ESP
// 0045e076: SUB ESP,0xb4
// 0045e07c: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045e081: PUSH 0x0
// 0045e083: PUSH 0x0
// 0045e085: MOV EAX,0x61b4af
//   XREF to: 0061b4af (DATA)
// 0045e08a: PUSH EAX
//   XREF to: 0061b4af (DATA)
// 0045e08b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045e090: ADD ESP,0xc
// 0045e093: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045e098: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045e09d: AND EAX,0xff
// 0045e0a2: PUSH EAX
// 0045e0a3: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045e0a8: ADD ESP,0x4
// 0045e0ab: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0045e0ae: MOV EAX,0x61b4cd
//   XREF to: 0061b4cd (DATA)
// 0045e0b3: PUSH EAX
//   XREF to: 0061b4cd (DATA)
// 0045e0b4: PUSH 0xb
// 0045e0b6: PUSH 0x0
// 0045e0b8: PUSH 0x4f
// 0045e0ba: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045e0c0: PUSH EAX
// 0045e0c1: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045e0c6: ADD ESP,0x14
// 0045e0c9: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0045e0cc: PUSH EAX
// 0045e0cd: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0045e0d0: PUSH EAX
// 0045e0d1: LEA EAX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 0045e0d4: PUSH EAX
// 0045e0d5: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0045e0d8: PUSH EAX
// 0045e0d9: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0045e0dc: PUSH EAX
// 0045e0dd: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045e0e0: PUSH EAX
// 0045e0e1: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045e0e4: PUSH EAX
// 0045e0e5: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x74] (DATA)
// 0045e0e8: PUSH EAX
// 0045e0e9: MOV EAX,0x61b4e4
//   XREF to: 0061b4e4 (DATA)
// 0045e0ee: PUSH EAX
//   XREF to: 0061b4e4 (DATA)
// 0045e0ef: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045e0f5: PUSH EAX
// 0045e0f6: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0045e0fb: ADD ESP,0x28
// 0045e0fe: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0045e101: MOV EAX,0x61b4fc
//   XREF to: 0061b4fc (DATA)
// 0045e106: PUSH EAX
//   XREF to: 0061b4fc (DATA)
// 0045e107: PUSH 0x16
// 0045e109: PUSH 0x0
// 0045e10b: PUSH 0xa
// 0045e10d: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045e113: PUSH EAX
// 0045e114: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045e119: ADD ESP,0x14
// 0045e11c: LEA EAX,[EBP + 0xffffff4c]
//   XREF to: Stack[-0xc4] (DATA)
// 0045e122: PUSH EAX
// 0045e123: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0045e128: ADD ESP,0x4
// 0045e12b: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0045e12e: PUSH 0x21
// 0045e130: PUSH 0x0
// 0045e132: MOV EAX,0x61b516
//   XREF to: 0061b516 (DATA)
// 0045e137: PUSH EAX
//   XREF to: 0061b516 (DATA)
// 0045e138: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045e13d: ADD ESP,0xc
// 0045e140: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045e145: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045e14a: AND EAX,0xff
// 0045e14f: PUSH EAX
// 0045e150: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045e155: ADD ESP,0x4
// 0045e158: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045e15b: CMP dword ptr [EBP + -0x40],0x0
//   XREF to: Stack[-0x50] (READ)
// 0045e15f: JLE 0x0045e167
//   XREF to: 0045e167 (CONDITIONAL_JUMP)
// 0045e161: CMP dword ptr [EBP + -0x40],0x7
//   XREF to: Stack[-0x50] (READ)
// 0045e165: JL 0x0045e169
//   XREF to: 0045e169 (CONDITIONAL_JUMP)
// 0045e167: JMP 0x0045e16f
//   Label: LAB_0045e167
//   XREF to: 0045e16f (UNCONDITIONAL_JUMP)
// 0045e169: CMP dword ptr [EBP + -0x3c],0x0
//   Label: LAB_0045e169
//   XREF to: Stack[-0x4c] (READ)
// 0045e16d: JG 0x0045e174
//   XREF to: 0045e174 (CONDITIONAL_JUMP)
// 0045e16f: JMP 0x0045e50c
//   Label: LAB_0045e16f
//   XREF to: 0045e50c (UNCONDITIONAL_JUMP)
// 0045e174: FILD dword ptr [EBP + -0x3c]
//   Label: LAB_0045e174
//   XREF to: Stack[-0x4c] (READ)
// 0045e177: FDIVR double ptr [0x0061b536]
//   XREF to: 0061b536 (READ)
// 0045e17d: FSTP float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0045e180: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045e183: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0045e186: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045e18b: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0045e18e: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0045e195: JMP 0x0045e19d
//   XREF to: 0045e19d (UNCONDITIONAL_JUMP)
// 0045e197: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e197
//   XREF to: Stack[-0x40] (READ)
// 0045e19a: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0045e19d: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e19d
//   XREF to: Stack[-0x40] (READ)
// 0045e1a0: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0045e1a3: JG 0x0045e3ee
//   XREF to: 0045e3ee (CONDITIONAL_JUMP)
// 0045e1a9: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045e1ac: FMUL double ptr [0x0061b53e]
//   XREF to: 0061b53e (READ)
// 0045e1b2: FMUL double ptr [0x0061b546]
//   XREF to: 0061b546 (READ)
// 0045e1b8: FSIN
// 0045e1ba: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0045e1bd: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045e1c0: FMUL double ptr [0x0061b53e]
//   XREF to: 0061b53e (READ)
// 0045e1c6: FMUL double ptr [0x0061b546]
//   XREF to: 0061b546 (READ)
// 0045e1cc: FCOS
// 0045e1ce: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0045e1d1: MOV dword ptr [EBP + -0x2c],0x1
//   XREF to: Stack[-0x3c] (WRITE)
// 0045e1d8: JMP 0x0045e1e0
//   XREF to: 0045e1e0 (UNCONDITIONAL_JUMP)
// 0045e1da: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045e1da
//   XREF to: Stack[-0x3c] (READ)
// 0045e1dd: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0045e1e0: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045e1e0
//   XREF to: Stack[-0x3c] (READ)
// 0045e1e3: CMP EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e1e6: JGE 0x0045e3e0
//   XREF to: 0045e3e0 (CONDITIONAL_JUMP)
// 0045e1ec: CMP dword ptr [EBP + -0x44],0x58
//   XREF to: Stack[-0x54] (READ)
// 0045e1f0: JNZ 0x0045e284
//   XREF to: 0045e284 (CONDITIONAL_JUMP)
// 0045e1f6: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e1f9: SHL EAX,0x2
// 0045e1fc: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e201: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e205: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e20b: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e211: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045e214: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e217: SHL EAX,0x2
// 0045e21a: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e21f: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e223: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e229: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e22f: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045e232: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e235: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e238: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e23b: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e23e: FADDP
// 0045e240: FSQRT
// 0045e242: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045e245: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e248: SHL EAX,0x2
// 0045e24b: IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e250: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e256: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0045e259: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e25d: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0045e260: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e263: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e269: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045e26c: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e270: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e273: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e276: FADD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e27c: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045e27f: JMP 0x0045e3a5
//   XREF to: 0045e3a5 (UNCONDITIONAL_JUMP)
// 0045e284: CMP dword ptr [EBP + -0x44],0x59
//   Label: LAB_0045e284
//   XREF to: Stack[-0x54] (READ)
// 0045e288: JNZ 0x0045e31c
//   XREF to: 0045e31c (CONDITIONAL_JUMP)
// 0045e28e: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e291: SHL EAX,0x2
// 0045e294: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e299: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e29d: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e2a3: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e2a9: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045e2ac: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e2af: SHL EAX,0x2
// 0045e2b2: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e2b7: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e2bb: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e2c1: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e2c7: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045e2ca: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e2cd: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e2d0: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e2d3: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e2d6: FADDP
// 0045e2d8: FSQRT
// 0045e2da: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045e2dd: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e2e1: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e2e4: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e2e7: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e2ed: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0045e2f0: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e2f3: SHL EAX,0x2
// 0045e2f6: IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e2fb: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e301: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0045e304: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e308: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0045e30b: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e30e: FADD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e314: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045e317: JMP 0x0045e3a5
//   XREF to: 0045e3a5 (UNCONDITIONAL_JUMP)
// 0045e31c: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045e31c
//   XREF to: Stack[-0x3c] (READ)
// 0045e31f: SHL EAX,0x2
// 0045e322: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e327: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e32b: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e331: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e337: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045e33a: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e33d: SHL EAX,0x2
// 0045e340: IMUL EDX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e345: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e349: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e34f: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e355: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045e358: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e35b: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e35e: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e361: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e364: FADDP
// 0045e366: FSQRT
// 0045e368: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045e36b: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e36f: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e372: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e375: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e37b: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0045e37e: IMUL EAX,dword ptr [EBP + -0x64],0x14
//   XREF to: Stack[-0x74] (READ)
// 0045e382: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0045e385: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045e388: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e38e: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045e391: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e394: SHL EAX,0x2
// 0045e397: IMUL EAX,dword ptr [EAX + EBP*0x1 + -0x64],0x14
// 0045e39c: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e3a2: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0045e3a5: IMUL EDX,dword ptr [0x01626408],0x14
//   Label: LAB_0045e3a5
//   XREF to: 01626408 (READ)
// 0045e3ac: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e3af: MOV dword ptr [EDX + 0x162640c],EAX
//   XREF to: 0162640c (DATA)
// 0045e3b5: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0045e3bc: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e3bf: MOV dword ptr [EDX + 0x1626410],EAX
//   XREF to: 01626410 (DATA)
// 0045e3c5: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0045e3cc: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e3cf: MOV dword ptr [EDX + 0x1626414],EAX
//   XREF to: 01626414 (DATA)
// 0045e3d5: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0045e3db: JMP 0x0045e1da
//   XREF to: 0045e1da (UNCONDITIONAL_JUMP)
// 0045e3e0: FLD float ptr [EBP + -0x34]
//   Label: LAB_0045e3e0
//   XREF to: Stack[-0x44] (READ)
// 0045e3e3: FADD float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045e3e6: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0045e3e9: JMP 0x0045e197
//   XREF to: 0045e197 (UNCONDITIONAL_JUMP)
// 0045e3ee: CMP dword ptr [EBP + -0x4],0x42
//   Label: LAB_0045e3ee
//   XREF to: Stack[-0x14] (READ)
// 0045e3f2: JZ 0x0045e3fe
//   XREF to: 0045e3fe (CONDITIONAL_JUMP)
// 0045e3f4: CMP dword ptr [EBP + -0x4],0x49
//   XREF to: Stack[-0x14] (READ)
// 0045e3f8: JNZ 0x0045e47d
//   XREF to: 0045e47d (CONDITIONAL_JUMP)
// 0045e3fe: MOV dword ptr [EBP + -0x30],0x0
//   Label: LAB_0045e3fe
//   XREF to: Stack[-0x40] (WRITE)
// 0045e405: JMP 0x0045e40d
//   XREF to: 0045e40d (UNCONDITIONAL_JUMP)
// 0045e407: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e407
//   XREF to: Stack[-0x40] (READ)
// 0045e40a: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0045e40d: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e40d
//   XREF to: Stack[-0x40] (READ)
// 0045e410: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0045e413: JGE 0x0045e47d
//   XREF to: 0045e47d (CONDITIONAL_JUMP)
// 0045e415: MOV dword ptr [EBP + -0x2c],0x1
//   XREF to: Stack[-0x3c] (WRITE)
// 0045e41c: JMP 0x0045e424
//   XREF to: 0045e424 (UNCONDITIONAL_JUMP)
// 0045e41e: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045e41e
//   XREF to: Stack[-0x3c] (READ)
// 0045e421: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0045e424: MOV EAX,dword ptr [EBP + -0x40]
//   Label: LAB_0045e424
//   XREF to: Stack[-0x50] (READ)
// 0045e427: DEC EAX
// 0045e428: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e42b: JLE 0x0045e47b
//   XREF to: 0045e47b (CONDITIONAL_JUMP)
// 0045e42d: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e430: DEC EAX
// 0045e431: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e434: INC EDX
// 0045e435: IMUL EAX,EDX
// 0045e438: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e43b: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e43e: DEC EAX
// 0045e43f: PUSH EAX
// 0045e440: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e443: DEC EAX
// 0045e444: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e447: INC EDX
// 0045e448: IMUL EAX,EDX
// 0045e44b: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e44e: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e451: PUSH EAX
// 0045e452: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e455: DEC EAX
// 0045e456: IMUL EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e45a: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e45d: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e460: PUSH EAX
// 0045e461: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e464: DEC EAX
// 0045e465: IMUL EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e469: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e46c: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e46f: DEC EAX
// 0045e470: PUSH EAX
// 0045e471: CALL shape_design.c_createReversedQuadPolygon_FUN_0045e040
//   XREF to: 0045e040 (UNCONDITIONAL_CALL)
// 0045e476: ADD ESP,0x10
// 0045e479: JMP 0x0045e41e
//   XREF to: 0045e41e (UNCONDITIONAL_JUMP)
// 0045e47b: JMP 0x0045e407
//   Label: LAB_0045e47b
//   XREF to: 0045e407 (UNCONDITIONAL_JUMP)
// 0045e47d: CMP dword ptr [EBP + -0x4],0x42
//   Label: LAB_0045e47d
//   XREF to: Stack[-0x14] (READ)
// 0045e481: JZ 0x0045e48d
//   XREF to: 0045e48d (CONDITIONAL_JUMP)
// 0045e483: CMP dword ptr [EBP + -0x4],0x4f
//   XREF to: Stack[-0x14] (READ)
// 0045e487: JNZ 0x0045e50c
//   XREF to: 0045e50c (CONDITIONAL_JUMP)
// 0045e48d: MOV dword ptr [EBP + -0x30],0x0
//   Label: LAB_0045e48d
//   XREF to: Stack[-0x40] (WRITE)
// 0045e494: JMP 0x0045e49c
//   XREF to: 0045e49c (UNCONDITIONAL_JUMP)
// 0045e496: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e496
//   XREF to: Stack[-0x40] (READ)
// 0045e499: INC dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ_WRITE)
// 0045e49c: MOV EAX,dword ptr [EBP + -0x30]
//   Label: LAB_0045e49c
//   XREF to: Stack[-0x40] (READ)
// 0045e49f: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0045e4a2: JGE 0x0045e50c
//   XREF to: 0045e50c (CONDITIONAL_JUMP)
// 0045e4a4: MOV dword ptr [EBP + -0x2c],0x1
//   XREF to: Stack[-0x3c] (WRITE)
// 0045e4ab: JMP 0x0045e4b3
//   XREF to: 0045e4b3 (UNCONDITIONAL_JUMP)
// 0045e4ad: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0045e4ad
//   XREF to: Stack[-0x3c] (READ)
// 0045e4b0: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0045e4b3: MOV EAX,dword ptr [EBP + -0x40]
//   Label: LAB_0045e4b3
//   XREF to: Stack[-0x50] (READ)
// 0045e4b6: DEC EAX
// 0045e4b7: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e4ba: JLE 0x0045e50a
//   XREF to: 0045e50a (CONDITIONAL_JUMP)
// 0045e4bc: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e4bf: DEC EAX
// 0045e4c0: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e4c3: INC EDX
// 0045e4c4: IMUL EAX,EDX
// 0045e4c7: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e4ca: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e4cd: DEC EAX
// 0045e4ce: PUSH EAX
// 0045e4cf: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e4d2: DEC EAX
// 0045e4d3: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e4d6: INC EDX
// 0045e4d7: IMUL EAX,EDX
// 0045e4da: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e4dd: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e4e0: PUSH EAX
// 0045e4e1: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e4e4: DEC EAX
// 0045e4e5: IMUL EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e4e9: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e4ec: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e4ef: PUSH EAX
// 0045e4f0: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045e4f3: DEC EAX
// 0045e4f4: IMUL EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045e4f8: ADD EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045e4fb: ADD EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045e4fe: DEC EAX
// 0045e4ff: PUSH EAX
// 0045e500: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e505: ADD ESP,0x10
// 0045e508: JMP 0x0045e4ad
//   XREF to: 0045e4ad (UNCONDITIONAL_JUMP)
// 0045e50a: JMP 0x0045e496
//   Label: LAB_0045e50a
//   XREF to: 0045e496 (UNCONDITIONAL_JUMP)
// 0045e50c: MOV ESP,EBP
//   Label: LAB_0045e50c
// 0045e50e: POP EBP
// 0045e50f: POP EDI
// 0045e510: POP ESI
// 0045e511: POP EBX
// 0045e512: RET
