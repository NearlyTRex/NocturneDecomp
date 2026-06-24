// Name: shape_superopt.cpp_CPoly_isValid_FUN_005d1ff0
// Address: 005d1ff0
// MANUAL RECONSTRUCTION
// Address Range: [[005d1ff0, 005d2224]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_isValid_FUN_005d1ff0(CPoly *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_isValid_FUN_005d1ff0(CPoly *this_ptr)

{
  double dVar1;
  double dVar5;
  int iVar6;
  double local_e0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_68;
  double local_60;
  double local_58;
  double dVar4;
  double dVar3;
  CVert *pCVar6;
  int iVar5;
  CVert *pCVar1;
  double dVar2;
  
  iVar6 = this_ptr->vertex_idx_0;
  if (((iVar6 != this_ptr->vertex_idx_1) && (iVar5 = this_ptr->vertex_idx_2, iVar6 != iVar5)) &&
     (this_ptr->vertex_idx_1 != iVar5)) {
    pCVar6 = this_ptr->parent_obj->vertex_data;
    local_68 = pCVar6[iVar5].position.x - pCVar6[iVar6].position.x;
    local_60 = pCVar6[iVar5].position.y - pCVar6[iVar6].position.y;
    local_58 = pCVar6[iVar5].position.z - pCVar6[iVar6].position.z;
    dVar1 = 1.0 / SQRT(local_58 * local_58 + local_68 * local_68 + local_60 * local_60);
    local_b0 = local_68 * dVar1;
    local_a8 = local_60 * dVar1;
    local_a0 = local_58 * dVar1;
    pCVar1 = pCVar6 + this_ptr->vertex_idx_0;
    iVar6 = this_ptr->vertex_idx_1;
    local_c8 = pCVar6[iVar6].position.x - (pCVar1->position).x;
    local_c0 = pCVar6[iVar6].position.y - (pCVar1->position).y;
    local_b8 = pCVar6[iVar6].position.z - (pCVar1->position).z;
    dVar5 = 1.0 / SQRT(local_b8 * local_b8 + local_c8 * local_c8 + local_c0 * local_c0);
    local_98 = local_c8 * dVar5;
    local_90 = local_c0 * dVar5;
    local_88 = local_b8 * dVar5;
    local_e0 = local_68 * dVar1 * local_98 + local_60 * dVar1 * local_90 +
               local_58 * dVar1 * local_88;
    if (local_e0 < 0.0) {
      local_e0 = -local_e0;
    }
    if (local_e0 <= 0.99999998999999995) {
      (*this_ptr->vtable->computeNormal)(this_ptr);
      dVar2 = (this_ptr->normal).impl.y;
      dVar3 = (this_ptr->normal).impl.x;
      dVar4 = (this_ptr->normal).impl.z;
      dVar1 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2);
      if ((0.99999998999999995 <= dVar1) && (dVar1 <= 1.0000000099999999)) {
        return 1;
      }
    }
  }
  return 0;
}
