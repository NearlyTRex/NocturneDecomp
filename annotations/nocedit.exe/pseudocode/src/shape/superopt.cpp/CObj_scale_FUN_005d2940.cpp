// Name: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
// Address Range: [[005d2940, 005d2ab6]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_scale_FUN_005d2940(CObj * this_ptr, CVector3d * scale, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  CVert *pCVar5;
  BADSPACEBASE *in_ESP;
  double *pdVar6;
  double *pdVar7;
  uint *puVar8;
  double dStack_bc;
  double dStack_b4;
  double dStack_ac;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  uint local_2c [4];
  uint local_1c;
  uint local_18;
  uint uStack_14;
  
  uStack_14 = 0;
  pCVar5 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      uStack_8c = *(uint *)&scale->x;
      dVar1 = scale->x;
      local_88 = *(uint *)((int)&scale->x + 4);
      uStack_84 = *(uint *)&scale->y;
      dVar2 = scale->y;
      local_80 = *(uint *)((int)&scale->y + 4);
      dStack_74 = (pCVar5->position).x - pivot->x;
      dStack_6c = (pCVar5->position).y - pivot->y;
      uStack_7c = *(uint *)&scale->z;
      dStack_64 = (pCVar5->position).z - pivot->z;
      local_78 = *(uint *)((int)&scale->z + 4);
      dVar3 = scale->z;
      pdVar6 = &dStack_74;
      pdVar7 = &dStack_5c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar7 = *(uint *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      dStack_44 = dStack_5c * dVar1;
      dStack_3c = dStack_54 * dVar2;
      dStack_34 = dStack_4c * dVar3;
      pdVar6 = &dStack_44;
      pdVar7 = &dStack_bc;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar7 = *(uint *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      dStack_a4 = dStack_bc + pivot->x;
      dStack_9c = dStack_b4 + pivot->y;
      dStack_94 = dStack_ac + pivot->z;
      pdVar6 = &dStack_a4;
      puVar8 = local_2c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *(uint *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        puVar8 = puVar8 + 1;
      }
      *(uint *)&(pCVar5->position).x = local_2c[0];
      *(uint *)((int)&(pCVar5->position).x + 4) = local_2c[1];
      *(uint *)&(pCVar5->position).y = local_2c[2];
      *(uint *)((int)&(pCVar5->position).y + 4) = local_2c[3];
      *(uint *)&(pCVar5->position).z = local_1c;
      *(uint *)((int)&(pCVar5->position).z + 4) = local_18;
      uStack_14 = uStack_14 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uStack_14 < (uint)this_ptr->vertex_count);
  }
  return;
}
