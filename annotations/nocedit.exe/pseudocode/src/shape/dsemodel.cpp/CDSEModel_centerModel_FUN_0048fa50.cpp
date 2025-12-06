// Name: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
// Address: 0048fa50
// Address Range: [[0048fa50, 0048fcb5]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel * this_ptr)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint local_4c;
  uint uStack_48;
  uint local_34;
  uint uStack_30;
  int local_14;
  
  dVar7 = 999999.9;
  dVar8 = 999999.9;
  local_4c = 0xcccccccd;
  uStack_48 = 0x412e847f;
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
    local_34 = SUB84 /* extract 2-byte value */(dVar3,0);
    uStack_30 = (uint)((ulonglong)dVar3 >> 0x20);
    if (dVar6 < dVar3) {
      dVar6 = dVar3;
    }
    if (dVar3 < (double)CONCAT44 /* combine 2-byte values */(uStack_48,local_4c)) {
      local_4c = local_34;
      uStack_48 = uStack_30;
    }
  }
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
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
                ((dVar6 - (double)CONCAT44 /* combine 2-byte values */(uStack_48,local_4c)) * 0.5 +
                (double)CONCAT44 /* combine 2-byte values */(uStack_48,local_4c)));
  }
  return;
}
