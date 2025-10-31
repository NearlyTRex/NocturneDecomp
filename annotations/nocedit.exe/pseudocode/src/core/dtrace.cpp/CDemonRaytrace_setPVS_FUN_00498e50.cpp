// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
// Address: 00498e50
// Address Range: [[00498e50, 00498fa0]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace * this_ptr, int visible_cube_count, int * visible_cube_indices)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a369 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622bf2
//   TerminatedCString s_CDemonRaytrace_setPVS_To_00622c05
//   int g_PVSDrawnCubeCount
//   int g_PVSReadyFlag
//   CDemonCube*[20000] g_PVSCubePointers
//   undefined4 DAT_02ca03b0
//   CVector3f[20000] g_PVSCubePositions
//   undefined4 DAT_02cb3c30
//   undefined4 DAT_02cb3c34
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50
          (CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar10;
  int iVar11;
  CVector3f local_1c;
  
  g_PVSReadyFlag = 0;
  if ((0 < visible_cube_count) && (visible_cube_indices != (int *)0x0)) {
    g_PVSDrawnCubeCount = visible_cube_count;
    if (20000 < visible_cube_count) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0x8c9;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < g_PVSDrawnCubeCount) {
      pCVar10 = g_PVSCubePositions;
      do {
        iVar5 = *visible_cube_indices;
        g_PVSCubePointers[iVar11] = this_ptr->cube_data + iVar5;
        iVar6 = (this_ptr->grid_coord).z;
        uVar8 = (longlong)iVar5 / (longlong)(this_ptr->grid_coord).z;
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = (this_ptr->grid_coord).y;
        fVar1 = (this_ptr->cell_size).y;
        fVar2 = (this_ptr->bbox_min).y;
        fVar3 = (this_ptr->cell_size).z;
        fVar4 = (this_ptr->bbox_min).z;
        if (pCVar10 != &local_1c) {
          pCVar10->x = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) /
                                   (longlong)(this_ptr->grid_coord).y) * (this_ptr->cell_size).x +
                       (this_ptr->bbox_min).x;
          pCVar10->y = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pCVar10->z = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pCVar10 = pCVar10 + 1;
        iVar11 = iVar11 + 1;
        visible_cube_indices = visible_cube_indices + 1;
      } while (iVar11 < g_PVSDrawnCubeCount);
    }
    g_PVSReadyFlag = 1;
  }
  return;
}


// Assembly code:
// 00498e50: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
// 00498e51: PUSH EBP
// 00498e52: SUB ESP,0x18
// 00498e55: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00498e59: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00498e5d: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00498e61: XOR EDX,EDX
// 00498e63: MOV dword ptr [0x02ca03a8],EDX
//   XREF to: 02ca03a8 (WRITE)
// 00498e69: CMP EAX,0x1
// 00498e6c: JL 0x00498f73
//   XREF to: 00498f73 (CONDITIONAL_JUMP)
// 00498e72: TEST EBP,EBP
// 00498e74: JZ 0x00498f73
//   XREF to: 00498f73 (CONDITIONAL_JUMP)
// 00498e7a: PUSH EDI
// 00498e7b: PUSH ESI
// 00498e7c: MOV [0x02ca03a4],EAX
//   XREF to: 02ca03a4 (WRITE)
// 00498e81: CMP EAX,0x4e20
// 00498e86: JG 0x00498f79
//   XREF to: 00498f79 (CONDITIONAL_JUMP)
// 00498e8c: MOV EAX,[0x02ca03a4]
//   Label: LAB_00498e8c
//   XREF to: 02ca03a4 (READ)
// 00498e91: XOR EDI,EDI
// 00498e93: TEST EAX,EAX
// 00498e95: JLE 0x00498f67
//   XREF to: 00498f67 (CONDITIONAL_JUMP)
// 00498e9b: MOV ESI,0x2cb3c2c
//   XREF to: 02cb3c2c (DATA)
// 00498ea0: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_00498ea0
// 00498ea7: MOV ECX,dword ptr [EBP]
// 00498eaa: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00498eae: IMUL EAX,ECX,0x34
// 00498eb1: MOV EDX,dword ptr [EBX + 0x50]
// 00498eb4: ADD EAX,EDX
// 00498eb6: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00498eba: MOV dword ptr [EDX + 0x2ca03ac],EAX
//   XREF to: 02ca03ac (DATA)
//   XREF to: 02ca03b0 (WRITE)
// 00498ec0: MOV EDX,ECX
// 00498ec2: MOV EAX,ECX
// 00498ec4: SAR EDX,0x1f
// 00498ec7: IDIV dword ptr [EBX + 0x48]
// 00498eca: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00498ece: MOV EDX,ECX
// 00498ed0: MOV EAX,ECX
// 00498ed2: SAR EDX,0x1f
// 00498ed5: MOV ECX,dword ptr [EBX + 0x48]
// 00498ed8: IDIV ECX
// 00498eda: MOV EDX,EAX
// 00498edc: SAR EDX,0x1f
// 00498edf: MOV ECX,EAX
// 00498ee1: IDIV dword ptr [EBX + 0x44]
// 00498ee4: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00498ee8: MOV EDX,ECX
// 00498eea: MOV EAX,ECX
// 00498eec: SAR EDX,0x1f
// 00498eef: MOV ECX,dword ptr [EBX + 0x44]
// 00498ef2: IDIV ECX
// 00498ef4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00498ef8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 00498efc: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00498f00: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00498f04: FMUL float ptr [EBX + 0x28]
// 00498f07: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00498f0b: FXCH
// 00498f0d: FADD float ptr [EBX + 0x10]
// 00498f10: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00498f14: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00498f18: FMUL float ptr [EBX + 0x2c]
// 00498f1b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00498f1f: FADD float ptr [EBX + 0x14]
// 00498f22: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00498f26: FXCH
// 00498f28: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00498f2c: FMUL float ptr [EBX + 0x30]
// 00498f2f: FADD float ptr [EBX + 0x18]
// 00498f32: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 00498f36: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 00498f3a: CMP ESI,EAX
// 00498f3c: JZ 0x00498f52
//   XREF to: 00498f52 (CONDITIONAL_JUMP)
// 00498f3e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 00498f42: MOV dword ptr [ESI],EAX
//   XREF to: 02cb3c2c (WRITE)
// 00498f44: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00498f48: MOV dword ptr [ESI + 0x4],EAX
//   XREF to: 02cb3c30 (WRITE)
// 00498f4b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00498f4f: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 02cb3c34 (WRITE)
// 00498f52: MOV EDX,dword ptr [0x02ca03a4]
//   Label: LAB_00498f52
//   XREF to: 02ca03a4 (READ)
// 00498f58: ADD ESI,0xc
// 00498f5b: INC EDI
// 00498f5c: ADD EBP,0x4
// 00498f5f: CMP EDI,EDX
// 00498f61: JL 0x00498ea0
//   XREF to: 00498ea0 (CONDITIONAL_JUMP)
// 00498f67: MOV dword ptr [0x02ca03a8],0x1
//   Label: LAB_00498f67
//   XREF to: 02ca03a8 (WRITE)
// 00498f71: POP ESI
// 00498f72: POP EDI
// 00498f73: ADD ESP,0x18
//   Label: LAB_00498f73
// 00498f76: POP EBP
// 00498f77: POP EBX
// 00498f78: RET
// 00498f79: MOV ECX,0x622bf2
//   Label: LAB_00498f79
//   XREF to: 00622bf2 (PARAM)
// 00498f7e: MOV ESI,0x8c9
// 00498f83: PUSH 0x622c05
//   XREF to: 00622c05 (DATA)
// 00498f88: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00498f8e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00498f94: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00498f99: ADD ESP,0x4
// 00498f9c: JMP 0x00498e8c
//   XREF to: 00498e8c (UNCONDITIONAL_JUMP)
