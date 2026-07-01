// Name: shape_superopt.cpp_CObj_addPolygons_FUN_005d2410
// Address: 005d2410
// MANUAL RECONSTRUCTION
// Address Range: [[005d2410, 005d24fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_addPolygons_FUN_005d2410(CObj *this_ptr,int add_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_addPolygons_FUN_005d2410(CObj *this_ptr,int add_count)

{
  CPoly *pCVar1;
  uint uVar4;
  uint local_10;
  CPoly local_78;

  pCVar1 = (CPoly *)realloc
                     (this_ptr->poly_array,(this_ptr->poly_count + add_count) * sizeof(CPoly));
  if (pCVar1 != (CPoly *)0x0) {
    this_ptr->poly_array = pCVar1;
    shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_78,(CObj *)0x0);
    local_10 = this_ptr->poly_count;
    for (; uVar4 = this_ptr->poly_count + add_count, local_10 < uVar4; local_10 = local_10 + 1) {
      memcpy(&this_ptr->poly_array[local_10],&local_78,sizeof(CPoly));
      (*this_ptr->poly_array[local_10].vtable->init)(&this_ptr->poly_array[local_10],this_ptr);
    }
    this_ptr->poly_count = uVar4;
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78,0);
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
  return 0;
}
