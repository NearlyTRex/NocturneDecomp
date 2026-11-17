// Name: core_skeleton.cpp_getDeformableModel_FUN_0051f570
// Address: 0051f570
// Address Range: [[0051f570, 0051f647]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0051f570(char *model_filename)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0051f570(char *model_filename)

{
  int iVar1;
  int iVar2;
  CDeformableModel *this_ptr;
  char *str1;
  
  iVar2 = 0;
  if (0 < g_DeformableModelCount) {
    str1 = g_DeformableModelPool[0].model_filename;
    do {
      iVar1 = _stricmp(str1,model_filename);
      if (iVar1 == 0) {
        return g_DeformableModelPool + iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x2ac0;
    } while (iVar2 < g_DeformableModelCount);
  }
  if (0x3f < g_DeformableModelCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 4183;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("Can't load %s because deformable model manager is full.  (Size is %d)",model_filename,0x40);
  }
  this_ptr = g_DeformableModelPool + g_DeformableModelCount;
  g_DeformableModelCount = g_DeformableModelCount + 1;
  core_skeleton_cpp_CDeformableModel_load_FUN_005191f0(this_ptr,model_filename);
  core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(this_ptr);
  return this_ptr;
}
