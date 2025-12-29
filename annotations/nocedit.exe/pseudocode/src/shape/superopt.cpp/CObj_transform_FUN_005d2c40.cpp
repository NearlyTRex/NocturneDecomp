// Name: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
// Address Range: [[005d2c40, 005d2dc6]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_transform_FUN_005d2c40(CObj * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  CVert *pCVar2;
  BADSPACEBASE *in_ESP;
  double *pdVar3;
  double *pdVar4;
  uint *puVar5;
  byte bVar6;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  uint uVar7;
  
  bVar6 = 0;
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uVar7 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        dStack_84 = (pCVar2->position).x - pivot->x;
        dStack_7c = (pCVar2->position).y - pivot->y;
        dStack_74 = (pCVar2->position).z - pivot->z;
        pdVar3 = &dStack_84;
        pdVar4 = &dStack_3c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar4 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        }
        dStack_24 = matrix->m[0].z * dStack_2c +
                    matrix->m[0].x * dStack_3c + matrix->m[0].y * dStack_34;
        dStack_1c = matrix->m[1].z * dStack_2c +
                    matrix->m[1].x * dStack_3c + matrix->m[1].y * dStack_34;
        pdVar3 = &dStack_24;
        pdVar4 = &dStack_9c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar4 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
        }
        dStack_54 = dStack_9c + pivot->x;
        dStack_4c = dStack_94 + pivot->y;
        dStack_44 = dStack_8c + pivot->z;
        pdVar3 = &dStack_54;
        puVar5 = &uStack_6c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *(uint *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        *(uint *)&(pCVar2->position).x = uStack_6c;
        *(uint *)((int)&(pCVar2->position).x + 4) = uStack_68;
        *(uint *)&(pCVar2->position).y = uStack_64;
        *(uint *)((int)&(pCVar2->position).y + 4) = uStack_60;
        *(uint *)&(pCVar2->position).z = uStack_5c;
        *(uint *)((int)&(pCVar2->position).z + 4) = uStack_58;
        uVar7 = uVar7 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uVar7 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
