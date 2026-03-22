// Name: shape_superopt.cpp_CP2D_add_FUN_005d8390
// Address: 005d8390
// Address Range: [[005d8390, 005d83c3] [00604e82, 00604ea4]]
// Convention: __stack2_esi
// Signature: CP2D * __stack2_esi shape_superopt_cpp_CP2D_add_FUN_005d8390(CP2D *this_ptr,CP2D *a,CP2D *b)

#include "nocturne.h"

CP2D * __stack2_esi shape_superopt_cpp_CP2D_add_FUN_005d8390(CP2D *this_ptr,CP2D *a,CP2D *b)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this_ptr->impl).y;
  dVar2 = (a->impl).y;
  (b->impl).x = (this_ptr->impl).x + (a->impl).x;
  (b->impl).y = dVar1 + dVar2;
  return b;
}
