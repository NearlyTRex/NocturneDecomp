// Name: core_bugs.cpp_FUN_00421010
// Address: 00421010
// Address Range: [[00421010, 0042102b]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421010(void)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421010(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x19860);
  if (iVar1 == 0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00421040(iVar1);
  return;
}
