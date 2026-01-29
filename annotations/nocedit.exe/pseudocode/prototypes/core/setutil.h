#pragma once

// Function prototypes for core/setutil.cpp
// Generated from Ghidra function signatures

// Original: core_setutil.cpp_FUN_005851a0
// Address: 005851a0
void FUN_005851a0(void);

// Original: core_setutil.cpp_FUN_005851d0
// Address: 005851d0
void FUN_005851d0(void);

// Original: core_setutil.cpp_C3DSCamera_getProjectionScale_FUN_005851f0
// Address: 005851f0
float __cdecl C3DSCamera::getProjectionScale(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200
// Address: 00585200
float __cdecl C3DSCamera::getAmbientValue(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_FUN_00585210
// Address: 00585210
undefined4 FUN_00585210(void);

// Original: core_setutil.cpp_FUN_00585220
// Address: 00585220
void __cdecl FUN_00585220(void);

// Original: core_setutil.cpp_CSlew_copy_FUN_00585240
// Address: 00585240
void __cdecl CSlew::copy(CSlew *this_ptr,CSlew *other);

// Original: core_setutil.cpp_readAndParseLine_FUN_00585290
// Address: 00585290
void __cdecl readAndParseLine(_FILE *file_handle,char *output_buffer,int max_length);

// Original: core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
// Address: 00585310
C3DSCamera * __cdecl C3DSCamera::ctor(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
// Address: 00585340
C3DSCamera * __cdecl C3DSCamera::dtor(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_free_FUN_00585360
// Address: 00585360
void __cdecl C3DSCamera::free(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
// Address: 005853b0
void __cdecl C3DSCamera::reset(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
void __cdecl C3DSCamera::load(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
// Address: 005857b0
void __cdecl C3DSCamera::loadPVS(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
// Address: 00585870
void __cdecl C3DSCamera::apply(C3DSCamera *this_ptr,CDemonCamera *camera);

// Original: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
// Address: 00585970
int __cdecl C3DSCamera::testSphereInFrustum(C3DSCamera *this_ptr,CVector3f *world_position,float radius);

// Original: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// Address: 00585a40
void __cdecl C3DSCamera::save(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
void __cdecl C3DSCamera::import3DS(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
// Address: 00585ff0
void __cdecl C3DSCamera::importS3D(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150
// Address: 00586150
void __cdecl C3DSCamera::scalePosition(C3DSCamera *this_ptr,float scale);

// Original: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
// Address: 00586190
int __cdecl C3DSCamera::exportS3D(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
// Address: 005862f0
C3DSLight * __cdecl C3DSLight::ctor(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_load_FUN_00586310
// Address: 00586310
void __cdecl C3DSLight::load(C3DSLight *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// Address: 00586a90
CDemonLight * __cdecl C3DSLight::create(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// Address: 00586bf0
void __cdecl C3DSLight::apply(C3DSLight *this_ptr,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0
// Address: 00586ca0
void __cdecl C3DSLight::doNothing(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_process_FUN_00586cb0
// Address: 00586cb0
void __cdecl C3DSLight::process(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag);

// Original: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70
// Address: 00586e70
void __cdecl C3DSLight::advanceFilter(C3DSLight *this_ptr,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00
// Address: 00586f00
void __cdecl C3DSLight::setFilterFrame(C3DSLight *this_ptr,int frame_index,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
// Address: 00586fa0
void __cdecl C3DSLight::addFilter(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode);

// Original: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
void __cdecl C3DSLight::save(C3DSLight *this_ptr,_FILE *file_ptr);

// Original: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
// Address: 00587450
int __cdecl C3DSCamera::savePVS(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// Address: 005874d0
void __cdecl C3DSLight::import3DS(C3DSLight *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
// Address: 00587710
void __cdecl C3DSLight::importS3D(C3DSLight *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
// Address: 00587850
void __cdecl C3DSLight::exportS3D(C3DSLight *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950
// Address: 00587950
void __cdecl C3DSLight::scalePosition(C3DSLight *this_ptr,float scale);

// Original: core_setutil.cpp_C3DSLight_reset_FUN_005879b0
// Address: 005879b0
void __cdecl C3DSLight::reset(C3DSLight *this_ptr);

// Original: core_setutil.cpp_generateSphereVertex_FUN_00587a40
// Address: 00587a40
void __cdecl generateSphereVertex(int longitude_index,int latitude_index,int vertex_buffer_index,float radius);

// Original: core_setutil.cpp_calculateVertexIndex_FUN_00587b30
// Address: 00587b30
int __cdecl calculateVertexIndex(int row_index,int column_index);

// Original: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
void __cdecl C3DSLight::renderVolumetricSphere(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
// Address: 00587df0
int __cdecl C3DSLight::isVisible(C3DSLight *this_ptr);
