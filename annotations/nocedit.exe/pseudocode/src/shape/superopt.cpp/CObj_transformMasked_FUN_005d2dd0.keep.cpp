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
  double *pdVar3;
  double *pdVar4;
  uint *puVar5;
  byte bVar6;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  uint uStack_18;
  
  bVar6 = 0;
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
          memcpy(&dStack_a8,&dStack_48,0x18);
          dStack_78 = matrix->m[0].z * dStack_98 +
                      matrix->m[0].x * dStack_a8 + matrix->m[0].y * dStack_a0;
          dStack_70 = matrix->m[1].z * dStack_98 +
                      matrix->m[1].x * dStack_a8 + matrix->m[1].y * dStack_a0;
          dStack_68 = matrix->m[2].z * dStack_98 +
                      matrix->m[2].x * dStack_a8 + matrix->m[2].y * dStack_a0;
          memcpy(&dStack_60,&dStack_78,0x18);
          dStack_30 = dStack_60 + pivot->x;
          dStack_28 = dStack_58 + pivot->y;
          dStack_20 = dStack_50 + pivot->z;
          memcpy(&uStack_90,&dStack_30,0x18);
          *(uint *)&(pCVar2->position).x = uStack_90;
          *(uint *)((int)&(pCVar2->position).x + 4) = uStack_8c;
          *(uint *)&(pCVar2->position).y = uStack_88;
          *(uint *)((int)&(pCVar2->position).y + 4) = uStack_84;
          *(uint *)&(pCVar2->position).z = uStack_80;
          *(uint *)((int)&(pCVar2->position).z + 4) = uStack_7c;
        }
        pCVar2 = pCVar2 + 1;
        uStack_18 = uStack_18 + 1;
      } while (uStack_18 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
