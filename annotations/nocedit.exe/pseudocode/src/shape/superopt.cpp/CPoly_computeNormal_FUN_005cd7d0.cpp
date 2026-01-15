// Name: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
// Address: 005cd7d0
// Address Range: [[005cd7d0, 005cdfdf]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  CVert *pCVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  uint uStack_2ec;
  uint local_2e8;
  ulonglong uStack_2e4;
  ulonglong uStack_2d4;
  double dStack_2a4;
  double dStack_28c;
  double dStack_284;
  double dStack_27c;
  double dStack_274;
  double dStack_26c;
  double dStack_264;
  double dStack_25c;
  double dStack_254;
  double dStack_24c;
  double dStack_244;
  double dStack_23c;
  double dStack_234;
  double dStack_22c;
  double dStack_224;
  double dStack_21c;
  double dStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
  double dStack_1e4;
  double dStack_1dc;
  double dStack_1d4;
  double dStack_1cc;
  double dStack_1c4;
  double dStack_1bc;
  double dStack_19c;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  double dStack_154;
  double dStack_14c;
  double dStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  double dStack_f4;
  double dStack_ec;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  double dStack_cc;
  double dStack_ac;
  double dStack_a4;
  double dStack_9c;
  CVert *pCStack_14;
  
  local_2e8 = 0x3ff00000;
  uStack_2ec = 0;
  pCVar6 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar6 + this_ptr->vertex_idx_0;
  pCVar2 = pCVar6 + this_ptr->vertex_idx_1;
  dStack_154 = (pCVar2->position).x - (pCVar1->position).x;
  dStack_14c = (pCVar2->position).y - (pCVar1->position).y;
  pCStack_14 = pCVar6 + this_ptr->vertex_idx_2;
  dStack_144 = (pCVar2->position).z - (pCVar1->position).z;
  pdVar8 = &dStack_154;
  pdVar9 = &dStack_244;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dStack_18c = 1.0 / SQRT(dStack_234 * dStack_234 +
                          dStack_244 * dStack_244 + dStack_23c * dStack_23c);
  dStack_19c = dStack_244 * dStack_18c;
  dStack_194 = dStack_23c * dStack_18c;
  dStack_18c = dStack_234 * dStack_18c;
  dStack_274 = (pCStack_14->position).x - (pCVar2->position).x;
  dStack_26c = (pCStack_14->position).y - (pCVar2->position).y;
  dStack_264 = (pCStack_14->position).z - (pCVar2->position).z;
  pdVar8 = &dStack_274;
  pdVar9 = &dStack_184;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dStack_24c = 1.0 / SQRT(dStack_174 * dStack_174 +
                          dStack_184 * dStack_184 + dStack_17c * dStack_17c);
  dStack_25c = dStack_184 * dStack_24c;
  dStack_254 = dStack_17c * dStack_24c;
  dStack_24c = dStack_174 * dStack_24c;
  uStack_2d4 = dStack_19c * dStack_25c + dStack_194 * dStack_254 + dStack_18c * dStack_24c;
  if (uStack_2d4 < 0.0) {
    uStack_2d4 = -uStack_2d4;
  }
  if (uStack_2d4 < 1.0) {
    uStack_2ec = (uint)uStack_2d4;
    local_2e8 = uStack_2d4._4_4_;
    dStack_1e4 = dStack_194 * dStack_24c - dStack_18c * dStack_254;
    dStack_1dc = dStack_18c * dStack_25c - dStack_19c * dStack_24c;
    dStack_1d4 = dStack_19c * dStack_254 - dStack_194 * dStack_25c;
    (this_ptr->normal).x = dStack_1e4;
    (this_ptr->normal).y = dStack_1dc;
    (this_ptr->normal).z = dStack_1d4;
  }
  dStack_10c = (pCStack_14->position).x - (pCVar2->position).x;
  dStack_104 = (pCStack_14->position).y - (pCVar2->position).y;
  dStack_fc = (pCStack_14->position).z - (pCVar2->position).z;
  pdVar8 = &dStack_10c;
  pdVar9 = &dStack_16c;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar3 = 1.0 / SQRT(dStack_15c * dStack_15c + dStack_16c * dStack_16c + dStack_164 * dStack_164);
  dStack_f4 = dStack_16c * dVar3;
  dStack_ec = dStack_164 * dVar3;
  dStack_e4 = dStack_15c * dVar3;
  dStack_1cc = (pCVar1->position).x - (pCStack_14->position).x;
  dStack_1c4 = (pCVar1->position).y - (pCStack_14->position).y;
  dStack_1bc = (pCVar1->position).z - (pCStack_14->position).z;
  pdVar8 = &dStack_1cc;
  pdVar9 = &dStack_1fc;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dStack_114 = 1.0 / SQRT(dStack_1ec * dStack_1ec +
                          dStack_1fc * dStack_1fc + dStack_1f4 * dStack_1f4);
  dStack_124 = dStack_1fc * dStack_114;
  dStack_11c = dStack_1f4 * dStack_114;
  dStack_114 = dStack_1ec * dStack_114;
  uStack_2e4 = dStack_f4 * dStack_124 + dStack_ec * dStack_11c + dStack_e4 * dStack_114;
  if (uStack_2e4 < 0.0) {
    uStack_2e4 = -uStack_2e4;
  }
  if (uStack_2e4 < (double)CONCAT44 /* combine 2-byte values */(local_2e8,uStack_2ec)) {
    uStack_2ec = (uint)uStack_2e4;
    local_2e8 = uStack_2e4._4_4_;
    dStack_ac = dStack_ec * dStack_114 - dStack_e4 * dStack_11c;
    dStack_a4 = dStack_e4 * dStack_124 - dStack_f4 * dStack_114;
    dStack_9c = dStack_f4 * dStack_11c - dStack_ec * dStack_124;
    (this_ptr->normal).x = dStack_ac;
    (this_ptr->normal).y = dStack_a4;
    (this_ptr->normal).z = dStack_9c;
  }
  dStack_13c = (pCVar1->position).x - (pCStack_14->position).x;
  dStack_134 = (pCVar1->position).y - (pCStack_14->position).y;
  dStack_12c = (pCVar1->position).z - (pCStack_14->position).z;
  pdVar8 = &dStack_13c;
  pdVar9 = &dStack_22c;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar3 = 1.0 / SQRT(dStack_21c * dStack_21c + dStack_22c * dStack_22c + dStack_224 * dStack_224);
  dStack_214 = dStack_22c * dVar3;
  dStack_20c = dStack_224 * dVar3;
  dStack_204 = dStack_21c * dVar3;
  dStack_dc = (pCVar2->position).x - (pCVar1->position).x;
  dStack_d4 = (pCVar2->position).y - (pCVar1->position).y;
  dStack_cc = (pCVar2->position).z - (pCVar1->position).z;
  pdVar8 = &dStack_dc;
  pdVar9 = &dStack_28c;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar5 = 1.0 / SQRT(dStack_27c * dStack_27c + dStack_28c * dStack_28c + dStack_284 * dStack_284);
  dVar3 = dStack_28c * dVar5;
  dVar4 = dStack_284 * dVar5;
  dVar5 = dStack_27c * dVar5;
  dStack_2a4 = dStack_214 * dVar3 + dStack_20c * dVar4 + dStack_204 * dVar5;
  if (dStack_2a4 < 0.0) {
    dStack_2a4 = -dStack_2a4;
  }
  if (dStack_2a4 < (double)CONCAT44 /* combine 2-byte values */(local_2e8,uStack_2ec)) {
    (this_ptr->normal).x = dStack_20c * dVar5 - dStack_204 * dVar4;
    (this_ptr->normal).y = dStack_204 * dVar3 - dStack_214 * dVar5;
    (this_ptr->normal).z = dStack_214 * dVar4 - dStack_20c * dVar3;
  }
  dVar3 = (this_ptr->normal).y;
  dVar4 = (this_ptr->normal).x;
  dVar5 = (this_ptr->normal).z;
  dVar3 = 1.0 / SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3);
  (this_ptr->normal).x = (this_ptr->normal).x * dVar3;
  (this_ptr->normal).y = (this_ptr->normal).y * dVar3;
  (this_ptr->normal).z = (this_ptr->normal).z * dVar3;
  return;
}
