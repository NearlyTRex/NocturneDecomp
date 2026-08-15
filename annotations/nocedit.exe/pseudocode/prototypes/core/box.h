#pragma once

// Function prototypes for core/box.cpp
// Generated from Ghidra function signatures

// Original: core_box.cpp_CBox_ctor_FUN_0041dc50
// Address: 0041dc50
CBox * __cdecl CBox::ctor(CBox *this_ptr);

// Original: core_box.cpp_CBox_dtor_FUN_0041dd00
// Address: 0041dd00
CBox * __cdecl CBox::dtor(CBox *this_ptr,uint flags);

// Original: core_box.cpp_CBox_setupCorners_FUN_0041dd20
// Address: 0041dd20
void __cdecl CBox::setupCorners(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume);

// Original: core_box.cpp_CBox_setupN_FUN_0041df50
// Address: 0041df50
void __cdecl CBox::setupN(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume);

// Original: core_box.cpp_CBox_updateTransform_FUN_0041e0e0
// Address: 0041e0e0
void __cdecl CBox::updateTransform(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed);

// Original: core_box.cpp_CBox_process_FUN_0041e2f0
// Address: 0041e2f0
void __cdecl CBox::process(CBox *this_ptr,float delta_time);

// Original: core_box.cpp_CBox_processPhysics_FUN_0041e350
// Address: 0041e350
void __cdecl CBox::processPhysics(CBox *this_ptr,float delta_time);

// Original: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
// Address: 0041fe90
void __cdecl CBox::loadFromFile(CBox *this_ptr,_FILE *file_handle);

// Original: core_box.cpp_CBox_saveToFile_FUN_00420020
// Address: 00420020
void __cdecl CBox::saveToFile(CBox *this_ptr,_FILE *file_handle,char *indent_prefix);

// Original: core_box.cpp_CBox_setupVelocities_FUN_00420180
// Address: 00420180
void __cdecl CBox::setupVelocities(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity);

// Original: core_box.cpp_SScrape_ctor_FUN_00420200
// Address: 00420200
SScrape * __cdecl SScrape::ctor(SScrape *this_ptr);

// Original: core_box.cpp_SScrape_dtor_FUN_00420210
// Address: 00420210
SScrape * __cdecl SScrape::dtor(SScrape *this_ptr,uint flags);

// Original: core_box.cpp_SScrape_arrdtor8_FUN_00420220
// Address: 00420220
SScrape * __cdecl SScrape::arrdtor8(SScrape *objs,uint flags);

// Original: core_box.cpp_CBoundingBox3D_expand_FUN_00420240
// Address: 00420240
void __cdecl CBoundingBox3D::expand(CBoundingBox3D *this_ptr,CVector3f *point);

// Original: core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
// Address: 004202b0
CVector3f * __cdecl CBoundingBox3D::getCorner(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index);

// Original: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
// Address: 00420320
int __cdecl CBoundingBox3D::isVisibleWithShadow(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
// Address: 004204f0
int __cdecl CBoundingBox3D::isVisible(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
// Address: 00420680
int __cdecl CBoundingBox3D::isVisibleWithCamera(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
// Address: 00420840
float __cdecl CBoundingBox3D::getBoundingBoxScreenSize(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
// Address: 00420940
float __cdecl CBoundingBox3D::doesRayIntersect(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70
// Address: 00420d70
void __cdecl CBoundingBox3D::normalize(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0
// Address: 00420dc0
void __cdecl CBoundingBox3D::computeFromPoints(CBoundingBox3D *this_ptr,int point_count,CVector3f *points);

// Original: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
// Address: 00420e90
void __cdecl CBoundingBox3D::computeFromVertices(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices);

// Original: core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
// Address: 00420fb0
void __cdecl CBoundingBox3D::reset(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0
// Address: 00420fe0
int __cdecl CBoundingBox3D::isInverted(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
// Address: 00421010
int __cdecl CBoundingBox3D::doesBoxIntersect(CBoundingBox3D *this_ptr,CBoundingBox3D *other);

// Original: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
// Address: 00421060
float __cdecl CBoundingBox3D::getMaximumBound(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// Address: 004210b0
void __cdecl CBoundingBox3D::render(CBoundingBox3D *this_ptr);

// Original: core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
// Address: 00421550
CVector3f * __cdecl CBoundingBox3D::clampPoint(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point);

// Original: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// Address: 004215f0
int __cdecl CBoundingBox3D::doesSphereIntersect(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius);
