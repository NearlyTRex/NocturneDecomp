// Name: core_dpart.cpp_CDemonPart_alloc_FUN_00456f60
// Address: 00456f60
// Address Range: [[00456f60, 0045705e]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00456f60(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_00456f60(CDemonPart *this_ptr)

{
  CVector3i *pCVar1;
  SSurfacePlane *pSVar2;
  byte auStack_10c [256];
  
  core_dpart_cpp_CDemonPart_free_FUN_00457060(this_ptr);
  if (this_ptr->vertex_count != 0) {
    pCVar1 = (CVector3i *)FUN_00565c50(this_ptr->vertex_count,0xc);
    this_ptr->vertex_positions = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      _sprintf(auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",this_ptr->vertex_count);
      g_INT_01cc4804 = 0x8b;
      g_CHAR_PTR_01cc4800 = "..\\core\\dpart.cpp";
      core_main_c_FUN_004c8440(auStack_10c);
    }
    pCVar1 = (CVector3i *)FUN_00565c50(this_ptr->vertex_count,0xc);
    this_ptr->vertex_normals = pCVar1;
    if (pCVar1 == (CVector3i *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\dpart.cpp";
      g_INT_01cc4804 = 0x91;
      core_main_c_FUN_004c8440("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (this_ptr->face_count != 0) {
    pSVar2 = (SSurfacePlane *)FUN_00565c50(this_ptr->face_count,0x20);
    this_ptr->face_data = pSVar2;
    if (pSVar2 == (SSurfacePlane *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\dpart.cpp";
      g_INT_01cc4804 = 0x99;
      core_main_c_FUN_004c8440("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
