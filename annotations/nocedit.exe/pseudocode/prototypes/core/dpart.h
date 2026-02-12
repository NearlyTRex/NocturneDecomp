#pragma once

// Function prototypes for core/dpart.cpp
// Generated from Ghidra function signatures

// Original: core_dpart.cpp_CDemonPart_ctor_FUN_00482110
// Address: 00482110
CDemonPart * __cdecl CDemonPart::ctor(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_dtor_FUN_00482160
// Address: 00482160
CDemonPart * __cdecl CDemonPart::dtor(CDemonPart *this_ptr,uint flags);

// Original: core_dpart.cpp_CDemonPart_alloc_FUN_00482180
// Address: 00482180
void __cdecl CDemonPart::alloc(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_free_FUN_004822b0
// Address: 004822b0
void __cdecl CDemonPart::free(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_write_FUN_00482330
// Address: 00482330
void __cdecl CDemonPart::write(CDemonPart *this_ptr,_FILE *file_handle);

// Original: core_dpart.cpp_CDemonPart_load_FUN_00482490
// Address: 00482490
void __cdecl CDemonPart::load(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_save_FUN_004824c0
// Address: 004824c0
void __cdecl CDemonPart::save(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// Address: 004824f0
void __cdecl CDemonPart::calculateFaceNormals(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
// Address: 004825c0
void __cdecl CDemonPart::loadFromFile(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position);

// Original: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
// Address: 004828b0
void __cdecl CDemonPart::renderFaces(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
int __cdecl CDemonPart::importTriangleMesh(CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count, CDemonTriangle *triangle_data);

// Original: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// Address: 00482e40
void __cdecl CDemonPart::processAndFinalize(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize);

// Original: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// Address: 00482fb0
void __cdecl setupTriangleEdgeInterpolation(SEdgeData *vertex_a,SEdgeData *vertex_b);

// Original: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
// Address: 00483210
void __cdecl setupDepthOnlyEdgeInterpolation(SEdgeData *vertex_a,SEdgeData *vertex_b);

// Original: core_dpart.cpp_findEdgeByYStart_FUN_00483330
// Address: 00483330
SEdgeData * __cdecl findEdgeByYStart(int scanline_y,SEdgeData *exclude_edge);
