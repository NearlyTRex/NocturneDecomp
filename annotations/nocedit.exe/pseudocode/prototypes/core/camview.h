#pragma once

// Function prototypes for core/camview.cpp
// Generated from Ghidra function signatures

// Original: core_camview.cpp_CCameraView_ctor_FUN_00427ce0
// Address: 00427ce0
CCameraView * __cdecl CCameraView::ctor(CCameraView *this_ptr);

// Original: core_camview.cpp_CCameraView_dtor_FUN_00427d00
// Address: 00427d00
CCameraView * __cdecl CCameraView::dtor(CCameraView *this_ptr,uint flags);

// Original: core_camview.cpp_CCameraView_setupPerspectiveAndFog_FUN_00427d20
// Address: 00427d20
void __cdecl CCameraView::setupPerspectiveAndFog(CCameraView *this_ptr,CVector3f *position,float max_distance);

// Original: core_camview.cpp_CCameraView_getFogValueAtPosition_FUN_00427d50
// Address: 00427d50
int __cdecl CCameraView::getFogValueAtPosition(CCameraView *this_ptr,CVector3i *world_position);

// Original: core_camview.cpp_CCameraView_testVisibility_FUN_00427d60
// Address: 00427d60
int __cdecl CCameraView::testVisibility(CCameraView *this_ptr,CVector3i *corners);

// Original: core_camview.cpp_CCameraView_saveAlphaTransform_FUN_00427d70
// Address: 00427d70
void __cdecl CCameraView::saveAlphaTransform(CCameraView *this_ptr,int alpha_index);
