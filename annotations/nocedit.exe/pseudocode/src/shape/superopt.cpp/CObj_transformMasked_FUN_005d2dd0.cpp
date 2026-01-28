// Name: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
// Address Range: [[005d2dd0, 005d2f4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0 (CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0
          (CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot)

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
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
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
        if ((pCVar2->state_flags & flag_mask) == flag_mask) {
          dStack_44 = (pCVar2->position).x - pivot->x;
          dStack_3c = (pCVar2->position).y - pivot->y;
          dStack_34 = (pCVar2->position).z - pivot->z;
          pdVar3 = &dStack_44;
          pdVar4 = &dStack_a4;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pdVar4 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
          }
          dStack_74 = matrix->m[0].z * dStack_94 +
                      matrix->m[0].x * dStack_a4 + matrix->m[0].y * dStack_9c;
          dStack_6c = matrix->m[1].z * dStack_94 +
                      matrix->m[1].x * dStack_a4 + matrix->m[1].y * dStack_9c;
          dStack_64 = matrix->m[2].z * dStack_94 +
                      matrix->m[2].x * dStack_a4 + matrix->m[2].y * dStack_9c;
          pdVar3 = &dStack_74;
          pdVar4 = &dStack_5c;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pdVar4 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
          }
          dStack_2c = dStack_5c + pivot->x;
          dStack_24 = dStack_54 + pivot->y;
          dStack_1c = dStack_4c + pivot->z;
          pdVar3 = &dStack_2c;
          puVar5 = &uStack_8c;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          *(uint *)&(pCVar2->position).x = uStack_8c;
          *(uint *)((int)&(pCVar2->position).x + 4) = uStack_88;
          *(uint *)&(pCVar2->position).y = uStack_84;
          *(uint *)((int)&(pCVar2->position).y + 4) = uStack_80;
          *(uint *)&(pCVar2->position).z = uStack_7c;
          *(uint *)((int)&(pCVar2->position).z + 4) = uStack_78;
        }
        pCVar2 = pCVar2 + 1;
        uStack_14 = uStack_14 + 1;
      } while (uStack_14 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
