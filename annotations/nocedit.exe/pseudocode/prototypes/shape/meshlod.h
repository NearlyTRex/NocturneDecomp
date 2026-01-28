#pragma once

// Function prototypes for shape/meshlod.cpp
// Generated from Ghidra function signatures

// Original: shape_meshlod.cpp_staticInit_FUN_00514f70
// Address: 00514f70
void __cdecl staticInit(void);

// Original: shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
// Address: 00514f90
CVector3f * __cdecl computeClosestPointOnEdge(CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0, CVector3f *edge_vertex_1);

// Original: shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110
// Address: 00515110
double __cdecl computeDistanceSquaredToEdge(CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1);

// Original: shape_meshlod.cpp_skipLines_FUN_00515160
// Address: 00515160
void __cdecl skipLines(FILE *file_handle,int line_count);

// Original: shape_meshlod.cpp_initializeLogDirectory_FUN_00515190
// Address: 00515190
int __cdecl initializeLogDirectory(void);

// Original: shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0
// Address: 005151c0
int __cdecl CLodFace::containsEdge(CLodFace *this_ptr,int edge_index);

// Original: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// Address: 005151e0
void __cdecl fitLeastSquaresPlane(int point_count,CVector3f *positions,float *values,CVector3f *normal, CVector3f *out_gradient,float *out_offset);

// Original: shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
// Address: 00515840
CLodMesh * __cdecl CLodMesh::ctor(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_copy_FUN_00515860
// Address: 00515860
CLodMesh * __cdecl CLodMesh::copy(CLodMesh *this_ptr,CLodMesh *other);

// Original: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
// Address: 00515880
void __cdecl CLodMesh::init(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
// Address: 00515950
CLodMesh * __cdecl CLodMesh::dtor(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_free_FUN_00515970
// Address: 00515970
void __cdecl CLodMesh::free(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// Address: 00515ac0
void __cdecl CLodMesh::allocate(CLodMesh *this_ptr,int vertex_count,int tri_count,int submesh_count);

// Original: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// Address: 00515ba0
int __cdecl CLodMesh::buildEdges(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
// Address: 00515ca0
void __cdecl CLodEdge::addAdjacentFace(CLodEdge *this_ptr,int tri_index);

// Original: shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
// Address: 00515d10
void __cdecl CLodEdge::removeFace(CLodEdge *this_ptr,int tri_index);

// Original: shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60
// Address: 00515d60
int __cdecl CLodEdge::findFace(CLodEdge *this_ptr,int tri_index);

// Original: shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90
// Address: 00515d90
void __cdecl CLodVert::addAdjacentEdge(CLodVert *this_ptr,int edge_index);

// Original: shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00
// Address: 00515e00
void __cdecl CLodVert::removeEdge(CLodVert *this_ptr,int edge_index);

// Original: shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50
// Address: 00515e50
int __cdecl CLodVert::findEdge(CLodVert *this_ptr,int edge_index);

// Original: shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
// Address: 00515e90
int __cdecl CLodFace::findVertexIndex(CLodFace *this_ptr,int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
// Address: 00515ec0
int __cdecl CLodMesh::findOrCreateEdge(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int create_if_missing);

// Original: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// Address: 00516000
void __cdecl CLodMesh::evaluateEdgeCollapse(CLodMesh *this_ptr,int edge_index,int full_check);

// Original: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
// Address: 00516420
int __cdecl CLodMesh::countNonCollapsibleEdgesForVertex(CLodMesh *this_ptr,int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_countCollapsibleEdgesForVertex_FUN_00516480
// Address: 00516480
int __cdecl CLodMesh::countCollapsibleEdgesForVertex(CLodMesh *this_ptr,int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
// Address: 005164d0
int __cdecl CLodMesh::countUnprocessedFaces(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
// Address: 00516500
CBoundingBox3D * __cdecl CLodMesh::computeVertexBoundingBox(CLodMesh *this_ptr,CBoundingBox3D *out_bbox);

// Original: shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
// Address: 00516570
void __cdecl CLodMesh::translateVertices(CLodMesh *this_ptr,CVector3f *offset);

// Original: shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
// Address: 005165c0
void __cdecl CLodMesh::scaleVertices(CLodMesh *this_ptr,CVector3f *scale_factors);

// Original: shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620
// Address: 00516620
void __cdecl CLodMesh::buildSpatialGrid(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
// Address: 00516a40
void __cdecl CLodMesh::markDuplicateFaces(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
// Address: 00516b40
void __cdecl CLodMesh::markDegenerateFaces(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
// Address: 00516ba0
void __cdecl CLodMesh::generateLOD(CLodMesh *this_ptr,int target_tri_count,uint display_mode);

// Original: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
// Address: 00516d50
void __cdecl CLodMesh::initializeLodGeneration(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
// Address: 00516e10
void __cdecl CLodMesh::normalizeAndCenterMesh(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
// Address: 00516f50
void __cdecl CLodMesh::createNextLOD(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
void __cdecl CLodMesh::createOrigSamplePoints(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
// Address: 005172c0
CVector3f * __cdecl CLodMesh::computeVertexNormal(CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
// Address: 005173f0
void __cdecl CLodMesh::replayLodGeneration(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
// Address: 00517530
void __cdecl CLodMesh::extractFaceTexCoordGradient(CLodMesh *this_ptr,int tri_index,int corner_idx,CVector3f *out_gradient,float *out_offset);

// Original: shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
// Address: 00517630
void __cdecl CLodMesh::collapseEdge(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight);

// Original: shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
// Address: 00518300
void __cdecl CLodMesh::findClosestFaceToSamplePoint(CLodMesh *this_ptr,int sample_point_index);

// Original: shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
// Address: 005183e0
void __cdecl CLodMesh::removeEdgeFromFace(CLodMesh *this_ptr,int tri_index,int edge_index);

// Original: shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
// Address: 00518490
int __cdecl CLodMesh::validateEdgeCollapse(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int vertex_idx_3);

// Original: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
// Address: 00518740
int __cdecl CLodMesh::hasVertexBoundaryEdge(CLodMesh *this_ptr,int vertex_idx);

// Original: shape_meshlod.cpp_CLodMesh_findOrAddSubmesh_FUN_00518790
// Address: 00518790
int __cdecl CLodMesh::findOrAddSubmesh(CLodMesh *this_ptr,char *texture_filename);

// Original: shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
// Address: 00518870
CVector3f * __cdecl CLodMesh::computeFaceCentroid(CLodMesh *this_ptr,CVector3f *out_centroid,CLodFace *face);

// Original: shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
// Address: 00518910
void __cdecl CLodMesh::computeEdgeCollapseCost(CLodMesh *this_ptr,int edge_index);

// Original: shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
// Address: 00519480
int __cdecl CLodMesh::checkEdgeCollapseAngle(CLodMesh *this_ptr,int edge_idx,int vertex_idx);

// Original: shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680
// Address: 00519680
int __cdecl CLodMesh::findMinimumCostEdge(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710
// Address: 00519710
void __cdecl CLodMesh::computeAllEdgeCollapseCosts(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
// Address: 005197c0
void __cdecl CLodMesh::validateAndRemoveInvalidFaces(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
// Address: 00519830
int __cdecl CLodMesh::validateFace(CLodMesh *this_ptr,CLodFace *face);

// Original: shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870
// Address: 00519870
int __cdecl CLodFace::computeNormalAndPlane(CLodFace *this_ptr,CVector3f *vertex0_pos,CVector3f *vertex1_pos,CVector3f *vertex2_pos);

// Original: shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
// Address: 00519b50
void __cdecl CLodMesh::computeSamplePointDistances(CLodMesh *this_ptr,double max_search_radius);

// Original: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// Address: 0051a030
void __cdecl CLodMesh::processGridCell(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z);

// Original: shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
// Address: 0051a150
int __cdecl CLodMesh::weldVertices(CLodMesh *this_ptr,float weld_threshold);

// Original: shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
// Address: 0051a300
CVector3f * __cdecl CLodMesh::findClosestPointOnMesh(CLodMesh *this_ptr,CVector3f *output_closest_point,CVector3f *target_point);

// Original: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
// Address: 0051a400
double __cdecl CLodMesh::computePointToFaceDistance(CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face);

// Original: shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
// Address: 0051a6b0
CVector3f * __cdecl CLodMesh::computeClosestPointOnTriangle(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *target_point,CLodFace *triangle_ptr);

// Original: shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
// Address: 0051a8c0
CLodMesh * __cdecl CLodMesh::copyFrom(CLodMesh *this_ptr,CLodMesh *source_mesh);

// Original: shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
// Address: 0051a980
int __cdecl CLodMesh::getOtherVertexOnEdge(CLodMesh *this_ptr,int vertex_index,int edge_array_index);

// Original: shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0
// Address: 0051a9d0
void __cdecl CLodMesh::importFromFile(CLodMesh *this_ptr,char *filename);

// Original: shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60
// Address: 0051aa60
void __cdecl CLodMesh::parseS3DFile(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60
// Address: 0051ad60
void __cdecl CLodMesh::importFromFileAlt(CLodMesh *this_ptr,char *filename);

// Original: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// Address: 0051adf0
void __cdecl CLodMesh::parseS3DFileVariant(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
// Address: 0051b080
void __cdecl CLodMesh::importFromEditorGlobals(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_importFromUnknown_FUN_0051b2b0
// Address: 0051b2b0
void __cdecl CLodMesh::importFromUnknown(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
// Address: 0051b2e0
CVector3f * __cdecl CLodMesh::worldToNormalizedSpace(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *input_point);

// Original: shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
// Address: 0051b330
void __cdecl CLodMesh::postprocessMesh(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
// Address: 0051b3e0
void __cdecl CLodMesh::removeUnusedVertices(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
// Address: 0051b570
void __cdecl CLodMesh::compactFaces(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
// Address: 0051b6f0
int __cdecl CLodMesh::loadPrecomputeFile(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720
// Address: 0051b720
int __cdecl CLodMesh::loadPrecomputedLodData(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
// Address: 0051b770
FILE * __cdecl CLodMesh::openPrecomputeFile(CLodMesh *this_ptr,char *mode);

// Original: shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
// Address: 0051b870
void __cdecl CLodMesh::closePrecomputeFile(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
// Address: 0051b8a0
int __cdecl CLodMesh::initializeLodGeneration(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
void __cdecl CLodMesh::getLOD(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
void __cdecl CLodMesh::fixupAfterCram(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
// Address: 0051bcc0
void __cdecl CLodMesh::clearFaceAttributes(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
void __cdecl CLodMesh::sortFacesByAttribute(CLodMesh *this_ptr,int attribute_index);

// Original: shape_meshlod.cpp_CLodMesh_exportToFile_FUN_0051c070
// Address: 0051c070
void __cdecl CLodMesh::exportToFile(CLodMesh *this_ptr,char *filename);

// Original: shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
// Address: 0051c100
int __cdecl CLodMesh::exportToS3D(CLodMesh *this_ptr,FILE *file_ptr);

// Original: shape_meshlod.cpp_crc32UpdateByte_FUN_0051c270
// Address: 0051c270
void __cdecl crc32UpdateByte(uint *crc_ptr,uchar data_byte);

// Original: shape_meshlod.cpp_crc32UpdateBuffer_FUN_0051c350
// Address: 0051c350
void __cdecl crc32UpdateBuffer(uint *crc_ptr,uchar *data_ptr,int byte_count);

// Original: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480
// Address: 0051c480
void __cdecl crc32UpdateDword(uint *crc_ptr,uint dword_value);

// Original: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540
// Address: 0051c540
void __cdecl crc32UpdateDword(uint *crc_ptr,uint dword_value);

// Original: shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600
// Address: 0051c600
void __cdecl crc32UpdateVector3f(uint *crc_ptr,CVector3f *vector_ptr);

// Original: shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
// Address: 0051c6f0
void __cdecl CLodMesh::computeMeshCRC32(CLodMesh *this_ptr,uint *out_crc);

// Original: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
void __cdecl CLodMesh::eqLoad(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0
// Address: 0051d0e0
void __cdecl CLodMesh::eqSave(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
// Address: 0051d180
void __cdecl CLodMesh::loadReplayData(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250
// Address: 0051d250
void __cdecl CLodMesh::saveReplayData(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// Address: 0051d2d0
void __cdecl CLodMesh::gridLoad(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420
// Address: 0051d420
void __cdecl CLodMesh::gridSave(CLodMesh *this_ptr,FILE *file_handle);

// Original: shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0
// Address: 0051d4a0
void __cdecl CLodMesh::recordEdgeCollapse(CLodMesh *this_ptr,CLodEdge *edge_data);

// Original: shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
// Address: 0051d520
int __cdecl CLodMesh::previewLodGeneration(CLodMesh *this_ptr,int pause_flag,int render_mode);

// Original: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
int __cdecl CLodMesh::chooseLodsInteractive(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
// Address: 0051e6b0
void __cdecl CLodMesh::transformVerticesForPreview(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
void __cdecl CLodMesh::renderWireframe(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
void __cdecl CLodMesh::renderColorCodedEdges(CLodMesh *this_ptr,int backface_culling_enabled);

// Original: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
void __cdecl CLodMesh::renderShadedTriangles(CLodMesh *this_ptr,int use_palette_coloring);

// Original: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
void __cdecl CLodMesh::renderTexturedTriangles(CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode);

// Original: shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
// Address: 0051ecd0
void __cdecl CLodMesh::drawVertexIndexLabel(CLodMesh *this_ptr,int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30
// Address: 0051ed30
void __cdecl CLodMesh::drawVertexLabels(CLodMesh *this_ptr);

// Original: shape_meshlod.cpp_testLodGeneration_FUN_0051ed60
// Address: 0051ed60
void __cdecl testLodGeneration(void);

// Original: shape_meshlod.cpp_divideVectorByScalar_FUN_0051edd0
// Address: 0051edd0
void __cdecl divideVectorByScalar(CVector3f *vector,float *divisor);

// Original: shape_meshlod.cpp_calculateDistanceSquared_FUN_0051edf0
// Address: 0051edf0
float __cdecl calculateDistanceSquared(CVector3f *point1,CVector3f *point2);

// Original: shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30
// Address: 0051ee30
int __cdecl CLodFace::containsVertex(CLodFace *this_ptr,int vertex_index);

// Original: shape_meshlod.cpp_copyVector_FUN_0051ee50
// Address: 0051ee50
void __cdecl copyVector(CVector3f *destination,CVector3f *source);

// Original: shape_meshlod.cpp_CLodVert_copy_FUN_0051ee70
// Address: 0051ee70
CLodVert * __cdecl CLodVert::copy(CLodVert *destination,CLodVert *source);

// Original: shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0
// Address: 0051eea0
int __cdecl CLodEdge::isBoundary(CLodEdge *this_ptr);

// Original: shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0
// Address: 0051eec0
int __cdecl getPreviousTriangleVertexIndex(int vertex_index);

// Original: shape_meshlod.cpp_getNextTriangleVertexIndex_FUN_0051eed0
// Address: 0051eed0
int __cdecl getNextTriangleVertexIndex(int vertex_index);

// Original: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
// Address: 0051ef00
CLodFace * __cdecl CLodFace::ctor(CLodFace *this_ptr);

// Original: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// Address: 0051ef20
void __cdecl CLodFace::copy(CLodFace *this_ptr,CLodFace *other);

// Original: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
// Address: 0051efc0
CLodFace * __cdecl CLodFace::dtor(CLodFace *this_ptr);

// Original: shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0
// Address: 0051efe0
CLodFace * __cdecl CLodFace::copy2(CLodFace *destination,CLodFace *source);

// Original: shape_meshlod.cpp_CSpotView_dtor_FUN_0051f080
// Address: 0051f080
CSpotView * __cdecl CSpotView::dtor(CSpotView *this_ptr);

// Original: shape_meshlod.cpp_copyFloat_FUN_0051f090
// Address: 0051f090
float * __cdecl copyFloat(float *dest_ptr,float *src_ptr);

// Original: shape_meshlod.cpp_copyFloat_FUN_0051f0a0
// Address: 0051f0a0
float * __cdecl copyFloat(float *dest_ptr,float *src_ptr);

// Original: shape_meshlod.cpp_copyFloat_FUN_0051f0b0
// Address: 0051f0b0
float * __cdecl copyFloat(float *dest_ptr,float *src_ptr);

// Original: shape_meshlod.cpp_freeLodFaces_FUN_0051f0c0
// Address: 0051f0c0
void __cdecl freeLodFaces(CLodFace **array);

// Original: shape_meshlod.cpp_freeVectors_FUN_0051f0e0
// Address: 0051f0e0
void __cdecl freeVectors(CVector3f **array);
