// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  iVar1 = 0;
  fVar2 = (float10)65536;
  fVar3 = (float10)0.0078125;
  fVar4 = (float10)3.1415926535000001;
  do {
    fVar5 = (float10)iVar1 * fVar4 * fVar3;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    fVar5 = fVar5 * fVar2;
    crt_math_c_round_FUN_005fe6b0((double)(fVar6 * fVar2));
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
    *(int *)(g_CMarqueeClassInfo.class_name + extraout_EDX + 0x38) = iVar1;
    iVar1 = extraout_ECX + 1;
    *(int *)((int)g_SinTable + extraout_EDX + 0x400) = (int)ROUND(dVar7);
  } while (iVar1 < 0x101);
  return;
}
