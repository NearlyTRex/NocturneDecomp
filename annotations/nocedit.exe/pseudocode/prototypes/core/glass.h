#pragma once

// Function prototypes for core/glass.cpp
// Generated from Ghidra function signatures

// Original: core_glass.cpp_staticInit_FUN_004e8fd0
// Address: 004e8fd0
void staticInit(void);

// Original: core_glass.cpp_factoryFunc_FUN_004e9000
// Address: 004e9000
CGlass * factoryFunc(void);

// Original: core_glass.cpp_CGlass_getActorType_FUN_004e9030
// Address: 004e9030
CDemonActorType * CGlass::getActorType(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_ctor_FUN_004e9040
// Address: 004e9040
CGlass * CGlass::ctor(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
void CGlass::setup(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_process_FUN_004e98e0
// Address: 004e98e0
void CGlass::process(CGlass * this_ptr, float delta_time);

// Original: core_glass.cpp_CGlass_renderOpaque_FUN_004e9930
// Address: 004e9930
int CGlass::renderOpaque(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0
// Address: 004e9af0
int CGlass::renderTransparent(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
// Address: 004e9ca0
void CGlass::renderBrokenGlass(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_renderBackground_FUN_004e9e90
// Address: 004e9e90
void CGlass::renderBackground(CGlass * this_ptr, int layer_flag);

// Original: core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030
// Address: 004ea030
CBoundingBox3D * CGlass::getBoundingBox(CGlass * this_ptr, CBoundingBox3D * out_box);

// Original: core_glass.cpp_CGlass_serialize_FUN_004ea090
// Address: 004ea090
void CGlass::serialize(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_hasCollision_FUN_004ea190
// Address: 004ea190
int CGlass::hasCollision(CGlass * this_ptr, SCollisionInfo * collision_info);

// Original: core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0
// Address: 004ea1c0
void CGlass::createShatterParticles(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, int subdivision_level);

// Original: core_glass.cpp_CGlass_shatter_FUN_004eaef0
// Address: 004eaef0
void CGlass::shatter(CGlass * this_ptr, CVector3f * location);

// Original: core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250
// Address: 004eb250
void CGlass::getSurfaceProperties(CGlass * this_ptr, SSurfaceInfo * surface_info);

// Original: core_glass.cpp_CGlass_getGroundType_FUN_004eb390
// Address: 004eb390
int CGlass::getGroundType(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
// Address: 004eb3a0
void CGlass::checkBreakableCondition(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
// Address: 004eb3c0
void CGlass::getPropertyList(CGlass * this_ptr, CActorPropertyList * property_list);

// Original: core_glass.cpp_CGlass_processInEditor_FUN_004eb490
// Address: 004eb490
void CGlass::processInEditor(CGlass * this_ptr);

// Original: core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600
// Address: 004eb600
void CGlass::showEditorHelp(CGlass * this_ptr, int * y_pos);

// Original: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
// Address: 004eb690
void CGlass::writeDependencies(CGlass * this_ptr, FILE * file_handle);

// Original: core_glass.cpp_CGlass_dtor_FUN_004eb820
// Address: 004eb820
CGlass * CGlass::dtor(CGlass * this_ptr, uint d1, uint d2, uint d3, uint d4);

// Original: core_glass.cpp_freeVectors_FUN_004eb8a0
// Address: 004eb8a0
void freeVectors(CVector3f * * array);
