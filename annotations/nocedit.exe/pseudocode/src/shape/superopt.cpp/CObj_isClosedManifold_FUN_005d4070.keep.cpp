// Name: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// Address: 005d4070
// MANUAL RECONSTRUCTION
// Address Range: [[005d4070, 005d4101]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  uint local_18;

  local_18 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar4 = 0;
      iVar2 = 0;
      if (this_ptr->poly_count != 0) {
        do {
          iVar1 = (*this_ptr->poly_array[uVar4].vtable->hasSharedEdge)
                            (&this_ptr->poly_array[uVar4],&this_ptr->poly_array[local_18]);
          if ((iVar1 != 0) && (iVar2 = iVar2 + 1, iVar2 == 3)) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)this_ptr->poly_count);
      }
      if (iVar2 != 3) {
        return 0;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)this_ptr->poly_count);
  }
  return 1;
}
