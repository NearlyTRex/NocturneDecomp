// Name: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// Address: 005d5e60
// Address Range: [[005d5e60, 005d6019]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60
          (CVector2d *vertices,uint vertex_count,CVector2d *test_point)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  CVector2d *pCVar6;
  byte bVar7;
  CVector2d *pCVar8;
  double local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  int local_38;
  int local_30;
  uint local_18;
  
  bVar7 = 0;
  local_18 = 0;
  pCVar8 = vertices + (vertex_count - 1);
  if (vertex_count != 0) {
    do {
      pCVar6 = vertices;
      uVar1 = *(uint *)((int)&pCVar8->x + 4);
      uVar2 = *(uint *)&pCVar8->y;
      uVar3 = *(uint *)((int)&pCVar8->y + 4);
      uStack_44 = *(uint *)((int)&pCVar6->x + 4);
      local_40 = *(uint *)&pCVar6->y;
      uStack_3c = *(uint *)((int)&pCVar6->y + 4);
      local_58 = *(uint *)&pCVar8->x;
      uStack_54 = uVar1;
      local_50 = uVar2;
      uStack_4c = uVar3;
      local_48 = *(uint *)&pCVar6->x;
      if (pCVar6->y < pCVar8->y) {
        local_58 = *(uint *)&pCVar6->x;
        uStack_54 = uStack_44;
        local_50 = local_40;
        uStack_4c = uStack_3c;
        local_48 = *(uint *)&pCVar8->x;
        uStack_44 = uVar1;
        local_40 = uVar2;
        uStack_3c = uVar3;
      }
      if ((((double)CONCAT44(uStack_4c,local_50) <= test_point->y) &&
          (test_point->y <= (double)CONCAT44(uStack_3c,local_40))) &&
         ((test_point->y != (double)CONCAT44(uStack_4c,local_50) ||
          (test_point->y != (double)CONCAT44(uStack_3c,local_40))))) {
        if ((test_point->x < (double)CONCAT44(uStack_54,local_58)) ||
           (test_point->x < (double)CONCAT44(uStack_44,local_48))) {
          dVar4 = (double)CONCAT44(uStack_44,local_48) - (double)CONCAT44(uStack_54,local_58);
          dVar5 = (double)CONCAT44(uStack_3c,local_40) - (double)CONCAT44(uStack_4c,local_50);
          local_38 = SUB84(dVar4,0);
          local_30 = SUB84(dVar5,0);
          local_60 = 0.0;
          if (((((ulonglong)dVar4 & 0x7fffffff00000000) != 0) || (local_38 != 0)) &&
             ((((ulonglong)dVar5 & 0x7fffffff00000000) != 0 || (local_30 != 0)))) {
            local_60 = dVar4 / dVar5;
          }
          if (test_point->x <=
              (test_point->y - (double)CONCAT44(uStack_4c,local_50)) * local_60 +
              (double)CONCAT44(uStack_54,local_58)) goto LAB_005d5ef4;
        }
        bVar7 = bVar7 ^ 1;
      }
LAB_005d5ef4:
      local_18 = local_18 + 1;
      vertices = pCVar6 + 1;
      pCVar8 = pCVar6;
    } while (local_18 < vertex_count);
  }
  return (uint)bVar7;
}
