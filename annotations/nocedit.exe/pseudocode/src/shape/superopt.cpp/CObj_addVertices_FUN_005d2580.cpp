// Name: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
// Address: 005d2580
// Address Range: [[005d2580, 005d25f8]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_addVertices_FUN_005d2580(CObj *this_ptr,int add_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_addVertices_FUN_005d2580(CObj *this_ptr,int add_count)

{
  CVert *pCVar1;
  
  pCVar1 = crt_memory_c_realloc_FUN_00601df0
                     (this_ptr->vertex_data,(this_ptr->vertex_count + add_count) * 0x38);
  if (pCVar1 != (CVert *)0x0) {
    this_ptr->vertex_data = pCVar1;
    crt_memory_c_memset_FUN_005fde40
              (this_ptr->vertex_data + this_ptr->vertex_count,0,add_count * 0x38);
    this_ptr->vertex_count = this_ptr->vertex_count + add_count;
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add verts to object");
  return 0;
}
