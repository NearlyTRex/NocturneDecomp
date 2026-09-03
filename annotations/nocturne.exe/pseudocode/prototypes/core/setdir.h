#pragma once

// Function prototypes for core/setdir.cpp
// Generated from Ghidra function signatures

// Original: core_setdir.cpp_staticInit_FUN_00511d60
// Address: 00511d60
void __cdecl staticInit(void);

// Original: core_setdir.cpp_testCameraVisibility_FUN_00511d80
// Address: 00511d80
float __cdecl testCameraVisibility(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius);

// Original: core_setdir.cpp_CDemonSet_FUN_005125a0
// Address: 005125a0
int __cdecl CDemonSet(CDemonSet *this_ptr,CDemonActor *param_2,int param_3);

// Original: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0
// Address: 005135d0
void __cdecl CDemonSet::setPendingCamera(CDemonSet *this_ptr,int camera_index,float hold_time);

// Original: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
// Address: 005135f0
void __cdecl CDemonSet::clearCameraSwitchCooldown(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
// Address: 00513610
void __cdecl CDemonSet::refreshThumbs(CDemonSet *this_ptr,char *filename);

// Original: core_setdir.cpp_CDemonSet_FUN_00513670
// Address: 00513670
void __cdecl CDemonSet(CDemonSet *this_ptr,char *param_2);

// Original: core_setdir.cpp_CDemonSet_FUN_00513720
// Address: 00513720
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_005138e0
// Address: 005138e0
void __cdecl CDemonSet::renderVirtualDirectors(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
// Address: 00513ce0
void __cdecl CDemonSet::skipDeprecatedVirtualDirectorData(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
// Address: 00513d80
int __cdecl CDemonSet::isPointInVdirBox(CDemonSet *this_ptr,int box_index,CVector3f *point);

// Original: core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_00513e20
// Address: 00513e20
int __cdecl CDemonSet::isPointInVdirGroup(CDemonSet *this_ptr,int box_index,CVector3f *point);

// Original: core_setdir.cpp_testOBBIntersection_FUN_00513e80
// Address: 00513e80
int __cdecl testOBBIntersection(SVDBox *obb_a,SVDBox *obb_b);

// Original: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
// Address: 005141f0
int __cdecl CDemonSet::buildVdirBoxGroups(CDemonSet *this_ptr);

// Original: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
// Address: 00514300
int __cdecl CDemonSet::findVdirBoxRoot(CDemonSet *this_ptr,int box_index);

// Original: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
// Address: 00514340
int __cdecl CDemonSet::findVdirBoxAtPosition(CDemonSet *this_ptr,CVector3f *position);

// Original: core_setdir.cpp_FUN_00514390
// Address: 00514390
undefined4 * FUN_00514390(void);

// Original: core_setdir.cpp_FUN_005143a0
// Address: 005143a0
undefined4 * FUN_005143a0(void);

// Original: core_setdir.cpp_FUN_005143b0
// Address: 005143b0
undefined4 * FUN_005143b0(void);

// Original: core_setdir.cpp_CBoundingBox3D_arrdtor2000_FUN_005143c0
// Address: 005143c0
CBoundingBox3D * __cdecl CBoundingBox3D::arrdtor2000(CBoundingBox3D *this_ptr,uint flags);
