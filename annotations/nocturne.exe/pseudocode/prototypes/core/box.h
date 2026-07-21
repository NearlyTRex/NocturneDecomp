#pragma once

// Function prototypes for core/box.cpp
// Generated from Ghidra function signatures

// Original: core_box.cpp_CBox_ctor_FUN_0041a610
// Address: 0041a610
void __cdecl CBox::ctor(int param_1);

// Original: core_box.cpp_CBox_dtor_FUN_0041a6c0
// Address: 0041a6c0
int __cdecl CBox::dtor(int param_1);

// Original: core_box.cpp_CBox_setupCorners_FUN_0041a6e0
// Address: 0041a6e0
void __cdecl CBox::setupCorners(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);

// Original: core_box.cpp_CBox_updateTransform_FUN_0041aaa0
// Address: 0041aaa0
void __cdecl CBox::updateTransform(float *param_1,float *param_2,float *param_3,float param_4);

// Original: core_box.cpp_CBox_process_FUN_0041acb0
// Address: 0041acb0
void __cdecl CBox::process(undefined4 param_1,float param_2);

// Original: core_box.cpp_CBox_processPhysics_FUN_0041ad10
// Address: 0041ad10
void __cdecl CBox::processPhysics(float *param_1,float param_2);

// Original: core_box.cpp_CBox_loadFromFile_FUN_0041c850
// Address: 0041c850
void __cdecl CBox::loadFromFile(int param_1,undefined4 param_2);

// Original: core_box.cpp_CBox_saveToFile_FUN_0041c9e0
// Address: 0041c9e0
void __cdecl CBox::saveToFile(float *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_box.cpp_CBox_setupVelocities_FUN_0041cb40
// Address: 0041cb40
void __cdecl CBox::setupVelocities(int param_1,undefined4 *param_2,undefined4 *param_3);

// Original: core_box.cpp_SScrape_arrdtor_FUN_0041cbe0
// Address: 0041cbe0
void __cdecl SScrape::arrdtor(undefined4 param_1);

// Original: core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
// Address: 0041cc00
void __cdecl CBoundingBox3D::expand(float *param_1,float *param_2);

// Original: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
// Address: 0041cc70
undefined4 * __cdecl CBoundingBox3D::getCorner(undefined4 *param_1,undefined4 *param_2,uint param_3);

// Original: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
// Address: 0041cce0
undefined4 __cdecl CBoundingBox3D::isVisibleWithShadow(void);

// Original: core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
// Address: 0041ceb0
undefined4 __cdecl CBoundingBox3D::isVisible(float *param_1,int param_2);

// Original: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450
// Address: 0041d450
float __cdecl CBoundingBox3D::getBoundingBoxScreenSize(float *param_1);

// Original: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
// Address: 0041d550
float CBoundingBox3D::doesRayIntersect(float *param_1,float *param_2,float *param_3,float *param_4);

// Original: core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
// Address: 0041dbc0
void __cdecl CBoundingBox3D::reset(undefined4 *param_1);

// Original: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20
// Address: 0041dc20
undefined4 __cdecl CBoundingBox3D::doesBoxIntersect(float *param_1,float *param_2);

// Original: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70
// Address: 0041dc70
undefined4 __cdecl CBoundingBox3D::getMaximumBound(int param_1);

// Original: core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
// Address: 0041dcc0
void __cdecl CBoundingBox3D::render(float *param_1);

// Original: core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
// Address: 0041e160
float * __cdecl CBoundingBox3D::clampPoint(float *param_1,float *param_2,float *param_3);

// Original: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
// Address: 0041e200
bool __cdecl CBoundingBox3D::doesSphereIntersect(undefined4 param_1,float *param_2,float param_3);
