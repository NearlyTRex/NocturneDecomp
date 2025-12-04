#pragma once

// Function prototypes for shape/superopt.cpp
// Generated from Ghidra function signatures

// Original: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
void logToFile(char * format, ...);

// Original: shape_superopt.cpp_FUN_005c79a0
// Address: 005c79a0
undefined FUN_005c79a0();

// Original: shape_superopt.cpp_FUN_005c79d0
// Address: 005c79d0
undefined FUN_005c79d0();

// Original: shape_superopt.cpp_FUN_005c79f0
// Address: 005c79f0
undefined FUN_005c79f0();

// Original: shape_superopt.cpp_FUN_005c7a90
// Address: 005c7a90
undefined FUN_005c7a90();

// Original: shape_superopt.cpp_FUN_005c7b20
// Address: 005c7b20
undefined FUN_005c7b20();

// Original: shape_superopt.cpp_FUN_005c7dc0
// Address: 005c7dc0
undefined FUN_005c7dc0();

// Original: shape_superopt.cpp_FUN_005c7fb0
// Address: 005c7fb0
undefined FUN_005c7fb0();

// Original: shape_superopt.cpp_FUN_005c8160
// Address: 005c8160
undefined FUN_005c8160();

// Original: shape_superopt.cpp_FUN_005c8280
// Address: 005c8280
undefined FUN_005c8280();

// Original: shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
// Address: 005c84c0
undefined EdgeListCheckPlusFreesLarge();

// Original: shape_superopt.cpp_FUN_005c8b50
// Address: 005c8b50
undefined FUN_005c8b50();

// Original: shape_superopt.cpp_FUN_005c8e70
// Address: 005c8e70
undefined FUN_005c8e70();

// Original: shape_superopt.cpp_FUN_005c9100
// Address: 005c9100
undefined FUN_005c9100();

// Original: shape_superopt.cpp_FUN_005c91e0
// Address: 005c91e0
undefined FUN_005c91e0();

// Original: shape_superopt.cpp_FUN_005c9340
// Address: 005c9340
undefined FUN_005c9340();

// Original: shape_superopt.cpp_FUN_005c9500
// Address: 005c9500
undefined FUN_005c9500();

// Original: shape_superopt.cpp_FUN_005c9aa0
// Address: 005c9aa0
undefined FUN_005c9aa0();

// Original: shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
// Address: 005ca590
undefined ComplexEdgeListSplit::UnevenCheck();

// Original: shape_superopt.cpp_FUN_005cb3a0
// Address: 005cb3a0
undefined FUN_005cb3a0();

// Original: shape_superopt.cpp_FUN_005cbb40
// Address: 005cbb40
undefined FUN_005cbb40();

// Original: shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
// Address: 005cbe20
undefined CondCallDebugMallocUnknownString();

// Original: shape_superopt.cpp_FUN_005cbec0
// Address: 005cbec0
undefined FUN_005cbec0();

// Original: shape_superopt.cpp_FUN_005cbee0
// Address: 005cbee0
undefined FUN_005cbee0();

// Original: shape_superopt.cpp_FUN_005cbef0
// Address: 005cbef0
undefined FUN_005cbef0();

// Original: shape_superopt.cpp_FUN_005cbf00
// Address: 005cbf00
undefined FUN_005cbf00();

// Original: shape_superopt.cpp_FUN_005cbf10
// Address: 005cbf10
undefined FUN_005cbf10();

// Original: shape_superopt.cpp_FUN_005cbf20
// Address: 005cbf20
undefined FUN_005cbf20();

// Original: shape_superopt.cpp_FUN_005cbf90
// Address: 005cbf90
undefined FUN_005cbf90();

// Original: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
// Address: 005cc620
CPoly * CPoly::ctor(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_dtor_FUN_005cc660
// Address: 005cc660
CPoly * CPoly::dtor(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_init_FUN_005cc670
// Address: 005cc670
void CPoly::init(CPoly * this_ptr, CObj * parent_obj);

// Original: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
void CPoly::copyFrom(CPoly * this_ptr, CPoly * source, CObj * parent_obj);

// Original: shape_superopt.cpp_CPoly_translate_FUN_005cc720
// Address: 005cc720
void CPoly::translate(CPoly * this_ptr, CVector3d * offset);

// Original: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
void CPoly::scale(CPoly * this_ptr, CVector3d * scale, CVector3d * pivot);

// Original: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
void CPoly::transform(CPoly * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot);

// Original: shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0
// Address: 005cd0b0
int CPoly::allVerticesHaveAttribFlags(CPoly * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CPoly_setVertexAttribFlags_FUN_005cd120
// Address: 005cd120
void CPoly::setVertexAttribFlags(CPoly * this_ptr, uint set_mask, uint clear_mask);

// Original: shape_superopt.cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0
// Address: 005cd1a0
void CPoly::toggleVertexAttribFlags(CPoly * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlags_FUN_005cd220
// Address: 005cd220
void CPoly::setVertexStateFlags(CPoly * this_ptr, uint set_mask, uint clear_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0
// Address: 005cd2b0
void CPoly::setVertexStateFlagIfCondition(CPoly * this_ptr, uint flag_to_set, uint condition_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
// Address: 005cd350
void CPoly::setVertexStateFlagFromAttrib(CPoly * this_ptr, uint flag_to_set, uint attrib_mask);

// Original: shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0
// Address: 005cd3c0
void CPoly::clearVertexStateFlags(CPoly * this_ptr, uint mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410
// Address: 005cd410
void CPoly::setVertexStateFlagToAttrib(CPoly * this_ptr, uint set_mask, uint attrib_test);

// Original: shape_superopt.cpp_CPoly_saveVertexPositions_FUN_005cd4b0
// Address: 005cd4b0
void CPoly::saveVertexPositions(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560
// Address: 005cd560
void CPoly::saveVertexPositionsWithFlag(CPoly * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
// Address: 005cd640
void CPoly::restoreVertexPositions(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0
// Address: 005cd6f0
void CPoly::restoreVertexPositionsWithFlag(CPoly * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
// Address: 005cd7d0
void CPoly::computeNormal(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
// Address: 005cdfe0
void CPoly::flipNormal(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
void CPoly::projectUVPlanar(CPoly * this_ptr, CVector2d * uv_scale);

// Original: shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0
// Address: 005ce3c0
void CPoly::setMaterialId(CPoly * this_ptr, int material_id);

// Original: shape_superopt.cpp_CPoly_getMaterialId_FUN_005ce3d0
// Address: 005ce3d0
int CPoly::getMaterialId(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0
// Address: 005ce3e0
void CPoly::getBounds(CPoly * this_ptr, CVector3d * out_min, CVector3d * out_max);

// Original: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
int CPoly::intersectPoly(CPoly * this_ptr, CPoly * other_poly, CPolyIntersectResult * out_result);

// Original: shape_superopt.cpp_CPoly_rayIntersect_FUN_005d0010
// Address: 005d0010
int CPoly::rayIntersect(CPoly * this_ptr, CVector3d * ray_origin, CVector3d * ray_end, CVector3d * out_hit_point);

// Original: shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340
// Address: 005d0340
int CPoly::containsPoint2D(CPoly * this_ptr, CVector2d * point);

// Original: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
// Address: 005d0ce0
double CPoly::rayPlaneIntersect(CPoly * this_ptr, CVec * ray_origin, CVec * ray_dir);

// Original: shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30
// Address: 005d0d30
CVector3d * CPoly::getCentroid(CPoly * this_ptr, CVector3d * out_centroid);

// Original: shape_superopt.cpp_CPoly_hasSharedEdge_FUN_005d0e20
// Address: 005d0e20
int CPoly::hasSharedEdge(CPoly * this_ptr, CPoly * other);

// Original: shape_superopt.cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0
// Address: 005d0ee0
int CPoly::hasSeamlessEdge(CPoly * this_ptr, CPoly * other);

// Original: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
int CPoly::hasCentroidIntersection(CPoly * this_ptr, CPoly * other);

// Original: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
// Address: 005d12d0
int CPoly::hasColinearEdge(CPoly * this_ptr, CPoly * other);

// Original: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
// Address: 005d1390
int CPoly::hasEdgeIntersection(CPoly * this_ptr, CPoly * other);

// Original: shape_superopt.cpp_CPoly_computePlaneDistance_FUN_005d1fa0
// Address: 005d1fa0
double CPoly::computePlaneDistance(CPoly * this_ptr);

// Original: shape_superopt.cpp_CPoly_isValid_FUN_005d1ff0
// Address: 005d1ff0
int CPoly::isValid(CPoly * this_ptr);

// Original: shape_superopt.cpp_CObj_ctor_FUN_005d2230
// Address: 005d2230
CObj * CObj::ctor(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_dtor_FUN_005d2260
// Address: 005d2260
CObj * CObj::dtor(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_reset_FUN_005d2280
// Address: 005d2280
void CObj::reset(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_isValid_FUN_005d22b0
// Address: 005d22b0
int CObj::isValid(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_init_FUN_005d22d0
// Address: 005d22d0
int CObj::init(CObj * this_ptr, int poly_count, int vertex_count);

// Original: shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320
// Address: 005d2320
int CObj::allocatePolygons(CObj * this_ptr, int poly_count);

// Original: shape_superopt.cpp_CObj_addPolygons_FUN_005d2410
// Address: 005d2410
int CObj::addPolygons(CObj * this_ptr, int add_count);

// Original: shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500
// Address: 005d2500
int CObj::allocateVertices(CObj * this_ptr, int vertex_count);

// Original: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
// Address: 005d2580
int CObj::addVertices(CObj * this_ptr, int add_count);

// Original: shape_superopt.cpp_CObj_free_FUN_005d2600
// Address: 005d2600
void CObj::free(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
int CObj::copyFrom(CObj * this_ptr, CObj * source);

// Original: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
int CObj::appendTo(CObj * this_ptr, CObj * dest_obj);

// Original: shape_superopt.cpp_CObj_translate_FUN_005d2880
// Address: 005d2880
void CObj::translate(CObj * this_ptr, CVector3d * offset);

// Original: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
// Address: 005d28d0
void CObj::translateMasked(CObj * this_ptr, uint flag_mask, CVector3d * offset);

// Original: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
void CObj::scale(CObj * this_ptr, CVector3d * scale, CVector3d * pivot);

// Original: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
void CObj::scaleMasked(CObj * this_ptr, uint flag_mask, CVector3d * scale, CVector3d * pivot);

// Original: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
void CObj::transform(CObj * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot);

// Original: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
void CObj::transformMasked(CObj * this_ptr, uint flag_mask, CMatrix3x3d * matrix, CVector3d * pivot);

// Original: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
// Address: 005d2f50
int CObj::removePolygon(CObj * this_ptr, uint index);

// Original: shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020
// Address: 005d3020
int CObj::findAndRemovePolygon(CObj * this_ptr, CPoly * poly_ptr);

// Original: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
// Address: 005d3050
int CObj::removePolygonsAtVertex(CObj * this_ptr, int vertex_index);

// Original: shape_superopt.cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0
// Address: 005d30c0
int CObj::findAndRemovePolygonsUsingVertex(CObj * this_ptr, CVert * vert_ptr);

// Original: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
// Address: 005d30f0
int CObj::removePolygonsByFlag(CObj * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CObj_removeVertex_FUN_005d3140
// Address: 005d3140
int CObj::removeVertex(CObj * this_ptr, uint index);

// Original: shape_superopt.cpp_CObj_findAndRemoveVertex_FUN_005d3250
// Address: 005d3250
int CObj::findAndRemoveVertex(CObj * this_ptr, CVert * vertex_ptr);

// Original: shape_superopt.cpp_CObj_removeVerticesByFlag_FUN_005d3280
// Address: 005d3280
void CObj::removeVerticesByFlag(CObj * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0
// Address: 005d32e0
int CObj::findVertexIndex(CObj * this_ptr, CVert * vertex_ptr);

// Original: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
// Address: 005d3320
CVert * CObj::getVertex(CObj * this_ptr, uint index);

// Original: shape_superopt.cpp_CObj_containsVertex_FUN_005d3350
// Address: 005d3350
int CObj::containsVertex(CObj * this_ptr, CVert * vertex_ptr);

// Original: shape_superopt.cpp_CObj_findPolygonIndex_FUN_005d3380
// Address: 005d3380
int CObj::findPolygonIndex(CObj * this_ptr, CPoly * poly_ptr);

// Original: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
// Address: 005d33d0
CPoly * CObj::getPolygon(CObj * this_ptr, uint index);

// Original: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
// Address: 005d3400
int CObj::containsPolygon(CObj * this_ptr, CPoly * poly_ptr);

// Original: shape_superopt.cpp_CObj_setStateFlags_FUN_005d3440
// Address: 005d3440
void CObj::setStateFlags(CObj * this_ptr, uint set_mask, uint clear_mask);

// Original: shape_superopt.cpp_CObj_setStateFlagIfCondition_FUN_005d34d0
// Address: 005d34d0
void CObj::setStateFlagIfCondition(CObj * this_ptr, uint flag_to_set, uint condition_mask);

// Original: shape_superopt.cpp_CObj_setStateFlagFromAttrib_FUN_005d3590
// Address: 005d3590
void CObj::setStateFlagFromAttrib(CObj * this_ptr, uint flag_to_set, uint attrib_mask);

// Original: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
// Address: 005d35e0
void CObj::clearStateFlags(CObj * this_ptr, uint mask);

// Original: shape_superopt.cpp_CObj_setStateFlagToAttrib_FUN_005d3650
// Address: 005d3650
void CObj::setStateFlagToAttrib(CObj * this_ptr, uint set_mask, uint attrib_test);

// Original: shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0
// Address: 005d36b0
void CObj::updatePolyFlagsFromVerts(CObj * this_ptr, uint mask);

// Original: shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760
// Address: 005d3760
void CObj::saveVertexPositions(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0
// Address: 005d37b0
void CObj::saveVertexPositionsWithFlag(CObj * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CObj_restoreVertexPositions_FUN_005d3860
// Address: 005d3860
void CObj::restoreVertexPositions(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0
// Address: 005d38b0
void CObj::restoreVertexPositionsWithFlag(CObj * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CObj_computeAdjacentEdges_FUN_005d3960
// Address: 005d3960
void CObj::computeAdjacentEdges(CObj * this_ptr, int update_adjacency);

// Original: shape_superopt.cpp_CObj_computeAllPolyNormals_FUN_005d3db0
// Address: 005d3db0
void CObj::computeAllPolyNormals(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_computePolyNormalsWithFlag_FUN_005d3df0
// Address: 005d3df0
void CObj::computePolyNormalsWithFlag(CObj * this_ptr, uint flag_mask);

// Original: shape_superopt.cpp_CObj_generateAllPlanarUVs_FUN_005d3e40
// Address: 005d3e40
void CObj::generateAllPlanarUVs(CObj * this_ptr, CVector2d * uv_scale);

// Original: shape_superopt.cpp_CObj_generatePlanarUVsWithFlag_FUN_005d3e80
// Address: 005d3e80
void CObj::generatePlanarUVsWithFlag(CObj * this_ptr, CVector2d * uv_scale, uint flag_mask);

// Original: shape_superopt.cpp_CObj_scaleAllUVs_FUN_005d3ed0
// Address: 005d3ed0
void CObj::scaleAllUVs(CObj * this_ptr, CVector2d * uv_scale);

// Original: shape_superopt.cpp_CObj_scaleUVsWithFlag_FUN_005d3f10
// Address: 005d3f10
void CObj::scaleUVsWithFlag(CObj * this_ptr, CVector2d * uv_scale, uint flag_mask);

// Original: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// Address: 005d3f60
void CObj::computeBoundingBox(CObj * this_ptr, CVector3d * out_min, CVector3d * out_max);

// Original: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// Address: 005d4070
int CObj::isClosedManifold(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_hasPolyWithMaterial_FUN_005d4110
// Address: 005d4110
int CObj::hasPolyWithMaterial(CObj * this_ptr, int material_id);

// Original: shape_superopt.cpp_CObj_FUN_005d4160
// Address: 005d4160
int CObj(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_FUN_005d44d0
// Address: 005d44d0
int * CObj(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_FUN_005d46f0
// Address: 005d46f0
int CObj(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_FUN_005d47b0
// Address: 005d47b0
int CObj(CObj * this_ptr);

// Original: shape_superopt.cpp_CObj_FUN_005d5800
// Address: 005d5800
int CObj(CObj * this_ptr);

// Original: shape_superopt.cpp_FUN_005d5bb0
// Address: 005d5bb0
undefined FUN_005d5bb0();

// Original: shape_superopt.cpp_FUN_005d5de0
// Address: 005d5de0
undefined FUN_005d5de0();

// Original: shape_superopt.cpp_FUN_005d5e60
// Address: 005d5e60
undefined FUN_005d5e60();

// Original: shape_superopt.cpp_FUN_005d6020
// Address: 005d6020
undefined FUN_005d6020();

// Original: shape_superopt.cpp_FUN_005d63d0
// Address: 005d63d0
undefined FUN_005d63d0();

// Original: shape_superopt.cpp_FUN_005d64a0
// Address: 005d64a0
undefined FUN_005d64a0();

// Original: shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
// Address: 005d6500
double rayPlaneIntersect(CVector3d * ray_origin, CVector3d * ray_dir, CVector3d * plane_point, CVector3d * plane_normal);

// Original: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
// Address: 005d6640
double getSignedTriangleArea2D(CVector2d * p1, CVector2d * p2, CVector2d * p3);

// Original: shape_superopt.cpp_FUN_005d66e0
// Address: 005d66e0
undefined FUN_005d66e0();

// Original: shape_superopt.cpp_FUN_005d6c10
// Address: 005d6c10
undefined FUN_005d6c10();

// Original: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// Address: 005d6f90
COptimize * COptimize::ctor(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// Address: 005d6fd0
COptimize * COptimize::dtor(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7000
// Address: 005d7000
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d70d0
// Address: 005d70d0
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d70f0
// Address: 005d70f0
double COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7120
// Address: 005d7120
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7140
// Address: 005d7140
double COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7170
// Address: 005d7170
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7190
// Address: 005d7190
double COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71c0
// Address: 005d71c0
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71d0
// Address: 005d71d0
int COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71e0
// Address: 005d71e0
int COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7290
// Address: 005d7290
int COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7350
// Address: 005d7350
int COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7460
// Address: 005d7460
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7690
// Address: 005d7690
int COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d76e0
// Address: 005d76e0
void COptimize(COptimize * this_ptr);

// Original: shape_superopt.cpp_FUN_005d7750
// Address: 005d7750
undefined FUN_005d7750();

// Original: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
undefined TriListSomething();

// Original: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// Address: 005d7e00
undefined BonesAndPointsCheck();

// Original: shape_superopt.cpp_CP3D_ctor_FUN_005d8120
// Address: 005d8120
CP3D * CP3D::ctor(CP3D * this_ptr);

// Original: shape_superopt.cpp_CP2D_ctor_FUN_005d8130
// Address: 005d8130
CP2D * CP2D::ctor(CP2D * this_ptr);

// Original: shape_superopt.cpp_CVec_ctor_FUN_005d8140
// Address: 005d8140
CVec * CVec::ctor(CVec * this_ptr);

// Original: shape_superopt.cpp_CVec_dtor_FUN_005d8150
// Address: 005d8150
CVec * CVec::dtor(CVec * this_ptr);

// Original: shape_superopt.cpp_CVec_copy_FUN_005d8160
// Address: 005d8160
CVec * CVec::copy(CVec * this_ptr, CVec * other);

// Original: shape_superopt.cpp_FUN_005d8190
// Address: 005d8190
undefined FUN_005d8190();

// Original: shape_superopt.cpp_FUN_005d81c0
// Address: 005d81c0
undefined FUN_005d81c0();

// Original: shape_superopt.cpp_FUN_005d8200
// Address: 005d8200
undefined FUN_005d8200();

// Original: shape_superopt.cpp_FUN_005d8230
// Address: 005d8230
undefined FUN_005d8230();

// Original: shape_superopt.cpp_FUN_005d8270
// Address: 005d8270
undefined FUN_005d8270();

// Original: shape_superopt.cpp_FUN_005d82b0
// Address: 005d82b0
undefined FUN_005d82b0();

// Original: shape_superopt.cpp_FUN_005d82e0
// Address: 005d82e0
undefined FUN_005d82e0();

// Original: shape_superopt.cpp_FUN_005d8310
// Address: 005d8310
undefined FUN_005d8310();

// Original: shape_superopt.cpp_FUN_005d8330
// Address: 005d8330
undefined FUN_005d8330();

// Original: shape_superopt.cpp_FUN_005d8350
// Address: 005d8350
undefined FUN_005d8350();

// Original: shape_superopt.cpp_FUN_005d8390
// Address: 005d8390
undefined FUN_005d8390();

// Original: shape_superopt.cpp_FUN_005d83d0
// Address: 005d83d0
undefined FUN_005d83d0();

// Original: shape_superopt.cpp_FUN_005d8410
// Address: 005d8410
undefined FUN_005d8410();

// Original: shape_superopt.cpp_FUN_005d8440
// Address: 005d8440
undefined FUN_005d8440();

// Original: shape_superopt.cpp_FUN_005d8470
// Address: 005d8470
undefined FUN_005d8470();

// Original: shape_superopt.cpp_FUN_005d84a0
// Address: 005d84a0
undefined FUN_005d84a0();

// Original: shape_superopt.cpp_FUN_005d84d0
// Address: 005d84d0
undefined FUN_005d84d0();

// Original: shape_superopt.cpp_FUN_005d8520
// Address: 005d8520
undefined FUN_005d8520();

// Original: shape_superopt.cpp_FUN_005d8570
// Address: 005d8570
undefined FUN_005d8570();

// Original: shape_superopt.cpp_FUN_005d85a0
// Address: 005d85a0
undefined FUN_005d85a0();

// Original: shape_superopt.cpp_FUN_005d85f0
// Address: 005d85f0
undefined FUN_005d85f0();

// Original: shape_superopt.cpp_FUN_005d8630
// Address: 005d8630
undefined FUN_005d8630();

// Original: shape_superopt.cpp_FUN_005d8670
// Address: 005d8670
undefined FUN_005d8670();

// Original: shape_superopt.cpp_FUN_005d86a0
// Address: 005d86a0
undefined FUN_005d86a0();

// Original: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
undefined FUN_005d86d0();

// Original: shape_superopt.cpp_FUN_005d8710
// Address: 005d8710
undefined FUN_005d8710();

// Original: shape_superopt.cpp_CP2D_dtor_FUN_005d87c0
// Address: 005d87c0
CP2D * CP2D::dtor(CP2D * this_ptr);

// Original: shape_superopt.cpp_CP3D_dtor_FUN_005d87d0
// Address: 005d87d0
CP3D * CP3D::dtor(CP3D * this_ptr);
