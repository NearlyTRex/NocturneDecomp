#pragma once

// Function prototypes for shape/superopt.cpp
// Generated from Ghidra function signatures

// Original: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
void __cdecl logToFile(char *format,...);

// Original: shape_superopt.cpp_FUN_005c79a0
// Address: 005c79a0
void __cdecl FUN_005c79a0(void);

// Original: shape_superopt.cpp_FUN_005c79d0
// Address: 005c79d0
int __cdecl FUN_005c79d0(void);

// Original: shape_superopt.cpp_FUN_005c79f0
// Address: 005c79f0
void __cdecl FUN_005c79f0(void);

// Original: shape_superopt.cpp_FUN_005c7a90
// Address: 005c7a90
int __cdecl FUN_005c7a90(void);

// Original: shape_superopt.cpp_FUN_005c7b20
// Address: 005c7b20
int __cdecl FUN_005c7b20(void);

// Original: shape_superopt.cpp_FUN_005c7dc0
// Address: 005c7dc0
void __cdecl FUN_005c7dc0(void);

// Original: shape_superopt.cpp_FUN_005c7fb0
// Address: 005c7fb0
int __cdecl FUN_005c7fb0(void);

// Original: shape_superopt.cpp_FUN_005c8160
// Address: 005c8160
void __cdecl FUN_005c8160(void);

// Original: shape_superopt.cpp_FUN_005c8280
// Address: 005c8280
int __cdecl FUN_005c8280(void);

// Original: shape_superopt.cpp_FUN_005c84c0
// Address: 005c84c0
int __cdecl FUN_005c84c0(void);

// Original: shape_superopt.cpp_FUN_005c8b50
// Address: 005c8b50
int __cdecl FUN_005c8b50(void);

// Original: shape_superopt.cpp_FUN_005c8e70
// Address: 005c8e70
int __cdecl FUN_005c8e70(void);

// Original: shape_superopt.cpp_FUN_005c9100
// Address: 005c9100
int __cdecl FUN_005c9100(void);

// Original: shape_superopt.cpp_FUN_005c91e0
// Address: 005c91e0
uint __cdecl FUN_005c91e0(void);

// Original: shape_superopt.cpp_FUN_005c9340
// Address: 005c9340
void __cdecl FUN_005c9340(void);

// Original: shape_superopt.cpp_FUN_005c9500
// Address: 005c9500
int __cdecl FUN_005c9500(void);

// Original: shape_superopt.cpp_FUN_005c9aa0
// Address: 005c9aa0
void __cdecl FUN_005c9aa0(void);

// Original: shape_superopt.cpp_FUN_005ca590
// Address: 005ca590
int __cdecl FUN_005ca590(void);

// Original: shape_superopt.cpp_FUN_005cb3a0
// Address: 005cb3a0
int __cdecl FUN_005cb3a0(void);

// Original: shape_superopt.cpp_FUN_005cbb40
// Address: 005cbb40
double * __cdecl FUN_005cbb40(void);

// Original: shape_superopt.cpp_FUN_005cbe20
// Address: 005cbe20
void __cdecl FUN_005cbe20(void);

// Original: shape_superopt.cpp_FUN_005cbec0
// Address: 005cbec0
int __cdecl FUN_005cbec0(void);

// Original: shape_superopt.cpp_FUN_005cbee0
// Address: 005cbee0
int __cdecl FUN_005cbee0(void);

// Original: shape_superopt.cpp_FUN_005cbef0
// Address: 005cbef0
int __cdecl FUN_005cbef0(void);

// Original: shape_superopt.cpp_FUN_005cbf00
// Address: 005cbf00
int __cdecl FUN_005cbf00(void);

// Original: shape_superopt.cpp_FUN_005cbf10
// Address: 005cbf10
int __cdecl FUN_005cbf10(void);

// Original: shape_superopt.cpp_FUN_005cbf20
// Address: 005cbf20
int __cdecl FUN_005cbf20(void);

// Original: shape_superopt.cpp_FUN_005cbf90
// Address: 005cbf90
int __cdecl FUN_005cbf90(void);

// Original: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
// Address: 005cc620
CPoly * __cdecl CPoly::ctor(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_dtor_FUN_005cc660
// Address: 005cc660
CPoly * __cdecl CPoly::dtor(CPoly *this_ptr,uint flags);

// Original: shape_superopt.cpp_CPoly_init_FUN_005cc670
// Address: 005cc670
void __cdecl CPoly::init(CPoly *this_ptr,CObj *parent_obj);

// Original: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
void __cdecl CPoly::copyFrom(CPoly *this_ptr,CPoly *source,CObj *parent_obj);

// Original: shape_superopt.cpp_CPoly_translate_FUN_005cc720
// Address: 005cc720
void __cdecl CPoly::translate(CPoly *this_ptr,CVector3d *offset);

// Original: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
void __cdecl CPoly::scale(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot);

// Original: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
void __cdecl CPoly::transform(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot);

// Original: shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0
// Address: 005cd0b0
int __cdecl CPoly::allVerticesHaveAttribFlags(CPoly *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CPoly_setVertexAttribFlags_FUN_005cd120
// Address: 005cd120
void __cdecl CPoly::setVertexAttribFlags(CPoly *this_ptr,uint set_mask,uint clear_mask);

// Original: shape_superopt.cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0
// Address: 005cd1a0
void __cdecl CPoly::toggleVertexAttribFlags(CPoly *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlags_FUN_005cd220
// Address: 005cd220
void __cdecl CPoly::setVertexStateFlags(CPoly *this_ptr,uint set_mask,uint clear_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0
// Address: 005cd2b0
void __cdecl CPoly::setVertexStateFlagIfCondition(CPoly *this_ptr,uint flag_to_set,uint condition_mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
// Address: 005cd350
void __cdecl CPoly::setVertexStateFlagFromAttrib(CPoly *this_ptr,uint flag_to_set,uint attrib_mask);

// Original: shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0
// Address: 005cd3c0
void __cdecl CPoly::clearVertexStateFlags(CPoly *this_ptr,uint mask);

// Original: shape_superopt.cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410
// Address: 005cd410
void __cdecl CPoly::setVertexStateFlagToAttrib(CPoly *this_ptr,uint set_mask,uint attrib_test);

// Original: shape_superopt.cpp_CPoly_saveVertexPositions_FUN_005cd4b0
// Address: 005cd4b0
void __cdecl CPoly::saveVertexPositions(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560
// Address: 005cd560
void __cdecl CPoly::saveVertexPositionsWithFlag(CPoly *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
// Address: 005cd640
void __cdecl CPoly::restoreVertexPositions(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0
// Address: 005cd6f0
void __cdecl CPoly::restoreVertexPositionsWithFlag(CPoly *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
// Address: 005cd7d0
void __cdecl CPoly::computeNormal(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
// Address: 005cdfe0
void __cdecl CPoly::flipNormal(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
void __cdecl CPoly::projectUVPlanar(CPoly *this_ptr,CVector2d *uv_scale);

// Original: shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0
// Address: 005ce3c0
void __cdecl CPoly::setMaterialId(CPoly *this_ptr,int material_id);

// Original: shape_superopt.cpp_CPoly_getMaterialId_FUN_005ce3d0
// Address: 005ce3d0
int __cdecl CPoly::getMaterialId(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0
// Address: 005ce3e0
void __cdecl CPoly::getBounds(CPoly *this_ptr,CVector3d *out_min,CVector3d *out_max);

// Original: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
int __cdecl CPoly::intersectPoly(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result);

// Original: shape_superopt.cpp_CPoly_rayIntersect_FUN_005d0010
// Address: 005d0010
int __cdecl CPoly::rayIntersect(CPoly *this_ptr,CVector3d *ray_origin,CVector3d *ray_end,CVector3d *out_hit_point);

// Original: shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340
// Address: 005d0340
int __cdecl CPoly::containsPoint2D(CPoly *this_ptr,CVector2d *point);

// Original: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
// Address: 005d0ce0
double __cdecl CPoly::rayPlaneIntersect(CPoly *this_ptr,CVec *ray_origin,CVec *ray_dir);

// Original: shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30
// Address: 005d0d30
CVector3d * __stack_esi CPoly::getCentroid(CPoly *this_ptr,CVector3d *out_centroid);

// Original: shape_superopt.cpp_CPoly_hasSharedEdge_FUN_005d0e20
// Address: 005d0e20
int __cdecl CPoly::hasSharedEdge(CPoly *this_ptr,CPoly *other);

// Original: shape_superopt.cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0
// Address: 005d0ee0
int __cdecl CPoly::hasSeamlessEdge(CPoly *this_ptr,CPoly *other);

// Original: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
int __cdecl CPoly::hasCentroidIntersection(CPoly *this_ptr,CPoly *other);

// Original: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
// Address: 005d12d0
int __cdecl CPoly::hasColinearEdge(CPoly *this_ptr,CPoly *other);

// Original: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
// Address: 005d1390
int __cdecl CPoly::hasEdgeIntersection(CPoly *this_ptr,CPoly *other);

// Original: shape_superopt.cpp_CPoly_computePlaneDistance_FUN_005d1fa0
// Address: 005d1fa0
double __cdecl CPoly::computePlaneDistance(CPoly *this_ptr);

// Original: shape_superopt.cpp_CPoly_isValid_FUN_005d1ff0
// Address: 005d1ff0
int __cdecl CPoly::isValid(CPoly *this_ptr);

// Original: shape_superopt.cpp_CObj_ctor_FUN_005d2230
// Address: 005d2230
CObj * __cdecl CObj::ctor(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_dtor_FUN_005d2260
// Address: 005d2260
CObj * __cdecl CObj::dtor(CObj *this_ptr,uint flags);

// Original: shape_superopt.cpp_CObj_reset_FUN_005d2280
// Address: 005d2280
void __cdecl CObj::reset(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_isValid_FUN_005d22b0
// Address: 005d22b0
int __cdecl CObj::isValid(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_init_FUN_005d22d0
// Address: 005d22d0
int __cdecl CObj::init(CObj *this_ptr,int poly_count,int vertex_count);

// Original: shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320
// Address: 005d2320
int __cdecl CObj::allocatePolygons(CObj *this_ptr,int poly_count);

// Original: shape_superopt.cpp_CObj_addPolygons_FUN_005d2410
// Address: 005d2410
int __cdecl CObj::addPolygons(CObj *this_ptr,int add_count);

// Original: shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500
// Address: 005d2500
int __cdecl CObj::allocateVertices(CObj *this_ptr,int vertex_count);

// Original: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
// Address: 005d2580
int __cdecl CObj::addVertices(CObj *this_ptr,int add_count);

// Original: shape_superopt.cpp_CObj_free_FUN_005d2600
// Address: 005d2600
void __cdecl CObj::free(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
int __cdecl CObj::copyFrom(CObj *this_ptr,CObj *source);

// Original: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
int __cdecl CObj::appendTo(CObj *this_ptr,CObj *dest_obj);

// Original: shape_superopt.cpp_CObj_translate_FUN_005d2880
// Address: 005d2880
void __cdecl CObj::translate(CObj *this_ptr,CVector3d *offset);

// Original: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
// Address: 005d28d0
void __cdecl CObj::translateMasked(CObj *this_ptr,uint flag_mask,CVector3d *offset);

// Original: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
void __cdecl CObj::scale(CObj *this_ptr,CVector3d *scale,CVector3d *pivot);

// Original: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
void __cdecl CObj::scaleMasked(CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot);

// Original: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
void __cdecl CObj::transform(CObj *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot);

// Original: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
void __cdecl CObj::transformMasked(CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVector3d *pivot);

// Original: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
// Address: 005d2f50
int __cdecl CObj::removePolygon(CObj *this_ptr,uint index);

// Original: shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020
// Address: 005d3020
int __cdecl CObj::findAndRemovePolygon(CObj *this_ptr,CPoly *poly_ptr);

// Original: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
// Address: 005d3050
int __cdecl CObj::removePolygonsAtVertex(CObj *this_ptr,int vertex_index);

// Original: shape_superopt.cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0
// Address: 005d30c0
int __cdecl CObj::findAndRemovePolygonsUsingVertex(CObj *this_ptr,CVert *vert_ptr);

// Original: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
// Address: 005d30f0
int __cdecl CObj::removePolygonsByFlag(CObj *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CObj_removeVertex_FUN_005d3140
// Address: 005d3140
int __cdecl CObj::removeVertex(CObj *this_ptr,uint index);

// Original: shape_superopt.cpp_CObj_findAndRemoveVertex_FUN_005d3250
// Address: 005d3250
int __cdecl CObj::findAndRemoveVertex(CObj *this_ptr,CVert *vertex_ptr);

// Original: shape_superopt.cpp_CObj_removeVerticesByFlag_FUN_005d3280
// Address: 005d3280
void __cdecl CObj::removeVerticesByFlag(CObj *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0
// Address: 005d32e0
int __cdecl CObj::findVertexIndex(CObj *this_ptr,CVert *vertex_ptr);

// Original: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
// Address: 005d3320
CVert * __cdecl CObj::getVertex(CObj *this_ptr,uint index);

// Original: shape_superopt.cpp_CObj_containsVertex_FUN_005d3350
// Address: 005d3350
int __cdecl CObj::containsVertex(CObj *this_ptr,CVert *vertex_ptr);

// Original: shape_superopt.cpp_CObj_findPolygonIndex_FUN_005d3380
// Address: 005d3380
int __cdecl CObj::findPolygonIndex(CObj *this_ptr,CPoly *poly_ptr);

// Original: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
// Address: 005d33d0
CPoly * __cdecl CObj::getPolygon(CObj *this_ptr,uint index);

// Original: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
// Address: 005d3400
int __cdecl CObj::containsPolygon(CObj *this_ptr,CPoly *poly_ptr);

// Original: shape_superopt.cpp_CObj_setStateFlags_FUN_005d3440
// Address: 005d3440
void __cdecl CObj::setStateFlags(CObj *this_ptr,uint set_mask,uint clear_mask);

// Original: shape_superopt.cpp_CObj_setStateFlagIfCondition_FUN_005d34d0
// Address: 005d34d0
void __cdecl CObj::setStateFlagIfCondition(CObj *this_ptr,uint flag_to_set,uint condition_mask);

// Original: shape_superopt.cpp_CObj_setStateFlagFromAttrib_FUN_005d3590
// Address: 005d3590
void __cdecl CObj::setStateFlagFromAttrib(CObj *this_ptr,uint flag_to_set,uint attrib_mask);

// Original: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
// Address: 005d35e0
void __cdecl CObj::clearStateFlags(CObj *this_ptr,uint mask);

// Original: shape_superopt.cpp_CObj_setStateFlagToAttrib_FUN_005d3650
// Address: 005d3650
void __cdecl CObj::setStateFlagToAttrib(CObj *this_ptr,uint set_mask,uint attrib_test);

// Original: shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0
// Address: 005d36b0
void __cdecl CObj::updatePolyFlagsFromVerts(CObj *this_ptr,uint mask);

// Original: shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760
// Address: 005d3760
void __cdecl CObj::saveVertexPositions(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0
// Address: 005d37b0
void __cdecl CObj::saveVertexPositionsWithFlag(CObj *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CObj_restoreVertexPositions_FUN_005d3860
// Address: 005d3860
void __cdecl CObj::restoreVertexPositions(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0
// Address: 005d38b0
void __cdecl CObj::restoreVertexPositionsWithFlag(CObj *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960
// Address: 005d3960
void __cdecl CObj::computeCoplanarAdjacency(CObj *this_ptr,int update_adjacency);

// Original: shape_superopt.cpp_CObj_flipAllPolyNormals_FUN_005d3db0
// Address: 005d3db0
void __cdecl CObj::flipAllPolyNormals(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0
// Address: 005d3df0
void __cdecl CObj::flipPolyNormalsWithFlag(CObj *this_ptr,uint flag_mask);

// Original: shape_superopt.cpp_CObj_projectAllPlanarUVs_FUN_005d3e40
// Address: 005d3e40
void __cdecl CObj::projectAllPlanarUVs(CObj *this_ptr,CVector2d *uv_scale);

// Original: shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
// Address: 005d3e80
void __cdecl CObj::projectPlanarUVsWithFlag(CObj *this_ptr,CVector2d *uv_scale,uint flag_mask);

// Original: shape_superopt.cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0
// Address: 005d3ed0
void __cdecl CObj::setAllPolyMaterialIds(CObj *this_ptr,int material_id);

// Original: shape_superopt.cpp_CObj_setPolyMaterialIdsWithFlag_FUN_005d3f10
// Address: 005d3f10
void __cdecl CObj::setPolyMaterialIdsWithFlag(CObj *this_ptr,int material_id,uint flag_mask);

// Original: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// Address: 005d3f60
void __cdecl CObj::computeBoundingBox(CObj *this_ptr,CVector3d *out_min,CVector3d *out_max);

// Original: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// Address: 005d4070
int __cdecl CObj::isClosedManifold(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_hasPolyWithMaterial_FUN_005d4110
// Address: 005d4110
int __cdecl CObj::hasPolyWithMaterial(CObj *this_ptr,int material_id);

// Original: shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
// Address: 005d4160
int __cdecl CObj::weldVertices(CObj *this_ptr,double weld_tolerance,int remove_degenerate);

// Original: shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0
// Address: 005d44d0
int __cdecl CObj::removeUnusedVertices(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0
// Address: 005d46f0
int __cdecl CObj::removeInvalidPolygons(CObj *this_ptr);

// Original: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
int __cdecl CObj::removeTJunctions(CObj *this_ptr,int validate_first);

// Original: shape_superopt.cpp_CObj_findCoplanarPolygon_FUN_005d5800
// Address: 005d5800
int __cdecl CObj::findCoplanarPolygon(CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon);

// Original: shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
// Address: 005d5bb0
int __cdecl segmentsIntersect2D(CVector2d *point_a,CVector2d *point_b,CVector2d *point_c,CVector2d *point_d);

// Original: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
// Address: 005d5de0
int __cdecl segmentIntersectsPolygon2D(CVector2d *polyVerts,uint vertCount,CVector2d *segStart,CVector2d *segEnd,CVector2d *segStart2);

// Original: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// Address: 005d5e60
int __cdecl pointInPolygon2D(CVector2d *vertices,uint vertex_count,CVector2d *test_point);

// Original: shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
// Address: 005d6020
CVector2d * __cdecl closestPointOnSegment3D(CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point);

// Original: shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
// Address: 005d63d0
CVector3d * __cdecl projectPointOntoPlane(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal);

// Original: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
double __cdecl distancePointToSegmentXY(CVector3d *segStart,CVector3d *segEnd,CVector3d *point);

// Original: shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
// Address: 005d6500
double __cdecl rayPlaneIntersect(CVector3d *ray_origin,CVector3d *ray_dir,CVector3d *plane_point,CVector3d *plane_normal);

// Original: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
// Address: 005d6640
double __cdecl getSignedTriangleArea2D(CVector2d *p1,CVector2d *p2,CVector2d *p3);

// Original: shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
// Address: 005d66e0
int __cdecl areVectorsCollinear(CVector3d *vec1,CVector3d *vec2);

// Original: shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
// Address: 005d6c10
int __cdecl isPointOnLineSegment(CVector3d *point,CVector3d *segStart,CVector3d *segEnd);

// Original: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// Address: 005d6f90
COptimize * __cdecl COptimize::ctor(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// Address: 005d6fd0
COptimize * __cdecl COptimize::dtor(COptimize *this_ptr,uint flags);

// Original: shape_superopt.cpp_COptimize_FUN_005d7000
// Address: 005d7000
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d70d0
// Address: 005d70d0
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d70f0
// Address: 005d70f0
double __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7120
// Address: 005d7120
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7140
// Address: 005d7140
double __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7170
// Address: 005d7170
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7190
// Address: 005d7190
double __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71c0
// Address: 005d71c0
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71d0
// Address: 005d71d0
int __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d71e0
// Address: 005d71e0
int __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7290
// Address: 005d7290
int __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7350
// Address: 005d7350
int __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7460
// Address: 005d7460
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d7690
// Address: 005d7690
int __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_FUN_005d76e0
// Address: 005d76e0
void __cdecl COptimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_FUN_005d7750
// Address: 005d7750
int __cdecl FUN_005d7750(void);

// Original: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
void __cdecl TriListSomething(void);

// Original: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// Address: 005d7e00
void __cdecl BonesAndPointsCheck(void);

// Original: shape_superopt.cpp_CP3D_ctor_FUN_005d8120
// Address: 005d8120
CP3D * __cdecl CP3D::ctor(CP3D *this_ptr);

// Original: shape_superopt.cpp_CP2D_ctor_FUN_005d8130
// Address: 005d8130
CP2D * __cdecl CP2D::ctor(CP2D *this_ptr);

// Original: shape_superopt.cpp_CVec_ctor_FUN_005d8140
// Address: 005d8140
CVec * __cdecl CVec::ctor(CVec *this_ptr);

// Original: shape_superopt.cpp_CVec_dtor_FUN_005d8150
// Address: 005d8150
CVec * __cdecl CVec::dtor(CVec *this_ptr,uint flags);

// Original: shape_superopt.cpp_CVec_copy_FUN_005d8160
// Address: 005d8160
CVec * __cdecl CVec::copy(CVec *this_ptr,CVec *other);

// Original: shape_superopt.cpp_FUN_005d8190
// Address: 005d8190
void __cdecl FUN_005d8190(void);

// Original: shape_superopt.cpp_FUN_005d81c0
// Address: 005d81c0
void __cdecl FUN_005d81c0(void);

// Original: shape_superopt.cpp_FUN_005d8200
// Address: 005d8200
int __cdecl FUN_005d8200(void);

// Original: shape_superopt.cpp_FUN_005d8230
// Address: 005d8230
void __cdecl FUN_005d8230(void);

// Original: shape_superopt.cpp_FUN_005d8270
// Address: 005d8270
double * __cdecl FUN_005d8270(void);

// Original: shape_superopt.cpp_FUN_005d82b0
// Address: 005d82b0
void __cdecl FUN_005d82b0(void);

// Original: shape_superopt.cpp_FUN_005d82e0
// Address: 005d82e0
int __cdecl FUN_005d82e0(void);

// Original: shape_superopt.cpp_FUN_005d8310
// Address: 005d8310
void __cdecl FUN_005d8310(void);

// Original: shape_superopt.cpp_FUN_005d8330
// Address: 005d8330
void __cdecl FUN_005d8330(void);

// Original: shape_superopt.cpp_FUN_005d8350
// Address: 005d8350
void __cdecl FUN_005d8350(void);

// Original: shape_superopt.cpp_FUN_005d8390
// Address: 005d8390
void __cdecl FUN_005d8390(void);

// Original: shape_superopt.cpp_FUN_005d83d0
// Address: 005d83d0
void __cdecl FUN_005d83d0(void);

// Original: shape_superopt.cpp_FUN_005d8410
// Address: 005d8410
int __cdecl FUN_005d8410(void);

// Original: shape_superopt.cpp_FUN_005d8440
// Address: 005d8440
void __cdecl FUN_005d8440(void);

// Original: shape_superopt.cpp_FUN_005d8470
// Address: 005d8470
void __cdecl FUN_005d8470(void);

// Original: shape_superopt.cpp_FUN_005d84a0
// Address: 005d84a0
void __cdecl FUN_005d84a0(void);

// Original: shape_superopt.cpp_FUN_005d84d0
// Address: 005d84d0
void __cdecl FUN_005d84d0(void);

// Original: shape_superopt.cpp_FUN_005d8520
// Address: 005d8520
void __cdecl FUN_005d8520(void);

// Original: shape_superopt.cpp_FUN_005d8570
// Address: 005d8570
void __cdecl FUN_005d8570(void);

// Original: shape_superopt.cpp_FUN_005d85a0
// Address: 005d85a0
void __cdecl FUN_005d85a0(void);

// Original: shape_superopt.cpp_FUN_005d85f0
// Address: 005d85f0
void __cdecl FUN_005d85f0(void);

// Original: shape_superopt.cpp_FUN_005d8630
// Address: 005d8630
void __cdecl FUN_005d8630(void);

// Original: shape_superopt.cpp_FUN_005d8670
// Address: 005d8670
int __cdecl FUN_005d8670(void);

// Original: shape_superopt.cpp_FUN_005d86a0
// Address: 005d86a0
int __cdecl FUN_005d86a0(void);

// Original: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
double __cdecl FUN_005d86d0(double *param_1,double *param_2);

// Original: shape_superopt.cpp_FUN_005d8710
// Address: 005d8710
void __cdecl FUN_005d8710(void);

// Original: shape_superopt.cpp_CP2D_dtor_FUN_005d87c0
// Address: 005d87c0
CP2D * __cdecl CP2D::dtor(CP2D *this_ptr,uint flags);

// Original: shape_superopt.cpp_CP3D_dtor_FUN_005d87d0
// Address: 005d87d0
CP3D * __cdecl CP3D::dtor(CP3D *this_ptr,uint flags);
