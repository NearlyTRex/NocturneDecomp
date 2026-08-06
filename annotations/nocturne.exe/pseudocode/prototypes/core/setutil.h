#pragma once

// Function prototypes for core/setutil.cpp
// Generated from Ghidra function signatures

// Original: core_setutil.cpp_C3DSCamera_ctor_FUN_005143e0
// Address: 005143e0
C3DSCamera * __cdecl C3DSCamera::ctor(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_dtor_FUN_00514410
// Address: 00514410
C3DSCamera * __cdecl C3DSCamera::dtor(C3DSCamera *this_ptr,uint flags);

// Original: core_setutil.cpp_C3DSCamera_FUN_00514430
// Address: 00514430
void __cdecl C3DSCamera(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_FUN_00514470
// Address: 00514470
void __cdecl C3DSCamera(C3DSCamera *this_ptr);

// Original: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
// Address: 005144e0
void __cdecl C3DSCamera::load(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
// Address: 00514800
void __cdecl C3DSCamera::loadPVS(C3DSCamera *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSCamera_FUN_005148b0
// Address: 005148b0
void __cdecl C3DSCamera(C3DSCamera *this_ptr,CDemonCamera *camera);

// Original: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
// Address: 00514980
int __cdecl C3DSCamera::testSphereInFrustum(C3DSCamera *this_ptr,CVector3f *world_position,float radius);

// Original: core_setutil.cpp_C3DSLight_ctor_FUN_00514a50
// Address: 00514a50
C3DSLight * __cdecl C3DSLight::ctor(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_load_FUN_00514a70
// Address: 00514a70
void __cdecl C3DSLight::load(C3DSLight *this_ptr,_FILE *file_handle);

// Original: core_setutil.cpp_C3DSLight_create_FUN_005151f0
// Address: 005151f0
CDemonLight * __cdecl C3DSLight::create(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
void __cdecl C3DSLight::apply(C3DSLight *this_ptr,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_FUN_00515410
// Address: 00515410
void __cdecl C3DSLight(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_process_FUN_00515420
// Address: 00515420
void __cdecl C3DSLight::process(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag);

// Original: core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0
// Address: 005155e0
void __cdecl C3DSLight::advanceFilter(C3DSLight *this_ptr,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670
// Address: 00515670
void __cdecl C3DSLight::setFilterFrame(C3DSLight *this_ptr,int frame_index,CDemonLight *light);

// Original: core_setutil.cpp_C3DSLight_addFilter_FUN_00515710
// Address: 00515710
void __cdecl C3DSLight::addFilter(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode);

// Original: core_setutil.cpp_C3DSLight_reset_FUN_00515800
// Address: 00515800
void __cdecl C3DSLight::reset(C3DSLight *this_ptr);

// Original: core_setutil.cpp_generateSphereVertex_FUN_00515890
// Address: 00515890
void __cdecl generateSphereVertex(int longitude_index,int latitude_index,int vertex_buffer_index,float radius);

// Original: core_setutil.cpp_calculateVertexIndex_FUN_00515980
// Address: 00515980
int __cdecl calculateVertexIndex(int row_index,int column_index);

// Original: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0
// Address: 005159a0
void __cdecl C3DSLight::renderVolumetricSphere(C3DSLight *this_ptr);

// Original: core_setutil.cpp_C3DSLight_FUN_00515c40
// Address: 00515c40
int __cdecl C3DSLight(C3DSLight *this_ptr);
