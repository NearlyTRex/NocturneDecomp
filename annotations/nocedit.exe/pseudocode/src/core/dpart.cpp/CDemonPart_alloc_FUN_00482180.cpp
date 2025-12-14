// Name: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
// Address: 00482180
// Address Range: [[00482180, 004822a0]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00482180(CDemonPart *this_ptr)

{
  CVector3i *pCVar1;
  SSurfacePlane *pSVar2;
  BADSPACEBASE *in_ESP;
  
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  if (this_ptr->vertex_count != 0) {
    pCVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,0xc,"..\\core\\dpart.cpp",0x87);
    this_ptr->vertex_positions = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffefc,"CDemonPart::alloc - Out of vertex %d memory!",this_ptr->vertex_count);
      g_CurrentLineNumber = 0x8b;
      g_CurrentFilename = "..\\core\\dpart.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff00);
    }
    pCVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,0xc,"..\\core\\dpart.cpp",0x90);
    this_ptr->vertex_normals = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 0x91;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (this_ptr->face_count != 0) {
    pSVar2 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->face_count,0x20,"..\\core\\dpart.cpp",0x98);
    this_ptr->face_data = pSVar2;
    if (pSVar2 == (SSurfacePlane *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 0x99;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
