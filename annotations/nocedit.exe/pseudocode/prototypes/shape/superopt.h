#pragma once

// Function prototypes for shape/superopt.cpp
// Generated from Ghidra function signatures

// Original: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
void __cdecl logToFile(char *format,...) __attribute__((format(printf, 1, 2)));

// Original: shape_superopt.cpp_CComplexPolygon_ctor_FUN_005c79a0
// Address: 005c79a0
CComplexPolygon * __cdecl CComplexPolygon::ctor(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_dtor_FUN_005c79d0
// Address: 005c79d0
CComplexPolygon * __cdecl CComplexPolygon::dtor(CComplexPolygon *this_ptr,uint flags);

// Original: shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0
// Address: 005c79f0
void __cdecl CComplexPolygon::free(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_addSharedTriangle_FUN_005c7a90
// Address: 005c7a90
int __cdecl CComplexPolygon::addSharedTriangle(CComplexPolygon *this_ptr,CPoly *poly);

// Original: shape_superopt.cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20
// Address: 005c7b20
int __cdecl CComplexPolygon::buildEdgeList(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0
// Address: 005c7dc0
void __cdecl CComplexPolygon::mergeAdjacentEdges(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
// Address: 005c7fb0
int __cdecl CComplexPolygon::canMergeEdges(CComplexPolygon *this_ptr,SExpandedEdge *edge_a,SExpandedEdge *edge_b);

// Original: shape_superopt.cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160
// Address: 005c8160
void __cdecl CComplexPolygon::removedSharedEdges(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
// Address: 005c8280
int __cdecl CComplexPolygon::orderEdgesIntoChain(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
// Address: 005c84c0
int __cdecl CComplexPolygon::splitToConvex(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
// Address: 005c8b50
int __cdecl CComplexPolygon::findReflexVertex(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b);

// Original: shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
// Address: 005c8e70
int __cdecl CComplexPolygon::findBestSplitEdge(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b);

// Original: shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100
// Address: 005c9100
double __cdecl CComplexPolygon::computeArea(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
// Address: 005c91e0
int __cdecl CComplexPolygon::processEdgeSubLoops(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
// Address: 005c9340
void __cdecl CComplexPolygon::removeRedundantEdges(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500
// Address: 005c9500
CComplexPolygon * __cdecl CComplexPolygon::splitByDimensions(CComplexPolygon *this_ptr,double *max_dimensions);

// Original: shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
// Address: 005c9aa0
void __cdecl CComplexPolygon::splitEdgesByPlane(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b);

// Original: shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
// Address: 005ca590
int __cdecl CComplexPolygon::closeSplitBoundary(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary);

// Original: shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
// Address: 005cb3a0
int __cdecl CComplexPolygon::isConvex(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
// Address: 005cbb40
CVector3d * __cdecl CComplexPolygon::computeWindingNormal(CComplexPolygon *this_ptr,CVector3d *output_normal,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
// Address: 005cbe20
int __cdecl CComplexPolygon::storeEdgeSubChain(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
// Address: 005cbec0
void * __cdecl CComplexPolygon::getConvexSubChains(CComplexPolygon *this_ptr,int *out_count);

// Original: shape_superopt.cpp_CComplexPolygon_getExpandedEdgeCount_FUN_005cbee0
// Address: 005cbee0
int __cdecl CComplexPolygon::getExpandedEdgeCount(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_getNormal_FUN_005cbef0
// Address: 005cbef0
CVector3d * __cdecl CComplexPolygon::getNormal(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005cbf00
// Address: 005cbf00
int __cdecl CComplexPolygon::getMaterialId(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_getExpandedEdges_FUN_005cbf10
// Address: 005cbf10
void * __cdecl CComplexPolygon::getExpandedEdges(CComplexPolygon *this_ptr);

// Original: shape_superopt.cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20
// Address: 005cbf20
int __cdecl CComplexPolygon::isEdgeChainClosed(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count);

// Original: shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
// Address: 005cbf90
int __cdecl CComplexPolygon::validateSubChainVisibility(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count);

// Original: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
// Address: 005cc620
CPoly * __cdecl CPoly::ctor(CPoly *this_ptr,CObj *parent_obj);

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
CObj * __cdecl CObj::ctor(CObj *this_ptr,int poly_count,int vertex_count);

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
CVector2d * __stack3_esi closestPointOnSegment3D(CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point,CVector2d *out_point);

// Original: shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
// Address: 005d63d0
CVector3d * __stack3_esi projectPointOntoPlane(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal,CVector3d *out_point);

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
int __cdecl isPointOnLineSegment(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end);

// Original: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// Address: 005d6f90
COptimize * __cdecl COptimize::ctor(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// Address: 005d6fd0
COptimize * __cdecl COptimize::dtor(COptimize *this_ptr,uint flags);

// Original: shape_superopt.cpp_COptimize_cleanup_FUN_005d7000
// Address: 005d7000
void __cdecl COptimize::cleanup(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_setWeldThreshold_FUN_005d70d0
// Address: 005d70d0
void __cdecl COptimize::setWeldThreshold(COptimize *this_ptr,double threshold);

// Original: shape_superopt.cpp_COptimize_getWeldThreshold_FUN_005d70f0
// Address: 005d70f0
double __cdecl COptimize::getWeldThreshold(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_setCoplanarAngleThreshold_FUN_005d7120
// Address: 005d7120
void __cdecl COptimize::setCoplanarAngleThreshold(COptimize *this_ptr,double threshold);

// Original: shape_superopt.cpp_COptimize_getCoplanarAngleThreshold_FUN_005d7140
// Address: 005d7140
double __cdecl COptimize::getCoplanarAngleThreshold(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_setCoplanarDistanceThreshold_FUN_005d7170
// Address: 005d7170
void __cdecl COptimize::setCoplanarDistanceThreshold(COptimize *this_ptr,double threshold);

// Original: shape_superopt.cpp_COptimize_getCoplanarDistanceThreshold_FUN_005d7190
// Address: 005d7190
double __cdecl COptimize::getCoplanarDistanceThreshold(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_setMaxPolygonSides_FUN_005d71c0
// Address: 005d71c0
void __cdecl COptimize::setMaxPolygonSides(COptimize *this_ptr,int max_sides);

// Original: shape_superopt.cpp_COptimize_getMaxPolygonSides_FUN_005d71d0
// Address: 005d71d0
int __cdecl COptimize::getMaxPolygonSides(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_setGeometry_FUN_005d71e0
// Address: 005d71e0
int __cdecl COptimize::setGeometry(COptimize *this_ptr,CObj *objects,uint object_count);

// Original: shape_superopt.cpp_COptimize_optimize_FUN_005d7290
// Address: 005d7290
int __cdecl COptimize::optimize(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_optimizeComplex_FUN_005d7350
// Address: 005d7350
int __cdecl COptimize::optimizeComplex(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_findCoplanarPolygons_FUN_005d7460
// Address: 005d7460
void __cdecl COptimize::findCoplanarPolygons(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj);

// Original: shape_superopt.cpp_COptimize_splitToConvex_FUN_005d7690
// Address: 005d7690
int __cdecl COptimize::splitToConvex(COptimize *this_ptr);

// Original: shape_superopt.cpp_COptimize_addComplexPolygon_FUN_005d76e0
// Address: 005d76e0
void __cdecl COptimize::addComplexPolygon(COptimize *this_ptr,CComplexPolygon *polygon);

// Original: shape_superopt.cpp_findTriListTextureIndex_FUN_005d7750
// Address: 005d7750
int __cdecl findTriListTextureIndex(char *filename);

// Original: shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0
// Address: 005d77a0
void __cdecl optimizeCubeTriList(void);

// Original: shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00
// Address: 005d7e00
void __cdecl COptimize::exportOptimizeGeometry(COptimize *this_ptr);

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

// Original: shape_superopt.cpp_CVec_copy_FUN_005d8190
// Address: 005d8190
CVec * __cdecl CVec::copy(CVec *this_ptr,CVec *other);

// Original: shape_superopt.cpp_CVec_normalize_FUN_005d81c0
// Address: 005d81c0
void __cdecl CVec::normalize(CVec *this_ptr);

// Original: shape_superopt.cpp_CVec_getLength_FUN_005d8200
// Address: 005d8200
int __cdecl CVec::getLength(CVec *this_ptr);

// Original: shape_superopt.cpp_CVec_setLength_FUN_005d8230
// Address: 005d8230
void __cdecl CVec::setLength(CVec *this_ptr,double length);

// Original: shape_superopt.cpp_CVec_cross_FUN_005d8270
// Address: 005d8270
CVec * __cdecl CVec::cross(CVec *this_ptr,CVec *a,CVec *b);

// Original: shape_superopt.cpp_CVec_copy_FUN_005d82b0
// Address: 005d82b0
void __cdecl CVec::copy(CVec *this_ptr,CVec *other);

// Original: shape_superopt.cpp_CVec_dot_FUN_005d82e0
// Address: 005d82e0
int __cdecl CVec::dot(CVec *this_ptr,CVec *other);

// Original: shape_superopt.cpp_CP2D_set_FUN_005d8310
// Address: 005d8310
void __cdecl CP2D::set(CP2D *this_ptr,double x,double y);

// Original: shape_superopt.cpp_CP2D_copy_FUN_005d8330
// Address: 005d8330
CP2D * __cdecl CP2D::copy(CP2D *dst,CP2D *src);

// Original: shape_superopt.cpp_CP2D_subtract_FUN_005d8350
// Address: 005d8350
CP2D * __stack2_esi CP2D::subtract(CP2D *this_ptr,CP2D *a,CP2D *b);

// Original: shape_superopt.cpp_CP2D_add_FUN_005d8390
// Address: 005d8390
CP2D * __stack2_esi CP2D::add(CP2D *this_ptr,CP2D *a,CP2D *b);

// Original: shape_superopt.cpp_CP2D_scale_FUN_005d83d0
// Address: 005d83d0
CP2D * __stackdbl_esi CP2D::scale(CP2D *this_ptr,double scale,CP2D *result);

// Original: shape_superopt.cpp_CP2D_isEqual_FUN_005d8410
// Address: 005d8410
int __cdecl CP2D::isEqual(CP2D *this_ptr,CP2D *b);

// Original: shape_superopt.cpp_CP3D_set_FUN_005d8440
// Address: 005d8440
void __cdecl CP3D::set(CP3D *this_ptr,double x,double y,double z);

// Original: shape_superopt.cpp_CP3D_copy_FUN_005d8470
// Address: 005d8470
void __cdecl CP3D::copy(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_CP3D_copy_FUN_005d84a0
// Address: 005d84a0
void __cdecl CP3D::copy(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_CP3D_subtract_FUN_005d84d0
// Address: 005d84d0
CP3D * __stack2_esi CP3D::subtract(CP3D *this_ptr,CP3D *a,CP3D *b);

// Original: shape_superopt.cpp_CP3D_add_FUN_005d8520
// Address: 005d8520
CP3D * __stack2_esi CP3D::add(CP3D *this_ptr,CP3D *a,CP3D *b);

// Original: shape_superopt.cpp_CP3D_increment_FUN_005d8570
// Address: 005d8570
CP3D * __cdecl CP3D::increment(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_CP3D_add_FUN_005d85a0
// Address: 005d85a0
CP3D * __stack2_esi CP3D::add(CP3D *this_ptr,CP3D *a,CP3D *b);

// Original: shape_superopt.cpp_CP3D_multiply_FUN_005d85f0
// Address: 005d85f0
CP3D * __stack2_esi CP3D::multiply(CP3D *this_ptr,CP3D *a,CP3D *b);

// Original: shape_superopt.cpp_CP3D_scale_FUN_005d8630
// Address: 005d8630
CP3D * __stackdbl_esi CP3D::scale(CP3D *this_ptr,double scalar,CP3D *result);

// Original: shape_superopt.cpp_CP3D_isEqual_FUN_005d8670
// Address: 005d8670
int __cdecl CP3D::isEqual(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_CP3D_isNotEqual_FUN_005d86a0
// Address: 005d86a0
int __cdecl CP3D::isNotEqual(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_CP3D_distance_FUN_005d86d0
// Address: 005d86d0
double __cdecl CP3D::distance(CP3D *this_ptr,CP3D *other);

// Original: shape_superopt.cpp_SExpandedEdge_copy_FUN_005d8710
// Address: 005d8710
SExpandedEdge * __cdecl SExpandedEdge::copy(SExpandedEdge *this_ptr,SExpandedEdge *other);

// Original: shape_superopt.cpp_CP2D_dtor_FUN_005d87c0
// Address: 005d87c0
CP2D * __cdecl CP2D::dtor(CP2D *this_ptr,uint flags);

// Original: shape_superopt.cpp_CP3D_dtor_FUN_005d87d0
// Address: 005d87d0
CP3D * __cdecl CP3D::dtor(CP3D *this_ptr,uint flags);
