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
  double dStack_5c;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int iStack_34;
  int iStack_2c;
  uint uStack_14;
  
  bVar7 = 0;
  uStack_14 = 0;
  pCVar8 = vertices + (vertex_count - 1);
  if (vertex_count != 0) {
    do {
      pCVar6 = vertices;
      uVar1 = *(uint *)((int)&pCVar8->x + 4);
      uVar2 = *(uint *)&pCVar8->y;
      uVar3 = *(uint *)((int)&pCVar8->y + 4);
      local_40 = *(uint *)((int)&pCVar6->x + 4);
      uStack_3c = *(uint *)&pCVar6->y;
      local_38 = *(uint *)((int)&pCVar6->y + 4);
      uStack_54 = *(uint *)&pCVar8->x;
      local_50 = uVar1;
      uStack_4c = uVar2;
      local_48 = uVar3;
      uStack_44 = *(uint *)&pCVar6->x;
      if (pCVar6->y < pCVar8->y) {
        uStack_54 = *(uint *)&pCVar6->x;
        local_50 = local_40;
        uStack_4c = uStack_3c;
        local_48 = local_38;
        uStack_44 = *(uint *)&pCVar8->x;
        local_40 = uVar1;
        uStack_3c = uVar2;
        local_38 = uVar3;
      }
      if ((((double)CONCAT44 /* combine 2-byte values */(local_48,uStack_4c) <= test_point->y) &&
          (test_point->y <= (double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c))) &&
         ((test_point->y != (double)CONCAT44 /* combine 2-byte values */(local_48,uStack_4c) ||
          (test_point->y != (double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c))))) {
        if ((test_point->x < (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54)) ||
           (test_point->x < (double)CONCAT44 /* combine 2-byte values */(local_40,uStack_44))) {
          dVar4 = (double)CONCAT44 /* combine 2-byte values */(local_40,uStack_44) - (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54);
          dVar5 = (double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c) - (double)CONCAT44 /* combine 2-byte values */(local_48,uStack_4c);
          iStack_34 = SUB84 /* extract 2-byte value */(dVar4,0);
          iStack_2c = SUB84 /* extract 2-byte value */(dVar5,0);
          dStack_5c = 0.0;
          if (((((ulonglong)dVar4 & 0x7fffffff00000000) != 0) || (iStack_34 != 0)) &&
             ((((ulonglong)dVar5 & 0x7fffffff00000000) != 0 || (iStack_2c != 0)))) {
            dStack_5c = dVar4 / dVar5;
          }
          if (test_point->x <=
              (test_point->y - (double)CONCAT44 /* combine 2-byte values */(local_48,uStack_4c)) * dStack_5c +
              (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54)) goto LAB_005d5ef4;
        }
        bVar7 = bVar7 ^ 1;
      }
LAB_005d5ef4:
      uStack_14 = uStack_14 + 1;
      vertices = pCVar6 + 1;
      pCVar8 = pCVar6;
    } while (uStack_14 < vertex_count);
  }
  return (uint)bVar7;
}
