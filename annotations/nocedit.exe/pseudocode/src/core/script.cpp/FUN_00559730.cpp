// Name: core_script.cpp_FUN_00559730
// Address: 00559730
// Address Range: [[00559730, 005597eb]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00559730(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00559730(uint param_1, uint param_2,
   uint param_3) */

uint core_script_cpp_FUN_00559730(void)

{
  uint *puVar1;
  CDeformableModel *this_ptr;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  char *pcVar4;
  char local_74 [100];
  int local_10;
  
  puVar1 = in_stack_0000000c;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != in_stack_0000000c + 0x1e);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
  pcVar4 = local_74;
  while( true ) {
    local_10 = -1;
    sscanf(in_stack_00000008," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    in_stack_00000008 = in_stack_00000008 + local_10;
    iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240(this_ptr,local_74,0);
    if (iVar2 < 0) break;
    in_stack_0000000c[iVar2] = 1;
  }
  uVar3 = core_script_cpp_FUN_00567d30();
  sprintf
            (&DAT_0310eca0,"Character %s model %s does not have a part '%s'",in_stack_00000004,uVar3,pcVar4);
  return 0;
}
