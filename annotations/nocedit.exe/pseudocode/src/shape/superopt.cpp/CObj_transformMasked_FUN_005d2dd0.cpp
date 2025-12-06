// Name: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
// Address Range: [[005d2dd0, 005d2f4a]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0(CObj * this_ptr, uint flag_mask, CMatrix3x3d * matrix, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0
          (CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot)

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
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
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
        if ((pCVar2->state_flags & flag_mask) == flag_mask) {
          dStack_3c = (pCVar2->position).x - pivot->x;
          dStack_34 = (pCVar2->position).y - pivot->y;
          dStack_2c = (pCVar2->position).z - pivot->z;
          pdVar3 = &dStack_3c;
          pdVar4 = &dStack_9c;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pdVar4 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
          }
          dStack_6c = matrix->m[0].z * dStack_8c +
                      matrix->m[0].x * dStack_9c + matrix->m[0].y * dStack_94;
          dStack_64 = matrix->m[1].z * dStack_8c +
                      matrix->m[1].x * dStack_9c + matrix->m[1].y * dStack_94;
          dStack_5c = matrix->m[2].z * dStack_8c +
                      matrix->m[2].x * dStack_9c + matrix->m[2].y * dStack_94;
          pdVar3 = &dStack_6c;
          pdVar4 = &dStack_54;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pdVar4 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
          }
          dStack_24 = dStack_54 + pivot->x;
          dStack_1c = dStack_4c + pivot->y;
          pdVar3 = &dStack_24;
          puVar5 = &uStack_84;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *(uint *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          *(uint *)&(pCVar2->position).x = uStack_84;
          *(uint *)((int)&(pCVar2->position).x + 4) = uStack_80;
          *(uint *)&(pCVar2->position).y = uStack_7c;
          *(uint *)((int)&(pCVar2->position).y + 4) = uStack_78;
          *(uint *)&(pCVar2->position).z = uStack_74;
          *(uint *)((int)&(pCVar2->position).z + 4) = uStack_70;
        }
        pCVar2 = pCVar2 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
