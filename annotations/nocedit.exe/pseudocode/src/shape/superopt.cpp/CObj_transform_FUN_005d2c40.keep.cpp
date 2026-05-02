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
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  double dStack_60;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  uint uStack_18;
  byte bVar6;
  double dStack_88;
  double dStack_80;
  double dStack_58;
  double dStack_50;
  double dStack_28;
  double dStack_20;
  
  bVar6 = 0;
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uStack_18 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        dStack_90 = (pCVar2->position).x - pivot->x;
        dStack_88 = (pCVar2->position).y - pivot->y;
        dStack_80 = (pCVar2->position).z - pivot->z;
        memcpy(&dStack_48,&dStack_90,0x18);
        dStack_30 = matrix->m[0].z * dStack_38 +
                    matrix->m[0].x * dStack_48 + matrix->m[0].y * dStack_40;
        dStack_28 = matrix->m[1].z * dStack_38 +
                    matrix->m[1].x * dStack_48 + matrix->m[1].y * dStack_40;
        dStack_20 = matrix->m[2].z * dStack_38 +
                    matrix->m[2].x * dStack_48 + matrix->m[2].y * dStack_40;
        memcpy(&dStack_a8,&dStack_30,0x18);
        dStack_60 = dStack_a8 + pivot->x;
        dStack_58 = dStack_a0 + pivot->y;
        dStack_50 = dStack_98 + pivot->z;
        memcpy(&uStack_78,&dStack_60,0x18);
        *(uint *)&(pCVar2->position).x = uStack_78;
        *(uint *)((int)&(pCVar2->position).x + 4) = uStack_74;
        *(uint *)&(pCVar2->position).y = uStack_70;
        *(uint *)((int)&(pCVar2->position).y + 4) = uStack_6c;
        *(uint *)&(pCVar2->position).z = uStack_68;
        *(uint *)((int)&(pCVar2->position).z + 4) = uStack_64;
        uStack_18 = uStack_18 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uStack_18 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
