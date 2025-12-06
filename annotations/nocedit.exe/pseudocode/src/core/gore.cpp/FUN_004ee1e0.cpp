// Name: core_gore.cpp_FUN_004ee1e0
// Address: 004ee1e0
// Address Range: [[004ee1e0, 004ee28a]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee1e0()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ee1e0(byte param_1, uint param_2) */

int core_gore_cpp_FUN_004ee1e0(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef0,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < DAT_02da8720) {
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_FUN_004ed160();
    } while (iVar1 < DAT_02da8720);
  }
  iVar2 = 0;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < DAT_02d873d8) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_FUN_004ecb00();
    } while (iVar2 < DAT_02d873d8);
  }
  return iVar1;
}
