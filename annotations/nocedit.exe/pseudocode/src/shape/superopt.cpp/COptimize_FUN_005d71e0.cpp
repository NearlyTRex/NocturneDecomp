// Name: shape_superopt.cpp_COptimize_FUN_005d71e0
// Address: 005d71e0
// Address Range: [[005d71e0, 005d7284]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_COptimize_FUN_005d71e0(COptimize *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d71e0(COptimize *this_ptr)

{
  int iVar1;
  int iVar2;
  CObj *dest_obj;
  CObj *in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000008 != (CObj *)0x0) && (in_stack_0000000c != 0)) {
    iVar1 = shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(&this_ptr->obj,in_stack_00000008);
    if (iVar1 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to copy object for optimize");
      return 0;
    }
    iVar1 = 1;
    if (1 < in_stack_0000000c) {
      dest_obj = in_stack_00000008 + 1;
      do {
        iVar2 = shape_superopt_cpp_CObj_appendTo_FUN_005d2720(&this_ptr->obj,dest_obj);
        if (iVar2 == 0) {
          shape_superopt_cpp_logToFile_FUN_005c7910("Unable to copy merge with object %d for optimize",iVar1);
          return 0;
        }
        dest_obj = dest_obj + 1;
        iVar1 = iVar1 + 1;
      } while (dest_obj < in_stack_00000008 + in_stack_0000000c);
    }
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Invalid inputs to setGeometry");
  return 0;
}
