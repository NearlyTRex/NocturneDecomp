// Name: core_skeleton.cpp_FUN_005500b0
// Address: 005500b0
// Address Range: [[005500b0, 0055019f]]
// Convention: unknown
// Signature: CDeformableModel * core_skeleton_cpp_FUN_005500b0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDeformableModel * core_skeleton_cpp_FUN_005500b0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *str1;
  CDeformableModel *this_ptr;
  
  iVar3 = 0;
  str1 = &g_DeformableModelPool[0].field_0x35b0;
  do {
    iVar1 = _stricmp(str1,param_1);
    if (iVar1 == 0) {
      core_skeleton_cpp_FUN_00548750(g_DeformableModelPool + iVar3);
      *(uint *)(&DAT_02802f5c + iVar3 * 4) = 1;
      return g_DeformableModelPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    str1 = str1 + 0x3600;
  } while (iVar3 < 0x40);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = _DAT_02802f5c;
  while( true ) {
    if (iVar3 == 0) {
      this_ptr = g_DeformableModelPool + iVar2;
      core_skeleton_cpp_CDeformableModel_load_FUN_005499d0(this_ptr,param_1);
      core_skeleton_cpp_FUN_00548750(this_ptr);
      *(uint *)(&DAT_02802f5c + iVar1) = 1;
      return this_ptr;
    }
    iVar2 = iVar2 + 1;
    if (0xff < iVar1 + 4) break;
    iVar3 = *(int *)(iVar1 + 0x2802f60);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x107d;
  core_main_c_FUN_004e4330("Can't load %s because deformable model manager is full.  (Size is %d)",param_1,0x40);
  return (CDeformableModel *)0x0;
}
