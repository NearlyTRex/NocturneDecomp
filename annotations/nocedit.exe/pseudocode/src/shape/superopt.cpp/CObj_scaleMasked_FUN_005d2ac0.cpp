// Name: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
// Address Range: [[005d2ac0, 005d2c38]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0(CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0(CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

{
  int iVar2;
  int iVar1;
  CVert *pCVar3;
  double *pdVar2;
  double *pdVar4;
  double *pdVar3;
  double *pdVar5;
  uint *puVar6;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  double local_30;
  double local_28;
  double local_20;
  uint local_18;
  uint uVar1;
  
  local_18 = 0;
  pCVar3 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar3->state_flags & flag_mask) == flag_mask) {
        local_60 = *(uint *)&scale->x;
        uStack_5c = *(uint *)((int)&scale->x + 4);
        local_58 = *(uint *)&scale->y;
        uStack_54 = *(uint *)((int)&scale->y + 4);
        local_c0 = (pCVar3->position).x - pivot->x;
        local_b8 = (pCVar3->position).y - pivot->y;
        local_50 = *(uint *)&scale->z;
        local_b0 = (pCVar3->position).z - pivot->z;
        uVar1 = *(uint *)((int)&scale->z + 4);
        pdVar2 = &local_c0;
        pdVar3 = &local_a8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar3 = *(uint *)pdVar2;
          pdVar2 = (double *)((int)pdVar2 + 4);
          pdVar3 = (double *)((int)pdVar3 + 4);
        }
        uStack_4c = uVar1;
        local_90 = local_a8 * __BITCAST_DOUBLE(CONCAT44(uStack_5c,local_60));
        local_88 = local_a0 * __BITCAST_DOUBLE(CONCAT44(uStack_54,local_58));
        local_80 = local_98 * __BITCAST_DOUBLE(CONCAT44(uVar1,local_50));
        pdVar2 = &local_90;
        pdVar5 = &local_78;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar5 = *(uint *)pdVar2;
          pdVar2 = (double *)((int)pdVar2 + 4);
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        local_30 = local_78 + pivot->x;
        local_28 = local_70 + pivot->y;
        local_20 = local_68 + pivot->z;
        pdVar4 = &local_30;
        puVar6 = local_48;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *(uint *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          puVar6 = puVar6 + 1;
        }
        *(uint *)&(pCVar3->position).x = local_48[0];
        *(uint *)((int)&(pCVar3->position).x + 4) = local_48[1];
        *(uint *)&(pCVar3->position).y = local_48[2];
        *(uint *)((int)&(pCVar3->position).y + 4) = local_48[3];
        *(uint *)&(pCVar3->position).z = local_38;
        *(uint *)((int)&(pCVar3->position).z + 4) = local_34;
      }
      pCVar3 = pCVar3 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}
