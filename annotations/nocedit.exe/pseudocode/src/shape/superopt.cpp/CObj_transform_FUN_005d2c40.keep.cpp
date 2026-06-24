// Name: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
// MANUAL RECONSTRUCTION
// Address Range: [[005d2c40, 005d2dc6]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  CVert *pCVar2;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  uint uStack_18;

  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uStack_18 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        dStack_90 = (pCVar2->position).x - pivot->x;
        dStack_88 = (pCVar2->position).y - pivot->y;
        dStack_80 = (pCVar2->position).z - pivot->z;
        dStack_60 = matrix->m[0].z * dStack_80 +
                    matrix->m[0].x * dStack_90 + matrix->m[0].y * dStack_88 + pivot->x;
        dStack_58 = matrix->m[1].z * dStack_80 +
                    matrix->m[1].x * dStack_90 + matrix->m[1].y * dStack_88 + pivot->y;
        dStack_50 = matrix->m[2].z * dStack_80 +
                    matrix->m[2].x * dStack_90 + matrix->m[2].y * dStack_88 + pivot->z;
        (pCVar2->position).x = dStack_60;
        (pCVar2->position).y = dStack_58;
        (pCVar2->position).z = dStack_50;
        uStack_18 = uStack_18 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uStack_18 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
