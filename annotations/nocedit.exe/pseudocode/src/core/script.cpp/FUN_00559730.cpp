// Name: core_script.cpp_FUN_00559730
// Address: 00559730
// Address Range: [[00559730, 005597eb]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00559730(int param_1,char *param_2,int *param_3)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00559730(int param_1,char *param_2,int *param_3)

{
  int *piVar1;
  CDeformableModel *this_ptr;
  int iVar2;
  char *pcVar3;
  char local_74 [100];
  int local_10;
  
  piVar1 = param_3;
  do {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  } while (piVar1 != param_3 + 0x1e);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  pcVar3 = local_74;
  while( true ) {
    local_10 = -1;
    sscanf(param_2," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    param_2 = param_2 + local_10;
    iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240(this_ptr,local_74,0);
    if (iVar2 < 0) break;
    param_3[iVar2] = 1;
  }
  iVar2 = core_script_cpp_FUN_00567d30((int)this_ptr);
  sprintf
            (&DAT_0310eca0,"Character %s model %s does not have a part '%s'",param_1,iVar2,pcVar3);
  return 0;
}
