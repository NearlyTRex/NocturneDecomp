#pragma once

// Function prototypes for core/course.cpp
// Generated from Ghidra function signatures

// Original: core_course.cpp_FUN_0043b500
// Address: 0043b500
undefined4 * FUN_0043b500(void);

// Original: core_course.cpp_fmodfPositive_FUN_0043b510
// Address: 0043b510
float fmodfPositive(float param_1,float param_2);

// Original: core_course.cpp_FUN_0043b5b0
// Address: 0043b5b0
void FUN_0043b5b0(void);

// Original: core_course.cpp_CCourse_ctor_FUN_0043b5d0
// Address: 0043b5d0
CCourse * __cdecl CCourse::ctor(CCourse *this_ptr);

// Original: core_course.cpp_CCourse_dtor_FUN_0043b5f0
// Address: 0043b5f0
CCourse * __cdecl CCourse::dtor(CCourse *this_ptr,uint flags);

// Original: core_course.cpp_CCourse_allocMemory_FUN_0043b610
// Address: 0043b610
void __cdecl CCourse::allocMemory(CCourse *this_ptr,int count);

// Original: core_course.cpp_CCourse_load_FUN_0043b690
// Address: 0043b690
void __cdecl CCourse::load(CCourse *this_ptr,char *filename);

// Original: core_course.cpp_CCourse_free_FUN_0043b7c0
// Address: 0043b7c0
void __cdecl CCourse::free(CCourse *this_ptr);

// Original: core_course.cpp_CCourse_evaluate_FUN_0043b800
// Address: 0043b800
void __cdecl CCourse::evaluate(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler);

// Original: core_course.cpp_CCourse_interpolate_FUN_0043b890
// Address: 0043b890
void __cdecl CCourse::interpolate(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient);
