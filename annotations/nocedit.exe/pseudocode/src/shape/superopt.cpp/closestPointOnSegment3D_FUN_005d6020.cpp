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
  CVector2d *unaff_ESI;
  double *pdVar6;
  uint *puVar7;
  uint local_168;
  uint uStack_164;
  int local_158;
  uint local_150;
  uint local_14c;
  ulonglong local_148;
  double local_140;
  double local_138;
  double local_130;
  uint local_128 [4];
  uint local_118;
  uint uStack_114;
  double local_110;
  double local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  double local_e0;
  double local_d8;
  uint local_d0;
  uint local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98 [6];
  uint local_80 [4];
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_40;
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
  
  local_18 = *(uint *)&segment_start->x;
  uStack_14 = *(uint *)((int)&segment_start->x + 4);
  uVar1 = *(uint *)&segment_start->y;
  uStack_34 = *(uint *)((int)&segment_start->y + 4);
  local_68 = *(uint *)&segment_start->x;
  uStack_64 = uStack_14;
  uStack_5c = uStack_34;
  local_58 = 0;
  uStack_54 = 0;
  local_20 = *(uint *)&segment_end->x;
  local_38 = uVar1;
  uStack_1c = *(uint *)((int)&segment_end->x + 4);
  local_30 = *(uint *)&segment_end->y;
  local_e0 = segment_end->x - segment_start->x;
  uStack_2c = *(uint *)((int)&segment_end->y + 4);
  local_d0 = 0;
  local_cc = 0;
  local_28 = *(uint *)&query_point->x;
  uStack_24 = *(uint *)((int)&query_point->x + 4);
  local_40 = *(uint *)&query_point->y;
  local_d8 = segment_end->y - segment_start->y;
  uVar2 = *(uint *)((int)&query_point->y + 4);
  pdVar6 = &local_e0;
  puVar7 = local_80;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  dVar4 = (double)CONCAT44(local_80[3],local_80[2]);
  dVar3 = (double)CONCAT44(local_80[1],local_80[0]);
  uStack_3c = uVar2;
  local_f8 = local_80[0];
  local_110 = (double)CONCAT44(uStack_24,local_28) - (double)CONCAT44(uStack_14,local_18);
  uStack_f4 = local_80[1];
  local_f0 = local_80[2];
  uStack_ec = local_80[3];
  local_e8 = local_70;
  uStack_e4 = uStack_6c;
  local_100 = 0;
  local_fc = 0;
  local_108 = (double)CONCAT44(uVar2,local_40) - (double)CONCAT44(uStack_34,local_38);
  pdVar6 = &local_110;
  puVar7 = local_128;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  local_60 = uVar1;
  dVar3 = (double)CONCAT44(uStack_6c,local_70) * (double)CONCAT44(uStack_6c,local_70) +
          dVar3 * dVar3 + dVar4 * dVar4;
  local_b0 = local_128[0];
  local_ac = local_128[1];
  local_a8 = local_128[2];
  local_148 = 0.0;
  local_a4 = local_128[3];
  local_a0 = local_118;
  local_9c = uStack_114;
  local_158 = SUB84(dVar3,0);
  if ((((ulonglong)dVar3 & 0x7fffffff00000000) != 0) || (local_158 != 0)) {
    local_148 = ((double)CONCAT44(local_128[1],local_128[0]) *
                 (double)CONCAT44(local_80[1],local_80[0]) +
                 (double)CONCAT44(local_128[3],local_128[2]) *
                 (double)CONCAT44(local_80[3],local_80[2]) +
                (double)CONCAT44(uStack_114,local_118) * (double)CONCAT44(uStack_6c,local_70)) /
                dVar3;
  }
  if ((local_148 < 0.0) || (local_148 < 1.0)) {
    if (0.0 <= local_148) {
      local_150 = (uint)local_148;
      local_14c = local_148._4_4_;
    }
    else {
      local_150 = 0;
      local_14c = 0;
    }
    local_168 = local_150;
    uStack_164 = local_14c;
  }
  else {
    local_168 = 0;
    uStack_164 = 0x3ff00000;
  }
  local_b8 = (double)CONCAT44(uStack_164,local_168);
  local_c8 = (double)CONCAT44(uStack_f4,local_f8) * local_b8;
  local_c0 = (double)CONCAT44(uStack_ec,local_f0) * local_b8;
  local_b8 = (double)CONCAT44(uStack_e4,local_e8) * local_b8;
  local_140 = (double)CONCAT44(uStack_64,local_68) + local_c8;
  local_138 = (double)CONCAT44(uStack_5c,uVar1) + local_c0;
  local_130 = (double)CONCAT44(uStack_54,local_58) + local_b8;
  pdVar6 = &local_140;
  puVar7 = local_98;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  *(uint *)&unaff_ESI->x = local_98[0];
  *(uint *)((int)&unaff_ESI->x + 4) = local_98[1];
  *(uint *)&unaff_ESI->y = local_98[2];
  *(uint *)((int)&unaff_ESI->y + 4) = local_98[3];
  return unaff_ESI;
}
