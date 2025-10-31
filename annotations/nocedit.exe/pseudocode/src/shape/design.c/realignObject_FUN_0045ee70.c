// Name: shape_design.c_realignObject_FUN_0045ee70
// Address: 0045ee70
// Address Range: [[0045ee70, 0045f07e]]
// Convention: __cdecl
// Signature: void shape_design.c_realignObject_FUN_0045ee70(int rotation_x, int rotation_y, int rotation_z)
// Cross-references:
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 00469674 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Realign_object_0061b6be
//   double g_AngleConversionFactor1 = 0.000030517578125
//   double g_AngleConversionFactor2 = 3.14159265350000
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_GouraudShadingEnabled
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_realignObject_FUN_0045ee70(int rotation_x,int rotation_y,int rotation_z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  int local_4c;
  
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar10 = rotation_x + 0x2000U & 0xc000;
  uVar11 = rotation_y + 0x2000U & 0xc000;
  uVar12 = rotation_z + 0x2000U & 0xc000;
  fVar13 = (float10)fsin((float10)uVar10 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar1 = (float)fVar13;
  fVar13 = (float10)fcos((float10)uVar10 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar2 = (float)fVar13;
  fVar13 = (float10)fsin((float10)uVar11 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar3 = (float)fVar13;
  fVar13 = (float10)fcos((float10)uVar11 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar4 = (float)fVar13;
  fVar13 = (float10)fsin((float10)uVar12 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar5 = (float)fVar13;
  fVar13 = (float10)fcos((float10)uVar12 * (float10)g_AngleConversionFactor1 *
                         (float10)g_AngleConversionFactor2);
  fVar6 = (float)fVar13;
  for (local_4c = 0; local_4c < g_VertexCount; local_4c = local_4c + 1) {
    fVar7 = g_LoadedVertices[local_4c].vertex.x;
    fVar8 = g_LoadedVertices[local_4c].vertex.y;
    fVar9 = g_LoadedVertices[local_4c].vertex.z;
    g_LoadedVertices[local_4c].vertex.x =
         fVar9 * fVar5 * fVar2 +
         fVar8 * (-fVar6 * fVar3 + fVar5 * fVar1 * fVar4) +
         fVar7 * (fVar6 * fVar4 + fVar5 * fVar1 * fVar3);
    g_LoadedVertices[local_4c].vertex.y =
         fVar9 * -fVar1 + fVar8 * fVar4 * fVar2 + fVar7 * fVar3 * fVar2;
    g_LoadedVertices[local_4c].vertex.z =
         fVar9 * fVar6 * fVar2 +
         fVar8 * (fVar3 * fVar5 + fVar6 * fVar1 * fVar4) +
         fVar7 * (-fVar5 * fVar4 + fVar6 * fVar1 * fVar3);
  }
  if (g_GouraudShadingEnabled != 0) {
    shape_design_c_calculateVertexNormals_FUN_0045be40();
  }
  return;
}


// Assembly code:
// 0045ee70: PUSH EBX
//   Label: shape_design.c_realignObject_FUN_0045ee70
// 0045ee71: PUSH ESI
// 0045ee72: PUSH EDI
// 0045ee73: PUSH EBP
// 0045ee74: MOV EBP,ESP
// 0045ee76: SUB ESP,0x4c
// 0045ee7c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045ee81: PUSH 0x0
// 0045ee83: PUSH 0x0
// 0045ee85: MOV EAX,0x61b6be
//   XREF to: 0061b6be (PARAM)
// 0045ee8a: PUSH EAX
//   XREF to: 0061b6be (DATA)
// 0045ee8b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045ee90: ADD ESP,0xc
// 0045ee93: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ee98: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045ee9b: ADD EAX,0x2000
// 0045eea0: AND EAX,0xc000
// 0045eea5: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (WRITE)
// 0045eea8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045eeab: ADD EAX,0x2000
// 0045eeb0: AND EAX,0xc000
// 0045eeb5: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: Stack[0x8] (WRITE)
// 0045eeb8: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045eebb: ADD EAX,0x2000
// 0045eec0: AND EAX,0xc000
// 0045eec5: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 0045eec8: FILD dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045eecb: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045eed1: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045eed7: FSIN
// 0045eed9: FSTP float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0045eedc: FILD dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045eedf: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045eee5: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045eeeb: FCOS
// 0045eeed: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0045eef0: FILD dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045eef3: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045eef9: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045eeff: FSIN
// 0045ef01: FSTP float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 0045ef04: FILD dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045ef07: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045ef0d: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045ef13: FCOS
// 0045ef15: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0045ef18: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045ef1b: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045ef21: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045ef27: FSIN
// 0045ef29: FSTP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0045ef2c: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045ef2f: FMUL double ptr [0x0061b6ce]
//   XREF to: 0061b6ce (READ)
// 0045ef35: FMUL double ptr [0x0061b6d6]
//   XREF to: 0061b6d6 (READ)
// 0045ef3b: FCOS
// 0045ef3d: FSTP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0045ef40: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045ef43: FMUL float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045ef46: FMUL float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0045ef49: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045ef4c: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045ef4f: FADDP
// 0045ef51: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0045ef54: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045ef57: FMUL float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045ef5a: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045ef5d: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045ef60: FCHS
// 0045ef62: FMUL float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0045ef65: FADDP
// 0045ef67: FSTP float ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 0045ef6a: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045ef6d: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045ef70: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0045ef73: FLD float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0045ef76: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045ef79: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0045ef7c: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045ef7f: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045ef82: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045ef85: FLD float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045ef88: FCHS
// 0045ef8a: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0045ef8d: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045ef90: FMUL float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045ef93: FMUL float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0045ef96: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045ef99: FCHS
// 0045ef9b: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045ef9e: FADDP
// 0045efa0: FSTP float ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 0045efa3: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045efa6: FMUL float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045efa9: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045efac: FLD float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0045efaf: FMUL float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0045efb2: FADDP
// 0045efb4: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045efb7: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045efba: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0045efbd: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045efc0: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 0045efc7: JMP 0x0045efcf
//   XREF to: 0045efcf (UNCONDITIONAL_JUMP)
// 0045efc9: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_0045efc9
//   XREF to: Stack[-0x4c] (READ)
// 0045efcc: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 0045efcf: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_0045efcf
//   XREF to: Stack[-0x4c] (READ)
// 0045efd2: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045efd8: JGE 0x0045f06a
//   XREF to: 0045f06a (CONDITIONAL_JUMP)
// 0045efde: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045efe2: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045efe8: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045efeb: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045efef: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045eff5: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045eff8: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045effc: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045f002: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0045f005: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045f008: FMUL float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0045f00b: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f00e: FMUL float ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045f011: FADDP
// 0045f013: FLD float ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0045f016: FMUL float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045f019: FADDP
// 0045f01b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045f01f: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045f025: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045f028: FMUL float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045f02b: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f02e: FMUL float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045f031: FADDP
// 0045f033: FLD float ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0045f036: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045f039: FADDP
// 0045f03b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045f03f: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045f045: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045f048: FMUL float ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0045f04b: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f04e: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045f051: FADDP
// 0045f053: FLD float ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0045f056: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045f059: FADDP
// 0045f05b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0045f05f: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045f065: JMP 0x0045efc9
//   XREF to: 0045efc9 (UNCONDITIONAL_JUMP)
// 0045f06a: CMP dword ptr [0x01e528c0],0x0
//   Label: LAB_0045f06a
//   XREF to: 01e528c0 (READ)
// 0045f071: JZ 0x0045f078
//   XREF to: 0045f078 (CONDITIONAL_JUMP)
// 0045f073: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 0045f078: MOV ESP,EBP
//   Label: LAB_0045f078
// 0045f07a: POP EBP
// 0045f07b: POP EDI
// 0045f07c: POP ESI
// 0045f07d: POP EBX
// 0045f07e: RET
