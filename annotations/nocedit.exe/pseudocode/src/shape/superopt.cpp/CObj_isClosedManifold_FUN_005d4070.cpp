// Name: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// Address: 005d4070
// Address Range: [[005d4070, 005d4101]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  
  local_18 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar4 = 0;
      iVar2 = 0;
      if (this_ptr->poly_count != 0) {
        iVar3 = 0;
        do {
          iVar1 = (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar3 + 4) +
                              0x70))();
          if ((iVar1 != 0) && (iVar2 = iVar2 + 1, iVar2 == 3)) break;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x68;
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
