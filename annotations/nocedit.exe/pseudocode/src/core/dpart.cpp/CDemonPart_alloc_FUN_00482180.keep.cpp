// Name: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
// Address: 00482180
// MANUAL RECONSTRUCTION
// Address Range: [[00482180, 004822a0]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00482180(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00482180(CDemonPart *this_ptr)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  SSurfacePlane *pSVar2;
  char local_10c [256];
  
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  if (this_ptr->vertex_count != 0) {
    pCVar1 = (CVector3i *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,sizeof(CVector3i),"..\\core\\dpart.cpp",135);
    this_ptr->vertex_positions = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      _sprintf(local_10c,"CDemonPart::alloc - Out of vertex %d memory!",this_ptr->vertex_count);
      g_CurrentLineNumber = 139;
      g_CurrentFilename = "..\\core\\dpart.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_10c);
    }
    pCVar2 = (CVector3i *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->vertex_count,sizeof(CVector3i),"..\\core\\dpart.cpp",144);
    this_ptr->vertex_normals = pCVar2;
    if (pCVar2 == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 145;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (this_ptr->face_count != 0) {
    pSVar2 = (SSurfacePlane *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (this_ptr->face_count,sizeof(SSurfacePlane),"..\\core\\dpart.cpp",152);
    this_ptr->face_data = pSVar2;
    if (pSVar2 == (SSurfacePlane *)0x0) {
      g_CurrentFilename = "..\\core\\dpart.cpp";
      g_CurrentLineNumber = 153;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
