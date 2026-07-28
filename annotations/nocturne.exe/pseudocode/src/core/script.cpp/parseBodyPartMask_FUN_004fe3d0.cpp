// Name: core_script.cpp_parseBodyPartMask_FUN_004fe3d0
// Address: 004fe3d0
// Address Range: [[004fe3d0, 004fe48b]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(CCharacter *character,char *part_names,int *part_mask)

#include "nocturne.h"

int __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(CCharacter *character,char *part_names,int *part_mask)

{
  int *piVar1;
  CDeformableModel *this_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_74 [100];
  int local_10;
  
  piVar1 = part_mask;
  do {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  } while (piVar1 != part_mask + 0x1e);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(&character->model);
  pcVar4 = local_74;
  while( true ) {
    local_10 = -1;
    sscanf(part_names," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    part_names = part_names + local_10;
    iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(this_ptr,local_74,0);
    if (iVar2 < 0) break;
    part_mask[iVar2] = 1;
  }
  pcVar3 = core_script_cpp_getDeformableModelFilename_FUN_005058b0(this_ptr);
  _sprintf(&DAT_01e56420,"Character %s model %s does not have a part '%s'",character,pcVar3,pcVar4);
  return 0;
}
