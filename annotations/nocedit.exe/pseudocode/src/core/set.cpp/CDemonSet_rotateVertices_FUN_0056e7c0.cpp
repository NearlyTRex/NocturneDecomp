// Name: core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
// Address: 0056e7c0
// Address Range: [[0056e7c0, 0056e88a]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
// Cross-references:
//   core_bodypart.cpp_FUN_00419340 (00419340) at 00419360 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 0042111b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bb04 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b15f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 (004778d0) at 00477905 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 0048290f [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 (004e9e90) at 004e9f71 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 (004e9930) at 004e9a1f [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 (004e9af0) at 004e9bce [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20 (0059ab20) at 0059ab3f [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb385 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645e93
//   TerminatedCString s_CDemonSet_rotateVerticie_00645ea3
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056e5d0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
          (CDemonSet *this_ptr,int vertex_count,int *input_vertices)

{
  CVector3i *input;
  SRenderVertex *output;
  int iVar1;
  int in_stack_00000010;
  int iVar2;
  
  if (20000 < vertex_count) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xd94;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  iVar1 = 0;
  iVar2 = 0;
  output = g_CDemonRendererPtr->vertex_buffer_ptr;
  input = (CVector3i *)input_vertices;
  if (0 < in_stack_00000010) {
    do {
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < in_stack_00000010);
  }
  if (iVar2 == in_stack_00000010) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,0);
  }
  core_set_cpp_CDemonSet_FUN_0056e5d0((CDemonSet *)input_vertices);
  return;
}


// Assembly code:
// 0056e7c0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
// 0056e7c1: PUSH ESI
// 0056e7c2: PUSH EDI
// 0056e7c3: PUSH EBP
// 0056e7c4: SUB ESP,0x4
// 0056e7c7: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0056e7cb: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0056e7cf: CMP EDX,0x4e20
// 0056e7d5: JG 0x0056e84a
//   XREF to: 0056e84a (CONDITIONAL_JUMP)
// 0056e7db: PUSH 0x1
//   Label: LAB_0056e7db
// 0056e7dd: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056e7e3: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0056e7e4: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056e7e9: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056e7ef: ADD ESP,0x8
// 0056e7f2: XOR EAX,EAX
// 0056e7f4: XOR EDI,EDI
// 0056e7f6: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0056e7fa: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0056e7fd: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0056e7ff: TEST EDX,EDX
// 0056e801: JLE 0x0056e827
//   XREF to: 0056e827 (CONDITIONAL_JUMP)
// 0056e803: PUSH EBP
//   Label: LAB_0056e803
// 0056e804: PUSH ESI
// 0056e805: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0056e80a: MOV AH,byte ptr [ESI + 0x13]
// 0056e80d: ADD ESP,0x8
// 0056e810: TEST AH,0x80
// 0056e813: JNZ 0x0056e818
//   XREF to: 0056e818 (CONDITIONAL_JUMP)
// 0056e815: INC dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0056e818: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_0056e818
//   XREF to: Stack[0x8] (READ)
// 0056e81c: ADD ESI,0x30
// 0056e81f: INC EDI
// 0056e820: ADD EBP,0xc
// 0056e823: CMP EDI,ECX
// 0056e825: JL 0x0056e803
//   XREF to: 0056e803 (CONDITIONAL_JUMP)
// 0056e827: MOV ESI,dword ptr [ESP]
//   Label: LAB_0056e827
//   XREF to: Stack[-0x14] (DATA)
// 0056e82a: CMP ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0056e82e: JZ 0x0056e878
//   XREF to: 0056e878 (CONDITIONAL_JUMP)
// 0056e830: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_0056e830
//   XREF to: Stack[0x8] (READ)
// 0056e834: PUSH EDX
// 0056e835: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0056e839: PUSH ECX
// 0056e83a: CALL core_set.cpp_CDemonSet_FUN_0056e5d0
//   XREF to: 0056e5d0 (UNCONDITIONAL_CALL)
// 0056e83f: ADD ESP,0x8
// 0056e842: ADD ESP,0x4
// 0056e845: POP EBP
// 0056e846: POP EDI
// 0056e847: POP ESI
// 0056e848: POP EBX
// 0056e849: RET
// 0056e84a: PUSH 0x4e20
//   Label: LAB_0056e84a
// 0056e84f: PUSH EDX
// 0056e850: MOV ECX,0x645e93
//   XREF to: 00645e93 (PARAM)
// 0056e855: MOV EBX,0xd94
// 0056e85a: PUSH 0x645ea3
//   XREF to: 00645ea3 (DATA)
// 0056e85f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056e865: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0056e86b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056e870: ADD ESP,0xc
// 0056e873: JMP 0x0056e7db
//   XREF to: 0056e7db (UNCONDITIONAL_JUMP)
// 0056e878: PUSH 0x0
//   Label: LAB_0056e878
// 0056e87a: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056e880: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0056e881: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056e886: ADD ESP,0x8
// 0056e889: JMP 0x0056e830
//   XREF to: 0056e830 (UNCONDITIONAL_JUMP)
