// Name: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
// Address Range: [[005d2c40, 005d2dc6]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  CVert *pCVar2;
  double *pdVar3;
  double *pdVar4;
  uint *puVar5;
  byte bVar6;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  uint uStack_14;
  
  bVar6 = 0;
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uStack_14 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        dStack_8c = (pCVar2->position).x - pivot->x;
        dStack_84 = (pCVar2->position).y - pivot->y;
        dStack_7c = (pCVar2->position).z - pivot->z;
        pdVar3 = &dStack_8c;
        pdVar4 = &dStack_44;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar4 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        }
        dStack_2c = matrix->m[0].z * dStack_34 +
                    matrix->m[0].x * dStack_44 + matrix->m[0].y * dStack_3c;
        dStack_24 = matrix->m[1].z * dStack_34 +
                    matrix->m[1].x * dStack_44 + matrix->m[1].y * dStack_3c;
        dStack_1c = matrix->m[2].z * dStack_34 +
                    matrix->m[2].x * dStack_44 + matrix->m[2].y * dStack_3c;
        pdVar3 = &dStack_2c;
        pdVar4 = &dStack_a4;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar4 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
        }
        dStack_5c = dStack_a4 + pivot->x;
        dStack_54 = dStack_9c + pivot->y;
        dStack_4c = dStack_94 + pivot->z;
        pdVar3 = &dStack_5c;
        puVar5 = &uStack_74;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        *(uint *)&(pCVar2->position).x = uStack_74;
        *(uint *)((int)&(pCVar2->position).x + 4) = uStack_70;
        *(uint *)&(pCVar2->position).y = uStack_6c;
        *(uint *)((int)&(pCVar2->position).y + 4) = uStack_68;
        *(uint *)&(pCVar2->position).z = uStack_64;
        *(uint *)((int)&(pCVar2->position).z + 4) = uStack_60;
        uStack_14 = uStack_14 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uStack_14 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
