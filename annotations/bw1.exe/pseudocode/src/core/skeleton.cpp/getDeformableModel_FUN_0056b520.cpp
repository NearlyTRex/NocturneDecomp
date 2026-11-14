// Name: core_skeleton.cpp_getDeformableModel_FUN_0056b520
// Address: 0056b520
// Address Range: [[0056b520, 0056b60f]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0056b520(char *model_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0056b520(char *model_filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *str1;
  CDeformableModel *this_ptr;
  
  iVar3 = 0;
  str1 = g_DeformableModelPool[0].model_filename;
  do {
    iVar1 = _stricmp(str1,model_filename);
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00563bb0(g_DeformableModelPool + iVar3)
      ;
      *(uint *)(&DAT_027902bc + iVar3 * 4) = 1;
      return g_DeformableModelPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    str1 = str1 + 0x3600;
  } while (iVar3 < 0x40);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = _DAT_027902bc;
  while( true ) {
    if (iVar3 == 0) {
      this_ptr = g_DeformableModelPool + iVar2;
      core_skeleton_cpp_CDeformableModel_load_FUN_00564e40(this_ptr,model_filename);
      core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00563bb0(this_ptr);
      *(uint *)(&DAT_027902bc + iVar1) = 1;
      return this_ptr;
    }
    iVar2 = iVar2 + 1;
    if (0xff < iVar1 + 4) break;
    iVar3 = *(int *)(iVar1 + 0x27902c0);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x1086;
  core_main_c_FUN_005030e0("Can't load %s because deformable model manager is full.  (Size is %d)",model_filename,0x40);
  return (CDeformableModel *)0x0;
}
