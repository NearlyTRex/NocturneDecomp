// Name: engine_3d.c_FUN_00407760
// Address: 00407760
// Address Range: [[00407760, 0040777b]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00407760(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_3d_c_FUN_00407760(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = *in_stack_00000004;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_005f07c4)[iVar1])();
    return;
  }
  return;
}
