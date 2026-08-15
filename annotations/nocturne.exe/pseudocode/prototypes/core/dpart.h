#pragma once

// Function prototypes for core/dpart.cpp
// Generated from Ghidra function signatures

// Original: core_dpart.cpp_CDemonPart_ctor_FUN_00456ef0
// Address: 00456ef0
CDemonPart * __cdecl CDemonPart::ctor(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_dtor_FUN_00456f40
// Address: 00456f40
CDemonPart * __cdecl CDemonPart::dtor(CDemonPart *this_ptr,uint flags);

// Original: core_dpart.cpp_CDemonPart_alloc_FUN_00456f60
// Address: 00456f60
void __cdecl CDemonPart::alloc(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_free_FUN_00457060
// Address: 00457060
void __cdecl CDemonPart::free(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_load_FUN_004570c0
// Address: 004570c0
void __cdecl CDemonPart::load(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_save_FUN_004570f0
// Address: 004570f0
void __cdecl CDemonPart::save(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120
// Address: 00457120
void __cdecl CDemonPart::calculateFaceNormals(CDemonPart *this_ptr);

// Original: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004571f0
// Address: 004571f0
void __cdecl CDemonPart::loadFromFile(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position);

// Original: core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0
// Address: 004574e0
void __cdecl CDemonPart::renderFaces(CDemonPart *this_ptr);

// Original: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00457640
// Address: 00457640
void __cdecl setupTriangleEdgeInterpolation(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b);

// Original: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_004578a0
// Address: 004578a0
void __cdecl setupDepthOnlyEdgeInterpolation(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b);
