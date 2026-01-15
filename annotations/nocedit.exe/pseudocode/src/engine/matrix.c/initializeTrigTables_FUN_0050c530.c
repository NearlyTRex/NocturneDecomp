// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  char *pcVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar2 = 0;
  fVar3 = (float10)65536;
  fVar4 = (float10)0.0078125;
  fVar5 = (float10)3.1415926535000001;
  do {
    fVar6 = (float10)iVar2 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    fVar6 = fVar6 * fVar3;
    crt_math_c_round_FUN_005fe6b0((double)(fVar7 * fVar3));
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    pcVar1 = g_CMarqueeClassInfo.class_name + extraout_EDX + 0x38;
    pcVar1[0] = '~';
    pcVar1[1] = -0x3b;
    pcVar1[2] = 'P';
    pcVar1[3] = '\0';
    iVar2 = extraout_ECX + 1;
    *(int *)((int)g_SinTable + extraout_EDX + 0x400) = (int)ROUND(dVar8);
  } while (iVar2 < 0x101);
  return;
}
