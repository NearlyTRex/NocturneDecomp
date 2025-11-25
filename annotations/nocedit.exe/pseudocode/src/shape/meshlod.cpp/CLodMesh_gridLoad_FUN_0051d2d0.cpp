// Name: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// Address: 0051d2d0
// Address Range: [[0051d2d0, 0051d419]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh * this_ptr, FILE * file_handle)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 (0051b8a0) at 0051b8db [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00638147
//   TerminatedCString s_shape_meshlod_cpp_0063815c
//   TerminatedCString s_Out_of_memory_00638171
//   TerminatedCString s_d_00638180
//   TerminatedCString s_shape_meshlod_cpp_00638184
//   TerminatedCString s_LodMesh_gridLoad_file_is_00638199
//   TerminatedCString s_d_006381ba
//   TerminatedCString s_shape_meshlod_cpp_006381be
//   TerminatedCString s_shape_meshlod_cpp_006381d3
//   TerminatedCString s_Out_of_memory_006381e8
//   TerminatedCString s_d_006381f7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh *this_ptr,FILE *file_handle)

{
  SSpatialGrid *pSVar1;
  int *piVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  
  pSVar1 = (SSpatialGrid *)
           shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_ptr,0x4004,"..\\shape\\meshlod.cpp",0x146f);
  this_ptr->spatial_grid_ptr = pSVar1;
  if (pSVar1 == (SSpatialGrid *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1470;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&stack0xfffffff4);
  if (unaff_ESI != 0x10) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1474;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::gridLoad - file is old!");
  }
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 4;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  } while (iVar3 != 0x4004);
  piVar2 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                            (this_ptr->spatial_grid_data,
                             this_ptr->spatial_grid_ptr->triangle_count << 2,
                             "..\\shape\\meshlod.cpp",0x147a);
  this_ptr->spatial_grid_data = piVar2;
  if (piVar2 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x147b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  for (iVar3 = 0; iVar3 < this_ptr->spatial_grid_ptr->triangle_count; iVar3 = iVar3 + 1) {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  return;
}


// Assembly code:
// 0051d2d0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// 0051d2d1: PUSH ESI
// 0051d2d2: PUSH EDI
// 0051d2d3: PUSH EBP
// 0051d2d4: SUB ESP,0x4
// 0051d2d7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0051d2db: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0051d2df: PUSH 0x146f
// 0051d2e4: PUSH 0x638147
//   XREF to: 00638147 (DATA)
// 0051d2e9: PUSH 0x4004
// 0051d2ee: MOV EDX,dword ptr [ESI + 0x54]
// 0051d2f1: PUSH EDX
// 0051d2f2: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0051d2f7: ADD ESP,0x10
// 0051d2fa: MOV dword ptr [ESI + 0x54],EAX
// 0051d2fd: TEST EAX,EAX
// 0051d2ff: JZ 0x0051d386
//   XREF to: 0051d386 (CONDITIONAL_JUMP)
// 0051d305: MOV EAX,ESP
//   Label: LAB_0051d305
// 0051d307: PUSH EAX
// 0051d308: PUSH 0x638180
//   XREF to: 00638180 (DATA)
// 0051d30d: PUSH EBP
// 0051d30e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051d313: ADD ESP,0xc
// 0051d316: CMP dword ptr [ESP],0x10
//   XREF to: Stack[-0x14] (DATA)
// 0051d31a: JNZ 0x0051d3ae
//   XREF to: 0051d3ae (CONDITIONAL_JUMP)
// 0051d320: XOR EBX,EBX
//   Label: LAB_0051d320
// 0051d322: MOV EAX,dword ptr [ESI + 0x54]
//   Label: LAB_0051d322
// 0051d325: ADD EAX,EBX
// 0051d327: PUSH EAX
// 0051d328: PUSH 0x6381ba
//   XREF to: 006381ba (DATA)
// 0051d32d: PUSH EBP
// 0051d32e: ADD EBX,0x4
// 0051d331: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051d336: ADD ESP,0xc
// 0051d339: CMP EBX,0x4004
// 0051d33f: JNZ 0x0051d322
//   XREF to: 0051d322 (CONDITIONAL_JUMP)
// 0051d341: MOV EAX,dword ptr [ESI + 0x54]
// 0051d344: PUSH 0x147a
// 0051d349: MOV EAX,dword ptr [EAX + 0x4000]
// 0051d34f: PUSH 0x6381be
//   XREF to: 006381be (DATA)
// 0051d354: SHL EAX,0x2
// 0051d357: PUSH EAX
// 0051d358: MOV EBX,dword ptr [ESI + 0x58]
// 0051d35b: PUSH EBX
// 0051d35c: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0051d361: ADD ESP,0x10
// 0051d364: MOV dword ptr [ESI + 0x58],EAX
// 0051d367: TEST EAX,EAX
// 0051d369: JZ 0x0051d3d6
//   XREF to: 0051d3d6 (CONDITIONAL_JUMP)
// 0051d36b: XOR EBX,EBX
//   Label: LAB_0051d36b
// 0051d36d: XOR EDI,EDI
// 0051d36f: MOV EAX,dword ptr [ESI + 0x54]
//   Label: LAB_0051d36f
// 0051d372: CMP EDI,dword ptr [EAX + 0x4000]
// 0051d378: JL 0x0051d3fd
//   XREF to: 0051d3fd (CONDITIONAL_JUMP)
// 0051d37e: ADD ESP,0x4
// 0051d381: POP EBP
// 0051d382: POP EDI
// 0051d383: POP ESI
// 0051d384: POP EBX
// 0051d385: RET
// 0051d386: MOV EBX,0x63815c
//   Label: LAB_0051d386
//   XREF to: 0063815c (DATA)
// 0051d38b: MOV EDI,0x1470
// 0051d390: PUSH 0x638171
//   XREF to: 00638171 (DATA)
// 0051d395: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0051d39b: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051d3a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d3a6: ADD ESP,0x4
// 0051d3a9: JMP 0x0051d305
//   XREF to: 0051d305 (UNCONDITIONAL_JUMP)
// 0051d3ae: MOV EDX,0x638184
//   Label: LAB_0051d3ae
//   XREF to: 00638184 (DATA)
// 0051d3b3: MOV ECX,0x1474
// 0051d3b8: PUSH 0x638199
//   XREF to: 00638199 (DATA)
// 0051d3bd: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051d3c3: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0051d3c9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d3ce: ADD ESP,0x4
// 0051d3d1: JMP 0x0051d320
//   XREF to: 0051d320 (UNCONDITIONAL_JUMP)
// 0051d3d6: MOV EAX,0x6381d3
//   Label: LAB_0051d3d6
//   XREF to: 006381d3 (DATA)
// 0051d3db: MOV EDX,0x147b
// 0051d3e0: PUSH 0x6381e8
//   XREF to: 006381e8 (DATA)
// 0051d3e5: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0051d3ea: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0051d3f0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d3f5: ADD ESP,0x4
// 0051d3f8: JMP 0x0051d36b
//   XREF to: 0051d36b (UNCONDITIONAL_JUMP)
// 0051d3fd: MOV EAX,dword ptr [ESI + 0x58]
//   Label: LAB_0051d3fd
// 0051d400: ADD EAX,EBX
// 0051d402: PUSH EAX
// 0051d403: PUSH 0x6381f7
//   XREF to: 006381f7 (DATA)
// 0051d408: PUSH EBP
// 0051d409: INC EDI
// 0051d40a: ADD EBX,0x4
// 0051d40d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051d412: ADD ESP,0xc
// 0051d415: JMP 0x0051d36f
//   XREF to: 0051d36f (UNCONDITIONAL_JUMP)
