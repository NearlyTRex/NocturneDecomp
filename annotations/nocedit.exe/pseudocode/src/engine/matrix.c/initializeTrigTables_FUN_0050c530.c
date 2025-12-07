// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar1 = 0;
  fVar3 = (float10)65536;
  fVar4 = (float10)0.0078125;
  fVar5 = (float10)3.1415926535000001;
  iVar2 = 0;
  do {
    fVar6 = (float10)iVar1 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    fVar6 = fVar6 * fVar3;
    crt_math_c_round_FUN_005fe6b0((double)(fVar7 * fVar3));
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    *(int *)((int)g_SinTable + iVar2) = iVar1;
    iVar1 = iVar1 + 1;
    *(int *)((int)g_CosTable + iVar2) = (int)ROUND(dVar8);
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x101);
  return;
}
