// Name: core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
// Address: 005a1cf0
// MANUAL RECONSTRUCTION
// Address Range: [[005a1cf0, 005a1dbb]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(char *model_filename)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(char *model_filename)

{
  int iVar2;
  CDeformableModel *this_ptr;

  for (iVar2 = 0; iVar2 < g_DeformableModelCount; iVar2 = iVar2 + 1) {
    if (_stricmp(g_DeformableModelPool[iVar2].model_filename,model_filename) == 0) {
      return g_DeformableModelPool + iVar2;
    }
  }
  if (0x3f < g_DeformableModelCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 4183;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't load %s because deformable model manager is full.  (Size is %d)",model_filename,0x40);
  }
  this_ptr = g_DeformableModelPool + g_DeformableModelCount;
  g_DeformableModelCount = g_DeformableModelCount + 1;
  core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(this_ptr,model_filename);
  core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
  return this_ptr;
}
