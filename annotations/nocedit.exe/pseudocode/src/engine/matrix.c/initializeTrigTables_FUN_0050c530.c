// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  int unaff_retaddr;
  
  iVar2 = 0;
  iVar1 = 0;
  fVar3 = (float10)65536;
  fVar4 = (float10)0.0078125;
  fVar5 = (float10)3.1415926535000001;
  do {
    fVar6 = (float10)iVar1 * fVar5 * fVar4;
    fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    fVar6 = fVar6 * fVar3;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar2 + 4,in_EAX));
    dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
    iVar2 = (int)((ulonglong)dVar7 >> 0x20);
    in_EAX = (int)ROUND(fVar6);
    *(int *)(g_CMarqueeClassInfo.class_name + iVar2 + 0x38) = unaff_retaddr;
    iVar1 = extraout_ECX + 1;
    *(int *)((int)g_SinTable + iVar2 + 0x400) = in_EAX;
    unaff_retaddr = in_EAX;
  } while (iVar1 < 0x101);
  return;
}
