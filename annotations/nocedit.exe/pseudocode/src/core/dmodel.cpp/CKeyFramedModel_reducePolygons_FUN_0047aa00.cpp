// Name: core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
// Address: 0047aa00
// Address Range: [[0047aa00, 0047aa22]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 (CKeyFramedModel *this_ptr,float weld_tolerance,float angle_threshold_radians)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
          (CKeyFramedModel *this_ptr,float weld_tolerance,float angle_threshold_radians)

{
  core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(this_ptr,weld_tolerance);
  core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
            (this_ptr,angle_threshold_radians);
  return;
}
