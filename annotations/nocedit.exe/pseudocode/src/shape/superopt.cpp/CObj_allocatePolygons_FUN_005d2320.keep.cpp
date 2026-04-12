// Name: shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320
// Address: 005d2320
// MANUAL RECONSTRUCTION
// Address Range: [[005d2320, 005d240d]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320(CObj *this_ptr,int poly_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320(CObj *this_ptr,int poly_count)

{
  CPoly *pCVar1;
  uint local_10;
  CPoly local_78;

  this_ptr->poly_count = poly_count;
  pCVar1 = (CPoly *)malloc(poly_count * 0x68);
  this_ptr->poly_array = pCVar1;
  if (pCVar1 != (CPoly *)0x0) {
    shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_78,(CObj *)0x0);
    local_10 = 0;
    if (this_ptr->poly_count != 0) {
      do {
        memcpy(&this_ptr->poly_array[local_10],&local_78,sizeof(CPoly));
        (*this_ptr->poly_array[local_10].vtable->init)(&this_ptr->poly_array[local_10],this_ptr);
        local_10 = local_10 + 1;
      } while (local_10 < (uint)this_ptr->poly_count);
    }
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78,0);
    return 1;
  }
  if (this_ptr->vertex_data != (CVert *)0x0) {
    free(this_ptr->vertex_data);
  }
  this_ptr->vertex_data = (CVert *)0x0;
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object polygons");
  this_ptr->is_valid = 0;
  return 0;
}
