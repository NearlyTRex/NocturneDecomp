// Name: shape_meshlod.cpp_FUN_0051c100
// Address: 0051c100
// Address Range: [[0051c100, 0051c26b]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051c100()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051c070 (0051c070) at 0051c0b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_S3D_version_00637e84
//   TerminatedCString s_d_00637e94
//   TerminatedCString s_numTextures_numTris_numV_00637e98
//   TerminatedCString s_s_0_d_d_1_1_0_0_00637ee1
//   TerminatedCString s_partList_firstVert_numVe_00637ef2
//   TerminatedCString s_s_0_d_0_d_TheOnlyPart_00637f2b
//   TerminatedCString s_texture_list_name_00637f45
//   TerminatedCString s_triList_textureIndex_ver_00637f5c
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637f92
//   TerminatedCString s_vertexList_x_y_z_00637fb4
//   TerminatedCString s_f_f_f_00637fca
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_meshlod.cpp_CLodMesh_FUN_005164d0

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051c100(undefined4 param_1, undefined4 param_2) */

int shape_meshlod_cpp_FUN_0051c100(void)

{
  SLodTriangle *pSVar1;
  int iVar2;
  int iVar3;
  CLodMesh *in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// S3D version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",0x67);
  iVar2 = shape_meshlod_cpp_CLodMesh_FUN_005164d0(in_stack_00000004);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"0,%d,%d,1,1,0,0\n",iVar2);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"0,%d,0,%d, \"TheOnlyPart\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// texture list: name\n");
  iVar2 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// triList: textureIndex,vertices(index, texX, texY)\n");
  if (0 < in_stack_00000004->tri_count) {
    iVar3 = 0;
    do {
      pSVar1 = in_stack_00000004->triangle_data;
      if (*(int *)(pSVar1->field9_0x44 + iVar3 + -4) == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000008,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n","%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",
                   0xffffffff,*(undefined4 *)(pSVar1->field4_0x1c + iVar3 + -0xc),
                   (double)*(float *)(pSVar1->field4_0x1c + iVar3),
                   (double)*(float *)(pSVar1->field4_0x1c + iVar3 + 4),
                   *(undefined4 *)(pSVar1->field4_0x1c + iVar3 + -8),
                   (double)*(float *)(pSVar1->field4_0x1c + iVar3 + 8),
                   (double)*(float *)(pSVar1->field4_0x1c + iVar3 + 0xc));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while (iVar2 < in_stack_00000004->tri_count);
  }
  iVar3 = 0;
  iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// vertexList: x,y,z\n");
  if (0 < in_stack_00000004->vertex_count) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%f,%f,%f\n");
    } while (iVar3 < in_stack_00000004->vertex_count);
  }
  return iVar2;
}


// Assembly code:
// 0051c100: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051c100
// 0051c101: PUSH ESI
// 0051c102: PUSH EDI
// 0051c103: PUSH EBP
// 0051c104: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051c108: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051c10c: PUSH 0x637e84
//   XREF to: 00637e84 (DATA)
// 0051c111: PUSH EBP
// 0051c112: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c117: ADD ESP,0x8
// 0051c11a: PUSH 0x67
// 0051c11c: PUSH 0x637e94
//   XREF to: 00637e94 (DATA)
// 0051c121: PUSH EBP
// 0051c122: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c127: ADD ESP,0xc
// 0051c12a: PUSH EBX
// 0051c12b: CALL shape_meshlod.cpp_CLodMesh_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 0051c130: ADD ESP,0x4
// 0051c133: PUSH 0x637e98
//   XREF to: 00637e98 (DATA)
// 0051c138: PUSH EBP
// 0051c139: MOV ESI,EAX
// 0051c13b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c140: ADD ESP,0x8
// 0051c143: MOV EDX,dword ptr [EBX]
// 0051c145: PUSH EDX
// 0051c146: PUSH ESI
// 0051c147: PUSH 0x637ee1
//   XREF to: 00637ee1 (DATA)
// 0051c14c: PUSH EBP
// 0051c14d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c152: ADD ESP,0x10
// 0051c155: PUSH 0x637ef2
//   XREF to: 00637ef2 (DATA)
// 0051c15a: PUSH EBP
// 0051c15b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c160: ADD ESP,0x8
// 0051c163: PUSH ESI
// 0051c164: MOV ECX,dword ptr [EBX]
// 0051c166: PUSH ECX
// 0051c167: PUSH 0x637f2b
//   XREF to: 00637f2b (DATA)
// 0051c16c: PUSH EBP
// 0051c16d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c172: ADD ESP,0x10
// 0051c175: PUSH 0x637f45
//   XREF to: 00637f45 (DATA)
// 0051c17a: PUSH EBP
// 0051c17b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c180: ADD ESP,0x8
// 0051c183: PUSH 0x637f5c
//   XREF to: 00637f5c (DATA)
// 0051c188: PUSH EBP
// 0051c189: XOR EDI,EDI
// 0051c18b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c190: MOV ESI,dword ptr [EBX + 0x8]
// 0051c193: ADD ESP,0x8
// 0051c196: TEST ESI,ESI
// 0051c198: JLE 0x0051c1b9
//   XREF to: 0051c1b9 (CONDITIONAL_JUMP)
// 0051c19a: XOR ESI,ESI
// 0051c19c: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_0051c19c
// 0051c19f: ADD EAX,ESI
// 0051c1a1: CMP dword ptr [EAX + 0x40],0x0
// 0051c1a5: JZ 0x0051c215
//   XREF to: 0051c215 (CONDITIONAL_JUMP)
// 0051c1ab: INC EDI
//   Label: LAB_0051c1ab
// 0051c1ac: MOV EAX,dword ptr [EBX + 0x8]
// 0051c1af: ADD ESI,0x8c
// 0051c1b5: CMP EDI,EAX
// 0051c1b7: JL 0x0051c19c
//   XREF to: 0051c19c (CONDITIONAL_JUMP)
// 0051c1b9: PUSH 0x637fb4
//   Label: LAB_0051c1b9
//   XREF to: 00637fb4 (DATA)
// 0051c1be: PUSH EBP
// 0051c1bf: XOR EDI,EDI
// 0051c1c1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c1c6: MOV EDX,dword ptr [EBX]
// 0051c1c8: ADD ESP,0x8
// 0051c1cb: TEST EDX,EDX
// 0051c1cd: JLE 0x0051c210
//   XREF to: 0051c210 (CONDITIONAL_JUMP)
// 0051c1cf: XOR ESI,ESI
// 0051c1d1: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0051c1d1
// 0051c1d4: SUB ESP,0x8
// 0051c1d7: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 0051c1db: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051c1de: SUB ESP,0x8
// 0051c1e1: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 0051c1e5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0051c1e8: SUB ESP,0x8
// 0051c1eb: FLD float ptr [ESI + EAX*0x1]
// 0051c1ee: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0051c1f1: PUSH 0x637fca
//   XREF to: 00637fca (DATA)
// 0051c1f6: PUSH EBP
// 0051c1f7: ADD ESI,0x4c4
// 0051c1fd: INC EDI
// 0051c1fe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c203: MOV ECX,dword ptr [EBX]
// 0051c205: ADD ESP,0x20
// 0051c208: CMP EDI,ECX
// 0051c20a: JL 0x0051c1d1
//   XREF to: 0051c1d1 (CONDITIONAL_JUMP)
// 0051c20c: LEA EAX,[EAX]
// 0051c210: POP EBP
//   Label: LAB_0051c210
// 0051c211: POP EDI
// 0051c212: POP ESI
// 0051c213: POP EBX
// 0051c214: RET
// 0051c215: SUB ESP,0x8
//   Label: LAB_0051c215
// 0051c218: FLD float ptr [EAX + 0x30]
// 0051c21b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051c21e: SUB ESP,0x8
// 0051c221: FLD float ptr [EAX + 0x2c]
// 0051c224: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0051c227: MOV EDX,dword ptr [EAX + 0x18]
// 0051c22a: PUSH EDX
// 0051c22b: SUB ESP,0x8
// 0051c22e: FLD float ptr [EAX + 0x28]
// 0051c231: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0051c234: SUB ESP,0x8
// 0051c237: FLD float ptr [EAX + 0x24]
// 0051c23a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0051c23d: MOV ECX,dword ptr [EAX + 0x14]
// 0051c240: PUSH ECX
// 0051c241: SUB ESP,0x8
// 0051c244: FLD float ptr [EAX + 0x20]
// 0051c247: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0051c24a: SUB ESP,0x8
// 0051c24d: FLD float ptr [EAX + 0x1c]
// 0051c250: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0051c253: MOV EDX,dword ptr [EAX + 0x10]
// 0051c256: PUSH EDX
// 0051c257: PUSH -0x1
// 0051c259: PUSH 0x637f92
//   XREF to: 00637f92 (DATA)
// 0051c25e: PUSH EBP
// 0051c25f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051c264: ADD ESP,0x48
// 0051c267: JMP 0x0051c1ab
//   XREF to: 0051c1ab (UNCONDITIONAL_JUMP)
