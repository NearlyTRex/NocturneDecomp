// Name: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
// MANUAL RECONSTRUCTION
// Address Range: [[005d2dd0, 005d2f4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0(CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0(CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  CVert *pCVar2;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  uint uStack_18;

  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uStack_18 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        if ((pCVar2->state_flags & flag_mask) == flag_mask) {
          dStack_48 = (pCVar2->position).x - pivot->x;
          dStack_40 = (pCVar2->position).y - pivot->y;
          dStack_38 = (pCVar2->position).z - pivot->z;
          dStack_30 = matrix->m[0].z * dStack_38 +
                      matrix->m[0].x * dStack_48 + matrix->m[0].y * dStack_40 + pivot->x;
          dStack_28 = matrix->m[1].z * dStack_38 +
                      matrix->m[1].x * dStack_48 + matrix->m[1].y * dStack_40 + pivot->y;
          dStack_20 = matrix->m[2].z * dStack_38 +
                      matrix->m[2].x * dStack_48 + matrix->m[2].y * dStack_40 + pivot->z;
          (pCVar2->position).x = dStack_30;
          (pCVar2->position).y = dStack_28;
          (pCVar2->position).z = dStack_20;
        }
        pCVar2 = pCVar2 + 1;
        uStack_18 = uStack_18 + 1;
      } while (uStack_18 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
