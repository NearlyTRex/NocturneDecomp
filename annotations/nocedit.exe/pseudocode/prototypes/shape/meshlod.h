#pragma once

// Function prototypes for shape/meshlod.cpp
// Generated from Ghidra function signatures

// Original: shape_meshlod.cpp_staticInit_FUN_00514f70
// Address: 00514f70
void staticInit(void);

// Original: shape_meshlod.cpp_FUN_00514f90
// Address: 00514f90
undefined FUN_00514f90();

// Original: shape_meshlod.cpp_FUN_00515110
// Address: 00515110
undefined FUN_00515110();

// Original: shape_meshlod.cpp_FUN_00515160
// Address: 00515160
undefined FUN_00515160();

// Original: shape_meshlod.cpp_FUN_00515190
// Address: 00515190
undefined FUN_00515190();

// Original: shape_meshlod.cpp_FUN_005151c0
// Address: 005151c0
undefined FUN_005151c0();

// Original: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// Address: 005151e0
void fitLeastSquaresPlane(int point_count, CVector3f * positions, float * values, CVector3f * normal, CVector3f * out_gradient, float * out_offset);

// Original: shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
// Address: 00515840
CLodMesh * CLodMesh::ctor(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_copy_FUN_00515860
// Address: 00515860
CLodMesh * CLodMesh::copy(CLodMesh * this_ptr, CLodMesh * other);

// Original: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
// Address: 00515880
void CLodMesh::init(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
// Address: 00515950
CLodMesh * CLodMesh::dtor(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_free_FUN_00515970
// Address: 00515970
void CLodMesh::free(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// Address: 00515ac0
void CLodMesh::allocate(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count);

// Original: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// Address: 00515ba0
int CLodMesh::buildEdges(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_addAdjacentTriangleToEdge_FUN_00515ca0
// Address: 00515ca0
void addAdjacentTriangleToEdge(SLodEdge * edge_ptr, int tri_index);

// Original: shape_meshlod.cpp_removeTriangleFromEdge_FUN_00515d10
// Address: 00515d10
void removeTriangleFromEdge(SLodEdge * edge_ptr, int tri_index);

// Original: shape_meshlod.cpp_findTriangleInEdge_FUN_00515d60
// Address: 00515d60
int findTriangleInEdge(SLodEdge * edge_ptr, int tri_index);

// Original: shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90
// Address: 00515d90
void addAdjacentEdgeToVertex(SLodVert * vertex_ptr, int edge_index);

// Original: shape_meshlod.cpp_removeEdgeFromVertex_FUN_00515e00
// Address: 00515e00
void removeEdgeFromVertex(SLodVert * vertex_ptr, int edge_index);

// Original: shape_meshlod.cpp_findEdgeInVertex_FUN_00515e50
// Address: 00515e50
int findEdgeInVertex(SLodVert * vertex_ptr, int edge_index);

// Original: shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
// Address: 00515e90
int findVertexIndexInTriangle(SLodTriangle * tri_ptr, int vertex_index);

// Original: shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
// Address: 00515ec0
int CLodMesh::findOrCreateEdge(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing);

// Original: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// Address: 00516000
void CLodMesh::evaluateEdgeCollapse(CLodMesh * this_ptr, int edge_index, int full_check);

// Original: shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
// Address: 00516420
int CLodMesh::countNonCollapsibleEdgesForVertex(CLodMesh * this_ptr, int vertex_index);

// Original: shape_meshlod.cpp_FUN_00516480
// Address: 00516480
undefined FUN_00516480();

// Original: shape_meshlod.cpp_CLodMesh_FUN_005164d0
// Address: 005164d0
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516500
// Address: 00516500
CBoundingBox3D * CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_00516570
// Address: 00516570
undefined FUN_00516570();

// Original: shape_meshlod.cpp_FUN_005165c0
// Address: 005165c0
undefined FUN_005165c0();

// Original: shape_meshlod.cpp_FUN_00516620
// Address: 00516620
undefined FUN_00516620();

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516a40
// Address: 00516a40
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516b40
// Address: 00516b40
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516ba0
// Address: 00516ba0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516d50
// Address: 00516d50
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516e10
// Address: 00516e10
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00516f50
// Address: 00516f50
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
void CLodMesh::createOrigSamplePoints(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_005172c0
// Address: 005172c0
undefined FUN_005172c0();

// Original: shape_meshlod.cpp_CLodMesh_FUN_005173f0
// Address: 005173f0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
// Address: 00517530
void CLodMesh::extractTriangleTexCoordGradient(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, float * out_offset);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00517630
// Address: 00517630
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00518300
// Address: 00518300
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_removeEdgeFromTriangle_FUN_005183e0
// Address: 005183e0
void CLodMesh::removeEdgeFromTriangle(CLodMesh * this_ptr, int tri_index, int edge_index);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00518490
// Address: 00518490
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_00518740
// Address: 00518740
undefined FUN_00518740();

// Original: shape_meshlod.cpp_CLodMesh_FUN_00518790
// Address: 00518790
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_00518870
// Address: 00518870
undefined FUN_00518870();

// Original: shape_meshlod.cpp_CLodMesh_FUN_00518910
// Address: 00518910
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00519480
// Address: 00519480
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00519680
// Address: 00519680
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_00519710
// Address: 00519710
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_005197c0
// Address: 005197c0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_00519830
// Address: 00519830
undefined FUN_00519830();

// Original: shape_meshlod.cpp_FUN_00519870
// Address: 00519870
undefined FUN_00519870();

// Original: shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50
// Address: 00519b50
undefined SamplePointsCheck();

// Original: shape_meshlod.cpp_FUN_0051a030
// Address: 0051a030
undefined FUN_0051a030();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051a150
// Address: 0051a150
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051a300
// Address: 0051a300
undefined FUN_0051a300();

// Original: shape_meshlod.cpp_FUN_0051a400
// Address: 0051a400
undefined FUN_0051a400();

// Original: shape_meshlod.cpp_FUN_0051a6b0
// Address: 0051a6b0
float * FUN_0051a6b0(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051a8c0
// Address: 0051a8c0
CLodMesh * CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051a980
// Address: 0051a980
undefined FUN_0051a980();

// Original: shape_meshlod.cpp_FUN_0051a9d0
// Address: 0051a9d0
undefined FUN_0051a9d0();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051aa60
// Address: 0051aa60
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051ad60
// Address: 0051ad60
undefined FUN_0051ad60();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051adf0
// Address: 0051adf0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b080
// Address: 0051b080
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051b2b0
// Address: 0051b2b0
undefined FUN_0051b2b0();

// Original: shape_meshlod.cpp_FUN_0051b2e0
// Address: 0051b2e0
undefined FUN_0051b2e0();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b330
// Address: 0051b330
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b3e0
// Address: 0051b3e0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b570
// Address: 0051b570
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051b6f0
// Address: 0051b6f0
undefined FUN_0051b6f0();

// Original: shape_meshlod.cpp_FUN_0051b720
// Address: 0051b720
undefined FUN_0051b720();

// Original: shape_meshlod.cpp_FUN_0051b770
// Address: 0051b770
undefined FUN_0051b770();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b870
// Address: 0051b870
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051b8a0
// Address: 0051b8a0
int CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
void CLodMesh::getLOD(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
void CLodMesh::fixupAfterCram(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051bcc0
// Address: 0051bcc0
undefined FUN_0051bcc0();

// Original: shape_meshlod.cpp_FUN_0051bd30
// Address: 0051bd30
undefined FUN_0051bd30();

// Original: shape_meshlod.cpp_FUN_0051c070
// Address: 0051c070
undefined FUN_0051c070();

// Original: shape_meshlod.cpp_FUN_0051c100
// Address: 0051c100
undefined FUN_0051c100();

// Original: shape_meshlod.cpp_FUN_0051c270
// Address: 0051c270
undefined FUN_0051c270();

// Original: shape_meshlod.cpp_FUN_0051c350
// Address: 0051c350
undefined FUN_0051c350();

// Original: shape_meshlod.cpp_FUN_0051c480
// Address: 0051c480
undefined FUN_0051c480();

// Original: shape_meshlod.cpp_FUN_0051c540
// Address: 0051c540
undefined FUN_0051c540();

// Original: shape_meshlod.cpp_FUN_0051c600
// Address: 0051c600
undefined FUN_0051c600();

// Original: shape_meshlod.cpp_FUN_0051c6f0
// Address: 0051c6f0
undefined FUN_0051c6f0();

// Original: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
void CLodMesh::eqLoad(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051d0e0
// Address: 0051d0e0
undefined FUN_0051d0e0();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051d180
// Address: 0051d180
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051d250
// Address: 0051d250
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// Address: 0051d2d0
void CLodMesh::gridLoad(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051d420
// Address: 0051d420
undefined FUN_0051d420();

// Original: shape_meshlod.cpp_CLodMesh_FUN_0051d4a0
// Address: 0051d4a0
void CLodMesh(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051d520
// Address: 0051d520
undefined FUN_0051d520();

// Original: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
int CLodMesh::chooseLodsInteractive(CLodMesh * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051e6b0
// Address: 0051e6b0
undefined FUN_0051e6b0();

// Original: shape_meshlod.cpp_FUN_0051e770
// Address: 0051e770
undefined FUN_0051e770();

// Original: shape_meshlod.cpp_FUN_0051e830
// Address: 0051e830
undefined FUN_0051e830();

// Original: shape_meshlod.cpp_FUN_0051e990
// Address: 0051e990
undefined FUN_0051e990();

// Original: shape_meshlod.cpp_FUN_0051ead0
// Address: 0051ead0
undefined FUN_0051ead0();

// Original: shape_meshlod.cpp_FUN_0051ecd0
// Address: 0051ecd0
undefined FUN_0051ecd0();

// Original: shape_meshlod.cpp_FUN_0051ed30
// Address: 0051ed30
undefined FUN_0051ed30();

// Original: shape_meshlod.cpp_FUN_0051ed60
// Address: 0051ed60
undefined FUN_0051ed60();

// Original: shape_meshlod.cpp_FUN_0051edd0
// Address: 0051edd0
undefined FUN_0051edd0();

// Original: shape_meshlod.cpp_FUN_0051edf0
// Address: 0051edf0
undefined FUN_0051edf0();

// Original: shape_meshlod.cpp_FUN_0051ee30
// Address: 0051ee30
undefined FUN_0051ee30();

// Original: shape_meshlod.cpp_FUN_0051ee50
// Address: 0051ee50
undefined FUN_0051ee50();

// Original: shape_meshlod.cpp_FUN_0051ee70
// Address: 0051ee70
undefined FUN_0051ee70();

// Original: shape_meshlod.cpp_FUN_0051eea0
// Address: 0051eea0
undefined FUN_0051eea0();

// Original: shape_meshlod.cpp_FUN_0051eec0
// Address: 0051eec0
undefined FUN_0051eec0();

// Original: shape_meshlod.cpp_FUN_0051eed0
// Address: 0051eed0
undefined FUN_0051eed0();

// Original: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
// Address: 0051ef00
CLodFace * CLodFace::ctor(CLodFace * this_ptr);

// Original: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// Address: 0051ef20
void CLodFace::copy(CLodFace * this_ptr, CLodFace * other);

// Original: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
// Address: 0051efc0
CLodFace * CLodFace::dtor(CLodFace * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051efe0
// Address: 0051efe0
undefined FUN_0051efe0();

// Original: shape_meshlod.cpp_CSpotView_FUN_0051f080
// Address: 0051f080
CSpotView * CSpotView(CSpotView * this_ptr);

// Original: shape_meshlod.cpp_FUN_0051f090
// Address: 0051f090
undefined FUN_0051f090();

// Original: shape_meshlod.cpp_FUN_0051f0a0
// Address: 0051f0a0
undefined FUN_0051f0a0();

// Original: shape_meshlod.cpp_FUN_0051f0b0
// Address: 0051f0b0
undefined FUN_0051f0b0();

// Original: shape_meshlod.cpp_freeLodFaces_FUN_0051f0c0
// Address: 0051f0c0
void freeLodFaces(CLodFace * * array);

// Original: shape_meshlod.cpp_freeVectors_FUN_0051f0e0
// Address: 0051f0e0
void freeVectors(CVector3f * * array);
