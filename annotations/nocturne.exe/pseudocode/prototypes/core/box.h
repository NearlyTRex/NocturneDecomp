#pragma once

// Function prototypes for core/box.cpp
// Generated from Ghidra function signatures

// Original: core_box.cpp_CBox_ctor_FUN_0041a610
// Address: 0041a610
CBox * __cdecl CBox::ctor(CBox *this_ptr);

// Original: core_box.cpp_CBox_dtor_FUN_0041a6c0
// Address: 0041a6c0
CBox * __cdecl CBox::dtor(CBox *this_ptr,uint flags);

// Original: core_box.cpp_CBox_setupCorners_FUN_0041a6e0
// Address: 0041a6e0
void __cdecl CBox::setupCorners(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume);

// Original: core_box.cpp_CBox_setupN_FUN_0041a910
// Address: 0041a910
void __cdecl CBox::setupN(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume);

// Original: core_box.cpp_CBox_updateTransform_FUN_0041aaa0
// Address: 0041aaa0
void __cdecl CBox::updateTransform(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed);

// Original: core_box.cpp_CBox_process_FUN_0041acb0
// Address: 0041acb0
void __cdecl CBox::process(CBox *this_ptr,float delta_time);

// Original: core_box.cpp_CBox_processPhysics_FUN_0041ad10
// Address: 0041ad10
void __cdecl CBox::processPhysics(CBox *this_ptr,float delta_time);

// Original: core_box.cpp_CBox_loadFromFile_FUN_0041c850
// Address: 0041c850
void __cdecl CBox::loadFromFile(CBox *this_ptr,_FILE *file_handle);

// Original: core_box.cpp_CBox_saveToFile_FUN_0041c9e0
// Address: 0041c9e0
void __cdecl CBox::saveToFile(CBox *this_ptr,_FILE *file_handle,char *indent_prefix);

// Original: core_box.cpp_CBox_setupVelocities_FUN_0041cb40
// Address: 0041cb40
void __cdecl CBox::setupVelocities(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity);

// Original: core_box.cpp_SScrape_ctor_FUN_0041cbc0
// Address: 0041cbc0
SScrape * __cdecl SScrape::ctor(SScrape *this_ptr);

// Original: core_box.cpp_SScrape_dtor_FUN_0041cbd0
// Address: 0041cbd0
SScrape * __cdecl SScrape::dtor(SScrape *this_ptr,uint flags);

// Original: core_box.cpp_SScrape_arrdtor_FUN_0041cbe0
// Address: 0041cbe0
SScrape * __cdecl SScrape::arrdtor(SScrape *objs,uint flags);

// Original: core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
// Address: 0041cc00
void __cdecl CBoundingBox3D::expand(CBoundingBox3D *this_ptr,CVector3f *point);

// Original: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
// Address: 0041cc70
CVector3f * __cdecl CBoundingBox3D::getCorner(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index);

// Original: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
// Address: 0041cce0
int __cdecl CBoundingBox3D::isVisibleWithShadow(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
// Address: 0041ceb0
int __cdecl CBoundingBox3D::isVisible(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_FUN_0041d050
// Address: 0041d050
undefined4 FUN_0041d050(CBoundingBox3D *param_1);

// Original: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450
// Address: 0041d450
float __cdecl CBoundingBox3D::getBoundingBoxScreenSize(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
// Address: 0041d550
float __cdecl CBoundingBox3D::doesRayIntersect(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_box.cpp_CBoundingBox3D_normalize_FUN_0041d980
// Address: 0041d980
void __cdecl CBoundingBox3D::normalize(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0
// Address: 0041d9d0
void __cdecl CBoundingBox3D::computeFromPoints(CBoundingBox3D *this_ptr,int point_count,CVector3f *points);

// Original: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_0041daa0
// Address: 0041daa0
void __cdecl CBoundingBox3D::computeFromVertices(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices);

// Original: core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
// Address: 0041dbc0
void __cdecl CBoundingBox3D::reset(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_isInverted_FUN_0041dbf0
// Address: 0041dbf0
int __cdecl CBoundingBox3D::isInverted(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20
// Address: 0041dc20
int __cdecl CBoundingBox3D::doesBoxIntersect(CBoundingBox3D *this_ptr,CBoundingBox3D *other);

// Original: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70
// Address: 0041dc70
float __cdecl CBoundingBox3D::getMaximumBound(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
// Address: 0041dcc0
void __cdecl CBoundingBox3D::render(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
// Address: 0041e160
CVector3f * __cdecl CBoundingBox3D::clampPoint(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point);

// Original: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
// Address: 0041e200
int __cdecl CBoundingBox3D::doesSphereIntersect(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius);
