// Name: crt_unknown.c_FUN_0060411c
// Address: 0060411c
// Address Range: [[0060411c, 00604266]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060411c(undefined4 param_1,undefined4 param_2,undefined4 param_3,float10 *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,char *param_10,uint param_11,undefined4 param_12,char *param_13)

#include "nocturne.h"

void FUN_0060411c(uint param_1,uint param_2,uint param_3,float10 *param_4,uint param_5,uint param_6,uint param_7,char *param_8,uint param_9,char *param_10,uint param_11,uint param_12,char *param_13)

{
  byte *unaff_EBX;
  int unaff_EBP;
  
  *unaff_EBX = 0;
  *(byte **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
  FUN_0060403f
            (param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
             param_13);
  return;
}
