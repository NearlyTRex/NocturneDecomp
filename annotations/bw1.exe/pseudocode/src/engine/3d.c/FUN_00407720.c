// Name: engine_3d.c_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 0040773b]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00407720(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_3d_c_FUN_00407720(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = *in_stack_00000004;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_006104f4)[iVar1])();
    return;
  }
  return;
}
