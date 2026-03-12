// Name: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
// Address Range: [[005d2940, 005d2ab6]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  int iVar4;
  int iVar1;
  CVert *pCVar5;
  double *pdVar2;
  double *pdVar6;
  double *pdVar3;
  double *pdVar7;
  uint *puVar8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  uint local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  double dVar3;
  double dVar2;
  double dVar1;
  
  local_18 = 0;
  pCVar5 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      local_90 = *(uint *)&scale->x;
      dVar1 = scale->x;
      uStack_8c = *(uint *)((int)&scale->x + 4);
      local_88 = *(uint *)&scale->y;
      dVar2 = scale->y;
      uStack_84 = *(uint *)((int)&scale->y + 4);
      local_78 = (pCVar5->position).x - pivot->x;
      local_70 = (pCVar5->position).y - pivot->y;
      local_80 = *(uint *)&scale->z;
      local_68 = (pCVar5->position).z - pivot->z;
      uStack_7c = *(uint *)((int)&scale->z + 4);
      dVar3 = scale->z;
      pdVar2 = &local_78;
      pdVar3 = &local_60;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar3 = *(uint *)pdVar2;
        pdVar2 = (double *)((int)pdVar2 + 4);
        pdVar3 = (double *)((int)pdVar3 + 4);
      }
      local_48 = local_60 * dVar1;
      local_40 = local_58 * dVar2;
      local_38 = local_50 * dVar3;
      pdVar2 = &local_48;
      pdVar7 = &local_c0;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(uint *)pdVar7 = *(uint *)pdVar2;
        pdVar2 = (double *)((int)pdVar2 + 4);
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      local_a8 = local_c0 + pivot->x;
      local_a0 = local_b8 + pivot->y;
      local_98 = local_b0 + pivot->z;
      pdVar6 = &local_a8;
      puVar8 = local_30;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *(uint *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        puVar8 = puVar8 + 1;
      }
      *(uint *)&(pCVar5->position).x = local_30[0];
      *(uint *)((int)&(pCVar5->position).x + 4) = local_30[1];
      *(uint *)&(pCVar5->position).y = local_30[2];
      *(uint *)((int)&(pCVar5->position).y + 4) = local_30[3];
      *(uint *)&(pCVar5->position).z = local_20;
      *(uint *)((int)&(pCVar5->position).z + 4) = local_1c;
      local_18 = local_18 + 1;
      pCVar5 = pCVar5 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}
