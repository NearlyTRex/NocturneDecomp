// Name: crt_unknown.c_FUN_0060411c
// Address: 0060411c
// Address Range: [[0060411c, 00604266]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060411c()

#include "nocturne.h"

/* Signature: byte FUN_0060411c() */

void crt_unknown_c_FUN_0060411c
               (uint param_1,uint param_2,byte *unaff_EBX,uint param_4,
               uint param_5)

{
  int iVar1;
  int unaff_EBP;
  uint unaff_retaddr;
  
  *unaff_EBX = 0;
  *(byte **)(unaff_EBP + -0x1c) = unaff_EBX;
  iVar1 = *(int *)(unaff_EBP + -0x24) + 8;
  *(int *)(unaff_EBP + -0x24) = iVar1;
  crt_unknown_c_FUN_0060403f(iVar1,unaff_retaddr,unaff_EBX,param_5);
  return;
}
