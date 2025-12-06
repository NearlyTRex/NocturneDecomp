// Name: core_script.cpp_FUN_00559730
// Address: 00559730
// Address Range: [[00559730, 005597eb]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559730()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00559730(uint param_1, uint param_2,
   uint param_3) */

uint core_script_cpp_FUN_00559730(void)

{
  uint *puVar1;
  CDeformableModel *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int in_stack_00000004;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  byte *apuStack_6c [24];
  
  puVar1 = in_stack_0000000c;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != in_stack_0000000c + 0x1e);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
  while( true ) {
    crt_stdio_c_sscanf_FUN_0060013c
              (in_stack_00000008," %[^ \t),]%n",&stack0xffffff90,&stack0xfffffff4);
    if (unaff_ESI < 1) {
      return 1;
    }
    in_stack_00000008 = in_stack_00000008 + unaff_ESI;
    iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                      (this_ptr,(char *)apuStack_6c,0);
    apuStack_6c[0] = &stack0xffffff90;
    if (iVar2 < 0) break;
    in_stack_0000000c[iVar2] = 1;
  }
  apuStack_6c[0] = (byte *)core_script_cpp_FUN_00567d30();
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Character %s model %s does not have a part '%s'");
  return 0;
}
