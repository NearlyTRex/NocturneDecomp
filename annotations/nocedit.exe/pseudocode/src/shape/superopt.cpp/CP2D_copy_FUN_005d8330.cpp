// Name: shape_superopt.cpp_CP2D_copy_FUN_005d8330
// Address: 005d8330
// Address Range: [[005d8330, 005d834e]]
// Convention: __cdecl
// Signature: CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *dst,CP2D *src)

#include "nocturne.h"

CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *dst,CP2D *src)

{
  *(uint *)&(dst->impl).x = *(uint *)&(src->impl).x;
  *(uint *)((int)&(dst->impl).x + 4) = *(uint *)((int)&(src->impl).x + 4);
  *(uint *)&(dst->impl).y = *(uint *)&(src->impl).y;
  *(uint *)((int)&(dst->impl).y + 4) = *(uint *)((int)&(src->impl).y + 4);
  return dst;
}
