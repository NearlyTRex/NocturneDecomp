// Name: shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
// Address: 005d66e0
// Address Range: [[005d66e0, 005d6c04]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(CVector3d *vec1,CVector3d *vec2)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(CVector3d *vec1,CVector3d *vec2)

{
  double dVar1;
  double dVar2;
  double local_158;
  double local_150;
  double local_148;
  double local_c0;
  double local_a0;
  double local_98;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  local_50 = vec1->x;
  local_48 = vec1->y;
  local_40 = vec1->z;
  local_68 = vec2->x;
  local_60 = vec2->y;
  local_58 = vec2->z;
  dVar1 = SQRT(local_50 * local_50 + local_48 * local_48 + local_40 * local_40);
  dVar2 = SQRT(local_68 * local_68 + local_60 * local_60 + local_58 * local_58);
  if (dVar1 < dVar2) {
    dVar1 = dVar1 / dVar2;
    local_68 = local_68 * dVar1;
    local_60 = local_60 * dVar1;
    local_58 = local_58 * dVar1;
  }
  else {
    dVar2 = dVar2 / dVar1;
    local_50 = local_50 * dVar2;
    local_48 = local_48 * dVar2;
    local_40 = local_40 * dVar2;
  }
  local_c0 = local_48 - local_60;
  local_148 = local_40 - local_58;
  local_98 = local_50 - local_68;
  if (local_c0 < 0.0) {
    local_c0 = -local_c0;
  }
  if (local_98 < 0.0) {
    local_98 = -local_98;
  }
  if (local_148 < 0.0) {
    local_148 = -local_148;
  }
  local_a0 = local_48 + local_60;
  local_158 = local_40 + local_58;
  local_150 = local_50 + local_68;
  if (local_a0 < 0.0) {
    local_a0 = -local_a0;
  }
  if (local_150 < 0.0) {
    local_150 = -local_150;
  }
  if (local_158 < 0.0) {
    local_158 = -local_158;
  }
  if ((0.0001 <= local_98 + local_c0 + local_148) &&
     (0.0001 <= local_150 + local_a0 + local_158)) {
    return 0;
  }
  return 1;
}
