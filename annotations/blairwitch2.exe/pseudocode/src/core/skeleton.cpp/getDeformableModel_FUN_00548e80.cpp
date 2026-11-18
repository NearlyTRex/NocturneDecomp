// Name: core_skeleton.cpp_getDeformableModel_FUN_00548e80
// Address: 00548e80
// Address Range: [[00548e80, 00548f74]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_00548e80(char *model_filename)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_00548e80(char *model_filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CDeformableModel *this_ptr;
  
  iVar3 = 0;
  pcVar4 = g_DeformableModelPool[0].model_filename;
  do {
    iVar1 = _stricmp(pcVar4,model_filename);
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00541540(g_DeformableModelPool + iVar3)
      ;
      pcVar4 = g_CHAR_ARRAY_02177ff4 + iVar3 * 4;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return g_DeformableModelPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x2ac0;
  } while (iVar3 < 0x40);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = g_CHAR_ARRAY_02177ff4._0_4_;
  while( true ) {
    if (iVar3 == 0) {
      this_ptr = g_DeformableModelPool + iVar2;
      core_skeleton_cpp_CDeformableModel_load_FUN_005427c0(this_ptr,model_filename);
      core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00541540(this_ptr);
      pcVar4 = g_CHAR_ARRAY_02177ff4 + iVar1;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return this_ptr;
    }
    iVar2 = iVar2 + 1;
    if (0xff < iVar1 + 4) break;
    iVar3 = *(int *)(g_CHAR_ARRAY_02177ff4 + iVar1 + 4);
    iVar1 = iVar1 + 4;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\skeleton.cpp";
  g_INT_01d046a4 = 0x1076;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Can't load %s because deformable model manager is full.  (Size is %d)");
  return (CDeformableModel *)0x0;
}
