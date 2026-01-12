// Name: shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
// Address: 005d66e0
// Address Range: [[005d66e0, 005d6c04]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0(CVector3d * vec1, CVector3d * vec2)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(CVector3d *vec1,CVector3d *vec2)

{
  double dVar1;
  double dVar2;
  double dStack_154;
  double dStack_14c;
  double dStack_144;
  double dStack_bc;
  double dStack_9c;
  double dStack_94;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  
  dStack_4c = vec1->x;
  dStack_44 = vec1->y;
  dStack_3c = vec1->z;
  dStack_64 = vec2->x;
  dStack_5c = vec2->y;
  dStack_54 = vec2->z;
  dVar1 = SQRT(dStack_4c * dStack_4c + dStack_44 * dStack_44 + dStack_3c * dStack_3c);
  dVar2 = SQRT(dStack_64 * dStack_64 + dStack_5c * dStack_5c + dStack_54 * dStack_54);
  if (dVar1 < dVar2) {
    dVar1 = dVar1 / dVar2;
    dStack_64 = dStack_64 * dVar1;
    dStack_5c = dStack_5c * dVar1;
    dStack_54 = dStack_54 * dVar1;
  }
  else {
    dVar2 = dVar2 / dVar1;
    dStack_4c = dStack_4c * dVar2;
    dStack_44 = dStack_44 * dVar2;
    dStack_3c = dStack_3c * dVar2;
  }
  dStack_bc = dStack_44 - dStack_5c;
  dStack_144 = dStack_3c - dStack_54;
  dStack_94 = dStack_4c - dStack_64;
  if (dStack_bc < 0.0) {
    dStack_bc = -dStack_bc;
  }
  if (dStack_94 < 0.0) {
    dStack_94 = -dStack_94;
  }
  if (dStack_144 < 0.0) {
    dStack_144 = -dStack_144;
  }
  dStack_9c = dStack_44 + dStack_5c;
  dStack_154 = dStack_3c + dStack_54;
  dStack_14c = dStack_4c + dStack_64;
  if (dStack_9c < 0.0) {
    dStack_9c = -dStack_9c;
  }
  if (dStack_14c < 0.0) {
    dStack_14c = -dStack_14c;
  }
  if (dStack_154 < 0.0) {
    dStack_154 = -dStack_154;
  }
  if ((0.0001 <= dStack_94 + dStack_bc + dStack_144) &&
     (0.0001 <= dStack_14c + dStack_9c + dStack_154)) {
    return 0;
  }
  return 1;
}
