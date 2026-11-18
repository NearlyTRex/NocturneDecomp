// Name: core_dpart.cpp_CDemonPart_alloc_FUN_004662b0
// Address: 004662b0
// Address Range: [[004662b0, 004663ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_004662b0(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_004662b0(CDemonPart *this_ptr)

{
  CVector3i *pCVar1;
  SSurfacePlane *pSVar2;
  char acStack_108 [252];
  
  core_dpart_cpp_CDemonPart_free_FUN_004663b0(this_ptr);
  if (this_ptr->vertex_count != 0) {
    pCVar1 = (CVector3i *)calloc(this_ptr->vertex_count,0xc);
    this_ptr->vertex_positions = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      _sprintf(acStack_108,"CDemonPart::alloc - Out of vertex %d memory!");
      g_INT_01d71de4 = 0x8b;
      g_CHAR_PTR_01d71de0 = "..\\core\\dpart.cpp";
      core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_108);
    }
    pCVar1 = (CVector3i *)calloc(this_ptr->vertex_count,0xc);
    this_ptr->vertex_normals = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      g_CHAR_PTR_01d71de0 = "..\\core\\dpart.cpp";
      g_INT_01d71de4 = 0x91;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (this_ptr->face_count != 0) {
    pSVar2 = (SSurfacePlane *)calloc(this_ptr->face_count,0x20);
    this_ptr->face_data = pSVar2;
    if (pSVar2 == (SSurfacePlane *)0x0) {
      g_CHAR_PTR_01d71de0 = "..\\core\\dpart.cpp";
      g_INT_01d71de4 = 0x99;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
