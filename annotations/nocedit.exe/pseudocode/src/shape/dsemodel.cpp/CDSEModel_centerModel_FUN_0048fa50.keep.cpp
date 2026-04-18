// Name: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
// Address: 0048fa50
// MANUAL RECONSTRUCTION
// Address Range: [[0048fa50, 0048fcb5]]
// Convention: __cdecl
// Signature: void __cdecl shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel *this_ptr)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel *this_ptr)

{
  int local_14;
  double dVar3;
  double dVar6;
  double dVar5;
  double dVar8;
  double dVar7;
  double dVar2;
  double dVar1;
  double dVar4;
  double min_z;

  dVar7 = 999999.9;
  dVar8 = 999999.9;
  min_z = 999999.9;
  dVar4 = -999999.9;
  dVar5 = -999999.9;
  dVar6 = -999999.9;
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    dVar1 = (double)this_ptr->vertices[local_14].vertex.x;
    dVar2 = (double)this_ptr->vertices[local_14].vertex.y;
    dVar3 = (double)this_ptr->vertices[local_14].vertex.z;
    if (dVar4 < dVar1) {
      dVar4 = dVar1;
    }
    if (dVar1 < dVar7) {
      dVar7 = dVar1;
    }
    if (dVar5 < dVar2) {
      dVar5 = dVar2;
    }
    if (dVar2 < dVar8) {
      dVar8 = dVar2;
    }
    if (dVar6 < dVar3) {
      dVar6 = dVar3;
    }
    if (dVar3 < min_z) {
      min_z = dVar3;
    }
  }
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    this_ptr->vertices[local_14].vertex.x =
         (float)((double)this_ptr->vertices[local_14].vertex.x -
                ((dVar4 - dVar7) * 0.5 + dVar7));
    this_ptr->vertices[local_14].vertex.y =
         (float)((double)this_ptr->vertices[local_14].vertex.y -
                ((dVar5 - dVar8) * 0.5 + dVar8));
    this_ptr->vertices[local_14].vertex.z =
         (float)((double)this_ptr->vertices[local_14].vertex.z -
                ((dVar6 - min_z) * 0.5 + min_z));
  }
  return;
}
