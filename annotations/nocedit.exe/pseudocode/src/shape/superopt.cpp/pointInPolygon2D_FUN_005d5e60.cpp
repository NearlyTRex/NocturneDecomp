// Name: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// Address: 005d5e60
// Address Range: [[005d5e60, 005d6019] [006051bd, 0060522b]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(CVector2d *vertices,uint vertex_count,CVector2d *test_point)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(CVector2d *vertices,uint vertex_count,CVector2d *test_point)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  CVector2d *pCVar4;
  double dVar6;
  double dVar7;
  double *pdVar8;
  CVector2d *pCVar6;
  byte bVar7;
  CVector2d *pCVar8;
  double local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  CVector2d *uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  CVector2d *uStack_3c;
  int local_38;
  int local_30;
  CVector2d *pCStack_2c;
  uint local_18;
  double dVar4;
  double dVar5;
  
  bVar7 = 0;
  local_18 = 0;
  pCVar8 = vertices + (vertex_count - 1);
  if (vertex_count != 0) {
    do {
      pdVar8 = &pCVar8->x;
      uVar2 = *(uint *)((int)&pCVar8->x + 4);
      pdVar1 = &pCVar8->y;
      uVar3 = *(uint *)pdVar1;
      pCVar4 = *(CVector2d **)((int)&pCVar8->y + 4);
      uStack_44 = *(uint *)((int)&pCVar4->x + 4);
      local_40 = *(uint *)&pCVar4->y;
      pCVar8 = *(CVector2d **)((int)&pCVar4->y + 4);
      local_58 = *(uint *)pdVar8;
      uStack_54 = uVar2;
      local_50 = uVar3;
      uStack_4c = pCVar4;
      local_48 = *(uint *)&pCVar4->x;
      uStack_3c = pCVar8;
      if (pCVar4->y < *pdVar1) {
        local_58 = *(uint *)&pCVar4->x;
        uStack_54 = uStack_44;
        local_50 = local_40;
        uStack_4c = pCVar8;
        local_48 = *(uint *)pdVar8;
        uStack_44 = uVar2;
        local_40 = uVar3;
        uStack_3c = pCVar4;
      }
      if (((__BITCAST_DOUBLE(CONCAT44(uStack_4c,local_50)) <= test_point->y) &&
          (test_point->y <= __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40)))) &&
         ((test_point->y != __BITCAST_DOUBLE(CONCAT44(uStack_4c,local_50)) ||
          (test_point->y != __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40)))))) {
        if ((test_point->x < __BITCAST_DOUBLE(CONCAT44(uStack_54,local_58))) ||
           (test_point->x < __BITCAST_DOUBLE(CONCAT44(uStack_44,local_48)))) {
          dVar6 = __BITCAST_DOUBLE(CONCAT44(uStack_44,local_48)) - __BITCAST_DOUBLE(CONCAT44(uStack_54,local_58));
          dVar7 = __BITCAST_DOUBLE(CONCAT44(uStack_3c,local_40)) - __BITCAST_DOUBLE(CONCAT44(uStack_4c,local_50));
          local_38 = SUB84(__BITCAST_UINT64(dVar6),0);
          local_30 = SUB84(__BITCAST_UINT64(dVar7),0);
          pCVar8 = (CVector2d *)((ulonglong)dVar7 >> 0x20);
          local_60 = 0.0;
          if (((((ulonglong)dVar6 & 0x7fffffff00000000) != 0) || (local_38 != 0)) &&
             ((((ulonglong)dVar7 & 0x7fffffff00000000) != 0 || (local_30 != 0)))) {
            local_60 = dVar6 / dVar7;
          }
          if (test_point->x <=
              (test_point->y - __BITCAST_DOUBLE(CONCAT44(uStack_4c,local_50))) * local_60 +
              __BITCAST_DOUBLE(CONCAT44(uStack_54,local_58))) goto LAB_005d5ef4;
        }
        bVar7 = bVar7 ^ 1;
      }
LAB_005d5ef4:
      local_18 = local_18 + 1;
    } while (local_18 < vertex_count);
  }
  return (uint)bVar7;
}
