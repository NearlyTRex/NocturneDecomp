// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// Address: 0052af70
// Address Range: [[0052af70, 0052b153]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70()
// Cross-references:
//   core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30 (0052af30) at 0052af4f [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\morph.cpp_0063a3f7
//   TerminatedCString s_CMorphModel_rotatePoints_0063a409
//   undefined4 DAT_00661b40
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f3dbb4
//   undefined4 DAT_02f3dbb8
//   undefined4 DAT_02f3dbbc
//   undefined4 DAT_02f3dbc0
//   undefined4 DAT_02f3dbc4
//   undefined4 DAT_02f3dbc8
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056e5d0
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_morph.cpp_CMorphModel_rotatePoints(CMorphModel* param_1, undefined4
   param_2, undefined4 param_3) */

void core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  CVector3i *input;
  int iVar10;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int local_14;
  uint uVar11;
  
  if (2000 < *(int *)(in_stack_00000004 + 0x54)) {
    g_CurrentFilename = "?..\\core\\morph.cpp" + 1;
    g_CurrentLineNumber = 0x1f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::rotatePoints - too many points!");
  }
  uVar11 = 0xff;
  local_14 = 0;
  fVar7 = 1.0 - in_stack_0000000c;
  if (0 < *(int *)(in_stack_00000008 + 0x54)) {
    input = (CVector3i *)&DAT_02f3dbb4;
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar8 = *(int *)(*(int *)(in_stack_00000008 + 0x58) + iVar9) * 0x10 + in_stack_00000010;
      fVar1 = *(float *)(iVar8 + 8);
      fVar2 = *(float *)(iVar8 + 0xc);
      iVar5 = *(int *)(in_stack_00000008 + 0x58);
      fVar3 = *(float *)(iVar5 + 8 + iVar9);
      fVar4 = *(float *)(iVar5 + 0xc + iVar9);
      input->x = (int)ROUND((*(float *)(iVar5 + 4 + iVar9) * in_stack_0000000c +
                            *(float *)(iVar8 + 4) * fVar7) * _DAT_00661b40);
      input->y = (int)ROUND((fVar3 * in_stack_0000000c + fVar1 * fVar7) * _DAT_00661b40);
      input->z = (int)ROUND((in_stack_0000000c * fVar4 + fVar7 * fVar2) * _DAT_00661b40);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar10),input);
      uVar6 = *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                       iVar10);
      if ((uVar6 & 0x80000000) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar11 & uVar6;
      }
      iVar10 = iVar10 + 0x30;
      input = input + 1;
      iVar9 = iVar9 + 0x10;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_stack_00000008 + 0x54));
  }
  if (uVar11 != 0) {
    return;
  }
  core_set_cpp_CDemonSet_FUN_0056e5d0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(g_CDemonSetPtr);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,local_14);
  return;
}


// Assembly code:
// 0052af70: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// 0052af71: PUSH ESI
// 0052af72: PUSH EDI
// 0052af73: PUSH EBP
// 0052af74: SUB ESP,0x34
// 0052af77: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0052af7b: CMP dword ptr [EAX + 0x54],0x7d0
// 0052af82: JG 0x0052b0ca
//   XREF to: 0052b0ca (CONDITIONAL_JUMP)
// 0052af88: FLD float ptr [ESP + 0x4c]
//   Label: LAB_0052af88
//   XREF to: Stack[0x8] (READ)
// 0052af8c: MOV EDI,0xff
// 0052af91: FLD1
// 0052af93: XOR ESI,ESI
// 0052af95: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0052af99: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0052af9d: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0052afa1: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0052afa5: FSUBRP
// 0052afa7: MOV EDX,dword ptr [EAX + 0x54]
// 0052afaa: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052afae: TEST EDX,EDX
// 0052afb0: JLE 0x0052b0ba
//   XREF to: 0052b0ba (CONDITIONAL_JUMP)
// 0052afb6: MOV ESI,0x2f3dbb4
//   XREF to: 02f3dbb4 (DATA)
// 0052afbb: XOR EBP,EBP
// 0052afbd: XOR EDI,EDI
// 0052afbf: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0052afbf
//   XREF to: Stack[0x4] (READ)
// 0052afc3: MOV EAX,dword ptr [EAX + 0x58]
// 0052afc6: MOV EAX,dword ptr [EAX + EBP*0x1]
// 0052afc9: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 0052afcd: SHL EAX,0x4
// 0052afd0: ADD EAX,EDX
// 0052afd2: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 0052afd6: FLD float ptr [EAX + 0x4]
// 0052afd9: FMUL ST1
// 0052afdb: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x38] (WRITE)
// 0052afdf: FLD float ptr [EAX + 0x8]
// 0052afe2: FMUL ST1
// 0052afe4: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (WRITE)
// 0052afe8: FMUL float ptr [EAX + 0xc]
// 0052afeb: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0052afef: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (WRITE)
// 0052aff3: MOV EAX,dword ptr [EAX + 0x58]
// 0052aff6: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0052affa: FLD float ptr [EAX + EBP*0x1 + 0x4]
// 0052affe: FMUL ST1
// 0052b000: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (WRITE)
// 0052b004: FLD float ptr [EAX + EBP*0x1 + 0x8]
// 0052b008: FMUL ST1
// 0052b00a: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x28] (WRITE)
// 0052b00e: FMUL float ptr [EAX + EBP*0x1 + 0xc]
// 0052b012: MOV EBX,ESI
//   XREF to: 02f3dbb4 (PARAM)
//   XREF to: 02f3dbc0 (PARAM)
// 0052b014: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 0052b018: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x38] (READ)
// 0052b01c: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x28] (READ)
// 0052b020: FXCH
// 0052b022: FSTP float ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 0052b025: MOV EAX,ESP
// 0052b027: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 0052b02b: FXCH
// 0052b02d: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (WRITE)
// 0052b031: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 0052b035: FXCH
// 0052b037: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 0052b03b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 0052b03f: FLD float ptr [EAX]
//   XREF to: Stack[-0x44] (DATA)
// 0052b041: FMUL float ptr [0x00661b40]
//   XREF to: 00661b40 (READ)
// 0052b047: FISTP dword ptr [EBX]
//   XREF to: 02f3dbb4 (WRITE)
//   XREF to: 02f3dbc0 (WRITE)
// 0052b049: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 0052b04c: FMUL float ptr [0x00661b40]
//   XREF to: 00661b40 (READ)
// 0052b052: FISTP dword ptr [EBX + 0x4]
//   XREF to: 02f3dbb8 (WRITE)
//   XREF to: 02f3dbc4 (WRITE)
// 0052b055: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 0052b058: FMUL float ptr [0x00661b40]
//   XREF to: 00661b40 (READ)
// 0052b05e: FISTP dword ptr [EBX + 0x8]
//   XREF to: 02f3dbbc (WRITE)
//   XREF to: 02f3dbc8 (WRITE)
// 0052b061: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b066: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052b068: PUSH ESI
//   XREF to: 02f3dbb4 (DATA)
//   XREF to: 02f3dbc0 (DATA)
// 0052b069: ADD EAX,EDI
// 0052b06b: PUSH EAX
// 0052b06c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0052b071: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b076: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052b078: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x10]
// 0052b07c: ADD ESP,0x8
// 0052b07f: TEST EAX,0x80000000
// 0052b084: JZ 0x0052b0f2
//   XREF to: 0052b0f2 (CONDITIONAL_JUMP)
// 0052b086: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x14] (READ)
// 0052b08a: MOV EBX,0x1
// 0052b08f: AND EDX,EAX
// 0052b091: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0052b095: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0052b099: MOV ECX,dword ptr [ESP + 0x2c]
//   Label: LAB_0052b099
//   XREF to: Stack[-0x18] (READ)
// 0052b09d: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0052b0a1: ADD EDI,0x30
// 0052b0a4: ADD ESI,0xc
// 0052b0a7: ADD EBP,0x10
// 0052b0aa: INC ECX
// 0052b0ab: MOV EBX,dword ptr [EDX + 0x54]
// 0052b0ae: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0052b0b2: CMP ECX,EBX
// 0052b0b4: JL 0x0052afbf
//   XREF to: 0052afbf (CONDITIONAL_JUMP)
// 0052b0ba: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0052b0ba
//   XREF to: Stack[-0x14] (READ)
// 0052b0be: TEST ESI,ESI
// 0052b0c0: JZ 0x0052b0fa
//   XREF to: 0052b0fa (CONDITIONAL_JUMP)
// 0052b0c2: ADD ESP,0x34
// 0052b0c5: POP EBP
// 0052b0c6: POP EDI
// 0052b0c7: POP ESI
// 0052b0c8: POP EBX
// 0052b0c9: RET
// 0052b0ca: MOV ECX,0x63a3f7
//   Label: LAB_0052b0ca
//   XREF to: 0063a3f7 (PARAM)
// 0052b0cf: MOV EBX,0x1f8
// 0052b0d4: PUSH 0x63a409
//   XREF to: 0063a409 (DATA)
// 0052b0d9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052b0df: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0052b0e5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052b0ea: ADD ESP,0x4
// 0052b0ed: JMP 0x0052af88
//   XREF to: 0052af88 (UNCONDITIONAL_JUMP)
// 0052b0f2: XOR ECX,ECX
//   Label: LAB_0052b0f2
// 0052b0f4: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052b0f8: JMP 0x0052b099
//   XREF to: 0052b099 (UNCONDITIONAL_JUMP)
// 0052b0fa: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0052b0fa
//   XREF to: Stack[0x4] (READ)
// 0052b0fe: MOV EDI,dword ptr [EAX + 0x54]
// 0052b101: PUSH EDI
// 0052b102: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0052b108: PUSH EBP
//   XREF to: 03114278 (DATA)
// 0052b109: CALL core_set.cpp_CDemonSet_FUN_0056e5d0
//   XREF to: 0056e5d0 (UNCONDITIONAL_CALL)
// 0052b10e: ADD ESP,0x8
// 0052b111: PUSH ESI
// 0052b112: PUSH 0x3
// 0052b114: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0052b118: PUSH 0x2f3dbb4
//   XREF to: 02f3dbb4 (DATA)
// 0052b11d: MOV EDX,dword ptr [EAX + 0x60]
// 0052b120: PUSH EDX
// 0052b121: MOV ECX,dword ptr [EAX + 0x5c]
// 0052b124: PUSH ECX
// 0052b125: MOV EBX,dword ptr [EAX + 0x54]
// 0052b128: PUSH EBX
// 0052b129: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0052b12f: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0052b130: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0052b135: ADD ESP,0x1c
// 0052b138: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x20] (READ)
// 0052b13c: PUSH EDI
// 0052b13d: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052b143: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0052b144: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0052b149: ADD ESP,0x8
// 0052b14c: ADD ESP,0x34
// 0052b14f: POP EBP
// 0052b150: POP EDI
// 0052b151: POP ESI
// 0052b152: POP EBX
// 0052b153: RET
