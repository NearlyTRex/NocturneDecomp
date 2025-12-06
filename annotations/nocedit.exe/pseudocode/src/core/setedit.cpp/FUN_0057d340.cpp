// Name: core_setedit.cpp_FUN_0057d340
// Address: 0057d340
// Address Range: [[0057d340, 0057d654]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057d340()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_0057d340(byte param_1, uint param_2) */

void core_setedit_cpp_FUN_0057d340(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x140) != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sn",in_stack_00000008);
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%ss");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%se");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sw");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%su");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sd");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    return;
  }
  core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
  return;
}
