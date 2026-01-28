#pragma once

// Function prototypes for core/setdir.cpp
// Generated from Ghidra function signatures

// Original: core_setdir.cpp_staticInit_FUN_00574790
// Address: 00574790
void __cdecl staticInit(void);

// Original: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0
// Address: 005747d0
void __cdecl CZThumb::saveZBufferTable(CZThumb *this_ptr,int count);

// Original: core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830
// Address: 00574830
void __cdecl CZThumb::restoreZBufferTable(CZThumb *this_ptr,int count);

// Original: core_setdir.cpp_setPixelGrayscale_FUN_005748a0
// Address: 005748a0
void __cdecl setPixelGrayscale(int x,int y,int grayscale_value);

// Original: core_setdir.cpp_CZThumb_ctor_FUN_005748d0
// Address: 005748d0
CZThumb * __cdecl CZThumb::ctor(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_dtor_FUN_005748f0
// Address: 005748f0
CZThumb * __cdecl CZThumb::dtor(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
// Address: 00574910
void __cdecl CZThumb::saveZBufferTable(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height, float unknown_scale,FILE *file_handle);

// Original: core_setdir.cpp_CZThumb_write_FUN_00574b20
// Address: 00574b20
void __cdecl CZThumb::write(CZThumb *this_ptr,FILE *file_handle);

// Original: core_setdir.cpp_CZThumb_free_FUN_00574b50
// Address: 00574b50
void __cdecl CZThumb::free(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// Address: 00574ba0
float __cdecl CZThumb::calculateActorVisibility(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices, SMRGLHeaderPrimitive *primitives,int apply_scaling);

// Original: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
// Address: 00574e30
void __cdecl CZThumb::setupZBufferScanlines(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
// Address: 00574e70
void __cdecl CZThumb::pushRenderingContext(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
// Address: 00574ef0
void __cdecl CZThumb::popRenderingContext(CZThumb *this_ptr);

// Original: core_setdir.cpp_CZThumb_render_FUN_00574f20
// Address: 00574f20
void __cdecl CZThumb::render(CZThumb *this_ptr,int screen_x,int screen_y);

// Original: core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0
// Address: 005750a0
float __cdecl CZThumb::testCameraVisibility(CZThumb *this_ptr);

// Original: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
// Address: 005751d0
int __cdecl CDemonSet::evaluateVirtualDirector(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode);

// Original: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
// Address: 00575b00
void __cdecl CDemonSet::setPendingCamera(CDemonSet *this_ptr,int camera_index,float hold_time);

// Original: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
// Address: 00575b20
void __cdecl CDemonSet::clearCameraSwitchCooldown(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
// Address: 00575b40
void __cdecl CDemonSet::refreshThumbs(CDemonSet *this_ptr,char *filename);

// Original: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
// Address: 00575bc0
void __cdecl CDemonSet::saveThumbs(CDemonSet *this_ptr,FILE *file_handle);

// Original: core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
// Address: 00575df0
void __cdecl CDemonSet::freeThumbs(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
// Address: 00575e40
void __cdecl CDemonSet::writeThumbs(CDemonSet *this_ptr,char *filename);

// Original: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
// Address: 00575f60
void __cdecl CDemonSet::saveThumbs(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
// Address: 00575f70
void __cdecl CDemonSet::renderVirtualDirectors(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
// Address: 00576200
void __cdecl CDemonSet::skipDeprecatedVirtualDirectorData(CDemonSet *this_ptr,FILE *file_handle);

// Original: core_setdir.cpp_CDemonSet_FUN_005762a0
// Address: 005762a0
int __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_FUN_00576340
// Address: 00576340
int __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_FUN_005763a0
// Address: 005763a0
undefined4 FUN_005763a0(void);

// Original: core_setdir.cpp_CDemonSet_FUN_00576710
// Address: 00576710
int __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_FUN_00576820
// Address: 00576820
int __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_FUN_00576870
// Address: 00576870
int __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_copySet_FUN_005768c0
// Address: 005768c0
CDemonSet * __cdecl copySet(CDemonSet **set1,CDemonSet **set2);

// Original: core_setdir.cpp_copySet_FUN_005768d0
// Address: 005768d0
CDemonSet * __cdecl copySet(CDemonSet **set1,CDemonSet **set2);

// Original: core_setdir.cpp_copySet_FUN_005768e0
// Address: 005768e0
CDemonSet * __cdecl copySet(CDemonSet **set1,CDemonSet **set2);

// Original: core_setdir.cpp_freeBoundingBoxes_FUN_005768f0
// Address: 005768f0
void __cdecl freeBoundingBoxes(CBoundingBox3D **array);

// Original: core_setdir.cpp_freeCZThumbs_FUN_00576910
// Address: 00576910
void __cdecl freeCZThumbs(CZThumb **array);
