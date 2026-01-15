// Name: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
// Address Range: [[005d2ac0, 005d2c38]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0(CObj * this_ptr, uint flag_mask, CVector3d * scale, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0
          (CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

{
  uint uVar1;
  int iVar2;
  CVert *pCVar3;
  double *pdVar4;
  double *pdVar5;
  uint *puVar6;
  double dStack_bc;
  double dStack_b4;
  double dStack_ac;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44 [4];
  uint local_34;
  uint local_30;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  uint uStack_14;
  
  uStack_14 = 0;
  pCVar3 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar3->state_flags & flag_mask) == flag_mask) {
        uStack_5c = *(uint *)&scale->x;
        local_58 = *(uint *)((int)&scale->x + 4);
        uStack_54 = *(uint *)&scale->y;
        local_50 = *(uint *)((int)&scale->y + 4);
        dStack_bc = (pCVar3->position).x - pivot->x;
        dStack_b4 = (pCVar3->position).y - pivot->y;
        uStack_4c = *(uint *)&scale->z;
        dStack_ac = (pCVar3->position).z - pivot->z;
        uVar1 = *(uint *)((int)&scale->z + 4);
        pdVar4 = &dStack_bc;
        pdVar5 = &dStack_a4;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar5 = *(uint *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        local_48 = uVar1;
        dStack_8c = dStack_a4 * (double)CONCAT44 /* combine 2-byte values */(local_58,uStack_5c);
        dStack_84 = dStack_9c * (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54);
        dStack_7c = dStack_94 * (double)CONCAT44 /* combine 2-byte values */(uVar1,uStack_4c);
        pdVar4 = &dStack_8c;
        pdVar5 = &dStack_74;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar5 = *(uint *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        dStack_2c = dStack_74 + pivot->x;
        dStack_24 = dStack_6c + pivot->y;
        dStack_1c = dStack_64 + pivot->z;
        pdVar4 = &dStack_2c;
        puVar6 = local_44;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *(uint *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          puVar6 = puVar6 + 1;
        }
        *(uint *)&(pCVar3->position).x = local_44[0];
        *(uint *)((int)&(pCVar3->position).x + 4) = local_44[1];
        *(uint *)&(pCVar3->position).y = local_44[2];
        *(uint *)((int)&(pCVar3->position).y + 4) = local_44[3];
        *(uint *)&(pCVar3->position).z = local_34;
        *(uint *)((int)&(pCVar3->position).z + 4) = local_30;
      }
      pCVar3 = pCVar3 + 1;
      uStack_14 = uStack_14 + 1;
    } while (uStack_14 < (uint)this_ptr->vertex_count);
  }
  return;
}
