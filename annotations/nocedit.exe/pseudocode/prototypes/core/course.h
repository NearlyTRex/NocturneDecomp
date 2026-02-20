#pragma once

// Function prototypes for core/course.cpp
// Generated from Ghidra function signatures

// Original: core_course.cpp_CCourse_ctor_FUN_004424c0
// Address: 004424c0
CCourse * __cdecl CCourse::ctor(CCourse *this_ptr);

// Original: core_course.cpp_CCourse_dtor_FUN_004424e0
// Address: 004424e0
CCourse * __cdecl CCourse::dtor(CCourse *this_ptr,uint flags);

// Original: core_course.cpp_CCourse_allocMemory_FUN_00442500
// Address: 00442500
void __cdecl CCourse::allocMemory(CCourse *this_ptr,int count);

// Original: core_course.cpp_CCourse_load_FUN_00442580
// Address: 00442580
void __cdecl CCourse::load(CCourse *this_ptr,char *filename);

// Original: core_course.cpp_CCourse_free_FUN_004426c0
// Address: 004426c0
void __cdecl CCourse::free(CCourse *this_ptr);

// Original: core_course.cpp_CCourse_evaluate_FUN_00442710
// Address: 00442710
void __cdecl CCourse::evaluate(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler);

// Original: core_course.cpp_CCourse_interpolate_FUN_004427a0
// Address: 004427a0
void __cdecl CCourse::interpolate(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient);

// Original: core_course.cpp_CCourse_save_FUN_00442a90
// Address: 00442a90
void __cdecl CCourse::save(CCourse *this_ptr,char *filename);

// Original: core_course.cpp_CCourse_importBON_FUN_00442bc0
// Address: 00442bc0
int __cdecl CCourse::importBON(CCourse *this_ptr,char *filename);

// Original: core_course.cpp_CCourse_importCRS_FUN_00442d70
// Address: 00442d70
int __cdecl CCourse::importCRS(CCourse *this_ptr,char *filename);

// Original: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
void __cdecl CCourse::importMatrices(CCourse *this_ptr,_FILE *file_handle,int count);

// Original: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
// Address: 00443040
void __cdecl CCourse::showEditorMenu(CCourse *this_ptr);

// Original: core_course.cpp_renderCoursePoint_FUN_004436d0
// Address: 004436d0
void __cdecl renderCoursePoint(void);

// Original: core_course.cpp_renderCourseGizmo_FUN_00443760
// Address: 00443760
void __cdecl renderCourseGizmo(CVector3f *position);

// Original: core_course.cpp_CCourse_preview_FUN_00443bc0
// Address: 00443bc0
void __cdecl CCourse::preview(CCourse *this_ptr,CKeyFramedModel *model_ptr);
