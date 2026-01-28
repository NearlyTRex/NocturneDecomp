// Name: core_skeledit.cpp_FUN_00589530
// Address: 00589530
// Address Range: [[00589530, 005895e1]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589530(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589530(void)

{
  char *in_stack_00000004;
  char *in_stack_00000008;
  char local_304 [256];
  char local_204 [256];
  char local_104 [252];
  uint uStack_8;
  char cVar1;
  
  cVar1 = '\x1c';
  uStack_8 = 0x58953a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x31c);
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000008,&stack0xfffffffc,local_104,local_304,local_204);
  if ((local_104[0] == '\0') && (cVar1 == '\0')) {
    crt_string_c_splitpath_FUN_005ff178
              (in_stack_00000004,&stack0xfffffffc,local_104,(char *)0x0,(char *)0x0);
    crt_file_c_makepath_FUN_005febfc
              (in_stack_00000008,&stack0xfffffffc,local_104,local_304,local_204);
    return;
  }
  return;
}
