// Name: core_script.cpp_parseBodyPartMask_FUN_004fe3d0
// Address: 004fe3d0
// Address Range: [[004fe3d0, 004fe48b]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(int param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

uint __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte local_74 [100];
  int local_10;
  
  puVar1 = param_3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_3 + 0x1e);
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1 + 0x150);
  while( true ) {
    local_10 = -1;
    sscanf(param_2," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    param_2 = param_2 + local_10;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,local_74,0);
    if (iVar3 < 0) break;
    param_3[iVar3] = 1;
  }
  uVar2 = core_script_cpp_getDeformableModelFilename_FUN_005058b0(uVar2,local_74);
  _sprintf(&DAT_01e56420,"Character %s model %s does not have a part '%s'",param_1,uVar2);
  return 0;
}
