// Name: core_script.cpp_FUN_00543610
// Address: 00543610
// Address Range: [[00543610, 005436ce]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00543610(CCharacter *character,char *part_names,int *part_mask)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00543610(CCharacter *character,char *part_names,int *part_mask)

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
  } while (piVar1 != part_mask + 0x3c);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)&character->field_0x158);
  pcVar4 = local_74;
  while( true ) {
    local_10 = -1;
    sscanf(part_names," %[^ \t),]%n");
    if (local_10 < 1) {
      return 1;
    }
    part_names = part_names + local_10;
    iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr,local_74,0);
    if (iVar2 < 0) break;
    part_mask[iVar2] = 1;
  }
  pcVar3 = core_script_cpp_FUN_0054b9a0(this_ptr);
  FUN_005bfb40
            (&DAT_01e810b0,"Character %s model %s does not have a part '%s'",character,pcVar3,pcVar4);
  return 0;
}
