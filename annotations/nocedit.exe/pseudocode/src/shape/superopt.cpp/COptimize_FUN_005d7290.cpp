// Name: shape_superopt.cpp_COptimize_FUN_005d7290
// Address: 005d7290
// Address Range: [[005d7290, 005d734a]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_COptimize_FUN_005d7290(COptimize *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d7290(COptimize *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(&this_ptr->obj,this_ptr->unk1,1);
  if (iVar1 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to optimize vertices with given threshold");
    return 0;
  }
  iVar1 = shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0(&this_ptr->obj);
  if (iVar1 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to remove invalid polygons from scene");
    return 0;
  }
  iVar1 = shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(&this_ptr->obj,0);
  if (iVar1 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to remove T-Juntions from scene");
    return 0;
  }
  shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(&this_ptr->obj,0xffffffff);
  iVar1 = (*this_ptr->vtable->func12)(this_ptr);
  if (iVar1 != 0) {
    iVar1 = (*this_ptr->vtable->func14)(this_ptr);
    if (iVar1 != 0) {
      return 1;
    }
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to reduce database (convex step)");
    return 0;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to reduce database (complex step)");
  return 0;
}
