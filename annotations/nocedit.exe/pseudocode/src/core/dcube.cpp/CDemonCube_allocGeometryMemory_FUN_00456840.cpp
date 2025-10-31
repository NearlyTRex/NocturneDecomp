// Name: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
// Address: 00456840
// Address Range: [[00456840, 004569ae]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr)
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData (00456ed0) at 00456f53 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (004570a0) at 004572dc [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_load_FUN_00457530 (00457530) at 004575f3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcube_cpp_0061a5be
//   TerminatedCString s_core_dcube_cpp_0061a5d0
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a5e2
//   TerminatedCString s_core_dcube_cpp_0061a611
//   TerminatedCString s_core_dcube_cpp_0061a623
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a635
//   TerminatedCString s_core_dcube_cpp_0061a661
//   TerminatedCString s_core_dcube_cpp_0061a673
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a685
//   TerminatedCString s_core_dcube_cpp_0061a6b9
//   TerminatedCString s_core_dcube_cpp_0061a6cb
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a6dd
//   TerminatedCString s_core_dcube_cpp_0061a70b
//   TerminatedCString s_core_dcube_cpp_0061a71d
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a72f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: this_ptr */

void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CDemonCubeTriangle *pCVar4;
  void *pvVar5;
  SVoxelGrid *pSVar6;
  
  fVar1 = (float)this_ptr->vertex_count;
  pCVar2 = (CVector3f *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\dcube.cpp",0x5ff);
  pCVar3 = pCVar2;
  if (pCVar2 != (CVector3f *)0x0) {
    pCVar3 = (CVector3f *)&pCVar2->y;
    pCVar2->x = fVar1;
  }
  this_ptr->vertex_buffer = pCVar3;
  if (pCVar3 == (CVector3f *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x600;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of vertex memory");
  }
  pCVar4 = (CDemonCubeTriangle *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (this_ptr->triangle_count << 5,"..\\core\\dcube.cpp",0x601);
  this_ptr->triangle_buffer = pCVar4;
  if (pCVar4 == (CDemonCubeTriangle *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x602;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of tri memory");
  }
  pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->triangle_count,"..\\core\\dcube.cpp",0x603);
  this_ptr->ground_type_memory = pvVar5;
  if (pvVar5 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x604;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of ground type memory");
  }
  pSVar6 = (SVoxelGrid *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x40,"..\\core\\dcube.cpp",0x605);
  this_ptr->voxel_buffer1 = pSVar6;
  if (pSVar6 == (SVoxelGrid *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x606;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar6 = (SVoxelGrid *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x40,"..\\core\\dcube.cpp",0x607);
  this_ptr->voxel_buffer2 = pSVar6;
  if (pSVar6 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dcube.cpp";
  g_CurrentLineNumber = 0x608;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  return;
}


// Assembly code:
// 00456840: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
// 00456841: PUSH ESI
// 00456842: PUSH EBP
// 00456843: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00456847: MOV ESI,dword ptr [EBX + 0x20]
// 0045684a: LEA EAX,[ESI*0x4 + 0x0]
// 00456851: SUB EAX,ESI
// 00456853: PUSH 0x5ff
// 00456858: SHL EAX,0x2
// 0045685b: PUSH 0x61a5be
//   XREF to: 0061a5be (DATA)
// 00456860: ADD EAX,0x4
// 00456863: PUSH EAX
// 00456864: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00456869: ADD ESP,0xc
// 0045686c: TEST EAX,EAX
// 0045686e: JNZ 0x0045697d
//   XREF to: 0045697d (CONDITIONAL_JUMP)
// 00456874: MOV dword ptr [EBX + 0x24],EAX
//   Label: LAB_00456874
// 00456877: TEST EAX,EAX
// 00456879: JNZ 0x0045689e
//   XREF to: 0045689e (CONDITIONAL_JUMP)
// 0045687b: MOV ECX,0x61a5d0
//   XREF to: 0061a5d0 (PARAM)
// 00456880: MOV ESI,0x600
// 00456885: PUSH 0x61a5e2
//   XREF to: 0061a5e2 (DATA)
// 0045688a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00456890: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00456896: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045689b: ADD ESP,0x4
// 0045689e: PUSH 0x601
//   Label: LAB_0045689e
// 004568a3: MOV EAX,dword ptr [EBX + 0x28]
// 004568a6: PUSH 0x61a611
//   XREF to: 0061a611 (DATA)
// 004568ab: SHL EAX,0x5
// 004568ae: PUSH EAX
// 004568af: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004568b4: ADD ESP,0xc
// 004568b7: MOV dword ptr [EBX + 0x2c],EAX
// 004568ba: TEST EAX,EAX
// 004568bc: JNZ 0x004568e0
//   XREF to: 004568e0 (CONDITIONAL_JUMP)
// 004568be: MOV EBP,0x61a623
//   XREF to: 0061a623 (DATA)
// 004568c3: MOV EAX,0x602
// 004568c8: PUSH 0x61a635
//   XREF to: 0061a635 (DATA)
// 004568cd: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004568d3: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004568d8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004568dd: ADD ESP,0x4
// 004568e0: PUSH 0x603
//   Label: LAB_004568e0
// 004568e5: PUSH 0x61a661
//   XREF to: 0061a661 (DATA)
// 004568ea: MOV EDX,dword ptr [EBX + 0x28]
// 004568ed: PUSH EDX
// 004568ee: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004568f3: ADD ESP,0xc
// 004568f6: MOV dword ptr [EBX + 0x30],EAX
// 004568f9: TEST EAX,EAX
// 004568fb: JNZ 0x00456922
//   XREF to: 00456922 (CONDITIONAL_JUMP)
// 004568fd: PUSH EDI
// 004568fe: MOV ESI,0x61a673
//   XREF to: 0061a673 (DATA)
// 00456903: MOV EDI,0x604
// 00456908: PUSH 0x61a685
//   XREF to: 0061a685 (DATA)
// 0045690d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00456913: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00456919: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045691e: ADD ESP,0x4
// 00456921: POP EDI
// 00456922: PUSH 0x605
//   Label: LAB_00456922
// 00456927: PUSH 0x61a6b9
//   XREF to: 0061a6b9 (DATA)
// 0045692c: PUSH 0x40
// 0045692e: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00456933: ADD ESP,0xc
// 00456936: MOV dword ptr [EBX],EAX
// 00456938: TEST EAX,EAX
// 0045693a: JNZ 0x0045695e
//   XREF to: 0045695e (CONDITIONAL_JUMP)
// 0045693c: MOV EAX,0x61a6cb
//   XREF to: 0061a6cb (PARAM)
// 00456941: MOV EDX,0x606
// 00456946: PUSH 0x61a6dd
//   XREF to: 0061a6dd (DATA)
// 0045694b: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00456950: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00456956: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045695b: ADD ESP,0x4
// 0045695e: PUSH 0x607
//   Label: LAB_0045695e
// 00456963: PUSH 0x61a70b
//   XREF to: 0061a70b (DATA)
// 00456968: PUSH 0x40
// 0045696a: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0045696f: ADD ESP,0xc
// 00456972: MOV dword ptr [EBX + 0x4],EAX
// 00456975: TEST EAX,EAX
// 00456977: JZ 0x00456988
//   XREF to: 00456988 (CONDITIONAL_JUMP)
// 00456979: POP EBP
// 0045697a: POP ESI
// 0045697b: POP EBX
// 0045697c: RET
// 0045697d: ADD EAX,0x4
//   Label: LAB_0045697d
// 00456980: MOV dword ptr [EAX + -0x4],ESI
// 00456983: JMP 0x00456874
//   XREF to: 00456874 (UNCONDITIONAL_JUMP)
// 00456988: MOV EBX,0x61a71d
//   Label: LAB_00456988
//   XREF to: 0061a71d (PARAM)
// 0045698d: MOV ESI,0x608
// 00456992: PUSH 0x61a72f
//   XREF to: 0061a72f (DATA)
// 00456997: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0045699d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004569a3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004569a8: ADD ESP,0x4
// 004569ab: POP EBP
// 004569ac: POP ESI
// 004569ad: POP EBX
// 004569ae: RET
