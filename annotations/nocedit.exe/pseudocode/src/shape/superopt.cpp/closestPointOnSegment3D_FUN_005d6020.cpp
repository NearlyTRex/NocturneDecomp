// Name: shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
// Address: 005d6020
// Address Range: [[005d6020, 005d63cb]]
// Convention: __cdecl
// Signature: CVector2d * shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020(CVector3d * segment_start, CVector3d * segment_end, CVector3d * query_point)

#include "nocturne.h"

CVector2d * __cdecl
shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020
          (CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector2d *unaff_ESI;
  double *pdVar6;
  uint *puVar7;
  uint uStack_164;
  uint local_160;
  int iStack_154;
  uint local_14c;
  uint local_148;
  ulonglong uStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  uint auStack_124 [4];
  uint uStack_114;
  uint local_110;
  double dStack_10c;
  double dStack_104;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  double dStack_dc;
  double dStack_d4;
  uint local_cc;
  uint local_c8;
  double dStack_c4;
  double dStack_bc;
  double dStack_b4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94 [6];
  uint auStack_7c [4];
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = *(uint *)&segment_start->x;
  uStack_10 = *(uint *)((int)&segment_start->x + 4);
  uVar1 = *(uint *)&segment_start->y;
  local_30 = *(uint *)((int)&segment_start->y + 4);
  uStack_64 = *(uint *)&segment_start->x;
  local_60 = uStack_10;
  local_58 = local_30;
  uStack_54 = 0;
  local_50 = 0;
  uStack_1c = *(uint *)&segment_end->x;
  uStack_34 = uVar1;
  local_18 = *(uint *)((int)&segment_end->x + 4);
  uStack_2c = *(uint *)&segment_end->y;
  dStack_dc = segment_end->x - segment_start->x;
  local_28 = *(uint *)((int)&segment_end->y + 4);
  local_cc = 0;
  local_c8 = 0;
  uStack_24 = *(uint *)&query_point->x;
  local_20 = *(uint *)((int)&query_point->x + 4);
  uStack_3c = *(uint *)&query_point->y;
  dStack_d4 = segment_end->y - segment_start->y;
  uVar2 = *(uint *)((int)&query_point->y + 4);
  pdVar6 = &dStack_dc;
  puVar7 = auStack_7c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  dVar4 = (double)CONCAT44 /* combine 2-byte values */(auStack_7c[3],auStack_7c[2]);
  dVar3 = (double)CONCAT44 /* combine 2-byte values */(auStack_7c[1],auStack_7c[0]);
  local_38 = uVar2;
  uStack_f4 = auStack_7c[0];
  dStack_10c = (double)CONCAT44 /* combine 2-byte values */(local_20,uStack_24) - (double)CONCAT44 /* combine 2-byte values */(uStack_10,uStack_14);
  local_f0 = auStack_7c[1];
  uStack_ec = auStack_7c[2];
  local_e8 = auStack_7c[3];
  uStack_e4 = uStack_6c;
  local_e0 = local_68;
  local_fc = 0;
  local_f8 = 0;
  dStack_104 = (double)CONCAT44 /* combine 2-byte values */(uVar2,uStack_3c) - (double)CONCAT44 /* combine 2-byte values */(local_30,uStack_34);
  pdVar6 = &dStack_10c;
  puVar7 = auStack_124;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  uStack_5c = uVar1;
  dVar3 = (double)CONCAT44 /* combine 2-byte values */(local_68,uStack_6c) * (double)CONCAT44 /* combine 2-byte values */(local_68,uStack_6c) +
          dVar3 * dVar3 + dVar4 * dVar4;
  local_ac = auStack_124[0];
  local_a8 = auStack_124[1];
  local_a4 = auStack_124[2];
  uStack_144 = 0.0;
  local_a0 = auStack_124[3];
  local_9c = uStack_114;
  local_98 = local_110;
  iStack_154 = SUB84 /* extract 2-byte value */(dVar3,0);
  if ((((ulonglong)dVar3 & 0x7fffffff00000000) != 0) || (iStack_154 != 0)) {
    uStack_144 = ((double)CONCAT44 /* combine 2-byte values */(auStack_124[1],auStack_124[0]) *
                  (double)CONCAT44 /* combine 2-byte values */(auStack_7c[1],auStack_7c[0]) +
                  (double)CONCAT44 /* combine 2-byte values */(auStack_124[3],auStack_124[2]) *
                  (double)CONCAT44 /* combine 2-byte values */(auStack_7c[3],auStack_7c[2]) +
                 (double)CONCAT44 /* combine 2-byte values */(local_110,uStack_114) * (double)CONCAT44 /* combine 2-byte values */(local_68,uStack_6c)) /
                 dVar3;
  }
  if ((uStack_144 < 0.0) || (uStack_144 < 1.0)) {
    if (0.0 <= uStack_144) {
      local_14c = (uint)uStack_144;
      local_148 = uStack_144._4_4_;
    }
    else {
      local_14c = 0;
      local_148 = 0;
    }
    uStack_164 = local_14c;
    local_160 = local_148;
  }
  else {
    uStack_164 = 0;
    local_160 = 0x3ff00000;
  }
  dStack_b4 = (double)CONCAT44 /* combine 2-byte values */(local_160,uStack_164);
  dStack_c4 = (double)CONCAT44 /* combine 2-byte values */(local_f0,uStack_f4) * dStack_b4;
  dStack_bc = (double)CONCAT44 /* combine 2-byte values */(local_e8,uStack_ec) * dStack_b4;
  dStack_b4 = (double)CONCAT44 /* combine 2-byte values */(local_e0,uStack_e4) * dStack_b4;
  dStack_13c = (double)CONCAT44 /* combine 2-byte values */(local_60,uStack_64) + dStack_c4;
  dStack_134 = (double)CONCAT44 /* combine 2-byte values */(local_58,uVar1) + dStack_bc;
  dStack_12c = (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54) + dStack_b4;
  pdVar6 = &dStack_13c;
  puVar7 = local_94;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  *(uint *)&unaff_ESI->x = local_94[0];
  *(uint *)((int)&unaff_ESI->x + 4) = local_94[1];
  *(uint *)&unaff_ESI->y = local_94[2];
  *(uint *)((int)&unaff_ESI->y + 4) = local_94[3];
  return unaff_ESI;
}
